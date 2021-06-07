#ifndef __GPIO_H__
#define __GPIO_H__
typedef union
{
  struct
  {
    uint16_t IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} GPIO__IV_REG_s;

typedef union
{
  struct
  {
    uint8_t P1IN; /* Offset: 0x0 */
    uint8_t P2IN; /* Offset: 0x1 */
    uint8_t P1OUT; /* Offset: 0x2 */
    uint8_t P2OUT; /* Offset: 0x3 */
    uint8_t P1DIR; /* Offset: 0x4 */
    uint8_t P2DIR; /* Offset: 0x5 */
    uint8_t P1REN; /* Offset: 0x6 */
    uint8_t P2REN; /* Offset: 0x7 */
    uint8_t P1DS; /* Offset: 0x8 */
    uint8_t P2DS; /* Offset: 0x9 */
    uint8_t P1SEL0; /* Offset: 0xa */
    uint8_t P2SEL0; /* Offset: 0xb */
    uint8_t P1SEL1; /* Offset: 0xc */
    uint8_t P2SEL1; /* Offset: 0xd */
    GPIO__IV_REG_s P1IV; /* Offset: 0xe */
    uint8_t RESERVED7[6]; 
    uint8_t P1SELC; /* Offset: 0x16 */
    uint8_t P2SELC; /* Offset: 0x17 */
    uint8_t P1IES; /* Offset: 0x18 */
    uint8_t P2IES; /* Offset: 0x19 */
    uint8_t P1IE; /* Offset: 0x1a */
    uint8_t P2IE; /* Offset: 0x1b */
    uint8_t P1IFG; /* Offset: 0x1c */
    uint8_t P2IFG; /* Offset: 0x1d */
    GPIO__IV_REG_s P2IV; /* Offset: 0x1e */
  } INTR;

  struct
  {
    uint16_t PAIN; /* Offset: 0x0 */
    uint16_t PAOUT; /* Offset: 0x2 */
    uint16_t PADIR; /* Offset: 0x4 */
    uint16_t PAREN; /* Offset: 0x6 */
    uint16_t PADS; /* Offset: 0x8 */
    uint16_t PASEL0; /* Offset: 0xa */
    uint16_t PASEL1; /* Offset: 0xc */
    uint8_t RESERVED0[8];
    uint16_t PASELC; /* Offset: 0x16 */
    uint16_t PAIES; /* Offset: 0x18 */
    uint16_t PAIE; /* Offset: 0x1a */
    uint16_t PAIFG; /* Offset: 0x1c */
  } NON_INTR;

} GPIO__REG_LIST_s;

#endif //  #ifdef __GPIO_H__
