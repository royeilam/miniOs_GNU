#ifndef __P3_H__
#define __P3_H__
typedef union
{
  struct
  {
    uint16_t P3IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P3__P3IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[32];
  uint8_t P3IN; /* Offset: 0x20 */
  uint8_t RESERVED1[1];
  uint8_t P3OUT; /* Offset: 0x22 */
  uint8_t RESERVED2[1];
  uint8_t P3DIR; /* Offset: 0x24 */
  uint8_t RESERVED3[1];
  uint8_t P3REN; /* Offset: 0x26 */
  uint8_t RESERVED4[1];
  uint8_t P3DS; /* Offset: 0x28 */
  uint8_t RESERVED5[1];
  uint8_t P3SEL0; /* Offset: 0x2a */
  uint8_t RESERVED6[1];
  uint8_t P3SEL1; /* Offset: 0x2c */
  uint8_t RESERVED7[1];
  P3__P3IV_REG_s P3IV; /* Offset: 0x2e */
  uint8_t RESERVED8[6];
  uint8_t P3SELC; /* Offset: 0x36 */
  uint8_t RESERVED9[1];
  uint8_t P3IES; /* Offset: 0x38 */
  uint8_t RESERVED10[1];
  uint8_t P3IE; /* Offset: 0x3a */
  uint8_t RESERVED11[1];
  uint8_t P3IFG; /* Offset: 0x3c */
} P3__REG_LIST_s;
#endif //  #ifdef __P3_H__
