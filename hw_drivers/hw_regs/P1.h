#ifndef __P1_H__
#define __P1_H__
typedef union
{
  struct
  {
    uint16_t P1IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P1__P1IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t P1IN; /* Offset: 0x0 */
  uint8_t RESERVED0[1];
  uint8_t P1OUT; /* Offset: 0x2 */
  uint8_t RESERVED1[1];
  uint8_t P1DIR; /* Offset: 0x4 */
  uint8_t RESERVED2[1];
  uint8_t P1REN; /* Offset: 0x6 */
  uint8_t RESERVED3[1];
  uint8_t P1DS; /* Offset: 0x8 */
  uint8_t RESERVED4[1];
  uint8_t P1SEL0; /* Offset: 0xa */
  uint8_t RESERVED5[1];
  uint8_t P1SEL1; /* Offset: 0xc */
  uint8_t RESERVED6[1];
  P1__P1IV_REG_s P1IV; /* Offset: 0xe */
  uint8_t RESERVED7[6];
  uint8_t P1SELC; /* Offset: 0x16 */
  uint8_t RESERVED8[1];
  uint8_t P1IES; /* Offset: 0x18 */
  uint8_t RESERVED9[1];
  uint8_t P1IE; /* Offset: 0x1a */
  uint8_t RESERVED10[1];
  uint8_t P1IFG; /* Offset: 0x1c */
} P1__REG_LIST_s;
#endif //  #ifdef __P1_H__
