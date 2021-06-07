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
/********************************************************************************
 * Function's prototype
 ********************************************************************************/
int rrtosInit(void);
int rrtosTaskInit(rrtosTaskData_t * const me,
                  const rrtosTask_t taskExec,
                  const uint8_t prio,
                  uint32_t *sp,
                  const size_t stackSize);
void rrtosSleep(uint32_t time);
#endif /* RRTOS__H */
