#ifndef __NVIC_H__
#define __NVIC_H__
typedef union
{
  struct
  {
    uint32_t PRI_0: 8; /* BITS[7:0] */
    uint32_t PRI_1: 8; /* BITS[15:8] */
    uint32_t PRI_2: 8; /* BITS[23:16] */
    uint32_t PRI_3: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR0_REG_s;

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
} NVIC__IPR1_REG_s;

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
} NVIC__IPR2_REG_s;

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
} NVIC__IPR3_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_16: 8; /* BITS[7:0] */
    uint32_t PRI_17: 8; /* BITS[15:8] */
    uint32_t PRI_18: 8; /* BITS[23:16] */
    uint32_t PRI_19: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR4_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_20: 8; /* BITS[7:0] */
    uint32_t PRI_21: 8; /* BITS[15:8] */
    uint32_t PRI_22: 8; /* BITS[23:16] */
    uint32_t PRI_23: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR5_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_24: 8; /* BITS[7:0] */
    uint32_t PRI_25: 8; /* BITS[15:8] */
    uint32_t PRI_26: 8; /* BITS[23:16] */
    uint32_t PRI_27: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR6_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_28: 8; /* BITS[7:0] */
    uint32_t PRI_29: 8; /* BITS[15:8] */
    uint32_t PRI_30: 8; /* BITS[23:16] */
    uint32_t PRI_31: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR7_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_32: 8; /* BITS[7:0] */
    uint32_t PRI_33: 8; /* BITS[15:8] */
    uint32_t PRI_34: 8; /* BITS[23:16] */
    uint32_t PRI_35: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR8_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_36: 8; /* BITS[7:0] */
    uint32_t PRI_37: 8; /* BITS[15:8] */
    uint32_t PRI_38: 8; /* BITS[23:16] */
    uint32_t PRI_39: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR9_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_40: 8; /* BITS[7:0] */
    uint32_t PRI_41: 8; /* BITS[15:8] */
    uint32_t PRI_42: 8; /* BITS[23:16] */
    uint32_t PRI_43: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR10_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_44: 8; /* BITS[7:0] */
    uint32_t PRI_45: 8; /* BITS[15:8] */
    uint32_t PRI_46: 8; /* BITS[23:16] */
    uint32_t PRI_47: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR11_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_48: 8; /* BITS[7:0] */
    uint32_t PRI_49: 8; /* BITS[15:8] */
    uint32_t PRI_50: 8; /* BITS[23:16] */
    uint32_t PRI_51: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR12_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_52: 8; /* BITS[7:0] */
    uint32_t PRI_53: 8; /* BITS[15:8] */
    uint32_t PRI_54: 8; /* BITS[23:16] */
    uint32_t PRI_55: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR13_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_56: 8; /* BITS[7:0] */
    uint32_t PRI_57: 8; /* BITS[15:8] */
    uint32_t PRI_58: 8; /* BITS[23:16] */
    uint32_t PRI_59: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR14_REG_s;

typedef union
{
  struct
  {
    uint32_t PRI_60: 8; /* BITS[7:0] */
    uint32_t PRI_61: 8; /* BITS[15:8] */
    uint32_t PRI_62: 8; /* BITS[23:16] */
    uint32_t PRI_63: 8; /* BITS[31:24] */
  } FIELD;
  uint32_t ALL;
} NVIC__IPR15_REG_s;

typedef union
{
  struct
  {
    uint32_t INTID: 9; /* BITS[8:0] */
  } FIELD;
  uint32_t ALL;
} NVIC__STIR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[256];
  uint32_t ISER0; /* Offset: 0x100 */
  uint32_t ISER1; /* Offset: 0x104 */
  uint8_t RESERVED1[120];
  uint32_t ICER0; /* Offset: 0x180 */
  uint32_t ICER1; /* Offset: 0x184 */
  uint8_t RESERVED2[120];
  uint32_t ISPR0; /* Offset: 0x200 */
  uint32_t ISPR1; /* Offset: 0x204 */
  uint8_t RESERVED3[120];
  uint32_t ICPR0; /* Offset: 0x280 */
  uint32_t ICPR1; /* Offset: 0x284 */
  uint8_t RESERVED4[120];
  uint32_t IABR0; /* Offset: 0x300 */
  uint32_t IABR1; /* Offset: 0x304 */
  uint8_t RESERVED5[248];
  NVIC__IPR0_REG_s IPR0; /* Offset: 0x400 */
  NVIC__IPR1_REG_s IPR1; /* Offset: 0x404 */
  NVIC__IPR2_REG_s IPR2; /* Offset: 0x408 */
  NVIC__IPR3_REG_s IPR3; /* Offset: 0x40c */
  NVIC__IPR4_REG_s IPR4; /* Offset: 0x410 */
  NVIC__IPR5_REG_s IPR5; /* Offset: 0x414 */
  NVIC__IPR6_REG_s IPR6; /* Offset: 0x418 */
  NVIC__IPR7_REG_s IPR7; /* Offset: 0x41c */
  NVIC__IPR8_REG_s IPR8; /* Offset: 0x420 */
  NVIC__IPR9_REG_s IPR9; /* Offset: 0x424 */
  NVIC__IPR10_REG_s IPR10; /* Offset: 0x428 */
  NVIC__IPR11_REG_s IPR11; /* Offset: 0x42c */
  NVIC__IPR12_REG_s IPR12; /* Offset: 0x430 */
  NVIC__IPR13_REG_s IPR13; /* Offset: 0x434 */
  NVIC__IPR14_REG_s IPR14; /* Offset: 0x438 */
  NVIC__IPR15_REG_s IPR15; /* Offset: 0x43c */
  uint8_t RESERVED6[2752];
  NVIC__STIR_REG_s STIR; /* Offset: 0xf00 */
} NVIC__REG_LIST_s;
#endif //  #ifdef __NVIC_H__
