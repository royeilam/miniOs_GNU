/********************************************************************************
 * Includes
 ********************************************************************************/
#include "hw_drivers/drivers_pkg.h"
#include "hw_drivers/msp432_gpio.h"

/********************************************************************************
 * Globals
 ********************************************************************************/
extern uint32_t SystemCoreClock;

/********************************************************************************
 * Locals
 ********************************************************************************/
static uint32_t lastSystickLoadMs = 0;

/********************************************************************************
 * Functions Body
 ********************************************************************************/
void msp432_configSystick(uint32_t ms)
{
    SysTick_Config(SystemCoreClock/1000*ms);
    lastSystickLoadMs = ms;
}

uint32_t msp432_getPassedSystickMs(void)
{
    uint32_t curSystickMs;
    curSystickMs = (uint32_t)((uint64_t)SysTick->VAL*1000/SystemCoreClock);
    return lastSystickLoadMs - curSystickMs;
}

