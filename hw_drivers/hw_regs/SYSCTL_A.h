#ifndef __SYSCTL_A_H__
#define __SYSCTL_A_H__
typedef union
{
  struct
  {
    uint32_t REBOOT: 1; /* BITS[0:0] */
    uint32_t       : 7;
    uint32_t WKEY  : 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_REBOOT_CTL_REG_s;

typedef union
{
  struct
  {
    uint32_t CS_SRC : 1; /* BITS[0:0] */
    uint32_t PSS_SRC: 1; /* BITS[1:1] */
    uint32_t PCM_SRC: 1; /* BITS[2:2] */
    uint32_t PIN_SRC: 1; /* BITS[3:3] */
    uint32_t        : 12;
    uint32_t CS_FLG : 1; /* BITS[16:16] */
    uint32_t PSS_FLG: 1; /* BITS[17:17] */
    uint32_t PCM_FLG: 1; /* BITS[18:18] */
    uint32_t PIN_FLG: 1; /* BITS[19:19] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_NMI_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t TIMEOUT  : 1; /* BITS[0:0] */
    uint32_t VIOLATION: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_WDTRESET_CTL_REG_s;

typedef union
{
  struct
  {
    uint32_t HALT_T16_0: 1; /* BITS[0:0] */
    uint32_t HALT_T16_1: 1; /* BITS[1:1] */
    uint32_t HALT_T16_2: 1; /* BITS[2:2] */
    uint32_t HALT_T16_3: 1; /* BITS[3:3] */
    uint32_t HALT_T32_0: 1; /* BITS[4:4] */
    uint32_t HALT_eUA0 : 1; /* BITS[5:5] */
    uint32_t HALT_eUA1 : 1; /* BITS[6:6] */
    uint32_t HALT_eUA2 : 1; /* BITS[7:7] */
    uint32_t HALT_eUA3 : 1; /* BITS[8:8] */
    uint32_t HALT_eUB0 : 1; /* BITS[9:9] */
    uint32_t HALT_eUB1 : 1; /* BITS[10:10] */
    uint32_t HALT_eUB2 : 1; /* BITS[11:11] */
    uint32_t HALT_eUB3 : 1; /* BITS[12:12] */
    uint32_t HALT_ADC  : 1; /* BITS[13:13] */
    uint32_t HALT_WDT  : 1; /* BITS[14:14] */
    uint32_t HALT_DMA  : 1; /* BITS[15:15] */
    uint32_t HALT_LCD  : 1; /* BITS[16:16] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_PERIHALT_CTL_REG_s;

typedef union
{
  struct
  {
    uint32_t GLTCH_EN: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_DIO_GLTFLT_CTL_REG_s;

typedef union
{
  struct
  {
    uint32_t UNLKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SECDATA_UNLOCK_REG_s;

typedef union
{
  struct
  {
    uint32_t BNK0_EN : 1; /* BITS[0:0] */
    uint32_t BNK1_EN : 1; /* BITS[1:1] */
    uint32_t BNK2_EN : 1; /* BITS[2:2] */
    uint32_t BNK3_EN : 1; /* BITS[3:3] */
    uint32_t BNK4_EN : 1; /* BITS[4:4] */
    uint32_t BNK5_EN : 1; /* BITS[5:5] */
    uint32_t BNK6_EN : 1; /* BITS[6:6] */
    uint32_t BNK7_EN : 1; /* BITS[7:7] */
    uint32_t BNK8_EN : 1; /* BITS[8:8] */
    uint32_t BNK9_EN : 1; /* BITS[9:9] */
    uint32_t BNK10_EN: 1; /* BITS[10:10] */
    uint32_t BNK11_EN: 1; /* BITS[11:11] */
    uint32_t BNK12_EN: 1; /* BITS[12:12] */
    uint32_t BNK13_EN: 1; /* BITS[13:13] */
    uint32_t BNK14_EN: 1; /* BITS[14:14] */
    uint32_t BNK15_EN: 1; /* BITS[15:15] */
    uint32_t BNK16_EN: 1; /* BITS[16:16] */
    uint32_t BNK17_EN: 1; /* BITS[17:17] */
    uint32_t BNK18_EN: 1; /* BITS[18:18] */
    uint32_t BNK19_EN: 1; /* BITS[19:19] */
    uint32_t BNK20_EN: 1; /* BITS[20:20] */
    uint32_t BNK21_EN: 1; /* BITS[21:21] */
    uint32_t BNK22_EN: 1; /* BITS[22:22] */
    uint32_t BNK23_EN: 1; /* BITS[23:23] */
    uint32_t BNK24_EN: 1; /* BITS[24:24] */
    uint32_t BNK25_EN: 1; /* BITS[25:25] */
    uint32_t BNK26_EN: 1; /* BITS[26:26] */
    uint32_t BNK27_EN: 1; /* BITS[27:27] */
    uint32_t BNK28_EN: 1; /* BITS[28:28] */
    uint32_t BNK29_EN: 1; /* BITS[29:29] */
    uint32_t BNK30_EN: 1; /* BITS[30:30] */
    uint32_t BNK31_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BANKEN_CTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t BNK32_EN: 1; /* BITS[0:0] */
    uint32_t BNK33_EN: 1; /* BITS[1:1] */
    uint32_t BNK34_EN: 1; /* BITS[2:2] */
    uint32_t BNK35_EN: 1; /* BITS[3:3] */
    uint32_t BNK36_EN: 1; /* BITS[4:4] */
    uint32_t BNK37_EN: 1; /* BITS[5:5] */
    uint32_t BNK38_EN: 1; /* BITS[6:6] */
    uint32_t BNK39_EN: 1; /* BITS[7:7] */
    uint32_t BNK40_EN: 1; /* BITS[8:8] */
    uint32_t BNK41_EN: 1; /* BITS[9:9] */
    uint32_t BNK42_EN: 1; /* BITS[10:10] */
    uint32_t BNK43_EN: 1; /* BITS[11:11] */
    uint32_t BNK44_EN: 1; /* BITS[12:12] */
    uint32_t BNK45_EN: 1; /* BITS[13:13] */
    uint32_t BNK46_EN: 1; /* BITS[14:14] */
    uint32_t BNK47_EN: 1; /* BITS[15:15] */
    uint32_t BNK48_EN: 1; /* BITS[16:16] */
    uint32_t BNK49_EN: 1; /* BITS[17:17] */
    uint32_t BNK50_EN: 1; /* BITS[18:18] */
    uint32_t BNK51_EN: 1; /* BITS[19:19] */
    uint32_t BNK52_EN: 1; /* BITS[20:20] */
    uint32_t BNK53_EN: 1; /* BITS[21:21] */
    uint32_t BNK54_EN: 1; /* BITS[22:22] */
    uint32_t BNK55_EN: 1; /* BITS[23:23] */
    uint32_t BNK56_EN: 1; /* BITS[24:24] */
    uint32_t BNK57_EN: 1; /* BITS[25:25] */
    uint32_t BNK58_EN: 1; /* BITS[26:26] */
    uint32_t BNK59_EN: 1; /* BITS[27:27] */
    uint32_t BNK60_EN: 1; /* BITS[28:28] */
    uint32_t BNK61_EN: 1; /* BITS[29:29] */
    uint32_t BNK62_EN: 1; /* BITS[30:30] */
    uint32_t BNK63_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BANKEN_CTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t BNK64_EN: 1; /* BITS[0:0] */
    uint32_t BNK65_EN: 1; /* BITS[1:1] */
    uint32_t BNK66_EN: 1; /* BITS[2:2] */
    uint32_t BNK67_EN: 1; /* BITS[3:3] */
    uint32_t BNK68_EN: 1; /* BITS[4:4] */
    uint32_t BNK69_EN: 1; /* BITS[5:5] */
    uint32_t BNK70_EN: 1; /* BITS[6:6] */
    uint32_t BNK71_EN: 1; /* BITS[7:7] */
    uint32_t BNK72_EN: 1; /* BITS[8:8] */
    uint32_t BNK73_EN: 1; /* BITS[9:9] */
    uint32_t BNK74_EN: 1; /* BITS[10:10] */
    uint32_t BNK75_EN: 1; /* BITS[11:11] */
    uint32_t BNK76_EN: 1; /* BITS[12:12] */
    uint32_t BNK77_EN: 1; /* BITS[13:13] */
    uint32_t BNK78_EN: 1; /* BITS[14:14] */
    uint32_t BNK79_EN: 1; /* BITS[15:15] */
    uint32_t BNK80_EN: 1; /* BITS[16:16] */
    uint32_t BNK81_EN: 1; /* BITS[17:17] */
    uint32_t BNK82_EN: 1; /* BITS[18:18] */
    uint32_t BNK83_EN: 1; /* BITS[19:19] */
    uint32_t BNK84_EN: 1; /* BITS[20:20] */
    uint32_t BNK85_EN: 1; /* BITS[21:21] */
    uint32_t BNK86_EN: 1; /* BITS[22:22] */
    uint32_t BNK87_EN: 1; /* BITS[23:23] */
    uint32_t BNK88_EN: 1; /* BITS[24:24] */
    uint32_t BNK89_EN: 1; /* BITS[25:25] */
    uint32_t BNK90_EN: 1; /* BITS[26:26] */
    uint32_t BNK91_EN: 1; /* BITS[27:27] */
    uint32_t BNK92_EN: 1; /* BITS[28:28] */
    uint32_t BNK93_EN: 1; /* BITS[29:29] */
    uint32_t BNK94_EN: 1; /* BITS[30:30] */
    uint32_t BNK95_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BANKEN_CTL2_REG_s;

typedef union
{
  struct
  {
    uint32_t BNK96_EN : 1; /* BITS[0:0] */
    uint32_t BNK97_EN : 1; /* BITS[1:1] */
    uint32_t BNK98_EN : 1; /* BITS[2:2] */
    uint32_t BNK99_EN : 1; /* BITS[3:3] */
    uint32_t BNK100_EN: 1; /* BITS[4:4] */
    uint32_t BNK101_EN: 1; /* BITS[5:5] */
    uint32_t BNK102_EN: 1; /* BITS[6:6] */
    uint32_t BNK103_EN: 1; /* BITS[7:7] */
    uint32_t BNK104_EN: 1; /* BITS[8:8] */
    uint32_t BNK105_EN: 1; /* BITS[9:9] */
    uint32_t BNK106_EN: 1; /* BITS[10:10] */
    uint32_t BNK107_EN: 1; /* BITS[11:11] */
    uint32_t BNK108_EN: 1; /* BITS[12:12] */
    uint32_t BNK109_EN: 1; /* BITS[13:13] */
    uint32_t BNK110_EN: 1; /* BITS[14:14] */
    uint32_t BNK111_EN: 1; /* BITS[15:15] */
    uint32_t BNK112_EN: 1; /* BITS[16:16] */
    uint32_t BNK113_EN: 1; /* BITS[17:17] */
    uint32_t BNK114_EN: 1; /* BITS[18:18] */
    uint32_t BNK115_EN: 1; /* BITS[19:19] */
    uint32_t BNK116_EN: 1; /* BITS[20:20] */
    uint32_t BNK117_EN: 1; /* BITS[21:21] */
    uint32_t BNK118_EN: 1; /* BITS[22:22] */
    uint32_t BNK119_EN: 1; /* BITS[23:23] */
    uint32_t BNK120_EN: 1; /* BITS[24:24] */
    uint32_t BNK121_EN: 1; /* BITS[25:25] */
    uint32_t BNK122_EN: 1; /* BITS[26:26] */
    uint32_t BNK123_EN: 1; /* BITS[27:27] */
    uint32_t BNK124_EN: 1; /* BITS[28:28] */
    uint32_t BNK125_EN: 1; /* BITS[29:29] */
    uint32_t BNK126_EN: 1; /* BITS[30:30] */
    uint32_t BNK127_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BANKEN_CTL3_REG_s;

typedef union
{
  struct
  {
    uint32_t BLK0_EN : 1; /* BITS[0:0] */
    uint32_t BLK1_EN : 1; /* BITS[1:1] */
    uint32_t BLK2_EN : 1; /* BITS[2:2] */
    uint32_t BLK3_EN : 1; /* BITS[3:3] */
    uint32_t BLK4_EN : 1; /* BITS[4:4] */
    uint32_t BLK5_EN : 1; /* BITS[5:5] */
    uint32_t BLK6_EN : 1; /* BITS[6:6] */
    uint32_t BLK7_EN : 1; /* BITS[7:7] */
    uint32_t BLK8_EN : 1; /* BITS[8:8] */
    uint32_t BLK9_EN : 1; /* BITS[9:9] */
    uint32_t BLK10_EN: 1; /* BITS[10:10] */
    uint32_t BLK11_EN: 1; /* BITS[11:11] */
    uint32_t BLK12_EN: 1; /* BITS[12:12] */
    uint32_t BLK13_EN: 1; /* BITS[13:13] */
    uint32_t BLK14_EN: 1; /* BITS[14:14] */
    uint32_t BLK15_EN: 1; /* BITS[15:15] */
    uint32_t BLK16_EN: 1; /* BITS[16:16] */
    uint32_t BLK17_EN: 1; /* BITS[17:17] */
    uint32_t BLK18_EN: 1; /* BITS[18:18] */
    uint32_t BLK19_EN: 1; /* BITS[19:19] */
    uint32_t BLK20_EN: 1; /* BITS[20:20] */
    uint32_t BLK21_EN: 1; /* BITS[21:21] */
    uint32_t BLK22_EN: 1; /* BITS[22:22] */
    uint32_t BLK23_EN: 1; /* BITS[23:23] */
    uint32_t BLK24_EN: 1; /* BITS[24:24] */
    uint32_t BLK25_EN: 1; /* BITS[25:25] */
    uint32_t BLK26_EN: 1; /* BITS[26:26] */
    uint32_t BLK27_EN: 1; /* BITS[27:27] */
    uint32_t BLK28_EN: 1; /* BITS[28:28] */
    uint32_t BLK29_EN: 1; /* BITS[29:29] */
    uint32_t BLK30_EN: 1; /* BITS[30:30] */
    uint32_t BLK31_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BLKRET_CTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t BLK32_EN: 1; /* BITS[0:0] */
    uint32_t BLK33_EN: 1; /* BITS[1:1] */
    uint32_t BLK34_EN: 1; /* BITS[2:2] */
    uint32_t BLK35_EN: 1; /* BITS[3:3] */
    uint32_t BLK36_EN: 1; /* BITS[4:4] */
    uint32_t BLK37_EN: 1; /* BITS[5:5] */
    uint32_t BLK38_EN: 1; /* BITS[6:6] */
    uint32_t BLK39_EN: 1; /* BITS[7:7] */
    uint32_t BLK40_EN: 1; /* BITS[8:8] */
    uint32_t BLK41_EN: 1; /* BITS[9:9] */
    uint32_t BLK42_EN: 1; /* BITS[10:10] */
    uint32_t BLK43_EN: 1; /* BITS[11:11] */
    uint32_t BLK44_EN: 1; /* BITS[12:12] */
    uint32_t BLK45_EN: 1; /* BITS[13:13] */
    uint32_t BLK46_EN: 1; /* BITS[14:14] */
    uint32_t BLK47_EN: 1; /* BITS[15:15] */
    uint32_t BLK48_EN: 1; /* BITS[16:16] */
    uint32_t BLK49_EN: 1; /* BITS[17:17] */
    uint32_t BLK50_EN: 1; /* BITS[18:18] */
    uint32_t BLK51_EN: 1; /* BITS[19:19] */
    uint32_t BLK52_EN: 1; /* BITS[20:20] */
    uint32_t BLK53_EN: 1; /* BITS[21:21] */
    uint32_t BLK54_EN: 1; /* BITS[22:22] */
    uint32_t BLK55_EN: 1; /* BITS[23:23] */
    uint32_t BLK56_EN: 1; /* BITS[24:24] */
    uint32_t BLK57_EN: 1; /* BITS[25:25] */
    uint32_t BLK58_EN: 1; /* BITS[26:26] */
    uint32_t BLK59_EN: 1; /* BITS[27:27] */
    uint32_t BLK60_EN: 1; /* BITS[28:28] */
    uint32_t BLK61_EN: 1; /* BITS[29:29] */
    uint32_t BLK62_EN: 1; /* BITS[30:30] */
    uint32_t BLK63_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BLKRET_CTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t BLK64_EN: 1; /* BITS[0:0] */
    uint32_t BLK65_EN: 1; /* BITS[1:1] */
    uint32_t BLK66_EN: 1; /* BITS[2:2] */
    uint32_t BLK67_EN: 1; /* BITS[3:3] */
    uint32_t BLK68_EN: 1; /* BITS[4:4] */
    uint32_t BLK69_EN: 1; /* BITS[5:5] */
    uint32_t BLK70_EN: 1; /* BITS[6:6] */
    uint32_t BLK71_EN: 1; /* BITS[7:7] */
    uint32_t BLK72_EN: 1; /* BITS[8:8] */
    uint32_t BLK73_EN: 1; /* BITS[9:9] */
    uint32_t BLK74_EN: 1; /* BITS[10:10] */
    uint32_t BLK75_EN: 1; /* BITS[11:11] */
    uint32_t BLK76_EN: 1; /* BITS[12:12] */
    uint32_t BLK77_EN: 1; /* BITS[13:13] */
    uint32_t BLK78_EN: 1; /* BITS[14:14] */
    uint32_t BLK79_EN: 1; /* BITS[15:15] */
    uint32_t BLK80_EN: 1; /* BITS[16:16] */
    uint32_t BLK81_EN: 1; /* BITS[17:17] */
    uint32_t BLK82_EN: 1; /* BITS[18:18] */
    uint32_t BLK83_EN: 1; /* BITS[19:19] */
    uint32_t BLK84_EN: 1; /* BITS[20:20] */
    uint32_t BLK85_EN: 1; /* BITS[21:21] */
    uint32_t BLK86_EN: 1; /* BITS[22:22] */
    uint32_t BLK87_EN: 1; /* BITS[23:23] */
    uint32_t BLK88_EN: 1; /* BITS[24:24] */
    uint32_t BLK89_EN: 1; /* BITS[25:25] */
    uint32_t BLK90_EN: 1; /* BITS[26:26] */
    uint32_t BLK91_EN: 1; /* BITS[27:27] */
    uint32_t BLK92_EN: 1; /* BITS[28:28] */
    uint32_t BLK93_EN: 1; /* BITS[29:29] */
    uint32_t BLK94_EN: 1; /* BITS[30:30] */
    uint32_t BLK95_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BLKRET_CTL2_REG_s;

typedef union
{
  struct
  {
    uint32_t BLK96_EN : 1; /* BITS[0:0] */
    uint32_t BLK97_EN : 1; /* BITS[1:1] */
    uint32_t BLK98_EN : 1; /* BITS[2:2] */
    uint32_t BLK99_EN : 1; /* BITS[3:3] */
    uint32_t BLK100_EN: 1; /* BITS[4:4] */
    uint32_t BLK101_EN: 1; /* BITS[5:5] */
    uint32_t BLK102_EN: 1; /* BITS[6:6] */
    uint32_t BLK103_EN: 1; /* BITS[7:7] */
    uint32_t BLK104_EN: 1; /* BITS[8:8] */
    uint32_t BLK105_EN: 1; /* BITS[9:9] */
    uint32_t BLK106_EN: 1; /* BITS[10:10] */
    uint32_t BLK107_EN: 1; /* BITS[11:11] */
    uint32_t BLK108_EN: 1; /* BITS[12:12] */
    uint32_t BLK109_EN: 1; /* BITS[13:13] */
    uint32_t BLK110_EN: 1; /* BITS[14:14] */
    uint32_t BLK111_EN: 1; /* BITS[15:15] */
    uint32_t BLK112_EN: 1; /* BITS[16:16] */
    uint32_t BLK113_EN: 1; /* BITS[17:17] */
    uint32_t BLK114_EN: 1; /* BITS[18:18] */
    uint32_t BLK115_EN: 1; /* BITS[19:19] */
    uint32_t BLK116_EN: 1; /* BITS[20:20] */
    uint32_t BLK117_EN: 1; /* BITS[21:21] */
    uint32_t BLK118_EN: 1; /* BITS[22:22] */
    uint32_t BLK119_EN: 1; /* BITS[23:23] */
    uint32_t BLK120_EN: 1; /* BITS[24:24] */
    uint32_t BLK121_EN: 1; /* BITS[25:25] */
    uint32_t BLK122_EN: 1; /* BITS[26:26] */
    uint32_t BLK123_EN: 1; /* BITS[27:27] */
    uint32_t BLK124_EN: 1; /* BITS[28:28] */
    uint32_t BLK125_EN: 1; /* BITS[29:29] */
    uint32_t BLK126_EN: 1; /* BITS[30:30] */
    uint32_t BLK127_EN: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_BLKRET_CTL3_REG_s;

typedef union
{
  struct
  {
    uint32_t BNKEN_RDY : 1; /* BITS[0:0] */
    uint32_t BLKRET_RDY: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_SRAM_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t UNLKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_MASTER_UNLOCK_REG_s;

typedef union
{
  struct
  {
    uint32_t POR   : 1; /* BITS[0:0] */
    uint32_t REBOOT: 1; /* BITS[1:1] */
    uint32_t       : 6;
    uint32_t WKEY  : 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_RESET_REQ_REG_s;

typedef union
{
  struct
  {
    uint32_t SOFT     : 1; /* BITS[0:0] */
    uint32_t HARD     : 1; /* BITS[1:1] */
    uint32_t REBOOT   : 1; /* BITS[2:2] */
    uint32_t          : 5;
    uint32_t SOFT_OVER: 1; /* BITS[8:8] */
    uint32_t HARD_OVER: 1; /* BITS[9:9] */
    uint32_t RBT_OVER : 1; /* BITS[10:10] */
  } FIELD;
  uint32_t ALL;
} SYSCTL_A__SYS_RESET_STATOVER_REG_s;

typedef struct __attribute__((packed))
{
  SYSCTL_A__SYS_REBOOT_CTL_REG_s SYS_REBOOT_CTL; /* Offset: 0x0 */
  SYSCTL_A__SYS_NMI_CTLSTAT_REG_s SYS_NMI_CTLSTAT; /* Offset: 0x4 */
  SYSCTL_A__SYS_WDTRESET_CTL_REG_s SYS_WDTRESET_CTL; /* Offset: 0x8 */
  SYSCTL_A__SYS_PERIHALT_CTL_REG_s SYS_PERIHALT_CTL; /* Offset: 0xc */
  uint32_t SYS_SRAM_SIZE; /* Offset: 0x10 */
  uint32_t SYS_SRAM_NUMBANKS; /* Offset: 0x14 */
  uint32_t SYS_SRAM_NUMBLOCKS; /* Offset: 0x18 */
  uint8_t RESERVED0[4];
  uint32_t SYS_MAINFLASH_SIZE; /* Offset: 0x20 */
  uint32_t SYS_INFOFLASH_SIZE; /* Offset: 0x24 */
  uint8_t RESERVED1[8];
  SYSCTL_A__SYS_DIO_GLTFLT_CTL_REG_s SYS_DIO_GLTFLT_CTL; /* Offset: 0x30 */
  uint8_t RESERVED2[12];
  SYSCTL_A__SYS_SECDATA_UNLOCK_REG_s SYS_SECDATA_UNLOCK; /* Offset: 0x40 */
  uint8_t RESERVED3[12];
  SYSCTL_A__SYS_SRAM_BANKEN_CTL0_REG_s SYS_SRAM_BANKEN_CTL0; /* Offset: 0x50 */
  SYSCTL_A__SYS_SRAM_BANKEN_CTL1_REG_s SYS_SRAM_BANKEN_CTL1; /* Offset: 0x54 */
  SYSCTL_A__SYS_SRAM_BANKEN_CTL2_REG_s SYS_SRAM_BANKEN_CTL2; /* Offset: 0x58 */
  SYSCTL_A__SYS_SRAM_BANKEN_CTL3_REG_s SYS_SRAM_BANKEN_CTL3; /* Offset: 0x5c */
  uint8_t RESERVED4[16];
  SYSCTL_A__SYS_SRAM_BLKRET_CTL0_REG_s SYS_SRAM_BLKRET_CTL0; /* Offset: 0x70 */
  SYSCTL_A__SYS_SRAM_BLKRET_CTL1_REG_s SYS_SRAM_BLKRET_CTL1; /* Offset: 0x74 */
  SYSCTL_A__SYS_SRAM_BLKRET_CTL2_REG_s SYS_SRAM_BLKRET_CTL2; /* Offset: 0x78 */
  SYSCTL_A__SYS_SRAM_BLKRET_CTL3_REG_s SYS_SRAM_BLKRET_CTL3; /* Offset: 0x7c */
  uint8_t RESERVED5[16];
  SYSCTL_A__SYS_SRAM_STAT_REG_s SYS_SRAM_STAT; /* Offset: 0x90 */
  uint8_t RESERVED6[3948];
  SYSCTL_A__SYS_MASTER_UNLOCK_REG_s SYS_MASTER_UNLOCK; /* Offset: 0x1000 */
  uint32_t SYS_BOOTOVER_REQ0; /* Offset: 0x1004 */
  uint32_t SYS_BOOTOVER_REQ1; /* Offset: 0x1008 */
  uint32_t SYS_BOOTOVER_ACK; /* Offset: 0x100c */
  SYSCTL_A__SYS_RESET_REQ_REG_s SYS_RESET_REQ; /* Offset: 0x1010 */
  SYSCTL_A__SYS_RESET_STATOVER_REG_s SYS_RESET_STATOVER; /* Offset: 0x1014 */
} SYSCTL_A__REG_LIST_s;
#endif //  #ifdef __SYSCTL_A_H__
