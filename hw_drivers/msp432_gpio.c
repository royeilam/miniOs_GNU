/********************************************************************************
 * Includes
 ********************************************************************************/
#include "hw_drivers/drivers_pkg.h"
#include "hw_drivers/hw_regs/GPIO.h"
#include "hw_drivers/msp432_addr_map.h"
#include "hw_drivers/msp432_gpio.h"
#include <stddef.h>

/********************************************************************************
 * Defines
 ********************************************************************************/
#define EVEN_PORT 0
#define ODD_PORT  1
#define LONG_PORT 2

/********************************************************************************
 * Locals
 ********************************************************************************/
static volatile GPIO__REG_LIST_s * const RegsLUT[16] =
{
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x0U),   // MSP432_GPIO_PORT_1 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x0U),   // MSP432_GPIO_PORT_2 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x20U),  // MSP432_GPIO_PORT_3 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x20U),  // MSP432_GPIO_PORT_4 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x40U),  // MSP432_GPIO_PORT_5 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x40U),  // MSP432_GPIO_PORT_6 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x60U),  // MSP432_GPIO_PORT_7 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x60U),  // MSP432_GPIO_PORT_8 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x80U),  // MSP432_GPIO_PORT_9 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x80U),  // MSP432_GPIO_PORT_10
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x0U),   // MSP432_GPIO_PORT_A 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x20U),  // MSP432_GPIO_PORT_B 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x40U),  // MSP432_GPIO_PORT_C 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x60U),  // MSP432_GPIO_PORT_D 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x80U),  // MSP432_GPIO_PORT_E 
    (volatile GPIO__REG_LIST_s *)(PORT_MODULE_OFFSET + 0x120U), // MSP432_GPIO_PORT_J 
};
/********************************************************************************
 * Functions Body
 ********************************************************************************/
static inline void getGpioParameters(msp432_gpio_port_e port,
                                     uint8_t * portType,
                                     volatile GPIO__REG_LIST_s ** regs)
{
    *portType = (port > MSP432_GPIO_PORT_9) ? LONG_PORT : ((port+1) % 2) ? ODD_PORT : EVEN_PORT;
    *regs = RegsLUT[port];
}

int msp432_gpioInit(msp432_gpio_port_e port,
                    uint8_t gpio,
                    msp432_gpio_dir_e dir,
                    uint8_t altFunc)
{
    uint32_t mask;
    uint8_t portType;
    volatile GPIO__REG_LIST_s * regs = NULL;

    if(gpio > 32)
        return -1;

    if (altFunc > 3)
        return -1;

    getGpioParameters(port, &portType, &regs);
    mask = 1U << gpio;


    switch (portType)
    {
        case ODD_PORT:
        {
            // Setting IO direction
            regs->INTR.P1DIR &= ~(mask);
            regs->INTR.P1DIR |= dir << gpio;
            // Change alternate function
            regs->INTR.P1SEL0 &= ~(mask);
            regs->INTR.P1SEL1 &= ~(mask);
            regs->INTR.P1SEL0 |= (altFunc & 1U) << gpio;
            altFunc >>= 1U;
            regs->INTR.P1SEL1 |= (altFunc & 1U) << gpio;
            break;
        }
        case EVEN_PORT:
        {
            // Setting IO direction
            regs->INTR.P2DIR &= ~(mask);
            regs->INTR.P2DIR |= dir << gpio;
            // Change alternate function
            regs->INTR.P2SEL0 &= ~(mask);
            regs->INTR.P2SEL1 &= ~(mask);
            regs->INTR.P2SEL0 |= (altFunc & 1U) << gpio;
            altFunc >>= 1U;
            regs->INTR.P2SEL1 |= (altFunc & 1U) << gpio;
            break;
        }
        case LONG_PORT:
        {
            // Setting IO direction
            regs->NON_INTR.PADIR  &= ~(mask);
            regs->NON_INTR.PADIR  |= dir << gpio;
            // Change alternate function
            regs->NON_INTR.PASEL0 &= ~(mask);
            regs->NON_INTR.PASEL1 &= ~(mask);
            regs->NON_INTR.PASEL0 |= (altFunc & 1U) << gpio;
            altFunc >>= 1U;
            regs->NON_INTR.PASEL1 |= (altFunc & 1U) << gpio;
            break;
        }
    }

    return 0;
}

int msp432_gpioSet(msp432_gpio_port_e port, uint8_t gpio,bool val)
{
    uint8_t portType;
    uint32_t mask;
    volatile GPIO__REG_LIST_s * regs;

    if (gpio > 32)
        return -1;

    getGpioParameters(port, &portType, &regs);
    mask = 1U << gpio;
    switch (portType)
    {
        case ODD_PORT:
        {
            if (val)
                regs->INTR.P1OUT |= mask;
            else
                regs->INTR.P1OUT &= ~(mask);
            break;
        }
        case EVEN_PORT:
        {
            if (val)
                regs->INTR.P2OUT |= mask;
            else
                regs->INTR.P2OUT &= ~(mask);
            break;
        }
        case LONG_PORT:
        {
            if (val)
                regs->NON_INTR.PAOUT |= mask;
            else
                regs->NON_INTR.PAOUT &= ~(mask);
            break;
        }

    }

    return 0;
}
