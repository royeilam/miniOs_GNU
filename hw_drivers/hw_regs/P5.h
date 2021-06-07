#ifndef __P5_H__
#define __P5_H__
typedef union
{
  struct
  {
    uint16_t P5IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P5__P5IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[64];
  uint8_t P5IN; /* Offset: 0x40 */
  uint8_t RESERVED1[1];
  uint8_t P5OUT; /* Offset: 0x42 */
  uint8_t RESERVED2[1];
  uint8_t P5DIR; /* Offset: 0x44 */
  uint8_t RESERVED3[1];
  uint8_t P5REN; /* Offset: 0x46 */
  uint8_t RESERVED4[1];
  uint8_t P5DS; /* Offset: 0x48 */
  uint8_t RESERVED5[1];
  uint8_t P5SEL0; /* Offset: 0x4a */
  uint8_t RESERVED6[1];
  uint8_t P5SEL1; /* Offset: 0x4c */
  uint8_t RESERVED7[1];
  P5__P5IV_REG_s P5IV; /* Offset: 0x4e */
  uint8_t RESERVED8[6];
  uint8_t P5SELC; /* Offset: 0x56 */
  uint8_t RESERVED9[1];
  uint8_t P5IES; /* Offset: 0x58 */
  uint8_t RESERVED10[1];
  uint8_t P5IE; /* Offset: 0x5a */
  uint8_t RESERVED11[1];
  uint8_t P5IFG; /* Offset: 0x5c */
} P5__REG_LIST_s;
#endif //  #ifdef __P5_H__
