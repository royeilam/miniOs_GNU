#ifndef __P2_H__
#define __P2_H__
typedef union
{
  struct
  {
    uint16_t P2IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P2__P2IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[1];
  uint8_t P2IN; /* Offset: 0x1 */
  uint8_t RESERVED1[1];
  uint8_t P2OUT; /* Offset: 0x3 */
  uint8_t RESERVED2[1];
  uint8_t P2DIR; /* Offset: 0x5 */
  uint8_t RESERVED3[1];
  uint8_t P2REN; /* Offset: 0x7 */
  uint8_t RESERVED4[1];
  uint8_t P2DS; /* Offset: 0x9 */
  uint8_t RESERVED5[1];
  uint8_t P2SEL0; /* Offset: 0xb */
  uint8_t RESERVED6[1];
  uint8_t P2SEL1; /* Offset: 0xd */
  uint8_t RESERVED7[9];
  uint8_t P2SELC; /* Offset: 0x17 */
  uint8_t RESERVED8[1];
  uint8_t P2IES; /* Offset: 0x19 */
  uint8_t RESERVED9[1];
  uint8_t P2IE; /* Offset: 0x1b */
  uint8_t RESERVED10[1];
  uint8_t P2IFG; /* Offset: 0x1d */
  P2__P2IV_REG_s P2IV; /* Offset: 0x1e */
} P2__REG_LIST_s;
#endif //  #ifdef __P2_H__
