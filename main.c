#include "RRTOS/RRTOS.h"
#include "bsp/bsp.h"
#include "hw_drivers/msp432_gpio.h"
#include <stddef.h>


/**
 * main.c
 */
/********************************************************************************
 * Defines
 ********************************************************************************/
#define MY_TEST_STACK_SIZE 512
/********************************************************************************
 * Locals
 ********************************************************************************/
static msp432_gpio_port_e port = MSP432_LED_PORT;
static uint8_t gpio[2] = {MSP432_LED_BLUE, MSP432_LED_GREEN};
static rrtosTaskData_t myTestTaskData[2];
static rrtosTaskData_t myFloatTaskData;
RRTOS_CREATE_STACK(MY_TEST_STACK_SIZE, task1Stack)
RRTOS_CREATE_STACK(MY_TEST_STACK_SIZE, task2Stack)
RRTOS_CREATE_STACK(MY_TEST_STACK_SIZE, floatTaskStack)

void myTestTask1(void)
{
    static bool val = true;
    while(1)
    {
        msp432_gpioSet(port, gpio[0], val);
        rrtosSleep(500);
        val = !val;
    }
}

void myTestTask2(void)
{
    static bool val = true;
    rrtosSleep(500);
    while(1)
    {
        msp432_gpioSet(port, gpio[1], val);
        rrtosSleep(500);
        val = !val;
    }
}

void myFloatTask(void)
{
    volatile float i = 0.0f;

    while(1)
    {
        i = i > 1.0f ? 0.0f : i + 0.1f;
        rrtosSleep(600);
    }
}

int main(void)

{
    if( msp432_gpioInit(port,gpio[0],MSP432_GPIO_OUT,0) < 0  ||
        msp432_gpioInit(port,gpio[1],MSP432_GPIO_OUT,0) < 0 )
    {
        while(1)
        {
            __asm(" WFI");
        }
    }

    rrtosTaskInit(&(myTestTaskData[0]),
                  myTestTask1,
                  0,
                  task1Stack);
    rrtosTaskInit(&(myTestTaskData[1]),
                  myTestTask2,
                  1,
                  task2Stack);
     rrtosTaskInit(&(myFloatTaskData),
                  myFloatTask,
                  2,
                  floatTaskStack);
    rrtosInit();

    return 0;
}
