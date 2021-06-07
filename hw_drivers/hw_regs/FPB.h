#ifndef __FPB_H__
#define __FPB_H__
typedef union
{
  struct
  {
    uint32_t ENABLE   : 1; /* BITS[0:0] */
    uint32_t          : 3;
    uint32_t NUM_CODE1: 4; /* BITS[7:4] */
    uint32_t NUM_LIT  : 4; /* BITS[11:8] */
    uint32_t NUM_CODE2: 2; /* BITS[13:12] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_CTRL_REG_s;

typedef union
{
  struct
  {
    uint32_t      : 4;
    uint32_t REMAP: 24; /* BITS[28:5] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_REMAP_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP0_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP1_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP2_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP3_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP4_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP5_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP6_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE : 1; /* BITS[0:0] */
    uint32_t        : 1;
    uint32_t COMP   : 27; /* BITS[28:2] */
    uint32_t        : 1;
    uint32_t REPLACE: 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} FPB__FP_COMP7_REG_s;

typedef struct __attribute__((packed))
{
  FPB__FP_CTRL_REG_s FP_CTRL; /* Offset: 0x0 */
  FPB__FP_REMAP_REG_s FP_REMAP; /* Offset: 0x4 */
  FPB__FP_COMP0_REG_s FP_COMP0; /* Offset: 0x8 */
  FPB__FP_COMP1_REG_s FP_COMP1; /* Offset: 0xc */
  FPB__FP_COMP2_REG_s FP_COMP2; /* Offset: 0x10 */
  FPB__FP_COMP3_REG_s FP_COMP3; /* Offset: 0x14 */
  FPB__FP_COMP4_REG_s FP_COMP4; /* Offset: 0x18 */
  FPB__FP_COMP5_REG_s FP_COMP5; /* Offset: 0x1c */
  FPB__FP_COMP6_REG_s FP_COMP6; /* Offset: 0x20 */
  FPB__FP_COMP7_REG_s FP_COMP7; /* Offset: 0x24 */
} FPB__REG_LIST_s;
#endif //  #ifdef __FPB_H__
