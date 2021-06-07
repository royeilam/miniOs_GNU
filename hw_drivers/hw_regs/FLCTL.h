#ifndef __FLCTL_H__
#define __FLCTL_H__
typedef union
{
  struct
  {
    uint32_t PSTAT   : 3; /* BITS[2:0] */
    uint32_t LDOSTAT : 1; /* BITS[3:3] */
    uint32_t VREFSTAT: 1; /* BITS[4:4] */
    uint32_t IREFSTAT: 1; /* BITS[5:5] */
    uint32_t TRIMSTAT: 1; /* BITS[6:6] */
    uint32_t RD_2T   : 1; /* BITS[7:7] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_POWER_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t RD_MODE       : 4; /* BITS[3:0] */
    uint32_t BUFI          : 1; /* BITS[4:4] */
    uint32_t BUFD          : 1; /* BITS[5:5] */
    uint32_t               : 6;
    uint32_t WAIT          : 4; /* BITS[15:12] */
    uint32_t RD_MODE_STATUS: 4; /* BITS[19:16] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK0_RDCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t RD_MODE       : 4; /* BITS[3:0] */
    uint32_t BUFI          : 1; /* BITS[4:4] */
    uint32_t BUFD          : 1; /* BITS[5:5] */
    uint32_t               : 6;
    uint32_t WAIT          : 4; /* BITS[15:12] */
    uint32_t RD_MODE_STATUS: 4; /* BITS[19:16] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK1_RDCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t START    : 1; /* BITS[0:0] */
    uint32_t MEM_TYPE : 2; /* BITS[2:1] */
    uint32_t STOP_FAIL: 1; /* BITS[3:3] */
    uint32_t DATA_CMP : 1; /* BITS[4:4] */
    uint32_t          : 1;
    uint32_t TEST_EN  : 1; /* BITS[6:6] */
    uint32_t          : 9;
    uint32_t BRST_STAT: 2; /* BITS[17:16] */
    uint32_t CMP_ERR  : 1; /* BITS[18:18] */
    uint32_t ADDR_ERR : 1; /* BITS[19:19] */
    uint32_t          : 3;
    uint32_t CLR_STAT : 1; /* BITS[23:23] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_RDBRST_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t START_ADDRESS: 21; /* BITS[20:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_RDBRST_STARTADDR_REG_s;

typedef union
{
  struct
  {
    uint32_t BURST_LENGTH: 21; /* BITS[20:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_RDBRST_LEN_REG_s;

typedef union
{
  struct
  {
    uint32_t FAIL_ADDRESS: 21; /* BITS[20:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_RDBRST_FAILADDR_REG_s;

typedef union
{
  struct
  {
    uint32_t FAIL_COUNT: 17; /* BITS[16:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_RDBRST_FAILCNT_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t MODE   : 1; /* BITS[1:1] */
    uint32_t VER_PRE: 1; /* BITS[2:2] */
    uint32_t VER_PST: 1; /* BITS[3:3] */
    uint32_t        : 12;
    uint32_t STATUS : 2; /* BITS[17:16] */
    uint32_t BNK_ACT: 1; /* BITS[18:18] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_PRG_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t START       : 1; /* BITS[0:0] */
    uint32_t TYPE        : 2; /* BITS[2:1] */
    uint32_t LEN         : 3; /* BITS[5:3] */
    uint32_t AUTO_PRE    : 1; /* BITS[6:6] */
    uint32_t AUTO_PST    : 1; /* BITS[7:7] */
    uint32_t             : 8;
    uint32_t BURST_STATUS: 3; /* BITS[18:16] */
    uint32_t PRE_ERR     : 1; /* BITS[19:19] */
    uint32_t PST_ERR     : 1; /* BITS[20:20] */
    uint32_t ADDR_ERR    : 1; /* BITS[21:21] */
    uint32_t             : 1;
    uint32_t CLR_STAT    : 1; /* BITS[23:23] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_PRGBRST_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t START_ADDRESS: 22; /* BITS[21:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_PRGBRST_STARTADDR_REG_s;

typedef union
{
  struct
  {
    uint32_t START   : 1; /* BITS[0:0] */
    uint32_t MODE    : 1; /* BITS[1:1] */
    uint32_t TYPE    : 2; /* BITS[3:2] */
    uint32_t         : 12;
    uint32_t STATUS  : 2; /* BITS[17:16] */
    uint32_t ADDR_ERR: 1; /* BITS[18:18] */
    uint32_t CLR_STAT: 1; /* BITS[19:19] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_ERASE_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t SECT_ADDRESS: 22; /* BITS[21:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_ERASE_SECTADDR_REG_s;

typedef union
{
  struct
  {
    uint32_t PROT0: 1; /* BITS[0:0] */
    uint32_t PROT1: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK0_INFO_WEPROT_REG_s;

typedef union
{
  struct
  {
    uint32_t PROT0 : 1; /* BITS[0:0] */
    uint32_t PROT1 : 1; /* BITS[1:1] */
    uint32_t PROT2 : 1; /* BITS[2:2] */
    uint32_t PROT3 : 1; /* BITS[3:3] */
    uint32_t PROT4 : 1; /* BITS[4:4] */
    uint32_t PROT5 : 1; /* BITS[5:5] */
    uint32_t PROT6 : 1; /* BITS[6:6] */
    uint32_t PROT7 : 1; /* BITS[7:7] */
    uint32_t PROT8 : 1; /* BITS[8:8] */
    uint32_t PROT9 : 1; /* BITS[9:9] */
    uint32_t PROT10: 1; /* BITS[10:10] */
    uint32_t PROT11: 1; /* BITS[11:11] */
    uint32_t PROT12: 1; /* BITS[12:12] */
    uint32_t PROT13: 1; /* BITS[13:13] */
    uint32_t PROT14: 1; /* BITS[14:14] */
    uint32_t PROT15: 1; /* BITS[15:15] */
    uint32_t PROT16: 1; /* BITS[16:16] */
    uint32_t PROT17: 1; /* BITS[17:17] */
    uint32_t PROT18: 1; /* BITS[18:18] */
    uint32_t PROT19: 1; /* BITS[19:19] */
    uint32_t PROT20: 1; /* BITS[20:20] */
    uint32_t PROT21: 1; /* BITS[21:21] */
    uint32_t PROT22: 1; /* BITS[22:22] */
    uint32_t PROT23: 1; /* BITS[23:23] */
    uint32_t PROT24: 1; /* BITS[24:24] */
    uint32_t PROT25: 1; /* BITS[25:25] */
    uint32_t PROT26: 1; /* BITS[26:26] */
    uint32_t PROT27: 1; /* BITS[27:27] */
    uint32_t PROT28: 1; /* BITS[28:28] */
    uint32_t PROT29: 1; /* BITS[29:29] */
    uint32_t PROT30: 1; /* BITS[30:30] */
    uint32_t PROT31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK0_MAIN_WEPROT_REG_s;

typedef union
{
  struct
  {
    uint32_t PROT0: 1; /* BITS[0:0] */
    uint32_t PROT1: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK1_INFO_WEPROT_REG_s;

typedef union
{
  struct
  {
    uint32_t PROT0 : 1; /* BITS[0:0] */
    uint32_t PROT1 : 1; /* BITS[1:1] */
    uint32_t PROT2 : 1; /* BITS[2:2] */
    uint32_t PROT3 : 1; /* BITS[3:3] */
    uint32_t PROT4 : 1; /* BITS[4:4] */
    uint32_t PROT5 : 1; /* BITS[5:5] */
    uint32_t PROT6 : 1; /* BITS[6:6] */
    uint32_t PROT7 : 1; /* BITS[7:7] */
    uint32_t PROT8 : 1; /* BITS[8:8] */
    uint32_t PROT9 : 1; /* BITS[9:9] */
    uint32_t PROT10: 1; /* BITS[10:10] */
    uint32_t PROT11: 1; /* BITS[11:11] */
    uint32_t PROT12: 1; /* BITS[12:12] */
    uint32_t PROT13: 1; /* BITS[13:13] */
    uint32_t PROT14: 1; /* BITS[14:14] */
    uint32_t PROT15: 1; /* BITS[15:15] */
    uint32_t PROT16: 1; /* BITS[16:16] */
    uint32_t PROT17: 1; /* BITS[17:17] */
    uint32_t PROT18: 1; /* BITS[18:18] */
    uint32_t PROT19: 1; /* BITS[19:19] */
    uint32_t PROT20: 1; /* BITS[20:20] */
    uint32_t PROT21: 1; /* BITS[21:21] */
    uint32_t PROT22: 1; /* BITS[22:22] */
    uint32_t PROT23: 1; /* BITS[23:23] */
    uint32_t PROT24: 1; /* BITS[24:24] */
    uint32_t PROT25: 1; /* BITS[25:25] */
    uint32_t PROT26: 1; /* BITS[26:26] */
    uint32_t PROT27: 1; /* BITS[27:27] */
    uint32_t PROT28: 1; /* BITS[28:28] */
    uint32_t PROT29: 1; /* BITS[29:29] */
    uint32_t PROT30: 1; /* BITS[30:30] */
    uint32_t PROT31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BANK1_MAIN_WEPROT_REG_s;

typedef union
{
  struct
  {
    uint32_t I_BMRK : 1; /* BITS[0:0] */
    uint32_t D_BMRK : 1; /* BITS[1:1] */
    uint32_t CMP_EN : 1; /* BITS[2:2] */
    uint32_t CMP_SEL: 1; /* BITS[3:3] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BMRK_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t RDBRST : 1; /* BITS[0:0] */
    uint32_t AVPRE  : 1; /* BITS[1:1] */
    uint32_t AVPST  : 1; /* BITS[2:2] */
    uint32_t PRG    : 1; /* BITS[3:3] */
    uint32_t PRGB   : 1; /* BITS[4:4] */
    uint32_t ERASE  : 1; /* BITS[5:5] */
    uint32_t        : 2;
    uint32_t BMRK   : 1; /* BITS[8:8] */
    uint32_t PRG_ERR: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_IFG_REG_s;

typedef union
{
  struct
  {
    uint32_t RDBRST : 1; /* BITS[0:0] */
    uint32_t AVPRE  : 1; /* BITS[1:1] */
    uint32_t AVPST  : 1; /* BITS[2:2] */
    uint32_t PRG    : 1; /* BITS[3:3] */
    uint32_t PRGB   : 1; /* BITS[4:4] */
    uint32_t ERASE  : 1; /* BITS[5:5] */
    uint32_t        : 2;
    uint32_t BMRK   : 1; /* BITS[8:8] */
    uint32_t PRG_ERR: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_IE_REG_s;

typedef union
{
  struct
  {
    uint32_t RDBRST : 1; /* BITS[0:0] */
    uint32_t AVPRE  : 1; /* BITS[1:1] */
    uint32_t AVPST  : 1; /* BITS[2:2] */
    uint32_t PRG    : 1; /* BITS[3:3] */
    uint32_t PRGB   : 1; /* BITS[4:4] */
    uint32_t ERASE  : 1; /* BITS[5:5] */
    uint32_t        : 2;
    uint32_t BMRK   : 1; /* BITS[8:8] */
    uint32_t PRG_ERR: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_CLRIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t RDBRST : 1; /* BITS[0:0] */
    uint32_t AVPRE  : 1; /* BITS[1:1] */
    uint32_t AVPST  : 1; /* BITS[2:2] */
    uint32_t PRG    : 1; /* BITS[3:3] */
    uint32_t PRGB   : 1; /* BITS[4:4] */
    uint32_t ERASE  : 1; /* BITS[5:5] */
    uint32_t        : 2;
    uint32_t BMRK   : 1; /* BITS[8:8] */
    uint32_t PRG_ERR: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_SETIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP      : 8; /* BITS[7:0] */
    uint32_t            : 4;
    uint32_t IREF_BOOST1: 4; /* BITS[15:12] */
    uint32_t SETUP_LONG : 8; /* BITS[23:16] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_READ_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_READMARGIN_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP : 8; /* BITS[7:0] */
    uint32_t ACTIVE: 4; /* BITS[11:8] */
    uint32_t HOLD  : 4; /* BITS[15:12] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_PRGVER_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_ERSVER_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_LKGVER_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP : 8; /* BITS[7:0] */
    uint32_t ACTIVE: 20; /* BITS[27:8] */
    uint32_t HOLD  : 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_PROGRAM_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t SETUP : 8; /* BITS[7:0] */
    uint32_t ACTIVE: 20; /* BITS[27:8] */
    uint32_t HOLD  : 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_ERASE_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t BOOST_ACTIVE: 8; /* BITS[7:0] */
    uint32_t BOOST_HOLD  : 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_MASSERASE_TIMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t       : 7;
    uint32_t ACTIVE: 20; /* BITS[27:8] */
  } FIELD;
  uint32_t ALL;
} FLCTL__FLCTL_BURSTPRG_TIMCTL_REG_s;

typedef struct __attribute__((packed))
{
  FLCTL__FLCTL_POWER_STAT_REG_s FLCTL_POWER_STAT; /* Offset: 0x0 */
  uint8_t RESERVED0[12];
  FLCTL__FLCTL_BANK0_RDCTL_REG_s FLCTL_BANK0_RDCTL; /* Offset: 0x10 */
  FLCTL__FLCTL_BANK1_RDCTL_REG_s FLCTL_BANK1_RDCTL; /* Offset: 0x14 */
  uint8_t RESERVED1[8];
  FLCTL__FLCTL_RDBRST_CTLSTAT_REG_s FLCTL_RDBRST_CTLSTAT; /* Offset: 0x20 */
  FLCTL__FLCTL_RDBRST_STARTADDR_REG_s FLCTL_RDBRST_STARTADDR; /* Offset: 0x24 */
  FLCTL__FLCTL_RDBRST_LEN_REG_s FLCTL_RDBRST_LEN; /* Offset: 0x28 */
  uint8_t RESERVED2[16];
  FLCTL__FLCTL_RDBRST_FAILADDR_REG_s FLCTL_RDBRST_FAILADDR; /* Offset: 0x3c */
  FLCTL__FLCTL_RDBRST_FAILCNT_REG_s FLCTL_RDBRST_FAILCNT; /* Offset: 0x40 */
  uint8_t RESERVED3[12];
  FLCTL__FLCTL_PRG_CTLSTAT_REG_s FLCTL_PRG_CTLSTAT; /* Offset: 0x50 */
  FLCTL__FLCTL_PRGBRST_CTLSTAT_REG_s FLCTL_PRGBRST_CTLSTAT; /* Offset: 0x54 */
  FLCTL__FLCTL_PRGBRST_STARTADDR_REG_s FLCTL_PRGBRST_STARTADDR; /* Offset: 0x58 */
  uint8_t RESERVED4[4];
  uint32_t FLCTL_PRGBRST_DATA0_0; /* Offset: 0x60 */
  uint32_t FLCTL_PRGBRST_DATA0_1; /* Offset: 0x64 */
  uint32_t FLCTL_PRGBRST_DATA0_2; /* Offset: 0x68 */
  uint32_t FLCTL_PRGBRST_DATA0_3; /* Offset: 0x6c */
  uint32_t FLCTL_PRGBRST_DATA1_0; /* Offset: 0x70 */
  uint32_t FLCTL_PRGBRST_DATA1_1; /* Offset: 0x74 */
  uint32_t FLCTL_PRGBRST_DATA1_2; /* Offset: 0x78 */
  uint32_t FLCTL_PRGBRST_DATA1_3; /* Offset: 0x7c */
  uint32_t FLCTL_PRGBRST_DATA2_0; /* Offset: 0x80 */
  uint32_t FLCTL_PRGBRST_DATA2_1; /* Offset: 0x84 */
  uint32_t FLCTL_PRGBRST_DATA2_2; /* Offset: 0x88 */
  uint32_t FLCTL_PRGBRST_DATA2_3; /* Offset: 0x8c */
  uint32_t FLCTL_PRGBRST_DATA3_0; /* Offset: 0x90 */
  uint32_t FLCTL_PRGBRST_DATA3_1; /* Offset: 0x94 */
  uint32_t FLCTL_PRGBRST_DATA3_2; /* Offset: 0x98 */
  uint32_t FLCTL_PRGBRST_DATA3_3; /* Offset: 0x9c */
  FLCTL__FLCTL_ERASE_CTLSTAT_REG_s FLCTL_ERASE_CTLSTAT; /* Offset: 0xa0 */
  FLCTL__FLCTL_ERASE_SECTADDR_REG_s FLCTL_ERASE_SECTADDR; /* Offset: 0xa4 */
  uint8_t RESERVED5[8];
  FLCTL__FLCTL_BANK0_INFO_WEPROT_REG_s FLCTL_BANK0_INFO_WEPROT; /* Offset: 0xb0 */
  FLCTL__FLCTL_BANK0_MAIN_WEPROT_REG_s FLCTL_BANK0_MAIN_WEPROT; /* Offset: 0xb4 */
  uint8_t RESERVED6[8];
  FLCTL__FLCTL_BANK1_INFO_WEPROT_REG_s FLCTL_BANK1_INFO_WEPROT; /* Offset: 0xc0 */
  FLCTL__FLCTL_BANK1_MAIN_WEPROT_REG_s FLCTL_BANK1_MAIN_WEPROT; /* Offset: 0xc4 */
  uint8_t RESERVED7[8];
  FLCTL__FLCTL_BMRK_CTLSTAT_REG_s FLCTL_BMRK_CTLSTAT; /* Offset: 0xd0 */
  uint32_t FLCTL_BMRK_IFETCH; /* Offset: 0xd4 */
  uint32_t FLCTL_BMRK_DREAD; /* Offset: 0xd8 */
  uint32_t FLCTL_BMRK_CMP; /* Offset: 0xdc */
  uint8_t RESERVED8[16];
  FLCTL__FLCTL_IFG_REG_s FLCTL_IFG; /* Offset: 0xf0 */
  FLCTL__FLCTL_IE_REG_s FLCTL_IE; /* Offset: 0xf4 */
  FLCTL__FLCTL_CLRIFG_REG_s FLCTL_CLRIFG; /* Offset: 0xf8 */
  FLCTL__FLCTL_SETIFG_REG_s FLCTL_SETIFG; /* Offset: 0xfc */
  FLCTL__FLCTL_READ_TIMCTL_REG_s FLCTL_READ_TIMCTL; /* Offset: 0x100 */
  FLCTL__FLCTL_READMARGIN_TIMCTL_REG_s FLCTL_READMARGIN_TIMCTL; /* Offset: 0x104 */
  FLCTL__FLCTL_PRGVER_TIMCTL_REG_s FLCTL_PRGVER_TIMCTL; /* Offset: 0x108 */
  FLCTL__FLCTL_ERSVER_TIMCTL_REG_s FLCTL_ERSVER_TIMCTL; /* Offset: 0x10c */
  FLCTL__FLCTL_LKGVER_TIMCTL_REG_s FLCTL_LKGVER_TIMCTL; /* Offset: 0x110 */
  FLCTL__FLCTL_PROGRAM_TIMCTL_REG_s FLCTL_PROGRAM_TIMCTL; /* Offset: 0x114 */
  FLCTL__FLCTL_ERASE_TIMCTL_REG_s FLCTL_ERASE_TIMCTL; /* Offset: 0x118 */
  FLCTL__FLCTL_MASSERASE_TIMCTL_REG_s FLCTL_MASSERASE_TIMCTL; /* Offset: 0x11c */
  FLCTL__FLCTL_BURSTPRG_TIMCTL_REG_s FLCTL_BURSTPRG_TIMCTL; /* Offset: 0x120 */
} FLCTL__REG_LIST_s;
#endif //  #ifdef __FLCTL_H__
