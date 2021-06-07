#ifndef __P8_H__
#define __P8_H__
typedef union
{
  struct
  {
    uint16_t P8IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P8__P8IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[97];
  uint8_t P8IN; /* Offset: 0x61 */
  uint8_t RESERVED1[1];
  uint8_t P8OUT; /* Offset: 0x63 */
  uint8_t RESERVED2[1];
  uint8_t P8DIR; /* Offset: 0x65 */
  uint8_t RESERVED3[1];
  uint8_t P8REN; /* Offset: 0x67 */
  uint8_t RESERVED4[1];
  uint8_t P8DS; /* Offset: 0x69 */
  uint8_t RESERVED5[1];
  uint8_t P8SEL0; /* Offset: 0x6b */
  uint8_t RESERVED6[1];
  uint8_t P8SEL1; /* Offset: 0x6d */
  uint8_t RESERVED7[9];
  uint8_t P8SELC; /* Offset: 0x77 */
  uint8_t RESERVED8[1];
  uint8_t P8IES; /* Offset: 0x79 */
  uint8_t RESERVED9[1];
  uint8_t P8IE; /* Offset: 0x7b */
  uint8_t RESERVED10[1];
  uint8_t P8IFG; /* Offset: 0x7d */
  P8__P8IV_REG_s P8IV; /* Offset: 0x7e */
} P8__REG_LIST_s;
#endif //  #ifdef __P8_H__
