#ifndef __P9_H__
#define __P9_H__
typedef union
{
  struct
  {
    uint16_t P9IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P9__P9IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[128];
  uint8_t P9IN; /* Offset: 0x80 */
  uint8_t RESERVED1[1];
  uint8_t P9OUT; /* Offset: 0x82 */
  uint8_t RESERVED2[1];
  uint8_t P9DIR; /* Offset: 0x84 */
  uint8_t RESERVED3[1];
  uint8_t P9REN; /* Offset: 0x86 */
  uint8_t RESERVED4[1];
  uint8_t P9DS; /* Offset: 0x88 */
  uint8_t RESERVED5[1];
  uint8_t P9SEL0; /* Offset: 0x8a */
  uint8_t RESERVED6[1];
  uint8_t P9SEL1; /* Offset: 0x8c */
  uint8_t RESERVED7[1];
  P9__P9IV_REG_s P9IV; /* Offset: 0x8e */
  uint8_t RESERVED8[6];
  uint8_t P9SELC; /* Offset: 0x96 */
  uint8_t RESERVED9[1];
  uint8_t P9IES; /* Offset: 0x98 */
  uint8_t RESERVED10[1];
  uint8_t P9IE; /* Offset: 0x9a */
  uint8_t RESERVED11[1];
  uint8_t P9IFG; /* Offset: 0x9c */
} P9__REG_LIST_s;
#endif //  #ifdef __P9_H__
