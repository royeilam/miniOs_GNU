#ifndef MSP432_GPIO__H
#define MSP432_GPIO__H
#include <stdbool.h>
#include <stdint.h>

typedef enum
{
    MSP432_GPIO_PORT_1  = 0,
    MSP432_GPIO_PORT_2  = 1,
    MSP432_GPIO_PORT_3  = 2,
    MSP432_GPIO_PORT_4  = 3,
    MSP432_GPIO_PORT_5  = 4,
    MSP432_GPIO_PORT_6  = 5,
    MSP432_GPIO_PORT_7  = 6,
    MSP432_GPIO_PORT_8  = 7,
    MSP432_GPIO_PORT_9  = 8,
    MSP432_GPIO_PORT_10 = 9,
    MSP432_GPIO_PORT_A  = 10,
    MSP432_GPIO_PORT_B  = 11,
    MSP432_GPIO_PORT_C  = 12,
    MSP432_GPIO_PORT_D  = 13,
    MSP432_GPIO_PORT_E  = 14,
    MSP432_GPIO_PORT_J  = 15,
} msp432_gpio_port_e;

typedef enum
{
    MSP432_GPIO_IN = 0,
    MSP432_GPIO_OUT = 1,
} msp432_gpio_dir_e;


int msp432_gpioInit(msp432_gpio_port_e port,
                    uint8_t gpio,
                    msp432_gpio_dir_e dir,
                    uint8_t altFunc);
int msp432_gpioSet(msp432_gpio_port_e port, uint8_t gpio,bool val);
#endif /* MSP432_GPIO__H */
