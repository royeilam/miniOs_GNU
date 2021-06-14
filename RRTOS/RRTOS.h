/*
 * RRTOS.h
 *
 *  Created on: 29 Jan 2021
 *      Author: roy
 */

#ifndef RRTOS__H
#define RRTOS__H

/********************************************************************************
 * Includes
 ********************************************************************************/
#include <stdlib.h>
#include <stdint.h>

/********************************************************************************
 * Types
 ********************************************************************************/
typedef void (* rrtosTask_t)(void);
typedef struct
{
    uint32_t * stack;
    rrtosTask_t p_task;
    int32_t cntr;
    uint8_t prio;
} rrtosTaskData_t;

struct rrtos_stack
{
    uint32_t size;
    uint32_t *sp;
};
/********************************************************************************
 * Function's prototype
 ********************************************************************************/
int rrtosInit(void);
int rrtosTaskInit(rrtosTaskData_t * const me,
                  const rrtosTask_t taskExec,
                  const uint8_t prio,
                  struct rrtos_stack stack);
void rrtosSleep(uint32_t time);
unsigned int enterCriticalSec(void);
int leaveCriticalSec(unsigned int cntr);
/********************************************************************************
 * MACROs
 ********************************************************************************/
#define _RRTOS_STACKALIGN(_size_) \
    ((_size_) + 8 - ((_size_) % 8))
#define RRTOS_CREATE_STACK(_size_, _name_) \
    static uint32_t _ ## _name_ ## _data[_RRTOS_STACKALIGN(_size_)]; \
    static struct rrtos_stack _name_ =  \
    { \
        size: _RRTOS_STACKALIGN(_size_), \
        sp: _ ## _name_ ## _data, \
    };
#endif /* RRTOS__H */
