#ifndef __SYSTICK_H__
#define __SYSTICK_H__
typedef union
{
  struct
  {
    uint32_t ENABLE   : 1; /* BITS[0:0] */
    uint32_t TICKINT  : 1; /* BITS[1:1] */
    uint32_t CLKSOURCE: 1; /* BITS[2:2] */
    uint32_t          : 13;
    uint32_t COUNTFLAG: 1; /* BITS[16:16] */
  } FIELD;
  uint32_t ALL;
} SYSTICK__STCSR_REG_s;

typedef union
{
  struct
  {
    uint32_t RELOAD: 24; /* BITS[23:0] */
  } FIELD;
  uint32_t ALL;
} SYSTICK__STRVR_REG_s;

typedef union
{
  struct
  {
    uint32_t CURRENT: 24; /* BITS[23:0] */
  } FIELD;
  uint32_t ALL;
} SYSTICK__STCVR_REG_s;

typedef union
{
  struct
  {
    uint32_t TENMS: 24; /* BITS[23:0] */
    uint32_t      : 6;
    uint32_t SKEW : 1; /* BITS[30:30] */
    uint32_t NOREF: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSTICK__STCR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[16];
  SYSTICK__STCSR_REG_s STCSR; /* Offset: 0x10 */
  SYSTICK__STRVR_REG_s STRVR; /* Offset: 0x14 */
  SYSTICK__STCVR_REG_s STCVR; /* Offset: 0x18 */
  SYSTICK__STCR_REG_s STCR; /* Offset: 0x1c */
} SYSTICK__REG_LIST_s;
#endif //  #ifdef __SYSTICK_H__
