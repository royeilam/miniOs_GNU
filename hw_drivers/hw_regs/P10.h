#ifndef __P10_H__
#define __P10_H__
typedef union
{
  struct
  {
    uint16_t P10IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P10__P10IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[129];
  uint8_t P10IN; /* Offset: 0x81 */
  uint8_t RESERVED1[1];
  uint8_t P10OUT; /* Offset: 0x83 */
  uint8_t RESERVED2[1];
  uint8_t P10DIR; /* Offset: 0x85 */
  uint8_t RESERVED3[1];
  uint8_t P10REN; /* Offset: 0x87 */
  uint8_t RESERVED4[1];
  uint8_t P10DS; /* Offset: 0x89 */
  uint8_t RESERVED5[1];
  uint8_t P10SEL0; /* Offset: 0x8b */
  uint8_t RESERVED6[1];
  uint8_t P10SEL1; /* Offset: 0x8d */
  uint8_t RESERVED7[9];
  uint8_t P10SELC; /* Offset: 0x97 */
  uint8_t RESERVED8[1];
  uint8_t P10IES; /* Offset: 0x99 */
  uint8_t RESERVED9[1];
  uint8_t P10IE; /* Offset: 0x9b */
  uint8_t RESERVED10[1];
  uint8_t P10IFG; /* Offset: 0x9d */
  P10__P10IV_REG_s P10IV; /* Offset: 0x9e */
} P10__REG_LIST_s;
#endif //  #ifdef __P10_H__
