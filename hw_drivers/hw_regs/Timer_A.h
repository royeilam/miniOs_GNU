#ifndef __TIMER_A_H__
#define __TIMER_A_H__
typedef union
{
  struct
  {
    uint16_t TAIFG : 1; /* BITS[0:0] */
    uint16_t TAIE  : 1; /* BITS[1:1] */
    uint16_t TACLR : 1; /* BITS[2:2] */
    uint16_t       : 1;
    uint16_t MC    : 2; /* BITS[5:4] */
    uint16_t ID    : 2; /* BITS[7:6] */
    uint16_t TASSEL: 2; /* BITS[9:8] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACTL_REG_s;

typedef union
{
  struct
  {
    uint16_t CCIFG : 1; /* BITS[0:0] */
    uint16_t COV   : 1; /* BITS[1:1] */
    uint16_t OUT   : 1; /* BITS[2:2] */
    uint16_t CCI   : 1; /* BITS[3:3] */
    uint16_t CCIE  : 1; /* BITS[4:4] */
    uint16_t OUTMOD: 3; /* BITS[7:5] */
    uint16_t CAP   : 1; /* BITS[8:8] */
    uint16_t       : 1;
    uint16_t SCCI  : 1; /* BITS[10:10] */
    uint16_t SCS   : 1; /* BITS[11:11] */
    uint16_t CCIS  : 2; /* BITS[13:12] */
    uint16_t CM    : 2; /* BITS[15:14] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACCTL0_REG_s;

typedef union
{
  struct
  {
    uint16_t CCIFG : 1; /* BITS[0:0] */
    uint16_t COV   : 1; /* BITS[1:1] */
    uint16_t OUT   : 1; /* BITS[2:2] */
    uint16_t CCI   : 1; /* BITS[3:3] */
    uint16_t CCIE  : 1; /* BITS[4:4] */
    uint16_t OUTMOD: 3; /* BITS[7:5] */
    uint16_t CAP   : 1; /* BITS[8:8] */
    uint16_t       : 1;
    uint16_t SCCI  : 1; /* BITS[10:10] */
    uint16_t SCS   : 1; /* BITS[11:11] */
    uint16_t CCIS  : 2; /* BITS[13:12] */
    uint16_t CM    : 2; /* BITS[15:14] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACCTL1_REG_s;

typedef union
{
  struct
  {
    uint16_t CCIFG : 1; /* BITS[0:0] */
    uint16_t COV   : 1; /* BITS[1:1] */
    uint16_t OUT   : 1; /* BITS[2:2] */
    uint16_t CCI   : 1; /* BITS[3:3] */
    uint16_t CCIE  : 1; /* BITS[4:4] */
    uint16_t OUTMOD: 3; /* BITS[7:5] */
    uint16_t CAP   : 1; /* BITS[8:8] */
    uint16_t       : 1;
    uint16_t SCCI  : 1; /* BITS[10:10] */
    uint16_t SCS   : 1; /* BITS[11:11] */
    uint16_t CCIS  : 2; /* BITS[13:12] */
    uint16_t CM    : 2; /* BITS[15:14] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACCTL2_REG_s;

typedef union
{
  struct
  {
    uint16_t CCIFG : 1; /* BITS[0:0] */
    uint16_t COV   : 1; /* BITS[1:1] */
    uint16_t OUT   : 1; /* BITS[2:2] */
    uint16_t CCI   : 1; /* BITS[3:3] */
    uint16_t CCIE  : 1; /* BITS[4:4] */
    uint16_t OUTMOD: 3; /* BITS[7:5] */
    uint16_t CAP   : 1; /* BITS[8:8] */
    uint16_t       : 1;
    uint16_t SCCI  : 1; /* BITS[10:10] */
    uint16_t SCS   : 1; /* BITS[11:11] */
    uint16_t CCIS  : 2; /* BITS[13:12] */
    uint16_t CM    : 2; /* BITS[15:14] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACCTL3_REG_s;

typedef union
{
  struct
  {
    uint16_t CCIFG : 1; /* BITS[0:0] */
    uint16_t COV   : 1; /* BITS[1:1] */
    uint16_t OUT   : 1; /* BITS[2:2] */
    uint16_t CCI   : 1; /* BITS[3:3] */
    uint16_t CCIE  : 1; /* BITS[4:4] */
    uint16_t OUTMOD: 3; /* BITS[7:5] */
    uint16_t CAP   : 1; /* BITS[8:8] */
    uint16_t       : 1;
    uint16_t SCCI  : 1; /* BITS[10:10] */
    uint16_t SCS   : 1; /* BITS[11:11] */
    uint16_t CCIS  : 2; /* BITS[13:12] */
    uint16_t CM    : 2; /* BITS[15:14] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TACCTL4_REG_s;

typedef union
{
  struct
  {
    uint16_t TAIDEX: 3; /* BITS[2:0] */
  } FIELD;
  uint16_t ALL;
} Timer_A__TAEX0_REG_s;

typedef struct __attribute__((packed))
{
  Timer_A__TACTL_REG_s TACTL; /* Offset: 0x0 */
  Timer_A__TACCTL0_REG_s TACCTL0; /* Offset: 0x2 */
  Timer_A__TACCTL1_REG_s TACCTL1; /* Offset: 0x4 */
  Timer_A__TACCTL2_REG_s TACCTL2; /* Offset: 0x6 */
  Timer_A__TACCTL3_REG_s TACCTL3; /* Offset: 0x8 */
  Timer_A__TACCTL4_REG_s TACCTL4; /* Offset: 0xa */
  uint8_t RESERVED0[4];
  uint16_t TAR; /* Offset: 0x10 */
  uint16_t TACCR0; /* Offset: 0x12 */
  uint16_t TACCR1; /* Offset: 0x14 */
  uint16_t TACCR2; /* Offset: 0x16 */
  uint16_t TACCR3; /* Offset: 0x18 */
  uint16_t TACCR4; /* Offset: 0x1a */
  uint8_t RESERVED1[4];
  Timer_A__TAEX0_REG_s TAEX0; /* Offset: 0x20 */
  uint8_t RESERVED2[12];
  uint16_t TAIV; /* Offset: 0x2e */
} Timer_A__REG_LIST_s;
#endif //  #ifdef __TIMER_A_H__
