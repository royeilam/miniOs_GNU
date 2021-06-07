#ifndef __CS_H__
#define __CS_H__
typedef union
{
  struct
  {
    uint32_t CSKEY: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} CS__CSKEY_REG_s;

typedef union
{
  struct
  {
    uint32_t DCOTUNE: 10; /* BITS[9:0] */
    uint32_t        : 6;
    uint32_t DCORSEL: 3; /* BITS[18:16] */
    uint32_t        : 3;
    uint32_t DCORES : 1; /* BITS[22:22] */
    uint32_t DCOEN  : 1; /* BITS[23:23] */
  } FIELD;
  uint32_t ALL;
} CS__CSCTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t SELM : 3; /* BITS[2:0] */
    uint32_t      : 1;
    uint32_t SELS : 3; /* BITS[6:4] */
    uint32_t      : 1;
    uint32_t SELA : 3; /* BITS[10:8] */
    uint32_t      : 1;
    uint32_t SELB : 1; /* BITS[12:12] */
    uint32_t      : 3;
    uint32_t DIVM : 3; /* BITS[18:16] */
    uint32_t      : 1;
    uint32_t DIVHS: 3; /* BITS[22:20] */
    uint32_t      : 1;
    uint32_t DIVA : 3; /* BITS[26:24] */
    uint32_t      : 1;
    uint32_t DIVS : 3; /* BITS[30:28] */
  } FIELD;
  uint32_t ALL;
} CS__CSCTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t LFXTDRIVE : 2; /* BITS[1:0] */
    uint32_t           : 5;
    uint32_t LFXTAGCOFF: 1; /* BITS[7:7] */
    uint32_t LFXT_EN   : 1; /* BITS[8:8] */
    uint32_t LFXTBYPASS: 1; /* BITS[9:9] */
    uint32_t           : 6;
    uint32_t HFXTDRIVE : 1; /* BITS[16:16] */
    uint32_t           : 3;
    uint32_t HFXTFREQ  : 3; /* BITS[22:20] */
    uint32_t           : 1;
    uint32_t HFXT_EN   : 1; /* BITS[24:24] */
    uint32_t HFXTBYPASS: 1; /* BITS[25:25] */
  } FIELD;
  uint32_t ALL;
} CS__CSCTL2_REG_s;

typedef union
{
  struct
  {
    uint32_t FCNTLF    : 2; /* BITS[1:0] */
    uint32_t RFCNTLF   : 1; /* BITS[2:2] */
    uint32_t FCNTLF_EN : 1; /* BITS[3:3] */
    uint32_t FCNTHF    : 2; /* BITS[5:4] */
    uint32_t RFCNTHF   : 1; /* BITS[6:6] */
    uint32_t FCNTHF_EN : 1; /* BITS[7:7] */
    uint32_t FCNTHF2   : 2; /* BITS[9:8] */
    uint32_t RFCNTHF2  : 1; /* BITS[10:10] */
    uint32_t FCNTHF2_EN: 1; /* BITS[11:11] */
  } FIELD;
  uint32_t ALL;
} CS__CSCTL3_REG_s;

