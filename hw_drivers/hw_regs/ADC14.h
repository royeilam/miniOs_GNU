#ifndef __ADC14_H__
#define __ADC14_H__
typedef union
{
  struct
  {
    uint32_t ADC14SC    : 1; /* BITS[0:0] */
    uint32_t ADC14ENC   : 1; /* BITS[1:1] */
    uint32_t            : 2;
    uint32_t ADC14ON    : 1; /* BITS[4:4] */
    uint32_t            : 2;
    uint32_t ADC14MSC   : 1; /* BITS[7:7] */
    uint32_t ADC14SHT0  : 4; /* BITS[11:8] */
    uint32_t ADC14SHT1  : 4; /* BITS[15:12] */
    uint32_t ADC14BUSY  : 1; /* BITS[16:16] */
    uint32_t ADC14CONSEQ: 2; /* BITS[18:17] */
    uint32_t ADC14SSEL  : 3; /* BITS[21:19] */
    uint32_t ADC14DIV   : 3; /* BITS[24:22] */
    uint32_t ADC14ISSH  : 1; /* BITS[25:25] */
    uint32_t ADC14SHP   : 1; /* BITS[26:26] */
    uint32_t ADC14SHS   : 3; /* BITS[29:27] */
    uint32_t ADC14PDIV  : 2; /* BITS[31:30] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14CTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14PWRMD    : 2; /* BITS[1:0] */
    uint32_t ADC14REFBURST : 1; /* BITS[2:2] */
    uint32_t ADC14DF       : 1; /* BITS[3:3] */
    uint32_t ADC14RES      : 2; /* BITS[5:4] */
    uint32_t               : 10;
    uint32_t ADC14CSTARTADD: 5; /* BITS[20:16] */
    uint32_t               : 1;
    uint32_t ADC14BATMAP   : 1; /* BITS[22:22] */
    uint32_t ADC14TCMAP    : 1; /* BITS[23:23] */
    uint32_t ADC14CH0MAP   : 1; /* BITS[24:24] */
    uint32_t ADC14CH1MAP   : 1; /* BITS[25:25] */
    uint32_t ADC14CH2MAP   : 1; /* BITS[26:26] */
    uint32_t ADC14CH3MAP   : 1; /* BITS[27:27] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14CTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14LO0: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14LO0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14HI0: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14HI0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14LO1: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14LO1_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14HI1: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14HI1_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL2_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL3_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL4_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL5_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL6_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL7_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL8_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL9_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL10_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL11_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL12_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL13_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL14_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL15_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL16_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL17_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL18_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL19_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL20_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL21_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL22_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL23_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL24_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL25_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL26_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL27_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL28_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL29_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL30_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INCH  : 5; /* BITS[4:0] */
    uint32_t            : 2;
    uint32_t ADC14EOS   : 1; /* BITS[7:7] */
    uint32_t ADC14VRSEL : 4; /* BITS[11:8] */
    uint32_t            : 1;
    uint32_t ADC14DIF   : 1; /* BITS[13:13] */
    uint32_t ADC14WINC  : 1; /* BITS[14:14] */
    uint32_t ADC14WINCTH: 1; /* BITS[15:15] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MCTL31_REG_s;

typedef union
{
  struct
  {
    uint32_t Co0versio0_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM0_REG_s;

typedef union
{
  struct
  {
    uint32_t Co1versio1_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM1_REG_s;

typedef union
{
  struct
  {
    uint32_t Co2versio2_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM2_REG_s;

typedef union
{
  struct
  {
    uint32_t Co3versio3_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM3_REG_s;

typedef union
{
  struct
  {
    uint32_t Co4versio4_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM4_REG_s;

typedef union
{
  struct
  {
    uint32_t Co5versio5_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM5_REG_s;

typedef union
{
  struct
  {
    uint32_t Co6versio6_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM6_REG_s;

typedef union
{
  struct
  {
    uint32_t Co7versio7_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM7_REG_s;

typedef union
{
  struct
  {
    uint32_t Co8versio8_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM8_REG_s;

typedef union
{
  struct
  {
    uint32_t Co9versio9_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM9_REG_s;

typedef union
{
  struct
  {
    uint32_t Co10versio10_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM10_REG_s;

typedef union
{
  struct
  {
    uint32_t Co11versio11_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM11_REG_s;

typedef union
{
  struct
  {
    uint32_t Co12versio12_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM12_REG_s;

typedef union
{
  struct
  {
    uint32_t Co13versio13_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM13_REG_s;

typedef union
{
  struct
  {
    uint32_t Co14versio14_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM14_REG_s;

typedef union
{
  struct
  {
    uint32_t Co15versio15_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM15_REG_s;

typedef union
{
  struct
  {
    uint32_t Co16versio16_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM16_REG_s;

typedef union
{
  struct
  {
    uint32_t Co17versio17_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM17_REG_s;

typedef union
{
  struct
  {
    uint32_t Co18versio18_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM18_REG_s;

typedef union
{
  struct
  {
    uint32_t Co19versio19_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM19_REG_s;

typedef union
{
  struct
  {
    uint32_t Co20versio20_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM20_REG_s;

typedef union
{
  struct
  {
    uint32_t Co21versio21_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM21_REG_s;

typedef union
{
  struct
  {
    uint32_t Co22versio22_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM22_REG_s;

typedef union
{
  struct
  {
    uint32_t Co23versio23_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM23_REG_s;

typedef union
{
  struct
  {
    uint32_t Co24versio24_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM24_REG_s;

typedef union
{
  struct
  {
    uint32_t Co25versio25_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM25_REG_s;

typedef union
{
  struct
  {
    uint32_t Co26versio26_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM26_REG_s;

typedef union
{
  struct
  {
    uint32_t Co27versio27_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM27_REG_s;

typedef union
{
  struct
  {
    uint32_t Co28versio28_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM28_REG_s;

typedef union
{
  struct
  {
    uint32_t Co29versio29_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM29_REG_s;

typedef union
{
  struct
  {
    uint32_t Co30versio30_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM30_REG_s;

typedef union
{
  struct
  {
    uint32_t Co31versio31_Results: 16; /* BITS[15:0] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14MEM31_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14IE0 : 1; /* BITS[0:0] */
    uint32_t ADC14IE1 : 1; /* BITS[1:1] */
    uint32_t ADC14IE2 : 1; /* BITS[2:2] */
    uint32_t ADC14IE3 : 1; /* BITS[3:3] */
    uint32_t ADC14IE4 : 1; /* BITS[4:4] */
    uint32_t ADC14IE5 : 1; /* BITS[5:5] */
    uint32_t ADC14IE6 : 1; /* BITS[6:6] */
    uint32_t ADC14IE7 : 1; /* BITS[7:7] */
    uint32_t ADC14IE8 : 1; /* BITS[8:8] */
    uint32_t ADC14IE9 : 1; /* BITS[9:9] */
    uint32_t ADC14IE10: 1; /* BITS[10:10] */
    uint32_t ADC14IE11: 1; /* BITS[11:11] */
    uint32_t ADC14IE12: 1; /* BITS[12:12] */
    uint32_t ADC14IE13: 1; /* BITS[13:13] */
    uint32_t ADC14IE14: 1; /* BITS[14:14] */
    uint32_t ADC14IE15: 1; /* BITS[15:15] */
    uint32_t ADC14IE16: 1; /* BITS[16:16] */
    uint32_t ADC14IE17: 1; /* BITS[17:17] */
    uint32_t ADC14IE18: 1; /* BITS[18:18] */
    uint32_t ADC14IE19: 1; /* BITS[19:19] */
    uint32_t ADC14IE20: 1; /* BITS[20:20] */
    uint32_t ADC14IE21: 1; /* BITS[21:21] */
    uint32_t ADC14IE22: 1; /* BITS[22:22] */
    uint32_t ADC14IE23: 1; /* BITS[23:23] */
    uint32_t ADC14IE24: 1; /* BITS[24:24] */
    uint32_t ADC14IE25: 1; /* BITS[25:25] */
    uint32_t ADC14IE26: 1; /* BITS[26:26] */
    uint32_t ADC14IE27: 1; /* BITS[27:27] */
    uint32_t ADC14IE28: 1; /* BITS[28:28] */
    uint32_t ADC14IE29: 1; /* BITS[29:29] */
    uint32_t ADC14IE30: 1; /* BITS[30:30] */
    uint32_t ADC14IE31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14IER0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INIE : 1; /* BITS[1:1] */
    uint32_t ADC14LOIE : 1; /* BITS[2:2] */
    uint32_t ADC14HIIE : 1; /* BITS[3:3] */
    uint32_t ADC14OVIE : 1; /* BITS[4:4] */
    uint32_t ADC14TOVIE: 1; /* BITS[5:5] */
    uint32_t ADC14RDYIE: 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14IER1_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14IFG0 : 1; /* BITS[0:0] */
    uint32_t ADC14IFG1 : 1; /* BITS[1:1] */
    uint32_t ADC14IFG2 : 1; /* BITS[2:2] */
    uint32_t ADC14IFG3 : 1; /* BITS[3:3] */
    uint32_t ADC14IFG4 : 1; /* BITS[4:4] */
    uint32_t ADC14IFG5 : 1; /* BITS[5:5] */
    uint32_t ADC14IFG6 : 1; /* BITS[6:6] */
    uint32_t ADC14IFG7 : 1; /* BITS[7:7] */
    uint32_t ADC14IFG8 : 1; /* BITS[8:8] */
    uint32_t ADC14IFG9 : 1; /* BITS[9:9] */
    uint32_t ADC14IFG10: 1; /* BITS[10:10] */
    uint32_t ADC14IFG11: 1; /* BITS[11:11] */
    uint32_t ADC14IFG12: 1; /* BITS[12:12] */
    uint32_t ADC14IFG13: 1; /* BITS[13:13] */
    uint32_t ADC14IFG14: 1; /* BITS[14:14] */
    uint32_t ADC14IFG15: 1; /* BITS[15:15] */
    uint32_t ADC14IFG16: 1; /* BITS[16:16] */
    uint32_t ADC14IFG17: 1; /* BITS[17:17] */
    uint32_t ADC14IFG18: 1; /* BITS[18:18] */
    uint32_t ADC14IFG19: 1; /* BITS[19:19] */
    uint32_t ADC14IFG20: 1; /* BITS[20:20] */
    uint32_t ADC14IFG21: 1; /* BITS[21:21] */
    uint32_t ADC14IFG22: 1; /* BITS[22:22] */
    uint32_t ADC14IFG23: 1; /* BITS[23:23] */
    uint32_t ADC14IFG24: 1; /* BITS[24:24] */
    uint32_t ADC14IFG25: 1; /* BITS[25:25] */
    uint32_t ADC14IFG26: 1; /* BITS[26:26] */
    uint32_t ADC14IFG27: 1; /* BITS[27:27] */
    uint32_t ADC14IFG28: 1; /* BITS[28:28] */
    uint32_t ADC14IFG29: 1; /* BITS[29:29] */
    uint32_t ADC14IFG30: 1; /* BITS[30:30] */
    uint32_t ADC14IFG31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14IFGR0_REG_s;

typedef union
{
  struct
  {
    uint32_t ADC14INIFG : 1; /* BITS[1:1] */
    uint32_t ADC14LOIFG : 1; /* BITS[2:2] */
    uint32_t ADC14HIIFG : 1; /* BITS[3:3] */
    uint32_t ADC14OVIFG : 1; /* BITS[4:4] */
    uint32_t ADC14TOVIFG: 1; /* BITS[5:5] */
    uint32_t ADC14RDYIFG: 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14IFGR1_REG_s;

typedef union
{
  struct
  {
    uint32_t CLRADC14IFG0 : 1; /* BITS[0:0] */
    uint32_t CLRADC14IFG1 : 1; /* BITS[1:1] */
    uint32_t CLRADC14IFG2 : 1; /* BITS[2:2] */
    uint32_t CLRADC14IFG3 : 1; /* BITS[3:3] */
    uint32_t CLRADC14IFG4 : 1; /* BITS[4:4] */
    uint32_t CLRADC14IFG5 : 1; /* BITS[5:5] */
    uint32_t CLRADC14IFG6 : 1; /* BITS[6:6] */
    uint32_t CLRADC14IFG7 : 1; /* BITS[7:7] */
    uint32_t CLRADC14IFG8 : 1; /* BITS[8:8] */
    uint32_t CLRADC14IFG9 : 1; /* BITS[9:9] */
    uint32_t CLRADC14IFG10: 1; /* BITS[10:10] */
    uint32_t CLRADC14IFG11: 1; /* BITS[11:11] */
    uint32_t CLRADC14IFG12: 1; /* BITS[12:12] */
    uint32_t CLRADC14IFG13: 1; /* BITS[13:13] */
    uint32_t CLRADC14IFG14: 1; /* BITS[14:14] */
    uint32_t CLRADC14IFG15: 1; /* BITS[15:15] */
    uint32_t CLRADC14IFG16: 1; /* BITS[16:16] */
    uint32_t CLRADC14IFG17: 1; /* BITS[17:17] */
    uint32_t CLRADC14IFG18: 1; /* BITS[18:18] */
    uint32_t CLRADC14IFG19: 1; /* BITS[19:19] */
    uint32_t CLRADC14IFG20: 1; /* BITS[20:20] */
    uint32_t CLRADC14IFG21: 1; /* BITS[21:21] */
    uint32_t CLRADC14IFG22: 1; /* BITS[22:22] */
    uint32_t CLRADC14IFG23: 1; /* BITS[23:23] */
    uint32_t CLRADC14IFG24: 1; /* BITS[24:24] */
    uint32_t CLRADC14IFG25: 1; /* BITS[25:25] */
    uint32_t CLRADC14IFG26: 1; /* BITS[26:26] */
    uint32_t CLRADC14IFG27: 1; /* BITS[27:27] */
    uint32_t CLRADC14IFG28: 1; /* BITS[28:28] */
    uint32_t CLRADC14IFG29: 1; /* BITS[29:29] */
    uint32_t CLRADC14IFG30: 1; /* BITS[30:30] */
    uint32_t CLRADC14IFG31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14CLRIFGR0_REG_s;

typedef union
{
  struct
  {
    uint32_t CLRADC14INIFG : 1; /* BITS[1:1] */
    uint32_t CLRADC14LOIFG : 1; /* BITS[2:2] */
    uint32_t CLRADC14HIIFG : 1; /* BITS[3:3] */
    uint32_t CLRADC14OVIFG : 1; /* BITS[4:4] */
    uint32_t CLRADC14TOVIFG: 1; /* BITS[5:5] */
    uint32_t CLRADC14RDYIFG: 1; /* BITS[6:6] */
  } FIELD;
  uint32_t ALL;
} ADC14__ADC14CLRIFGR1_REG_s;

typedef struct __attribute__((packed))
{
  ADC14__ADC14CTL0_REG_s ADC14CTL0; /* Offset: 0x0 */
  ADC14__ADC14CTL1_REG_s ADC14CTL1; /* Offset: 0x4 */
  ADC14__ADC14LO0_REG_s ADC14LO0; /* Offset: 0x8 */
  ADC14__ADC14HI0_REG_s ADC14HI0; /* Offset: 0xc */
  ADC14__ADC14LO1_REG_s ADC14LO1; /* Offset: 0x10 */
  ADC14__ADC14HI1_REG_s ADC14HI1; /* Offset: 0x14 */
  ADC14__ADC14MCTL0_REG_s ADC14MCTL0; /* Offset: 0x18 */
  ADC14__ADC14MCTL1_REG_s ADC14MCTL1; /* Offset: 0x1c */
  ADC14__ADC14MCTL2_REG_s ADC14MCTL2; /* Offset: 0x20 */
  ADC14__ADC14MCTL3_REG_s ADC14MCTL3; /* Offset: 0x24 */
  ADC14__ADC14MCTL4_REG_s ADC14MCTL4; /* Offset: 0x28 */
  ADC14__ADC14MCTL5_REG_s ADC14MCTL5; /* Offset: 0x2c */
  ADC14__ADC14MCTL6_REG_s ADC14MCTL6; /* Offset: 0x30 */
  ADC14__ADC14MCTL7_REG_s ADC14MCTL7; /* Offset: 0x34 */
  ADC14__ADC14MCTL8_REG_s ADC14MCTL8; /* Offset: 0x38 */
  ADC14__ADC14MCTL9_REG_s ADC14MCTL9; /* Offset: 0x3c */
  ADC14__ADC14MCTL10_REG_s ADC14MCTL10; /* Offset: 0x40 */
  ADC14__ADC14MCTL11_REG_s ADC14MCTL11; /* Offset: 0x44 */
  ADC14__ADC14MCTL12_REG_s ADC14MCTL12; /* Offset: 0x48 */
  ADC14__ADC14MCTL13_REG_s ADC14MCTL13; /* Offset: 0x4c */
  ADC14__ADC14MCTL14_REG_s ADC14MCTL14; /* Offset: 0x50 */
  ADC14__ADC14MCTL15_REG_s ADC14MCTL15; /* Offset: 0x54 */
  ADC14__ADC14MCTL16_REG_s ADC14MCTL16; /* Offset: 0x58 */
  ADC14__ADC14MCTL17_REG_s ADC14MCTL17; /* Offset: 0x5c */
  ADC14__ADC14MCTL18_REG_s ADC14MCTL18; /* Offset: 0x60 */
  ADC14__ADC14MCTL19_REG_s ADC14MCTL19; /* Offset: 0x64 */
  ADC14__ADC14MCTL20_REG_s ADC14MCTL20; /* Offset: 0x68 */
  ADC14__ADC14MCTL21_REG_s ADC14MCTL21; /* Offset: 0x6c */
  ADC14__ADC14MCTL22_REG_s ADC14MCTL22; /* Offset: 0x70 */
  ADC14__ADC14MCTL23_REG_s ADC14MCTL23; /* Offset: 0x74 */
  ADC14__ADC14MCTL24_REG_s ADC14MCTL24; /* Offset: 0x78 */
  ADC14__ADC14MCTL25_REG_s ADC14MCTL25; /* Offset: 0x7c */
  ADC14__ADC14MCTL26_REG_s ADC14MCTL26; /* Offset: 0x80 */
  ADC14__ADC14MCTL27_REG_s ADC14MCTL27; /* Offset: 0x84 */
  ADC14__ADC14MCTL28_REG_s ADC14MCTL28; /* Offset: 0x88 */
  ADC14__ADC14MCTL29_REG_s ADC14MCTL29; /* Offset: 0x8c */
  ADC14__ADC14MCTL30_REG_s ADC14MCTL30; /* Offset: 0x90 */
  ADC14__ADC14MCTL31_REG_s ADC14MCTL31; /* Offset: 0x94 */
  ADC14__ADC14MEM0_REG_s ADC14MEM0; /* Offset: 0x98 */
  ADC14__ADC14MEM1_REG_s ADC14MEM1; /* Offset: 0x9c */
  ADC14__ADC14MEM2_REG_s ADC14MEM2; /* Offset: 0xa0 */
  ADC14__ADC14MEM3_REG_s ADC14MEM3; /* Offset: 0xa4 */
  ADC14__ADC14MEM4_REG_s ADC14MEM4; /* Offset: 0xa8 */
  ADC14__ADC14MEM5_REG_s ADC14MEM5; /* Offset: 0xac */
  ADC14__ADC14MEM6_REG_s ADC14MEM6; /* Offset: 0xb0 */
  ADC14__ADC14MEM7_REG_s ADC14MEM7; /* Offset: 0xb4 */
  ADC14__ADC14MEM8_REG_s ADC14MEM8; /* Offset: 0xb8 */
  ADC14__ADC14MEM9_REG_s ADC14MEM9; /* Offset: 0xbc */
  ADC14__ADC14MEM10_REG_s ADC14MEM10; /* Offset: 0xc0 */
  ADC14__ADC14MEM11_REG_s ADC14MEM11; /* Offset: 0xc4 */
  ADC14__ADC14MEM12_REG_s ADC14MEM12; /* Offset: 0xc8 */
  ADC14__ADC14MEM13_REG_s ADC14MEM13; /* Offset: 0xcc */
  ADC14__ADC14MEM14_REG_s ADC14MEM14; /* Offset: 0xd0 */
  ADC14__ADC14MEM15_REG_s ADC14MEM15; /* Offset: 0xd4 */
  ADC14__ADC14MEM16_REG_s ADC14MEM16; /* Offset: 0xd8 */
  ADC14__ADC14MEM17_REG_s ADC14MEM17; /* Offset: 0xdc */
  ADC14__ADC14MEM18_REG_s ADC14MEM18; /* Offset: 0xe0 */
  ADC14__ADC14MEM19_REG_s ADC14MEM19; /* Offset: 0xe4 */
  ADC14__ADC14MEM20_REG_s ADC14MEM20; /* Offset: 0xe8 */
  ADC14__ADC14MEM21_REG_s ADC14MEM21; /* Offset: 0xec */
  ADC14__ADC14MEM22_REG_s ADC14MEM22; /* Offset: 0xf0 */
  ADC14__ADC14MEM23_REG_s ADC14MEM23; /* Offset: 0xf4 */
  ADC14__ADC14MEM24_REG_s ADC14MEM24; /* Offset: 0xf8 */
  ADC14__ADC14MEM25_REG_s ADC14MEM25; /* Offset: 0xfc */
  ADC14__ADC14MEM26_REG_s ADC14MEM26; /* Offset: 0x100 */
  ADC14__ADC14MEM27_REG_s ADC14MEM27; /* Offset: 0x104 */
  ADC14__ADC14MEM28_REG_s ADC14MEM28; /* Offset: 0x108 */
  ADC14__ADC14MEM29_REG_s ADC14MEM29; /* Offset: 0x10c */
  ADC14__ADC14MEM30_REG_s ADC14MEM30; /* Offset: 0x110 */
  ADC14__ADC14MEM31_REG_s ADC14MEM31; /* Offset: 0x114 */
  uint8_t RESERVED0[36];
  ADC14__ADC14IER0_REG_s ADC14IER0; /* Offset: 0x13c */
  ADC14__ADC14IER1_REG_s ADC14IER1; /* Offset: 0x140 */
  ADC14__ADC14IFGR0_REG_s ADC14IFGR0; /* Offset: 0x144 */
  ADC14__ADC14IFGR1_REG_s ADC14IFGR1; /* Offset: 0x148 */
  ADC14__ADC14CLRIFGR0_REG_s ADC14CLRIFGR0; /* Offset: 0x14c */
  ADC14__ADC14CLRIFGR1_REG_s ADC14CLRIFGR1; /* Offset: 0x150 */
  uint32_t ADC14IV; /* Offset: 0x154 */
} ADC14__REG_LIST_s;
#endif //  #ifdef __ADC14_H__
