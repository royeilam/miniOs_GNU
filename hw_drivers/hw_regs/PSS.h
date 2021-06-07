#ifndef __PSS_H__
#define __PSS_H__
typedef union
{
  struct
  {
    uint32_t PSSKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} PSS__PSSKEY_REG_s;

typedef union
{
  struct
  {
    uint32_t SVSMHOFF    : 1; /* BITS[0:0] */
    uint32_t SVSMHLP     : 1; /* BITS[1:1] */
    uint32_t SVSMHS      : 1; /* BITS[2:2] */
    uint32_t SVSMHTH     : 3; /* BITS[5:3] */
    uint32_t SVMHOE      : 1; /* BITS[6:6] */
    uint32_t SVMHOUTPOLAL: 1; /* BITS[7:7] */
    uint32_t             : 2;
    uint32_t DCDC_FORCE  : 1; /* BITS[10:10] */
    uint32_t             : 1;
    uint32_t VCORETRAN   : 2; /* BITS[13:12] */
  } FIELD;
  uint32_t ALL;
} PSS__PSSCTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t SVSMHIE: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} PSS__PSSIE_REG_s;

typedef union
{
  struct
  {
    uint32_t SVSMHIFG: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} PSS__PSSIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CLRSVSMHIFG: 1; /* BITS[1:1] */
  } FIELD;
  uint32_t ALL;
} PSS__PSSCLRIFG_REG_s;

typedef struct __attribute__((packed))
{
  PSS__PSSKEY_REG_s PSSKEY; /* Offset: 0x0 */
  PSS__PSSCTL0_REG_s PSSCTL0; /* Offset: 0x4 */
  uint8_t RESERVED0[44];
  PSS__PSSIE_REG_s PSSIE; /* Offset: 0x34 */
  PSS__PSSIFG_REG_s PSSIFG; /* Offset: 0x38 */
  PSS__PSSCLRIFG_REG_s PSSCLRIFG; /* Offset: 0x3c */
} PSS__REG_LIST_s;
#endif //  #ifdef __PSS_H__
