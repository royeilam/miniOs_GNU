#ifndef __COREDEBUG_H__
#define __COREDEBUG_H__
typedef union
{
  struct
  {
    uint32_t C_DEBUGEN  : 1; /* BITS[0:0] */
    uint32_t C_HALT     : 1; /* BITS[1:1] */
    uint32_t C_STEP     : 1; /* BITS[2:2] */
    uint32_t C_MASKINTS : 1; /* BITS[3:3] */
    uint32_t            : 1;
    uint32_t C_SNAPSTALL: 1; /* BITS[5:5] */
    uint32_t            : 10;
    uint32_t S_REGRDY   : 1; /* BITS[16:16] */
    uint32_t S_HALT     : 1; /* BITS[17:17] */
    uint32_t S_SLEEP    : 1; /* BITS[18:18] */
    uint32_t S_LOCKUP   : 1; /* BITS[19:19] */
    uint32_t            : 4;
    uint32_t S_RETIRE_ST: 1; /* BITS[24:24] */
    uint32_t S_RESET_ST : 1; /* BITS[25:25] */
  } FIELD;
  uint32_t ALL;
} COREDEBUG__DHCSR_REG_s;

typedef union
{
  struct
  {
    uint32_t REGSEL: 5; /* BITS[4:0] */
    uint32_t       : 11;
    uint32_t REGWNR: 1; /* BITS[16:16] */
  } FIELD;
  uint32_t ALL;
} COREDEBUG__DCRSR_REG_s;

typedef union
{
  struct
  {
    uint32_t VC_CORERESET: 1; /* BITS[0:0] */
    uint32_t             : 3;
    uint32_t VC_MMERR    : 1; /* BITS[4:4] */
    uint32_t VC_NOCPERR  : 1; /* BITS[5:5] */
    uint32_t VC_CHKERR   : 1; /* BITS[6:6] */
    uint32_t VC_STATERR  : 1; /* BITS[7:7] */
    uint32_t VC_BUSERR   : 1; /* BITS[8:8] */
    uint32_t VC_INTERR   : 1; /* BITS[9:9] */
    uint32_t VC_HARDERR  : 1; /* BITS[10:10] */
    uint32_t             : 5;
    uint32_t MON_EN      : 1; /* BITS[16:16] */
    uint32_t MON_PEND    : 1; /* BITS[17:17] */
    uint32_t MON_STEP    : 1; /* BITS[18:18] */
    uint32_t MON_REQ     : 1; /* BITS[19:19] */
    uint32_t             : 4;
    uint32_t TRCENA      : 1; /* BITS[24:24] */
  } FIELD;
  uint32_t ALL;
} COREDEBUG__DEMCR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[3568];
  COREDEBUG__DHCSR_REG_s DHCSR; /* Offset: 0xdf0 */
  COREDEBUG__DCRSR_REG_s DCRSR; /* Offset: 0xdf4 */
  uint32_t DCRDR; /* Offset: 0xdf8 */
  COREDEBUG__DEMCR_REG_s DEMCR; /* Offset: 0xdfc */
} COREDEBUG__REG_LIST_s;
#endif //  #ifdef __COREDEBUG_H__
