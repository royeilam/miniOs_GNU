#ifndef __WDT_A_H__
#define __WDT_A_H__
typedef union
{
  struct
  {
    uint16_t WDTIS   : 3; /* BITS[2:0] */
    uint16_t WDTCNTCL: 1; /* BITS[3:3] */
    uint16_t WDTTMSEL: 1; /* BITS[4:4] */
    uint16_t WDTSSEL : 2; /* BITS[6:5] */
    uint16_t WDTHOLD : 1; /* BITS[7:7] */
    uint16_t WDTPW   : 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} WDT_A__WDTCTL_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[12];
  WDT_A__WDTCTL_REG_s WDTCTL; /* Offset: 0xc */
} WDT_A__REG_LIST_s;
#endif //  #ifdef __WDT_A_H__
