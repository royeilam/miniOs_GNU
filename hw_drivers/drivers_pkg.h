/*
 * drivers_pkg.h
 *
 *  Created on: 6 Oct 2020
 *      Author: roy
 */

#ifndef DRIVERS_PKG__H
#define DRIVERS_PKG__H
/***************************************************************************************************
*                                             Defines                                              *
***************************************************************************************************/
#define __CM4_REV               0x0001    /* Core revision r0p1 */
#define __MPU_PRESENT           1         /* MPU present or not */
#define __NVIC_PRIO_BITS        3         /* Number of Bits used for Prio Levels */
#define __Vendor_SysTickConfig  0         /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT           1         /* FPU present or not */
/***************************************************************************************************
*                                              Macros                                              *
***************************************************************************************************/
#define ASSERT(_X_) while(!(_X_)); //ToDo: Think of better implementation when possible
/***************************************************************************************************
*                                              Types                                               *
***************************************************************************************************/
typedef enum IRQn
{
  /* Cortex-M4 Processor Exceptions Numbers */
  NonMaskableInt_IRQn         = -14,    /*  2 Non Maskable Interrupt */
  HardFault_IRQn              = -13,    /*  3 Hard Fault Interrupt */
  MemoryManagement_IRQn       = -12,    /*  4 Memory Management Interrupt */
  BusFault_IRQn               = -11,    /*  5 Bus Fault Interrupt */
  UsageFault_IRQn             = -10,    /*  6 Usage Fault Interrupt */
  SVCall_IRQn                 = -5,     /* 11 SV Call Interrupt */
  DebugMonitor_IRQn           = -4,     /* 12 Debug Monitor Interrupt */
  PendSV_IRQn                 = -2,     /* 14 Pend SV Interrupt */
  SysTick_IRQn                = -1,     /* 15 System Tick Interrupt */
  /*  Peripheral Exceptions Numbers */
  PSS_IRQn                    = 0,     /* 16 PSS Interrupt             */
  CS_IRQn                     = 1,     /* 17 CS Interrupt              */
  PCM_IRQn                    = 2,     /* 18 PCM Interrupt             */
  WDT_A_IRQn                  = 3,     /* 19 WDT_A Interrupt           */
  FPU_IRQn                    = 4,     /* 20 FPU Interrupt             */
  FLCTL_IRQn                  = 5,     /* 21 Flash Controller Interrupt*/
  COMP_E0_IRQn                = 6,     /* 22 COMP_E0 Interrupt         */
  COMP_E1_IRQn                = 7,     /* 23 COMP_E1 Interrupt         */
  TA0_0_IRQn                  = 8,     /* 24 TA0_0 Interrupt           */
  TA0_N_IRQn                  = 9,     /* 25 TA0_N Interrupt           */
  TA1_0_IRQn                  = 10,     /* 26 TA1_0 Interrupt           */
  TA1_N_IRQn                  = 11,     /* 27 TA1_N Interrupt           */
  TA2_0_IRQn                  = 12,     /* 28 TA2_0 Interrupt           */
  TA2_N_IRQn                  = 13,     /* 29 TA2_N Interrupt           */
  TA3_0_IRQn                  = 14,     /* 30 TA3_0 Interrupt           */
  TA3_N_IRQn                  = 15,     /* 31 TA3_N Interrupt           */
  EUSCIA0_IRQn                = 16,     /* 32 EUSCIA0 Interrupt         */
  EUSCIA1_IRQn                = 17,     /* 33 EUSCIA1 Interrupt         */
  EUSCIA2_IRQn                = 18,     /* 34 EUSCIA2 Interrupt         */
  EUSCIA3_IRQn                = 19,     /* 35 EUSCIA3 Interrupt         */
  EUSCIB0_IRQn                = 20,     /* 36 EUSCIB0 Interrupt         */
  EUSCIB1_IRQn                = 21,     /* 37 EUSCIB1 Interrupt         */
  EUSCIB2_IRQn                = 22,     /* 38 EUSCIB2 Interrupt         */
  EUSCIB3_IRQn                = 23,     /* 39 EUSCIB3 Interrupt         */
  ADC14_IRQn                  = 24,     /* 40 ADC14 Interrupt           */
  T32_INT1_IRQn               = 25,     /* 41 T32_INT1 Interrupt        */
  T32_INT2_IRQn               = 26,     /* 42 T32_INT2 Interrupt        */
  T32_INTC_IRQn               = 27,     /* 43 T32_INTC Interrupt        */
  AES256_IRQn                 = 28,     /* 44 AES256 Interrupt          */
  RTC_C_IRQn                  = 29,     /* 45 RTC_C Interrupt           */
  DMA_ERR_IRQn                = 30,     /* 46 DMA_ERR Interrupt         */
  DMA_INT3_IRQn               = 31,     /* 47 DMA_INT3 Interrupt        */
  DMA_INT2_IRQn               = 32,     /* 48 DMA_INT2 Interrupt        */
  DMA_INT1_IRQn               = 33,     /* 49 DMA_INT1 Interrupt        */
  DMA_INT0_IRQn               = 34,     /* 50 DMA_INT0 Interrupt        */
  PORT1_IRQn                  = 35,     /* 51 Port1 Interrupt           */
  PORT2_IRQn                  = 36,     /* 52 Port2 Interrupt           */
  PORT3_IRQn                  = 37,     /* 53 Port3 Interrupt           */
  PORT4_IRQn                  = 38,     /* 54 Port4 Interrupt           */
  PORT5_IRQn                  = 39,     /* 55 Port5 Interrupt           */
  PORT6_IRQn                  = 40      /* 56 Port6 Interrupt           */
} IRQn_Type;
/***************************************************************************************************
*                                             Includes                                             *
***************************************************************************************************/
#include "core_cm4.h"

#endif /* DRIVERS_PKG__H */
