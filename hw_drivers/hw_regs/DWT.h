#ifndef __DWT_H__
#define __DWT_H__
typedef union
{
  struct
  {
    uint32_t CYCCNTENA  : 1; /* BITS[0:0] */
    uint32_t POSTPRESET : 4; /* BITS[4:1] */
    uint32_t POSTCNT    : 4; /* BITS[8:5] */
    uint32_t CYCTAP     : 1; /* BITS[9:9] */
    uint32_t SYNCTAP    : 2; /* BITS[11:10] */
    uint32_t PCSAMPLEENA: 1; /* BITS[12:12] */
    uint32_t            : 3;
    uint32_t EXCTRCENA  : 1; /* BITS[16:16] */
    uint32_t CPIEVTENA  : 1; /* BITS[17:17] */
    uint32_t EXCEVTENA  : 1; /* BITS[18:18] */
    uint32_t SLEEPEVTENA: 1; /* BITS[19:19] */
    uint32_t LSUEVTENA  : 1; /* BITS[20:20] */
    uint32_t FOLDEVTENA : 1; /* BITS[21:21] */
    uint32_t CYCEVTENA  : 1; /* BITS[22:22] */
    uint32_t            : 1;
    uint32_t NOPRFCNT   : 1; /* BITS[24:24] */
    uint32_t NOCYCCNT   : 1; /* BITS[25:25] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_CTRL_REG_s;

typedef union
{
  struct
  {
    uint32_t CPICNT: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_CPICNT_REG_s;

typedef union
{
  struct
  {
    uint32_t EXCCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_EXCCNT_REG_s;

typedef union
{
  struct
  {
    uint32_t SLEEPCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_SLEEPCNT_REG_s;

typedef union
{
  struct
  {
    uint32_t LSUCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_LSUCNT_REG_s;

typedef union
{
  struct
  {
    uint32_t FOLDCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_FOLDCNT_REG_s;

typedef union
{
  struct
  {
    uint32_t MASK: 4; /* BITS[3:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_MASK0_REG_s;

typedef union
{
  struct
  {
    uint32_t FUNCTION  : 4; /* BITS[3:0] */
    uint32_t           : 1;
    uint32_t EMITRANGE : 1; /* BITS[5:5] */
    uint32_t           : 2;
    uint32_t DATAVMATCH: 1; /* BITS[8:8] */
    uint32_t LNK1ENA   : 1; /* BITS[9:9] */
    uint32_t DATAVSIZE : 2; /* BITS[11:10] */
    uint32_t DATAVADDR0: 4; /* BITS[15:12] */
    uint32_t DATAVADDR1: 4; /* BITS[19:16] */
    uint32_t           : 4;
    uint32_t MATCHED   : 1; /* BITS[24:24] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_FUNCTION0_REG_s;

typedef union
{
  struct
  {
    uint32_t MASK: 4; /* BITS[3:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_MASK1_REG_s;

typedef union
{
  struct
  {
    uint32_t FUNCTION  : 4; /* BITS[3:0] */
    uint32_t           : 1;
    uint32_t EMITRANGE : 1; /* BITS[5:5] */
    uint32_t           : 1;
    uint32_t CYCMATCH  : 1; /* BITS[7:7] */
    uint32_t DATAVMATCH: 1; /* BITS[8:8] */
    uint32_t LNK1ENA   : 1; /* BITS[9:9] */
    uint32_t DATAVSIZE : 2; /* BITS[11:10] */
    uint32_t DATAVADDR0: 4; /* BITS[15:12] */
    uint32_t DATAVADDR1: 4; /* BITS[19:16] */
    uint32_t           : 4;
    uint32_t MATCHED   : 1; /* BITS[24:24] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_FUNCTION1_REG_s;

typedef union
{
  struct
  {
    uint32_t MASK: 4; /* BITS[3:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_MASK2_REG_s;

typedef union
{
  struct
  {
    uint32_t FUNCTION  : 4; /* BITS[3:0] */
    uint32_t           : 1;
    uint32_t EMITRANGE : 1; /* BITS[5:5] */
    uint32_t           : 2;
    uint32_t DATAVMATCH: 1; /* BITS[8:8] */
    uint32_t LNK1ENA   : 1; /* BITS[9:9] */
    uint32_t DATAVSIZE : 2; /* BITS[11:10] */
    uint32_t DATAVADDR0: 4; /* BITS[15:12] */
    uint32_t DATAVADDR1: 4; /* BITS[19:16] */
    uint32_t           : 4;
    uint32_t MATCHED   : 1; /* BITS[24:24] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_FUNCTION2_REG_s;

typedef union
{
  struct
  {
    uint32_t MASK: 4; /* BITS[3:0] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_MASK3_REG_s;

typedef union
{
  struct
  {
    uint32_t FUNCTION  : 4; /* BITS[3:0] */
    uint32_t           : 1;
    uint32_t EMITRANGE : 1; /* BITS[5:5] */
    uint32_t           : 2;
    uint32_t DATAVMATCH: 1; /* BITS[8:8] */
    uint32_t LNK1ENA   : 1; /* BITS[9:9] */
    uint32_t DATAVSIZE : 2; /* BITS[11:10] */
    uint32_t DATAVADDR0: 4; /* BITS[15:12] */
    uint32_t DATAVADDR1: 4; /* BITS[19:16] */
    uint32_t           : 4;
    uint32_t MATCHED   : 1; /* BITS[24:24] */
  } FIELD;
  uint32_t ALL;
} DWT__DWT_FUNCTION3_REG_s;

