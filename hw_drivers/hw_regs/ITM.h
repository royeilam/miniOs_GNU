#ifndef __ITM_H__
#define __ITM_H__
typedef union
{
  struct
  {
    uint32_t PRIVMASK: 4; /* BITS[3:0] */
  } FIELD;
  uint32_t ALL;
} ITM__ITM_TPR_REG_s;

typedef union
{
  struct
  {
    uint32_t ITMENA    : 1; /* BITS[0:0] */
    uint32_t TSENA     : 1; /* BITS[1:1] */
    uint32_t SYNCENA   : 1; /* BITS[2:2] */
    uint32_t DWTENA    : 1; /* BITS[3:3] */
    uint32_t SWOENA    : 1; /* BITS[4:4] */
    uint32_t           : 3;
    uint32_t TSPRESCALE: 2; /* BITS[9:8] */
    uint32_t           : 6;
    uint32_t ATBID     : 7; /* BITS[22:16] */
    uint32_t BUSY      : 1; /* BITS[23:23] */
  } FIELD;
  uint32_t ALL;
} ITM__ITM_TCR_REG_s;

typedef union
{
  struct
  {
    uint32_t ATVALIDM: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} ITM__ITM_IWR_REG_s;

typedef union
{
  struct
  {
    uint32_t INTEGRATION: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} ITM__ITM_IMCR_REG_s;

typedef union
{
  struct
  {
    uint32_t PRESENT: 1; /* BITS[0:0] */
    uint32_t ACCESS : 1; /* BITS[1:1] */
    uint32_t BYTEACC: 1; /* BITS[2:2] */
  } FIELD;
  uint32_t ALL;
} ITM__ITM_LSR_REG_s;

typedef struct __attribute__((packed))
{
  uint32_t ITM_STIM0; /* Offset: 0x0 */
  uint32_t ITM_STIM1; /* Offset: 0x4 */
  uint32_t ITM_STIM2; /* Offset: 0x8 */
  uint32_t ITM_STIM3; /* Offset: 0xc */
  uint32_t ITM_STIM4; /* Offset: 0x10 */
  uint32_t ITM_STIM5; /* Offset: 0x14 */
  uint32_t ITM_STIM6; /* Offset: 0x18 */
  uint32_t ITM_STIM7; /* Offset: 0x1c */
  uint32_t ITM_STIM8; /* Offset: 0x20 */
  uint32_t ITM_STIM9; /* Offset: 0x24 */
  uint32_t ITM_STIM10; /* Offset: 0x28 */
  uint32_t ITM_STIM11; /* Offset: 0x2c */
  uint32_t ITM_STIM12; /* Offset: 0x30 */
  uint32_t ITM_STIM13; /* Offset: 0x34 */
  uint32_t ITM_STIM14; /* Offset: 0x38 */
  uint32_t ITM_STIM15; /* Offset: 0x3c */
  uint32_t ITM_STIM16; /* Offset: 0x40 */
  uint32_t ITM_STIM17; /* Offset: 0x44 */
  uint32_t ITM_STIM18; /* Offset: 0x48 */
  uint32_t ITM_STIM19; /* Offset: 0x4c */
  uint32_t ITM_STIM20; /* Offset: 0x50 */
  uint32_t ITM_STIM21; /* Offset: 0x54 */
  uint32_t ITM_STIM22; /* Offset: 0x58 */
  uint32_t ITM_STIM23; /* Offset: 0x5c */
  uint32_t ITM_STIM24; /* Offset: 0x60 */
  uint32_t ITM_STIM25; /* Offset: 0x64 */
  uint32_t ITM_STIM26; /* Offset: 0x68 */
  uint32_t ITM_STIM27; /* Offset: 0x6c */
  uint32_t ITM_STIM28; /* Offset: 0x70 */
  uint32_t ITM_STIM29; /* Offset: 0x74 */
  uint32_t ITM_STIM30; /* Offset: 0x78 */
  uint32_t ITM_STIM31; /* Offset: 0x7c */
  uint8_t RESERVED0[3456];
  uint32_t ITM_TER; /* Offset: 0xe00 */
  uint8_t RESERVED1[60];
  ITM__ITM_TPR_REG_s ITM_TPR; /* Offset: 0xe40 */
  uint8_t RESERVED2[60];
  ITM__ITM_TCR_REG_s ITM_TCR; /* Offset: 0xe80 */
  uint8_t RESERVED3[116];
  ITM__ITM_IWR_REG_s ITM_IWR; /* Offset: 0xef8 */
  uint8_t RESERVED4[4];
  ITM__ITM_IMCR_REG_s ITM_IMCR; /* Offset: 0xf00 */
  uint8_t RESERVED5[172];
  uint32_t ITM_LAR; /* Offset: 0xfb0 */
  ITM__ITM_LSR_REG_s ITM_LSR; /* Offset: 0xfb4 */
} ITM__REG_LIST_s;
#endif //  #ifdef __ITM_H__
