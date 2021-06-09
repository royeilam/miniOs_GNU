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
void rrtos_switchCtx(uint32_t ** const from, uint32_t ** const to);
/********************************************************************************
 * Locals
 ********************************************************************************/
static rrtosTaskData_t * taskList[MAX_NUM_TASKS] = { 0 };
static uint32_t          readyQ     = 0;
static uint32_t          blockedQ   = 0;
rrtosTaskData_t * curTask    = NULL;
rrtosTaskData_t * nextTask   = NULL;
// Background Task Data
static rrtosTaskData_t IdleTaskData = { 0 };
static uint32_t IdleTaskStack[STACK_SIZE+8] = { 0 };
static bool isInitIdle = false;
static unsigned int criticalSectionCntr = 0;
// Sleep 
static int32_t currSleepDurMs = 0;

/********************************************************************************
 * Function's body
 ********************************************************************************/
static void scheduler (void)
{
    uint8_t nextTaskPrio = LOG2(readyQ);
    nextTask = readyQ ? taskList[nextTaskPrio] : &IdleTaskData;

    // Trigger PendSV to do the actual context switch
    SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk;
}

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
    currSleepDurMs = msp432_getPassedSystickMs(); // ToDo: Critical section?
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

int rrtosInit(void)
{
    unsigned int taskKey;
    // Set priorities
    NVIC_SetPriority(PendSV_IRQn,0xFF);
    NVIC_SetPriority(SysTick_IRQn,0x0);
    // Create the background task
    isInitIdle = true;
    rrtosTaskInit(&IdleTaskData, IdleTask, 0, IdleTaskStack, STACK_SIZE+8);
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

int rrtosTaskInit(rrtosTaskData_t * const me,
                  const rrtosTask_t taskExec,
                  const uint8_t prio,
                  uint32_t *sp,
                  const size_t stackSize)
{
    uint32_t mask;
    // Check that priority is not greater than MAX_PRIORITY
    if (prio  > MAX_PRIORITY)
        return -1;

    // Setting stack pointer to point at stack beginning (high address)
    // And aligning it to 8 bytes
    sp = (uint32_t *)((((uintptr_t)(sp + stackSize))/8)*8);
    *(--sp) = 1U << 24; // xPSR - Setting the Thumb bit to 1 (Thumb mode)
    *(--sp) = (uint32_t)taskRunner;// PC
    // Writing dummy values on the stack to align with the stack
    // Structure.
    *(--sp) = 0x14U;// LR
    *(--sp) = 0x12U;// R12
    *(--sp) = 0x3U;// R3
    *(--sp) = 0x2U;// R2
    *(--sp) = 0x1U;// R1
    *(--sp) = 0x0U;// R0

    *(--sp) = 0x11U;// R11
    *(--sp) = 0x10U;// R10
    *(--sp) = 0x9U;// R9
    *(--sp) = 0x8U;// R8
    *(--sp) = 0x7U;// R7
    *(--sp) = 0x6U;// R6
    *(--sp) = 0x5U;// R5
    *(--sp) = 0x4U;// R4
    // Setting LR register to valid value for first time (since using Floating point)
    *(--sp) = 0xFFFFFFF9;


    me->p_task = taskExec;
    me->stack  = sp;
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
