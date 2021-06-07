#ifndef __P7_H__
#define __P7_H__
typedef union
{
  struct
  {
    uint16_t P7IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P7__P7IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[96];
  uint8_t P7IN; /* Offset: 0x60 */
  uint8_t RESERVED1[1];
  uint8_t P7OUT; /* Offset: 0x62 */
  uint8_t RESERVED2[1];
  uint8_t P7DIR; /* Offset: 0x64 */
  uint8_t RESERVED3[1];
  uint8_t P7REN; /* Offset: 0x66 */
  uint8_t RESERVED4[1];
  uint8_t P7DS; /* Offset: 0x68 */
  uint8_t RESERVED5[1];
  uint8_t P7SEL0; /* Offset: 0x6a */
  uint8_t RESERVED6[1];
  uint8_t P7SEL1; /* Offset: 0x6c */
  uint8_t RESERVED7[1];
  P7__P7IV_REG_s P7IV; /* Offset: 0x6e */
  uint8_t RESERVED8[6];
  uint8_t P7SELC; /* Offset: 0x76 */
  uint8_t RESERVED9[1];
  uint8_t P7IES; /* Offset: 0x78 */
  uint8_t RESERVED10[1];
  uint8_t P7IE; /* Offset: 0x7a */
  uint8_t RESERVED11[1];
  uint8_t P7IFG; /* Offset: 0x7c */
} P7__REG_LIST_s;
#endif //  #ifdef __P7_H__
