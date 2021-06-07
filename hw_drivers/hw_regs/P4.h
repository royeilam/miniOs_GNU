#ifndef __P4_H__
#define __P4_H__
typedef union
{
  struct
  {
    uint16_t P4IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P4__P4IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[33];
  uint8_t P4IN; /* Offset: 0x21 */
  uint8_t RESERVED1[1];
  uint8_t P4OUT; /* Offset: 0x23 */
  uint8_t RESERVED2[1];
  uint8_t P4DIR; /* Offset: 0x25 */
  uint8_t RESERVED3[1];
  uint8_t P4REN; /* Offset: 0x27 */
  uint8_t RESERVED4[1];
  uint8_t P4DS; /* Offset: 0x29 */
  uint8_t RESERVED5[1];
  uint8_t P4SEL0; /* Offset: 0x2b */
  uint8_t RESERVED6[1];
  uint8_t P4SEL1; /* Offset: 0x2d */
  uint8_t RESERVED7[9];
  uint8_t P4SELC; /* Offset: 0x37 */
  uint8_t RESERVED8[1];
  uint8_t P4IES; /* Offset: 0x39 */
  uint8_t RESERVED9[1];
  uint8_t P4IE; /* Offset: 0x3b */
  uint8_t RESERVED10[1];
  uint8_t P4IFG; /* Offset: 0x3d */
  P4__P4IV_REG_s P4IV; /* Offset: 0x3e */
} P4__REG_LIST_s;
#endif //  #ifdef __P4_H__
