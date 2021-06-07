#ifndef __COMP_E_H__
#define __COMP_E_H__
typedef union
{
  struct
  {
    uint16_t CEIPSEL: 4; /* BITS[3:0] */
    uint16_t        : 3;
    uint16_t CEIPEN : 1; /* BITS[7:7] */
    uint16_t CEIMSEL: 4; /* BITS[11:8] */
    uint16_t        : 3;
    uint16_t CEIMEN : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} COMP_E__CECTL0_REG_s;

typedef union
{
  struct
  {
    uint16_t CEOUT   : 1; /* BITS[0:0] */
    uint16_t CEOUTPOL: 1; /* BITS[1:1] */
    uint16_t CEF     : 1; /* BITS[2:2] */
    uint16_t CEIES   : 1; /* BITS[3:3] */
    uint16_t CESHORT : 1; /* BITS[4:4] */
    uint16_t CEEX    : 1; /* BITS[5:5] */
    uint16_t CEFDLY  : 2; /* BITS[7:6] */
    uint16_t CEPWRMD : 2; /* BITS[9:8] */
    uint16_t CEON    : 1; /* BITS[10:10] */
    uint16_t CEMRVL  : 1; /* BITS[11:11] */
    uint16_t CEMRVS  : 1; /* BITS[12:12] */
  } FIELD;
  uint16_t ALL;
} COMP_E__CECTL1_REG_s;

typedef union
{
  struct
  {
    uint16_t CEREF0  : 5; /* BITS[4:0] */
    uint16_t CERSEL  : 1; /* BITS[5:5] */
    uint16_t CERS    : 2; /* BITS[7:6] */
    uint16_t CEREF1  : 5; /* BITS[12:8] */
    uint16_t CEREFL  : 2; /* BITS[14:13] */
    uint16_t CEREFACC: 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} COMP_E__CECTL2_REG_s;

typedef union
{
  struct
  {
    uint16_t CEPD0 : 1; /* BITS[0:0] */
    uint16_t CEPD1 : 1; /* BITS[1:1] */
    uint16_t CEPD2 : 1; /* BITS[2:2] */
    uint16_t CEPD3 : 1; /* BITS[3:3] */
    uint16_t CEPD4 : 1; /* BITS[4:4] */
    uint16_t CEPD5 : 1; /* BITS[5:5] */
    uint16_t CEPD6 : 1; /* BITS[6:6] */
    uint16_t CEPD7 : 1; /* BITS[7:7] */
    uint16_t CEPD8 : 1; /* BITS[8:8] */
    uint16_t CEPD9 : 1; /* BITS[9:9] */
    uint16_t CEPD10: 1; /* BITS[10:10] */
    uint16_t CEPD11: 1; /* BITS[11:11] */
    uint16_t CEPD12: 1; /* BITS[12:12] */
    uint16_t CEPD13: 1; /* BITS[13:13] */
    uint16_t CEPD14: 1; /* BITS[14:14] */
    uint16_t CEPD15: 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} COMP_E__CECTL3_REG_s;

typedef union
{
  struct
  {
    uint16_t CEIFG   : 1; /* BITS[0:0] */
    uint16_t CEIIFG  : 1; /* BITS[1:1] */
    uint16_t         : 2;
    uint16_t CERDYIFG: 1; /* BITS[4:4] */
    uint16_t         : 3;
    uint16_t CEIE    : 1; /* BITS[8:8] */
    uint16_t CEIIE   : 1; /* BITS[9:9] */
    uint16_t         : 2;
    uint16_t CERDYIE : 1; /* BITS[12:12] */
  } FIELD;
  uint16_t ALL;
} COMP_E__CEINT_REG_s;

typedef struct __attribute__((packed))
{
  COMP_E__CECTL0_REG_s CECTL0; /* Offset: 0x0 */
  COMP_E__CECTL1_REG_s CECTL1; /* Offset: 0x2 */
  COMP_E__CECTL2_REG_s CECTL2; /* Offset: 0x4 */
  COMP_E__CECTL3_REG_s CECTL3; /* Offset: 0x6 */
  uint8_t RESERVED0[4];
  COMP_E__CEINT_REG_s CEINT; /* Offset: 0xc */
  uint16_t CEIV; /* Offset: 0xe */
} COMP_E__REG_LIST_s;
#endif //  #ifdef __COMP_E_H__
