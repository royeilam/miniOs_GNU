#ifndef __PCM_H__
#define __PCM_H__
typedef union
{
  struct
  {
    uint32_t AMR   : 4; /* BITS[3:0] */
    uint32_t LPMR  : 4; /* BITS[7:4] */
    uint32_t CPM   : 6; /* BITS[13:8] */
    uint32_t       : 2;
    uint32_t PCMKEY: 16; /* BITS[31:16] */
  } FIELD;
  uint32_t ALL;
} PCM__PCMCTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t LOCKLPM5       : 1; /* BITS[0:0] */
    uint32_t LOCKBKUP       : 1; /* BITS[1:1] */
    uint32_t FORCE_LPM_ENTRY: 1; /* BITS[2:2] */
    uint32_t                : 5;
    uint32_t PMR_BUSY       : 1; /* BITS[8:8] */
    uint32_t                : 7;
    uint32_t PCMKEY         : 16; /* BITS[31:16] */
  } FIELD;
  uint32_t ALL;
} PCM__PCMCTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t LPM_INVALID_TR_IE : 1; /* BITS[0:0] */
    uint32_t LPM_INVALID_CLK_IE: 1; /* BITS[1:1] */
    uint32_t AM_INVALID_TR_IE  : 1; /* BITS[2:2] */
    uint32_t                   : 3;
    uint32_t DCDC_ERROR_IE     : 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} PCM__PCMIE_REG_s;

typedef union
{
  struct
  {
    uint32_t LPM_INVALID_TR_IFG : 1; /* BITS[0:0] */
    uint32_t LPM_INVALID_CLK_IFG: 1; /* BITS[1:1] */
    uint32_t AM_INVALID_TR_IFG  : 1; /* BITS[2:2] */
    uint32_t                    : 3;
    uint32_t DCDC_ERROR_IFG     : 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} PCM__PCMIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR_LPM_INVALID_TR_IFG : 1; /* BITS[0:0] */
    uint32_t CLR_LPM_INVALID_CLK_IFG: 1; /* BITS[1:1] */
    uint32_t CLR_AM_INVALID_TR_IFG  : 1; /* BITS[2:2] */
    uint32_t                        : 3;
    uint32_t CLR_DCDC_ERROR_IFG     : 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} PCM__PCMCLRIFG_REG_s;

typedef struct __attribute__((packed))
{
  PCM__PCMCTL0_REG_s PCMCTL0; /* Offset: 0x0 */
  PCM__PCMCTL1_REG_s PCMCTL1; /* Offset: 0x4 */
  PCM__PCMIE_REG_s PCMIE; /* Offset: 0x8 */
  PCM__PCMIFG_REG_s PCMIFG; /* Offset: 0xc */
  PCM__PCMCLRIFG_REG_s PCMCLRIFG; /* Offset: 0x10 */
} PCM__REG_LIST_s;
#endif //  #ifdef __PCM_H__
