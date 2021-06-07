#ifndef __RSTCTL_H__
#define __RSTCTL_H__
typedef union
{
  struct
  {
    uint32_t SOFT_REQ: 1; /* BITS[0:0] */
    uint32_t HARD_REQ: 1; /* BITS[1:1] */
    uint32_t         : 6;
    uint32_t RSTKEY  : 8; /* BITS[15:8] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_RESET_REQ_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_HARDRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_HARDRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_HARDRESET_SET_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_SOFTRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_SOFTRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t SRC0 : 1; /* BITS[0:0] */
    uint32_t SRC1 : 1; /* BITS[1:1] */
    uint32_t SRC2 : 1; /* BITS[2:2] */
    uint32_t SRC3 : 1; /* BITS[3:3] */
    uint32_t SRC4 : 1; /* BITS[4:4] */
    uint32_t SRC5 : 1; /* BITS[5:5] */
    uint32_t SRC6 : 1; /* BITS[6:6] */
    uint32_t SRC7 : 1; /* BITS[7:7] */
    uint32_t SRC8 : 1; /* BITS[8:8] */
    uint32_t SRC9 : 1; /* BITS[9:9] */
    uint32_t SRC10: 1; /* BITS[10:10] */
    uint32_t SRC11: 1; /* BITS[11:11] */
    uint32_t SRC12: 1; /* BITS[12:12] */
    uint32_t SRC13: 1; /* BITS[13:13] */
    uint32_t SRC14: 1; /* BITS[14:14] */
    uint32_t SRC15: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_SOFTRESET_SET_REG_s;

typedef union
{
  struct
  {
    uint32_t SVSL  : 1; /* BITS[0:0] */
    uint32_t SVSMH : 1; /* BITS[1:1] */
    uint32_t BGREF : 1; /* BITS[2:2] */
    uint32_t VCCDET: 1; /* BITS[3:3] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PSSRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PSSRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t LPM35: 1; /* BITS[0:0] */
    uint32_t LPM45: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PCMRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PCMRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t RSTNMI: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PINRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_PINRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t REBOOT: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_REBOOTRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_REBOOTRESET_CLR_REG_s;

typedef union
{
  struct
  {
    uint32_t DCOR_SHT: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_CSRESET_STAT_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} RSTCTL__RSTCTL_CSRESET_CLR_REG_s;

typedef struct __attribute__((packed))
{
  RSTCTL__RSTCTL_RESET_REQ_REG_s RSTCTL_RESET_REQ; /* Offset: 0x0 */
  RSTCTL__RSTCTL_HARDRESET_STAT_REG_s RSTCTL_HARDRESET_STAT; /* Offset: 0x4 */
  RSTCTL__RSTCTL_HARDRESET_CLR_REG_s RSTCTL_HARDRESET_CLR; /* Offset: 0x8 */
  RSTCTL__RSTCTL_HARDRESET_SET_REG_s RSTCTL_HARDRESET_SET; /* Offset: 0xc */
  RSTCTL__RSTCTL_SOFTRESET_STAT_REG_s RSTCTL_SOFTRESET_STAT; /* Offset: 0x10 */
  RSTCTL__RSTCTL_SOFTRESET_CLR_REG_s RSTCTL_SOFTRESET_CLR; /* Offset: 0x14 */
  RSTCTL__RSTCTL_SOFTRESET_SET_REG_s RSTCTL_SOFTRESET_SET; /* Offset: 0x18 */
  uint8_t RESERVED0[228];
  RSTCTL__RSTCTL_PSSRESET_STAT_REG_s RSTCTL_PSSRESET_STAT; /* Offset: 0x100 */
  RSTCTL__RSTCTL_PSSRESET_CLR_REG_s RSTCTL_PSSRESET_CLR; /* Offset: 0x104 */
  RSTCTL__RSTCTL_PCMRESET_STAT_REG_s RSTCTL_PCMRESET_STAT; /* Offset: 0x108 */
  RSTCTL__RSTCTL_PCMRESET_CLR_REG_s RSTCTL_PCMRESET_CLR; /* Offset: 0x10c */
  RSTCTL__RSTCTL_PINRESET_STAT_REG_s RSTCTL_PINRESET_STAT; /* Offset: 0x110 */
  RSTCTL__RSTCTL_PINRESET_CLR_REG_s RSTCTL_PINRESET_CLR; /* Offset: 0x114 */
  RSTCTL__RSTCTL_REBOOTRESET_STAT_REG_s RSTCTL_REBOOTRESET_STAT; /* Offset: 0x118 */
  RSTCTL__RSTCTL_REBOOTRESET_CLR_REG_s RSTCTL_REBOOTRESET_CLR; /* Offset: 0x11c */
  RSTCTL__RSTCTL_CSRESET_STAT_REG_s RSTCTL_CSRESET_STAT; /* Offset: 0x120 */
  RSTCTL__RSTCTL_CSRESET_CLR_REG_s RSTCTL_CSRESET_CLR; /* Offset: 0x124 */
} RSTCTL__REG_LIST_s;
#endif //  #ifdef __RSTCTL_H__
