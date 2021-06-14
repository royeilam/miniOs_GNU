/*
 * RRTOS.c
 *
 *  Created on: 29 Jan 2021
 *      Author: roy
 */

#define DBG 1
/********************************************************************************
 * Includes
 ********************************************************************************/
#include "../hw_drivers/drivers_pkg.h"
#include "../bsp/bsp.h"
#include "RRTOS.h"
#include <stdbool.h>

/********************************************************************************
 * Macros
 ********************************************************************************/
#define LOG2(__X__) (31 - __CLZ(__X__))
/********************************************************************************
 * Defines
 ********************************************************************************/
#define STACK_SIZE          128U
#define MAX_PRIORITY        32U
#define MAX_NUM_TASKS       32U

/********************************************************************************
 * Prototypes
 ********************************************************************************/
void rrtos_prepCtx(uint32_t ** const from, uint32_t ** const to);
/********************************************************************************
 * Locals
 ********************************************************************************/
static rrtosTaskData_t * taskList[MAX_NUM_TASKS] = { 0 };
static uint32_t          readyQ     = 0;
static uint32_t          blockedQ   = 0;
static rrtosTaskData_t * curTask    = NULL;
static rrtosTaskData_t * nextTask   = NULL;
// Background Task Data
static rrtosTaskData_t IdleTaskData = { 0 };
RRTOS_CREATE_STACK(STACK_SIZE, IdleTaskStack);
static bool isInitIdle = false;
static unsigned int criticalSectionCntr = 0;
// Sleep 
static int32_t currSleepDurMs = 0;

/********************************************************************************
 * Function's body
 ********************************************************************************/

/* @brief:  The kernel scheduler.
 *          This scheduler operation is as follows:
 *          1. Finds the highest priority tasks thats ready to run
 *          2. If there is no task thats ready to run, than the next task to run
 *          would be the Idle Task.
 *          3. Prepare the kernel for the context switch by updating the current task's Stack Pointer
 *          and the next task Stack Pointer to the kernel itself.
 *          4. Generate an IRQ to handle to context switch
 */
static void scheduler (void)
{
    uint8_t nextTaskPrio = LOG2(readyQ);
    nextTask = readyQ ? taskList[nextTaskPrio] : &IdleTaskData;
    
    if (curTask == NULL)
    {
        rrtos_prepCtx(NULL, &(nextTask->stack));
    }
    else
    {
        rrtos_prepCtx(&(curTask->stack), &(nextTask->stack));
    }

    curTask = nextTask;
    // Trigger PendSV to do the actual context switch
    SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk;
}

/*  @brief: This function gets called whenever the current running SysTick timer elapsed
 *          it does the following:
 *          1. Decrease the current tasks cnter by the time passed from the last call to onTick
 *          2. Finds the task that it's timer is set to the minimum value of all waiting tasks timer
 *          3. Re-sets the SysTick timer to the amount found at 2.
 */
static void onTick(void)
{
    unsigned int i;
    uint32_t workingSet = blockedQ;
    int32_t minTime = 0;

    // Start timer to count time spend in onTick
    msp432_configSystick(0xFF);

    for(i = LOG2(blockedQ); workingSet; i=LOG2(workingSet))
    {
        rrtosTaskData_t * taskPtr = taskList[i];
        taskPtr->cntr -= currSleepDurMs;
        if (taskPtr->cntr > 0)
        {// If the task's counter is larger than 0, than decrease it
            if (taskPtr->cntr < minTime || minTime == 0)
            {
                minTime = taskPtr->cntr;
            }
        }
        else
        {// If it equals to 0, remove task from blocked queue, and move it to ready queue
            uint32_t mask = 1U << i;
            blockedQ &= ~mask;
            readyQ   |= mask;
        }
        workingSet &= (1U << i) - 1;
    }

    currSleepDurMs = minTime;
    minTime += msp432_getPassedSystickMs();
    if (minTime > 0)
    {
        msp432_configSystick((uint32_t)minTime);
    }
}

unsigned int enterCriticalSec(void)
{
    __disable_irq();
    criticalSectionCntr++;
    return criticalSectionCntr;
}

int leaveCriticalSec(unsigned int cntr)
{
    if (cntr != criticalSectionCntr)
    {
        // TODO: Verify what should be done
        return -1;
    }

    criticalSectionCntr--;

    if (criticalSectionCntr == 0)
    {
        __enable_irq();
    }
    return 0;
}

/*  @brief:    This function puts a task to sleep
 *             It does it by blocking the calling task (move it from the ReadyQ to the BlockedQ)
 *  @param ms: Input - sleep time (in ms)
 *
 */