typedef struct __attribute__((packed))
{
  DWT__DWT_CTRL_REG_s DWT_CTRL; /* Offset: 0x0 */
  uint32_t DWT_CYCCNT; /* Offset: 0x4 */
  DWT__DWT_CPICNT_REG_s DWT_CPICNT; /* Offset: 0x8 */
  DWT__DWT_EXCCNT_REG_s DWT_EXCCNT; /* Offset: 0xc */
  DWT__DWT_SLEEPCNT_REG_s DWT_SLEEPCNT; /* Offset: 0x10 */
  DWT__DWT_LSUCNT_REG_s DWT_LSUCNT; /* Offset: 0x14 */
  DWT__DWT_FOLDCNT_REG_s DWT_FOLDCNT; /* Offset: 0x18 */
  uint32_t DWT_PCSR; /* Offset: 0x1c */
  uint32_t DWT_COMP0; /* Offset: 0x20 */
  DWT__DWT_MASK0_REG_s DWT_MASK0; /* Offset: 0x24 */
  DWT__DWT_FUNCTION0_REG_s DWT_FUNCTION0; /* Offset: 0x28 */
  uint8_t RESERVED0[4];
  uint32_t DWT_COMP1; /* Offset: 0x30 */
  DWT__DWT_MASK1_REG_s DWT_MASK1; /* Offset: 0x34 */
  DWT__DWT_FUNCTION1_REG_s DWT_FUNCTION1; /* Offset: 0x38 */
  uint8_t RESERVED1[4];
  uint32_t DWT_COMP2; /* Offset: 0x40 */
  DWT__DWT_MASK2_REG_s DWT_MASK2; /* Offset: 0x44 */
  DWT__DWT_FUNCTION2_REG_s DWT_FUNCTION2; /* Offset: 0x48 */
  uint8_t RESERVED2[4];
  uint32_t DWT_COMP3; /* Offset: 0x50 */
  DWT__DWT_MASK3_REG_s DWT_MASK3; /* Offset: 0x54 */
  DWT__DWT_FUNCTION3_REG_s DWT_FUNCTION3; /* Offset: 0x58 */
} DWT__REG_LIST_s;
#endif //  #ifdef __DWT_H__
