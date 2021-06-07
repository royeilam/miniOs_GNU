#ifndef __FPU_H__
#define __FPU_H__
typedef union
{
  struct
  {
    uint32_t LSPACT: 1; /* BITS[0:0] */
    uint32_t USER  : 1; /* BITS[1:1] */
    uint32_t       : 1;
    uint32_t THREAD: 1; /* BITS[3:3] */
    uint32_t HFRDY : 1; /* BITS[4:4] */
    uint32_t MMRDY : 1; /* BITS[5:5] */
    uint32_t BFRDY : 1; /* BITS[6:6] */
    uint32_t       : 1;
    uint32_t MONRDY: 1; /* BITS[8:8] */
    uint32_t       : 21;
    uint32_t LSPEN : 1; /* BITS[30:30] */
    uint32_t ASPEN : 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} FPU__FPCCR_REG_s;

typedef union
{
  struct
  {
    uint32_t        : 1;
    uint32_t ADDRESS: 29; /* BITS[30:2] */
  } FIELD;
  uint32_t ALL;
} FPU__FPCAR_REG_s;

typedef union
{
  struct
  {
    uint32_t      : 21;
    uint32_t RMODE: 2; /* BITS[23:22] */
    uint32_t FZ   : 1; /* BITS[24:24] */
    uint32_t DN   : 1; /* BITS[25:25] */
    uint32_t AHP  : 1; /* BITS[26:26] */
  } FIELD;
  uint32_t ALL;
} FPU__FPDSCR_REG_s;

typedef union
{
  struct
  {
    uint32_t A_SIMD_REGISTERS     : 4; /* BITS[3:0] */
    uint32_t SINGLE_PRECISION     : 4; /* BITS[7:4] */
    uint32_t DOUBLE_PRECISION     : 4; /* BITS[11:8] */
    uint32_t FP_EXCEPTION_TRAPPING: 4; /* BITS[15:12] */
    uint32_t DIVIDE               : 4; /* BITS[19:16] */
    uint32_t SQUARE_ROOT          : 4; /* BITS[23:20] */
    uint32_t SHORT_VECTORS        : 4; /* BITS[27:24] */
    uint32_t FP_ROUNDING_MODES    : 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} FPU__MVFR0_REG_s;

typedef union
{
  struct
  {
    uint32_t FTZ_MODE    : 4; /* BITS[3:0] */
    uint32_t D_NAN_MODE  : 4; /* BITS[7:4] */
    uint32_t             : 16;
    uint32_t FP_HPFP     : 4; /* BITS[27:24] */
    uint32_t FP_FUSED_MAC: 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} FPU__MVFR1_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[3892];
  FPU__FPCCR_REG_s FPCCR; /* Offset: 0xf34 */
  FPU__FPCAR_REG_s FPCAR; /* Offset: 0xf38 */
  FPU__FPDSCR_REG_s FPDSCR; /* Offset: 0xf3c */
  FPU__MVFR0_REG_s MVFR0; /* Offset: 0xf40 */
  FPU__MVFR1_REG_s MVFR1; /* Offset: 0xf44 */
} FPU__REG_LIST_s;
#endif //  #ifdef __FPU_H__