void rrtosSleep(uint32_t ms)
{
    unsigned int taskKey;
    // Test in case no actual sleep time inserted
    if (ms == 0)
        return;

    taskKey = enterCriticalSec();
    uint32_t mask = 1U << curTask->prio;
    // Set current task's counter to the sleep duration
    curTask->cntr = ms;
    // Move current task from ready queue to blocked queue
    readyQ   &= ~(mask);
    blockedQ |= mask;
    // Set currSleepDurMs to the passed time since the SysTick counter started
    // and trigger a SysTick IRQ to re-schedule tasks
    currSleepDurMs = msp432_getPassedSystickMs();
    // Call SysTick Handler
    SCB->ICSR |= SCB_ICSR_PENDSTSET_Msk;
    leaveCriticalSec(taskKey);
}

void SysTick_Handler (void)
{
    __disable_irq();
    onTick();
    scheduler();
    __enable_irq();
}

void IdleTask(void)
{
    while(1)
    {
        __WFI();
    }
}

/* @brief: Initiates the rrtos kernel.
 *         This function needs to be called AFTER all tasks had been configured.
 *
 */
int rrtosInit(void)
{
    unsigned int taskKey;
    // Set priorities
    NVIC_SetPriority(PendSV_IRQn,0xFF);
    NVIC_SetPriority(SysTick_IRQn,0x0);
    // Create the background task
    isInitIdle = true;
    rrtosTaskInit(&IdleTaskData, IdleTask, 0, IdleTaskStack);
    // Start critical section
    taskKey = enterCriticalSec();
    // Call the scheduler
    scheduler();
    // Exit critical section
    ASSERT(leaveCriticalSec(taskKey) != -1);

    return 0;
}

static void taskRunner(void)
{
    curTask->p_task();
}

/* @breif:          This function initiates a given task.
 *                  It needs to be called PRIOR to rrtosInit.
 * @param me:       Input - Current tasks data structure
 * @param pFunc:    Input - Pointer to tasks main function
 * @param prio:     Input - Defines the tasks priority (1-31, where 1 is the lowest priority)
 * @param stack:    Input - pointer to the task's stack allocated memory
 *                  This pointer MUST BE 8 byte aligned!
 *
 */
int rrtosTaskInit(rrtosTaskData_t * const me,
                  const rrtosTask_t pFunc,
                  const uint8_t prio,
                  struct rrtos_stack stack)
{
    uint32_t mask;
    uintptr_t SP;

    // Setting stack pointer to point at stack beginning (high address)
    // And aligning it to 8 bytes
    struct SP_t
    {
        uint32_t newLr;
        uint32_t R4;
        uint32_t R5;
        uint32_t R6;
        uint32_t R7;
        uint32_t R8;
        uint32_t R9;
        uint32_t R10;
        uint32_t R11;
        // Original Frame SP
        uint32_t R0;
        uint32_t R1;
        uint32_t R2;
        uint32_t R3;
        uint32_t R12;
        uint32_t LR;
        uint32_t PC;
        uint32_t xPSR;
    } * curSP;

    // Preparing the Stack Pointer
    SP = (uintptr_t)stack.sp + (uintptr_t)stack.size;
    // Align the Stack Pointer to 8 Byte
    SP &= ~3U;
    SP -= sizeof(struct SP_t);
    curSP = (struct SP_t *)SP;

    // Check that priority is not greater than MAX_PRIORITY
    if (prio  > MAX_PRIORITY)
        return -1;

    curSP->xPSR = 1U << 24; // xPSR - Setting the Thumb bit to 1 (Thumb mode)
    curSP->PC = (uint32_t)taskRunner;// PC
    // Writing dummy values on the stack to align with the stack
    // Structure.
    curSP->LR = 0x14U;// LR
    curSP->R12 = 0x12U;// R12
    curSP->R3 = 0x3U;// R3
    curSP->R2 = 0x2U;// R2
    curSP->R1 = 0x1U;// R1
    curSP->R0 = 0x0U;// R0

    curSP->R11 = 0x11U;// R11
    curSP->R10 = 0x10U;// R10
    curSP->R9 = 0x9U;// R9
    curSP->R8 = 0x8U;// R8
    curSP->R7 = 0x7U;// R7
    curSP->R6 = 0x6U;// R6
    curSP->R5 = 0x5U;// R5
    curSP->R4 = 0x4U;// R4
    // Setting the LR for an EXEC_RETURN code that matches Thread Mode
    curSP->newLr = 0xFFFFFFFD;


    me->p_task = pFunc;
    me->stack  = (uint32_t *)curSP;
    me->prio   = prio;
    me->cntr   = 0U;

    if (isInitIdle)
    {
        me->prio   = 0xFF;
        isInitIdle = false;
    }
    else
    {
        mask = 1U << prio;
        // Add the task to the ready tasks queue
        readyQ |= mask;
        taskList[prio] = me;
    }

    return 0;
}
