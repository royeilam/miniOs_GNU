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


funct PendSV_Handler
    @ 1. Load the curTask->stack pointer to R0
    ldr     r0, =curTask
    ldr     r2, [r0]
    cbz     r2, 2f
    @ 2. Push R4 through R11 to the stack
    push    {r4-r11}
    @ If process was halted with FP operation, store s16-s31
    tst     lr, 0x10
    bne     1f
    vpush   {s16-s31}
    1:
    @ 3. Store LR to indicate if process was halted during FP operation
    push    {lr}
    @ 4. Save current Stack Pointer to Tasks Data structure
    str     sp, [r2]
    2:
    @ 5. Load the next task stack pointer address to R1
    ldr     r1, =nextTask
    ldr     r2, [r1]
    @ 6. Change stack pointer to nextTask->stack
    ldr     sp, [r2]
    @ Check if next process was in the middle of FP operation
    pop     {lr}
    tst     lr, 0x10
    bne     3f
    vpop    {s16-s31}
    3:
    @ 7. Pop R4 through R11 from stack
    pop     {r4-r11}
    @ curTask = nextTask
    str     r2, [r0]
    @ Exit function
    bx      lr