typedef union
{
  struct
  {
    uint32_t ACLK_EN  : 1; /* BITS[0:0] */
    uint32_t MCLK_EN  : 1; /* BITS[1:1] */
    uint32_t HSMCLK_EN: 1; /* BITS[2:2] */
    uint32_t SMCLK_EN : 1; /* BITS[3:3] */
    uint32_t          : 4;
    uint32_t VLO_EN   : 1; /* BITS[8:8] */
    uint32_t REFO_EN  : 1; /* BITS[9:9] */
    uint32_t MODOSC_EN: 1; /* BITS[10:10] */
    uint32_t          : 4;
    uint32_t REFOFSEL : 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} CS__CSCLKEN_REG_s;

typedef union
{
  struct
  {
    uint32_t DCO_ON      : 1; /* BITS[0:0] */
    uint32_t DCOBIAS_ON  : 1; /* BITS[1:1] */
    uint32_t HFXT_ON     : 1; /* BITS[2:2] */
    uint32_t HFXT2_ON    : 1; /* BITS[3:3] */
    uint32_t MODOSC_ON   : 1; /* BITS[4:4] */
    uint32_t VLO_ON      : 1; /* BITS[5:5] */
    uint32_t LFXT_ON     : 1; /* BITS[6:6] */
    uint32_t REFO_ON     : 1; /* BITS[7:7] */
    uint32_t             : 8;
    uint32_t ACLK_ON     : 1; /* BITS[16:16] */
    uint32_t MCLK_ON     : 1; /* BITS[17:17] */
    uint32_t HSMCLK_ON   : 1; /* BITS[18:18] */
    uint32_t SMCLK_ON    : 1; /* BITS[19:19] */
    uint32_t MODCLK_ON   : 1; /* BITS[20:20] */
    uint32_t VLOCLK_ON   : 1; /* BITS[21:21] */
    uint32_t LFXTCLK_ON  : 1; /* BITS[22:22] */
    uint32_t REFOCLK_ON  : 1; /* BITS[23:23] */
    uint32_t ACLK_READY  : 1; /* BITS[24:24] */
    uint32_t MCLK_READY  : 1; /* BITS[25:25] */
    uint32_t HSMCLK_READY: 1; /* BITS[26:26] */
    uint32_t SMCLK_READY : 1; /* BITS[27:27] */
    uint32_t BCLK_READY  : 1; /* BITS[28:28] */
  } FIELD;
  uint32_t ALL;
} CS__CSSTAT_REG_s;

typedef union
{
  struct
  {
    uint32_t LFXTIE    : 1; /* BITS[0:0] */
    uint32_t HFXTIE    : 1; /* BITS[1:1] */
    uint32_t HFXT2IE   : 1; /* BITS[2:2] */
    uint32_t           : 3;
    uint32_t DCOR_OPNIE: 1; /* BITS[6:6] */
    uint32_t           : 1;
    uint32_t FCNTLFIE  : 1; /* BITS[8:8] */
    uint32_t FCNTHFIE  : 1; /* BITS[9:9] */
    uint32_t FCNTHF2IE : 1; /* BITS[10:10] */
    uint32_t           : 1;
    uint32_t PLLOOLIE  : 1; /* BITS[12:12] */
    uint32_t PLLLOSIE  : 1; /* BITS[13:13] */
    uint32_t PLLOORIE  : 1; /* BITS[14:14] */
    uint32_t CALIE     : 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} CS__CSIE_REG_s;

typedef union
{
  struct
  {
    uint32_t LFXTIFG    : 1; /* BITS[0:0] */
    uint32_t HFXTIFG    : 1; /* BITS[1:1] */
    uint32_t HFXT2IFG   : 1; /* BITS[2:2] */
    uint32_t            : 2;
    uint32_t DCOR_SHTIFG: 1; /* BITS[5:5] */
    uint32_t DCOR_OPNIFG: 1; /* BITS[6:6] */
    uint32_t            : 1;
    uint32_t FCNTLFIFG  : 1; /* BITS[8:8] */
    uint32_t FCNTHFIFG  : 1; /* BITS[9:9] */
    uint32_t            : 1;
    uint32_t FCNTHF2IFG : 1; /* BITS[11:11] */
    uint32_t PLLOOLIFG  : 1; /* BITS[12:12] */
    uint32_t PLLLOSIFG  : 1; /* BITS[13:13] */
    uint32_t PLLOORIFG  : 1; /* BITS[14:14] */
    uint32_t CALIFG     : 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} CS__CSIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CLR_LFXTIFG    : 1; /* BITS[0:0] */
    uint32_t CLR_HFXTIFG    : 1; /* BITS[1:1] */
    uint32_t CLR_HFXT2IFG   : 1; /* BITS[2:2] */
    uint32_t                : 3;
    uint32_t CLR_DCOR_OPNIFG: 1; /* BITS[6:6] */
    uint32_t                : 1;
    uint32_t CLR_FCNTLFIFG  : 1; /* BITS[8:8] */
    uint32_t CLR_FCNTHFIFG  : 1; /* BITS[9:9] */
    uint32_t CLR_FCNTHF2IFG : 1; /* BITS[10:10] */
    uint32_t                : 1;
    uint32_t CLR_PLLOOLIFG  : 1; /* BITS[12:12] */
    uint32_t CLR_PLLLOSIFG  : 1; /* BITS[13:13] */
    uint32_t CLR_PLLOORIFG  : 1; /* BITS[14:14] */
    uint32_t CLR_CALIFG     : 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} CS__CSCLRIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t SET_LFXTIFG    : 1; /* BITS[0:0] */
    uint32_t SET_HFXTIFG    : 1; /* BITS[1:1] */
    uint32_t SET_HFXT2IFG   : 1; /* BITS[2:2] */
    uint32_t                : 3;
    uint32_t SET_DCOR_OPNIFG: 1; /* BITS[6:6] */
    uint32_t                : 1;
    uint32_t SET_FCNTLFIFG  : 1; /* BITS[8:8] */
    uint32_t SET_FCNTHFIFG  : 1; /* BITS[9:9] */
    uint32_t SET_FCNTHF2IFG : 1; /* BITS[10:10] */
    uint32_t                : 1;
    uint32_t SET_PLLOOLIFG  : 1; /* BITS[12:12] */
    uint32_t SET_PLLLOSIFG  : 1; /* BITS[13:13] */
    uint32_t SET_PLLOORIFG  : 1; /* BITS[14:14] */
    uint32_t SET_CALIFG     : 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} CS__CSSETIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t DCO_TCCAL      : 2; /* BITS[1:0] */
    uint32_t                : 14;
    uint32_t DCO_FCAL_RSEL04: 10; /* BITS[25:16] */
  } FIELD;
  uint32_t ALL;
} CS__CSDCOERCAL0_REG_s;

