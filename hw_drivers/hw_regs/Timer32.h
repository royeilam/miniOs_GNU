#ifndef __TIMER32_H__
#define __TIMER32_H__
typedef union
{
  struct
  {
    uint32_t ONESHOT : 1; /* BITS[0:0] */
    uint32_t SIZE    : 1; /* BITS[1:1] */
    uint32_t PRESCALE: 2; /* BITS[3:2] */
    uint32_t         : 1;
    uint32_t IE      : 1; /* BITS[5:5] */
    uint32_t MODE    : 1; /* BITS[6:6] */
    uint32_t ENABLE  : 1; /* BITS[7:7] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32CONTROL1_REG_s;

typedef union
{
  struct
  {
    uint32_t RAW_IFG: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32RIS1_REG_s;

typedef union
{
  struct
  {
    uint32_t IFG: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32MIS1_REG_s;

typedef union
{
  struct
  {
    uint32_t ONESHOT : 1; /* BITS[0:0] */
    uint32_t SIZE    : 1; /* BITS[1:1] */
    uint32_t PRESCALE: 2; /* BITS[3:2] */
    uint32_t         : 1;
    uint32_t IE      : 1; /* BITS[5:5] */
    uint32_t MODE    : 1; /* BITS[6:6] */
    uint32_t ENABLE  : 1; /* BITS[7:7] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32CONTROL2_REG_s;

typedef union
{
  struct
  {
    uint32_t RAW_IFG: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32RIS2_REG_s;

typedef union
{
  struct
  {
    uint32_t IFG: 1; /* BITS[0:0] */
  } FIELD;
  uint32_t ALL;
} Timer32__T32MIS2_REG_s;

typedef struct __attribute__((packed))
{
  uint32_t T32LOAD1; /* Offset: 0x0 */
  uint32_t T32VALUE1; /* Offset: 0x4 */
  Timer32__T32CONTROL1_REG_s T32CONTROL1; /* Offset: 0x8 */
  uint32_t T32INTCLR1; /* Offset: 0xc */
  Timer32__T32RIS1_REG_s T32RIS1; /* Offset: 0x10 */
  Timer32__T32MIS1_REG_s T32MIS1; /* Offset: 0x14 */
  uint32_t T32BGLOAD1; /* Offset: 0x18 */
  uint8_t RESERVED0[4];
  uint32_t T32LOAD2; /* Offset: 0x20 */
  uint32_t T32VALUE2; /* Offset: 0x24 */
  Timer32__T32CONTROL2_REG_s T32CONTROL2; /* Offset: 0x28 */
  uint32_t T32INTCLR2; /* Offset: 0x2c */
  Timer32__T32RIS2_REG_s T32RIS2; /* Offset: 0x30 */
  Timer32__T32MIS2_REG_s T32MIS2; /* Offset: 0x34 */
  uint32_t T32BGLOAD2; /* Offset: 0x38 */
} Timer32__REG_LIST_s;
#endif //  #ifdef __TIMER32_H__
