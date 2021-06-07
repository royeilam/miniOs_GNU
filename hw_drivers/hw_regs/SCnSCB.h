#ifndef __SCNSCB_H__
#define __SCNSCB_H__
typedef union
{
  struct
  {
    uint32_t INTLINESNUM: 5; /* BITS[4:0] */
  } FIELD;
  uint32_t ALL;
} SCnSCB__ICTR_REG_s;

typedef union
{
  struct
  {
    uint32_t DISMCYCINT: 1; /* BITS[0:0] */
    uint32_t DISDEFWBUF: 1; /* BITS[1:1] */
    uint32_t DISFOLD   : 1; /* BITS[2:2] */
    uint32_t           : 5;
    uint32_t DISFPCA   : 1; /* BITS[8:8] */
    uint32_t DISOOFP   : 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} SCnSCB__ACTLR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[4];
  SCnSCB__ICTR_REG_s ICTR; /* Offset: 0x4 */
  SCnSCB__ACTLR_REG_s ACTLR; /* Offset: 0x8 */
} SCnSCB__REG_LIST_s;
#endif //  #ifdef __SCNSCB_H__