typedef union
{
  struct
  {
    uint32_t DCO_FCAL_RSEL5: 10; /* BITS[9:0] */
  } FIELD;
  uint32_t ALL;
} CS__CSDCOERCAL1_REG_s;

typedef struct __attribute__((packed))
{
  CS__CSKEY_REG_s CSKEY; /* Offset: 0x0 */
  CS__CSCTL0_REG_s CSCTL0; /* Offset: 0x4 */
  CS__CSCTL1_REG_s CSCTL1; /* Offset: 0x8 */
  CS__CSCTL2_REG_s CSCTL2; /* Offset: 0xc */
  CS__CSCTL3_REG_s CSCTL3; /* Offset: 0x10 */
  uint8_t RESERVED0[28];
  CS__CSCLKEN_REG_s CSCLKEN; /* Offset: 0x30 */
  CS__CSSTAT_REG_s CSSTAT; /* Offset: 0x34 */
  uint8_t RESERVED1[8];
  CS__CSIE_REG_s CSIE; /* Offset: 0x40 */
  uint8_t RESERVED2[4];
  CS__CSIFG_REG_s CSIFG; /* Offset: 0x48 */
  uint8_t RESERVED3[4];
  CS__CSCLRIFG_REG_s CSCLRIFG; /* Offset: 0x50 */
  uint8_t RESERVED4[4];
  CS__CSSETIFG_REG_s CSSETIFG; /* Offset: 0x58 */
  uint8_t RESERVED5[4];
  CS__CSDCOERCAL0_REG_s CSDCOERCAL0; /* Offset: 0x60 */
  CS__CSDCOERCAL1_REG_s CSDCOERCAL1; /* Offset: 0x64 */
} CS__REG_LIST_s;
#endif //  #ifdef __CS_H__
