#ifndef __DMA_H__
#define __DMA_H__
typedef union
{
  struct
  {
    uint32_t NUM_DMA_CHANNELS   : 8; /* BITS[7:0] */
    uint32_t NUM_SRC_PER_CHANNEL: 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_DEVICE_CFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CH0 : 1; /* BITS[0:0] */
    uint32_t CH1 : 1; /* BITS[1:1] */
    uint32_t CH2 : 1; /* BITS[2:2] */
    uint32_t CH3 : 1; /* BITS[3:3] */
    uint32_t CH4 : 1; /* BITS[4:4] */
    uint32_t CH5 : 1; /* BITS[5:5] */
    uint32_t CH6 : 1; /* BITS[6:6] */
    uint32_t CH7 : 1; /* BITS[7:7] */
    uint32_t CH8 : 1; /* BITS[8:8] */
    uint32_t CH9 : 1; /* BITS[9:9] */
    uint32_t CH10: 1; /* BITS[10:10] */
    uint32_t CH11: 1; /* BITS[11:11] */
    uint32_t CH12: 1; /* BITS[12:12] */
    uint32_t CH13: 1; /* BITS[13:13] */
    uint32_t CH14: 1; /* BITS[14:14] */
    uint32_t CH15: 1; /* BITS[15:15] */
    uint32_t CH16: 1; /* BITS[16:16] */
    uint32_t CH17: 1; /* BITS[17:17] */
    uint32_t CH18: 1; /* BITS[18:18] */
    uint32_t CH19: 1; /* BITS[19:19] */
    uint32_t CH20: 1; /* BITS[20:20] */
    uint32_t CH21: 1; /* BITS[21:21] */
    uint32_t CH22: 1; /* BITS[22:22] */
    uint32_t CH23: 1; /* BITS[23:23] */
    uint32_t CH24: 1; /* BITS[24:24] */
    uint32_t CH25: 1; /* BITS[25:25] */
    uint32_t CH26: 1; /* BITS[26:26] */
    uint32_t CH27: 1; /* BITS[27:27] */
    uint32_t CH28: 1; /* BITS[28:28] */
    uint32_t CH29: 1; /* BITS[29:29] */
    uint32_t CH30: 1; /* BITS[30:30] */
    uint32_t CH31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_SW_CHTRIG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH0_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH1_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH2_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH3_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH4_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH5_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH6_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH7_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH8_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH9_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH10_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH11_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH12_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH13_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH14_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH15_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH16_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH17_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH18_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH19_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH20_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH21_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH22_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH23_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH24_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH25_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH26_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH27_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH28_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH29_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH30_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DMA_SRC: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CH31_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t INT_SRC: 5; /* BITS[4:0] */
    uint32_t EN     : 1; /* BITS[5:5] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_INT1_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t INT_SRC: 5; /* BITS[4:0] */
    uint32_t EN     : 1; /* BITS[5:5] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_INT2_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t INT_SRC: 5; /* BITS[4:0] */
    uint32_t EN     : 1; /* BITS[5:5] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_INT3_SRCCFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CH0 : 1; /* BITS[0:0] */
    uint32_t CH1 : 1; /* BITS[1:1] */
    uint32_t CH2 : 1; /* BITS[2:2] */
    uint32_t CH3 : 1; /* BITS[3:3] */
    uint32_t CH4 : 1; /* BITS[4:4] */
    uint32_t CH5 : 1; /* BITS[5:5] */
    uint32_t CH6 : 1; /* BITS[6:6] */
    uint32_t CH7 : 1; /* BITS[7:7] */
    uint32_t CH8 : 1; /* BITS[8:8] */
    uint32_t CH9 : 1; /* BITS[9:9] */
    uint32_t CH10: 1; /* BITS[10:10] */
    uint32_t CH11: 1; /* BITS[11:11] */
    uint32_t CH12: 1; /* BITS[12:12] */
    uint32_t CH13: 1; /* BITS[13:13] */
    uint32_t CH14: 1; /* BITS[14:14] */
    uint32_t CH15: 1; /* BITS[15:15] */
    uint32_t CH16: 1; /* BITS[16:16] */
    uint32_t CH17: 1; /* BITS[17:17] */
    uint32_t CH18: 1; /* BITS[18:18] */
    uint32_t CH19: 1; /* BITS[19:19] */
    uint32_t CH20: 1; /* BITS[20:20] */
    uint32_t CH21: 1; /* BITS[21:21] */
    uint32_t CH22: 1; /* BITS[22:22] */
    uint32_t CH23: 1; /* BITS[23:23] */
    uint32_t CH24: 1; /* BITS[24:24] */
    uint32_t CH25: 1; /* BITS[25:25] */
    uint32_t CH26: 1; /* BITS[26:26] */
    uint32_t CH27: 1; /* BITS[27:27] */
    uint32_t CH28: 1; /* BITS[28:28] */
    uint32_t CH29: 1; /* BITS[29:29] */
    uint32_t CH30: 1; /* BITS[30:30] */
    uint32_t CH31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_INT0_SRCFLG_REG_s;

typedef union
{
  struct
  {
    uint32_t CH0 : 1; /* BITS[0:0] */
    uint32_t CH1 : 1; /* BITS[1:1] */
    uint32_t CH2 : 1; /* BITS[2:2] */
    uint32_t CH3 : 1; /* BITS[3:3] */
    uint32_t CH4 : 1; /* BITS[4:4] */
    uint32_t CH5 : 1; /* BITS[5:5] */
    uint32_t CH6 : 1; /* BITS[6:6] */
    uint32_t CH7 : 1; /* BITS[7:7] */
    uint32_t CH8 : 1; /* BITS[8:8] */
    uint32_t CH9 : 1; /* BITS[9:9] */
    uint32_t CH10: 1; /* BITS[10:10] */
    uint32_t CH11: 1; /* BITS[11:11] */
    uint32_t CH12: 1; /* BITS[12:12] */
    uint32_t CH13: 1; /* BITS[13:13] */
    uint32_t CH14: 1; /* BITS[14:14] */
    uint32_t CH15: 1; /* BITS[15:15] */
    uint32_t CH16: 1; /* BITS[16:16] */
    uint32_t CH17: 1; /* BITS[17:17] */
    uint32_t CH18: 1; /* BITS[18:18] */
    uint32_t CH19: 1; /* BITS[19:19] */
    uint32_t CH20: 1; /* BITS[20:20] */
    uint32_t CH21: 1; /* BITS[21:21] */
    uint32_t CH22: 1; /* BITS[22:22] */
    uint32_t CH23: 1; /* BITS[23:23] */
    uint32_t CH24: 1; /* BITS[24:24] */
    uint32_t CH25: 1; /* BITS[25:25] */
    uint32_t CH26: 1; /* BITS[26:26] */
    uint32_t CH27: 1; /* BITS[27:27] */
    uint32_t CH28: 1; /* BITS[28:28] */
    uint32_t CH29: 1; /* BITS[29:29] */
    uint32_t CH30: 1; /* BITS[30:30] */
    uint32_t CH31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_INT0_CLRFLG_REG_s;

typedef union
{
  struct
  {
    uint32_t MASTEN  : 1; /* BITS[0:0] */
    uint32_t         : 3;
    uint32_t STATE   : 4; /* BITS[7:4] */
    uint32_t         : 8;
    uint32_t DMACHANS: 5; /* BITS[20:16] */
    uint32_t         : 7;
    uint32_t TESTSTAT: 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t MASTEN    : 1; /* BITS[0:0] */
    uint32_t           : 4;
    uint32_t CHPROTCTRL: 3; /* BITS[7:5] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CFG_REG_s;

typedef union
{
  struct
  {
    uint32_t     : 4;
    uint32_t ADDR: 27; /* BITS[31:5] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_CTLBASE_REG_s;

typedef union
{
  struct
  {
    uint32_t ERRCLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} DMA__DMA_ERRCLR_REG_s;

typedef struct __attribute__((packed))
{
  DMA__DMA_DEVICE_CFG_REG_s DMA_DEVICE_CFG; /* Offset: 0x0 */
  DMA__DMA_SW_CHTRIG_REG_s DMA_SW_CHTRIG; /* Offset: 0x4 */
  uint8_t RESERVED0[8];
  DMA__DMA_CH0_SRCCFG_REG_s DMA_CH0_SRCCFG; /* Offset: 0x10 */
  DMA__DMA_CH1_SRCCFG_REG_s DMA_CH1_SRCCFG; /* Offset: 0x14 */
  DMA__DMA_CH2_SRCCFG_REG_s DMA_CH2_SRCCFG; /* Offset: 0x18 */
  DMA__DMA_CH3_SRCCFG_REG_s DMA_CH3_SRCCFG; /* Offset: 0x1c */
  DMA__DMA_CH4_SRCCFG_REG_s DMA_CH4_SRCCFG; /* Offset: 0x20 */
  DMA__DMA_CH5_SRCCFG_REG_s DMA_CH5_SRCCFG; /* Offset: 0x24 */
  DMA__DMA_CH6_SRCCFG_REG_s DMA_CH6_SRCCFG; /* Offset: 0x28 */
  DMA__DMA_CH7_SRCCFG_REG_s DMA_CH7_SRCCFG; /* Offset: 0x2c */
  DMA__DMA_CH8_SRCCFG_REG_s DMA_CH8_SRCCFG; /* Offset: 0x30 */
  DMA__DMA_CH9_SRCCFG_REG_s DMA_CH9_SRCCFG; /* Offset: 0x34 */
  DMA__DMA_CH10_SRCCFG_REG_s DMA_CH10_SRCCFG; /* Offset: 0x38 */
  DMA__DMA_CH11_SRCCFG_REG_s DMA_CH11_SRCCFG; /* Offset: 0x3c */
  DMA__DMA_CH12_SRCCFG_REG_s DMA_CH12_SRCCFG; /* Offset: 0x40 */
  DMA__DMA_CH13_SRCCFG_REG_s DMA_CH13_SRCCFG; /* Offset: 0x44 */
  DMA__DMA_CH14_SRCCFG_REG_s DMA_CH14_SRCCFG; /* Offset: 0x48 */
  DMA__DMA_CH15_SRCCFG_REG_s DMA_CH15_SRCCFG; /* Offset: 0x4c */
  DMA__DMA_CH16_SRCCFG_REG_s DMA_CH16_SRCCFG; /* Offset: 0x50 */
  DMA__DMA_CH17_SRCCFG_REG_s DMA_CH17_SRCCFG; /* Offset: 0x54 */
  DMA__DMA_CH18_SRCCFG_REG_s DMA_CH18_SRCCFG; /* Offset: 0x58 */
  DMA__DMA_CH19_SRCCFG_REG_s DMA_CH19_SRCCFG; /* Offset: 0x5c */
  DMA__DMA_CH20_SRCCFG_REG_s DMA_CH20_SRCCFG; /* Offset: 0x60 */
  DMA__DMA_CH21_SRCCFG_REG_s DMA_CH21_SRCCFG; /* Offset: 0x64 */
  DMA__DMA_CH22_SRCCFG_REG_s DMA_CH22_SRCCFG; /* Offset: 0x68 */
  DMA__DMA_CH23_SRCCFG_REG_s DMA_CH23_SRCCFG; /* Offset: 0x6c */
  DMA__DMA_CH24_SRCCFG_REG_s DMA_CH24_SRCCFG; /* Offset: 0x70 */
  DMA__DMA_CH25_SRCCFG_REG_s DMA_CH25_SRCCFG; /* Offset: 0x74 */
  DMA__DMA_CH26_SRCCFG_REG_s DMA_CH26_SRCCFG; /* Offset: 0x78 */
  DMA__DMA_CH27_SRCCFG_REG_s DMA_CH27_SRCCFG; /* Offset: 0x7c */
  DMA__DMA_CH28_SRCCFG_REG_s DMA_CH28_SRCCFG; /* Offset: 0x80 */
  DMA__DMA_CH29_SRCCFG_REG_s DMA_CH29_SRCCFG; /* Offset: 0x84 */
  DMA__DMA_CH30_SRCCFG_REG_s DMA_CH30_SRCCFG; /* Offset: 0x88 */
  DMA__DMA_CH31_SRCCFG_REG_s DMA_CH31_SRCCFG; /* Offset: 0x8c */
  uint8_t RESERVED1[112];
  DMA__DMA_INT1_SRCCFG_REG_s DMA_INT1_SRCCFG; /* Offset: 0x100 */
  DMA__DMA_INT2_SRCCFG_REG_s DMA_INT2_SRCCFG; /* Offset: 0x104 */
  DMA__DMA_INT3_SRCCFG_REG_s DMA_INT3_SRCCFG; /* Offset: 0x108 */
  uint8_t RESERVED2[4];
  DMA__DMA_INT0_SRCFLG_REG_s DMA_INT0_SRCFLG; /* Offset: 0x110 */
  DMA__DMA_INT0_CLRFLG_REG_s DMA_INT0_CLRFLG; /* Offset: 0x114 */
  uint8_t RESERVED3[3816];
  DMA__DMA_STAT_REG_s DMA_STAT; /* Offset: 0x1000 */
  DMA__DMA_CFG_REG_s DMA_CFG; /* Offset: 0x1004 */
  DMA__DMA_CTLBASE_REG_s DMA_CTLBASE; /* Offset: 0x1008 */
  uint32_t DMA_ALTBASE; /* Offset: 0x100c */
  uint32_t DMA_WAITSTAT; /* Offset: 0x1010 */
  uint32_t DMA_SWREQ; /* Offset: 0x1014 */
  uint32_t DMA_USEBURSTSET; /* Offset: 0x1018 */
  uint32_t DMA_USEBURSTCLR; /* Offset: 0x101c */
  uint32_t DMA_REQMASKSET; /* Offset: 0x1020 */
  uint32_t DMA_REQMASKCLR; /* Offset: 0x1024 */
  uint32_t DMA_ENASET; /* Offset: 0x1028 */
  uint32_t DMA_ENACLR; /* Offset: 0x102c */
  uint32_t DMA_ALTSET; /* Offset: 0x1030 */
  uint32_t DMA_ALTCLR; /* Offset: 0x1034 */
  uint32_t DMA_PRIOSET; /* Offset: 0x1038 */
  uint32_t DMA_PRIOCLR; /* Offset: 0x103c */
  uint8_t RESERVED4[12];
  DMA__DMA_ERRCLR_REG_s DMA_ERRCLR; /* Offset: 0x104c */
} DMA__REG_LIST_s;
#endif //  #ifdef __DMA_H__
