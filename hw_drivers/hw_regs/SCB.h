#ifndef __SCB_H__
#define __SCB_H__
typedef union
{
  struct
  {
    uint32_t REVISION   : 4; /* BITS[3:0] */
    uint32_t PARTNO     : 12; /* BITS[15:4] */
    uint32_t CONSTANT   : 4; /* BITS[19:16] */
    uint32_t VARIANT    : 4; /* BITS[23:20] */
    uint32_t IMPLEMENTER: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} SCB__CPUID_REG_s;

typedef union
{
  struct
  {
    uint32_t VECTACTIVE : 9; /* BITS[8:0] */
    uint32_t            : 2;
    uint32_t RETTOBASE  : 1; /* BITS[11:11] */
    uint32_t VECTPENDING: 6; /* BITS[17:12] */
    uint32_t            : 4;
    uint32_t ISRPENDING : 1; /* BITS[22:22] */
    uint32_t ISRPREEMPT : 1; /* BITS[23:23] */
    uint32_t            : 1;
    uint32_t PENDSTCLR  : 1; /* BITS[25:25] */
    uint32_t PENDSTSET  : 1; /* BITS[26:26] */
    uint32_t PENDSVCLR  : 1; /* BITS[27:27] */
    uint32_t PENDSVSET  : 1; /* BITS[28:28] */
    uint32_t            : 2;
    uint32_t NMIPENDSET : 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SCB__ICSR_REG_s;

typedef union
{
  struct
  {
    uint32_t        : 6;
    uint32_t TBLOFF : 22; /* BITS[28:7] */
    uint32_t TBLBASE: 1; /* BITS[29:29] */
  } FIELD;
  uint32_t ALL;
} SCB__VTOR_REG_s;

typedef union
{
  struct
  {
    uint32_t VECTRESET    : 1; /* BITS[0:0] */
    uint32_t VECTCLRACTIVE: 1; /* BITS[1:1] */
    uint32_t SYSRESETREQ  : 1; /* BITS[2:2] */
    uint32_t              : 5;
    uint32_t PRIGROUP     : 3; /* BITS[10:8] */
    uint32_t              : 4;
    uint32_t ENDIANESS    : 1; /* BITS[15:15] */
    uint32_t VECTKEY      : 16; /* BITS[31:16] */
  } FIELD;
  uint32_t ALL;
} SCB__AIRCR_REG_s;

typedef union
{
  struct
  {
    uint32_t SLEEPONEXIT: 1; /* BITS[1:1] */
    uint32_t SLEEPDEEP  : 1; /* BITS[2:2] */
    uint32_t            : 1;
    uint32_t SEVONPEND  : 1; /* BITS[4:4] */
  } FIELD;
  uint32_t ALL;
} SCB__SCR_REG_s;

typedef union
{
  struct
  {
    uint32_t NONBASETHREDENA: 1; /* BITS[0:0] */
    uint32_t USERSETMPEND   : 1; /* BITS[1:1] */
    uint32_t                : 1;
    uint32_t UNALIGN_TRP    : 1; /* BITS[3:3] */
    uint32_t DIV_0_TRP      : 1; /* BITS[4:4] */
    uint32_t                : 3;
    uint32_t BFHFNMIGN      : 1; /* BITS[8:8] */
    uint32_t STKALIGN       : 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} SCB__CCR_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_4: 8; /* BITS[7:0] */
    uint32_t PRI_5: 8; /* BITS[15:8] */
    uint32_t PRI_6: 8; /* BITS[23:16] */
    uint32_t PRI_7: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} SCB__SHPR1_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_8 : 8; /* BITS[7:0] */
    uint32_t PRI_9 : 8; /* BITS[15:8] */
    uint32_t PRI_10: 8; /* BITS[23:16] */
    uint32_t PRI_11: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} SCB__SHPR2_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_12: 8; /* BITS[7:0] */
    uint32_t PRI_13: 8; /* BITS[15:8] */
    uint32_t PRI_14: 8; /* BITS[23:16] */
    uint32_t PRI_15: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} SCB__SHPR3_REG_s;

typedef union
{
  struct
  {
    uint32_t MEMFAULTACT   : 1; /* BITS[0:0] */
    uint32_t BUSFAULTACT   : 1; /* BITS[1:1] */
    uint32_t               : 1;
    uint32_t USGFAULTACT   : 1; /* BITS[3:3] */
    uint32_t               : 3;
    uint32_t SVCALLACT     : 1; /* BITS[7:7] */
    uint32_t MONITORACT    : 1; /* BITS[8:8] */
    uint32_t               : 1;
    uint32_t PENDSVACT     : 1; /* BITS[10:10] */
    uint32_t SYSTICKACT    : 1; /* BITS[11:11] */
    uint32_t USGFAULTPENDED: 1; /* BITS[12:12] */
    uint32_t MEMFAULTPENDED: 1; /* BITS[13:13] */
    uint32_t BUSFAULTPENDED: 1; /* BITS[14:14] */
    uint32_t SVCALLPENDED  : 1; /* BITS[15:15] */
    uint32_t MEMFAULTENA   : 1; /* BITS[16:16] */
    uint32_t BUSFAULTENA   : 1; /* BITS[17:17] */
    uint32_t USGFAULTENA   : 1; /* BITS[18:18] */
  } FIELD;
  uint32_t ALL;
} SCB__SHCSR_REG_s;

typedef union
{
  struct
  {
    uint32_t IACCVIOL   : 1; /* BITS[0:0] */
    uint32_t DACCVIOL   : 1; /* BITS[1:1] */
    uint32_t            : 1;
    uint32_t MUNSTKERR  : 1; /* BITS[3:3] */
    uint32_t MSTKERR    : 1; /* BITS[4:4] */
    uint32_t MLSPERR    : 1; /* BITS[5:5] */
    uint32_t            : 1;
    uint32_t MMARVALID  : 1; /* BITS[7:7] */
    uint32_t IBUSERR    : 1; /* BITS[8:8] */
    uint32_t PRECISERR  : 1; /* BITS[9:9] */
    uint32_t IMPRECISERR: 1; /* BITS[10:10] */
    uint32_t UNSTKERR   : 1; /* BITS[11:11] */
    uint32_t STKERR     : 1; /* BITS[12:12] */
    uint32_t LSPERR     : 1; /* BITS[13:13] */
    uint32_t            : 1;
    uint32_t BFARVALID  : 1; /* BITS[15:15] */
    uint32_t UNDEFINSTR : 1; /* BITS[16:16] */
    uint32_t INVSTATE   : 1; /* BITS[17:17] */
    uint32_t INVPC      : 1; /* BITS[18:18] */
    uint32_t NOCP       : 1; /* BITS[19:19] */
    uint32_t            : 4;
    uint32_t UNALIGNED  : 1; /* BITS[24:24] */
    uint32_t DIVBYZERO  : 1; /* BITS[25:25] */
  } FIELD;
  uint32_t ALL;
} SCB__CFSR_REG_s;

typedef union
{
  struct
  {
    uint32_t VECTTBL : 1; /* BITS[1:1] */
    uint32_t         : 28;
    uint32_t FORCED  : 1; /* BITS[30:30] */
    uint32_t DEBUGEVT: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} SCB__HFSR_REG_s;

typedef union
{
  struct
  {
    uint32_t HALTED  : 1; /* BITS[0:0] */
    uint32_t BKPT    : 1; /* BITS[1:1] */
    uint32_t DWTTRAP : 1; /* BITS[2:2] */
    uint32_t VCATCH  : 1; /* BITS[3:3] */
    uint32_t EXTERNAL: 1; /* BITS[4:4] */
  } FIELD;
  uint32_t ALL;
} SCB__DFSR_REG_s;

typedef union
{
  struct
  {
    uint32_t STATE0: 4; /* BITS[3:0] */
    uint32_t STATE1: 4; /* BITS[7:4] */
  } FIELD;
  uint32_t ALL;
} SCB__PFR0_REG_s;

typedef union
{
  struct
  {
    uint32_t                                  : 7;
    uint32_t MICROCONTROLLER_PROGRAMMERS_MODEL: 4; /* BITS[11:8] */
  } FIELD;
  uint32_t ALL;
} SCB__PFR1_REG_s;

typedef union
{
  struct
  {
    uint32_t                            : 19;
    uint32_t MICROCONTROLLER_DEBUG_MODEL: 4; /* BITS[23:20] */
  } FIELD;
  uint32_t ALL;
} SCB__DFR0_REG_s;

typedef union
{
  struct
  {
    uint32_t                           : 3;
    uint32_t PMSA_SUPPORT              : 4; /* BITS[7:4] */
    uint32_t CACHE_COHERENCE_SUPPORT   : 4; /* BITS[11:8] */
    uint32_t OUTER_NON_SHARABLE_SUPPORT: 4; /* BITS[15:12] */
    uint32_t                           : 4;
    uint32_t AUXILIARY_REGISTER_SUPPORT: 4; /* BITS[23:20] */
  } FIELD;
  uint32_t ALL;
} SCB__MMFR0_REG_s;

typedef union
{
  struct
  {
    uint32_t                            : 23;
    uint32_t WAIT_FOR_INTERRUPT_STALLING: 4; /* BITS[27:24] */
  } FIELD;
  uint32_t ALL;
} SCB__MMFR2_REG_s;

typedef union
{
  struct
  {
    uint32_t                 : 3;
    uint32_t BITCOUNT_INSTRS : 4; /* BITS[7:4] */
    uint32_t BITFIELD_INSTRS : 4; /* BITS[11:8] */
    uint32_t CMPBRANCH_INSTRS: 4; /* BITS[15:12] */
    uint32_t COPROC_INSTRS   : 4; /* BITS[19:16] */
    uint32_t DEBUG_INSTRS    : 4; /* BITS[23:20] */
    uint32_t DIVIDE_INSTRS   : 4; /* BITS[27:24] */
  } FIELD;
  uint32_t ALL;
} SCB__ISAR0_REG_s;

typedef union
{
  struct
  {
    uint32_t                 : 11;
    uint32_t EXTEND_INSRS    : 4; /* BITS[15:12] */
    uint32_t IFTHEN_INSTRS   : 4; /* BITS[19:16] */
    uint32_t IMMEDIATE_INSTRS: 4; /* BITS[23:20] */
    uint32_t INTERWORK_INSTRS: 4; /* BITS[27:24] */
  } FIELD;
  uint32_t ALL;
} SCB__ISAR1_REG_s;

typedef union
{
  struct
  {
    uint32_t LOADSTORE_INSTRS     : 4; /* BITS[3:0] */
    uint32_t MEMHINT_INSTRS       : 4; /* BITS[7:4] */
    uint32_t MULTIACCESSINT_INSTRS: 4; /* BITS[11:8] */
    uint32_t MULT_INSTRS          : 4; /* BITS[15:12] */
    uint32_t MULTS_INSTRS         : 4; /* BITS[19:16] */
    uint32_t MULTU_INSTRS         : 4; /* BITS[23:20] */
    uint32_t                      : 4;
    uint32_t REVERSAL_INSTRS      : 4; /* BITS[31:28] */
  } FIELD;
  uint32_t ALL;
} SCB__ISAR2_REG_s;

typedef union
{
  struct
  {
    uint32_t SATRUATE_INSTRS : 4; /* BITS[3:0] */
    uint32_t SIMD_INSTRS     : 4; /* BITS[7:4] */
    uint32_t SVC_INSTRS      : 4; /* BITS[11:8] */
    uint32_t SYNCPRIM_INSTRS : 4; /* BITS[15:12] */
    uint32_t TABBRANCH_INSTRS: 4; /* BITS[19:16] */
    uint32_t THUMBCOPY_INSTRS: 4; /* BITS[23:20] */
    uint32_t TRUENOP_INSTRS  : 4; /* BITS[27:24] */
  } FIELD;
  uint32_t ALL;
} SCB__ISAR3_REG_s;

typedef union
{
  struct
  {
    uint32_t UNPRIV_INSTRS       : 4; /* BITS[3:0] */
    uint32_t WITHSHIFTS_INSTRS   : 4; /* BITS[7:4] */
    uint32_t WRITEBACK_INSTRS    : 4; /* BITS[11:8] */
    uint32_t                     : 4;
    uint32_t BARRIER_INSTRS      : 4; /* BITS[19:16] */
    uint32_t SYNCPRIM_INSTRS_FRAC: 4; /* BITS[23:20] */
    uint32_t PSR_M_INSTRS        : 4; /* BITS[27:24] */
  } FIELD;
  uint32_t ALL;
} SCB__ISAR4_REG_s;

typedef union
{
  struct
  {
    uint32_t     : 19;
    uint32_t CP10: 2; /* BITS[21:20] */
    uint32_t CP11: 2; /* BITS[23:22] */
  } FIELD;
  uint32_t ALL;
} SCB__CPACR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[3328];
  SCB__CPUID_REG_s CPUID; /* Offset: 0xd00 */
  SCB__ICSR_REG_s ICSR; /* Offset: 0xd04 */
  SCB__VTOR_REG_s VTOR; /* Offset: 0xd08 */
  SCB__AIRCR_REG_s AIRCR; /* Offset: 0xd0c */
  SCB__SCR_REG_s SCR; /* Offset: 0xd10 */
  SCB__CCR_REG_s CCR; /* Offset: 0xd14 */
  SCB__SHPR1_REG_s SHPR1; /* Offset: 0xd18 */
  SCB__SHPR2_REG_s SHPR2; /* Offset: 0xd1c */
  SCB__SHPR3_REG_s SHPR3; /* Offset: 0xd20 */
  SCB__SHCSR_REG_s SHCSR; /* Offset: 0xd24 */
  SCB__CFSR_REG_s CFSR; /* Offset: 0xd28 */
  SCB__HFSR_REG_s HFSR; /* Offset: 0xd2c */
  SCB__DFSR_REG_s DFSR; /* Offset: 0xd30 */
  uint32_t MMFAR; /* Offset: 0xd34 */
  uint32_t BFAR; /* Offset: 0xd38 */
  uint32_t AFSR; /* Offset: 0xd3c */
  SCB__PFR0_REG_s PFR0; /* Offset: 0xd40 */
  SCB__PFR1_REG_s PFR1; /* Offset: 0xd44 */
  SCB__DFR0_REG_s DFR0; /* Offset: 0xd48 */
  uint32_t AFR0; /* Offset: 0xd4c */
  SCB__MMFR0_REG_s MMFR0; /* Offset: 0xd50 */
  uint32_t MMFR1; /* Offset: 0xd54 */
  SCB__MMFR2_REG_s MMFR2; /* Offset: 0xd58 */
  uint32_t MMFR3; /* Offset: 0xd5c */
  SCB__ISAR0_REG_s ISAR0; /* Offset: 0xd60 */
  SCB__ISAR1_REG_s ISAR1; /* Offset: 0xd64 */
  SCB__ISAR2_REG_s ISAR2; /* Offset: 0xd68 */
  SCB__ISAR3_REG_s ISAR3; /* Offset: 0xd6c */
  SCB__ISAR4_REG_s ISAR4; /* Offset: 0xd70 */
  uint8_t RESERVED1[20];
  SCB__CPACR_REG_s CPACR; /* Offset: 0xd88 */
} SCB__REG_LIST_s;
#endif //  #ifdef __SCB_H__
