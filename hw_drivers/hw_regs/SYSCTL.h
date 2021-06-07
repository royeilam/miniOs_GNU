#ifndef __SYSCTL_H__
#define __SYSCTL_H__
typedef union
{
  struct
  {
    uint32_t REBOOT: 1; /* BITS[0:0] */
    uint32_t       : 7;
    uint32_t WKEY  : 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_REBOOT_CTL_REG_s;

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
} SYSCTL__SYS_NMI_CTLSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t TIMEOUT  : 1; /* BITS[0:0] */
    uint32_t VIOLATION: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_WDTRESET_CTL_REG_s;

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
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_PERIHALT_CTL_REG_s;

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
    uint32_t         : 8;
    uint32_t SRAM_RDY: 1; /* BITS[16:16] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_SRAM_BANKEN_REG_s;

typedef union
{
  struct
  {
    uint32_t BNK0_RET: 1; /* BITS[0:0] */
    uint32_t BNK1_RET: 1; /* BITS[1:1] */
    uint32_t BNK2_RET: 1; /* BITS[2:2] */
    uint32_t BNK3_RET: 1; /* BITS[3:3] */
    uint32_t BNK4_RET: 1; /* BITS[4:4] */
    uint32_t BNK5_RET: 1; /* BITS[5:5] */
    uint32_t BNK6_RET: 1; /* BITS[6:6] */
    uint32_t BNK7_RET: 1; /* BITS[7:7] */
    uint32_t         : 8;
    uint32_t SRAM_RDY: 1; /* BITS[16:16] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_SRAM_BANKRET_REG_s;

typedef union
{
  struct
  {
    uint32_t GLTCH_EN: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_DIO_GLTFLT_CTL_REG_s;

typedef union
{
  struct
  {
    uint32_t UNLKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_SECDATA_UNLOCK_REG_s;

typedef union
{
  struct
  {
    uint32_t UNLKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} SYSCTL__SYS_MASTER_UNLOCK_REG_s;

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
} SYSCTL__SYS_RESET_REQ_REG_s;

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
} SYSCTL__SYS_RESET_STATOVER_REG_s;

typedef struct __attribute__((packed))
{
  SYSCTL__SYS_REBOOT_CTL_REG_s SYS_REBOOT_CTL; /* Offset: 0x0 */
  SYSCTL__SYS_NMI_CTLSTAT_REG_s SYS_NMI_CTLSTAT; /* Offset: 0x4 */
  SYSCTL__SYS_WDTRESET_CTL_REG_s SYS_WDTRESET_CTL; /* Offset: 0x8 */
  SYSCTL__SYS_PERIHALT_CTL_REG_s SYS_PERIHALT_CTL; /* Offset: 0xc */
  uint32_t SYS_SRAM_SIZE; /* Offset: 0x10 */
  SYSCTL__SYS_SRAM_BANKEN_REG_s SYS_SRAM_BANKEN; /* Offset: 0x14 */
  SYSCTL__SYS_SRAM_BANKRET_REG_s SYS_SRAM_BANKRET; /* Offset: 0x18 */
  uint8_t RESERVED0[4];
  uint32_t SYS_FLASH_SIZE; /* Offset: 0x20 */
  uint8_t RESERVED1[12];
  SYSCTL__SYS_DIO_GLTFLT_CTL_REG_s SYS_DIO_GLTFLT_CTL; /* Offset: 0x30 */
  uint8_t RESERVED2[12];
  SYSCTL__SYS_SECDATA_UNLOCK_REG_s SYS_SECDATA_UNLOCK; /* Offset: 0x40 */
  uint8_t RESERVED3[4028];
  SYSCTL__SYS_MASTER_UNLOCK_REG_s SYS_MASTER_UNLOCK; /* Offset: 0x1000 */
  uint32_t SYS_BOOTOVER_REQ0; /* Offset: 0x1004 */
  uint32_t SYS_BOOTOVER_REQ1; /* Offset: 0x1008 */
  uint32_t SYS_BOOTOVER_ACK; /* Offset: 0x100c */
  SYSCTL__SYS_RESET_REQ_REG_s SYS_RESET_REQ; /* Offset: 0x1010 */
  SYSCTL__SYS_RESET_STATOVER_REG_s SYS_RESET_STATOVER; /* Offset: 0x1014 */
} SYSCTL__REG_LIST_s;
#endif //  #ifdef __SYSCTL_H__
