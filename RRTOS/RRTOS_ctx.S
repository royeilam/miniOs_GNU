@ Settings
.syntax unified
.cpu cortex-m4
@.arch armv7e-m
.thumb
@.fpu fpv4-sp-d16

.macro funct name
    .type \name, %function
    .global \name
    \name:
.endm

.data
curTask_sp_p: 
.word 0x0
nextTask_sp_p:
.word 0x0

.text
// breif:    Set the data for the context switch
// param r0: Pointer to the current task
//           Stack Pointer
// param r1: Pointer to the next task
//           Stack Pointer
funct rrtos_prepCtx
    ldr     r3, =curTask_sp_p
    str     r0, [r3]
    ldr     r3, =nextTask_sp_p
    str     r1, [r3]
    bx		lr

// brief:   Perform the actual context switch
funct PendSV_Handler
	curPSP		.req r0
	nextPSP		.req r1
    @ 1. Load the curTask->stack pointer to R0
    ldr     	r0, =curTask_sp_p
    ldr     	r2, [r0]
    cbz     	r2, PendSV_LoadNewCtx
    @ 2. Load Process Stack Pointer to curPSP
    mrs			curPSP, psp
    @ 3. Push R4 through R11 to curPSP
    stmdb  		curPSP!, {r4-r11}
    @ If process was halted with FP operation, store s16-s31
    tst     	lr, 0x10
    it      	eq
    vstmdbeq  	curPSP!, {s16-s31}
    @ 4. Store LR to indicate if process was halted during FP operation
    stmdb  		curPSP!, {lr}
    @ 5. Save curPSP to Tasks Data structure
    str			curPSP, [r2]
    PendSV_LoadNewCtx:
    @ 6. Load the next task stack pointer address to R1
    ldr     	r1, =nextTask_sp_p
    ldr     	r1, [r1]
    ldr     	nextPSP, [r1]
    @ Check if next process was in the middle of FP operation
    ldmia		nextPSP!, {lr}
    tst     	lr, 0x10
    it	     	eq
    vldmiaeq   	nextPSP!, {s16-s31}
    @ 7. Pop R4 through R11 from nextPSP
    ldmia     	nextPSP!, {r4-r11}
    @ 8. change psp to nextPSP
    msr			psp, nextPSP
    @ Exit function
    bx      	lr
