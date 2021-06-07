#ifndef __P6_H__
#define __P6_H__
typedef union
{
  struct
  {
    uint16_t P6IV: 5; /* BITS[4:0] */
  } FIELD;
  uint16_t ALL;
} P6__P6IV_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[65];
  uint8_t P6IN; /* Offset: 0x41 */
  uint8_t RESERVED1[1];
  uint8_t P6OUT; /* Offset: 0x43 */
  uint8_t RESERVED2[1];
  uint8_t P6DIR; /* Offset: 0x45 */
  uint8_t RESERVED3[1];
  uint8_t P6REN; /* Offset: 0x47 */
  uint8_t RESERVED4[1];
  uint8_t P6DS; /* Offset: 0x49 */
  uint8_t RESERVED5[1];
  uint8_t P6SEL0; /* Offset: 0x4b */
  uint8_t RESERVED6[1];
  uint8_t P6SEL1; /* Offset: 0x4d */
  uint8_t RESERVED7[9];
  uint8_t P6SELC; /* Offset: 0x57 */
  uint8_t RESERVED8[1];
  uint8_t P6IES; /* Offset: 0x59 */
  uint8_t RESERVED9[1];
  uint8_t P6IE; /* Offset: 0x5b */
  uint8_t RESERVED10[1];
  uint8_t P6IFG; /* Offset: 0x5d */
  P6__P6IV_REG_s P6IV; /* Offset: 0x5e */
} P6__REG_LIST_s;
#endif //  #ifdef __P6_H__
