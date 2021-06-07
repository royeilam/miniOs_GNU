#ifndef __RTC_C_H__
#define __RTC_C_H__
typedef union
{
  struct
  {
    uint16_t RTCRDYIFG: 1; /* BITS[0:0] */
    uint16_t RTCAIFG  : 1; /* BITS[1:1] */
    uint16_t RTCTEVIFG: 1; /* BITS[2:2] */
    uint16_t RTCOFIFG : 1; /* BITS[3:3] */
    uint16_t RTCRDYIE : 1; /* BITS[4:4] */
    uint16_t RTCAIE   : 1; /* BITS[5:5] */
    uint16_t RTCTEVIE : 1; /* BITS[6:6] */
    uint16_t RTCOFIE  : 1; /* BITS[7:7] */
    uint16_t RTCKEY   : 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCCTL0_REG_s;

typedef union
{
  struct
  {
    uint16_t RTCTEV : 2; /* BITS[1:0] */
    uint16_t RTCSSEL: 2; /* BITS[3:2] */
    uint16_t RTCRDY : 1; /* BITS[4:4] */
    uint16_t RTCMODE: 1; /* BITS[5:5] */
    uint16_t RTCHOLD: 1; /* BITS[6:6] */
    uint16_t RTCBCD : 1; /* BITS[7:7] */
    uint16_t RTCCALF: 2; /* BITS[9:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCCTL13_REG_s;

typedef union
{
  struct
  {
    uint16_t RTCOCAL : 8; /* BITS[7:0] */
    uint16_t         : 7;
    uint16_t RTCOCALS: 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCOCAL_REG_s;

typedef union
{
  struct
  {
    uint16_t RTCTCMP : 8; /* BITS[7:0] */
    uint16_t         : 5;
    uint16_t RTCTCOK : 1; /* BITS[13:13] */
    uint16_t RTCTCRDY: 1; /* BITS[14:14] */
    uint16_t RTCTCMPS: 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCTCMP_REG_s;

typedef union
{
  struct
  {
    uint16_t RT0PSIFG: 1; /* BITS[0:0] */
    uint16_t RT0PSIE : 1; /* BITS[1:1] */
    uint16_t RT0IP   : 3; /* BITS[4:2] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCPS0CTL_REG_s;

typedef union
{
  struct
  {
    uint16_t RT1PSIFG: 1; /* BITS[0:0] */
    uint16_t RT1PSIE : 1; /* BITS[1:1] */
    uint16_t RT1IP   : 3; /* BITS[4:2] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCPS1CTL_REG_s;

typedef union
{
  struct
  {
    uint16_t RT0PS: 8; /* BITS[7:0] */
    uint16_t RT1PS: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCPS_REG_s;

typedef union
{
  struct
  {
    uint16_t Seco0ds: 6; /* BITS[5:0] */
    uint16_t        : 2;
    uint16_t Mi0utes: 6; /* BITS[13:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCTIM0_REG_s;

typedef union
{
  struct
  {
    uint16_t Seco0dsLowDigit : 4; /* BITS[3:0] */
    uint16_t Seco0dsHighDigit: 3; /* BITS[6:4] */
    uint16_t                 : 1;
    uint16_t Mi0utesLowDigit : 4; /* BITS[11:8] */
    uint16_t Mi0utesHighDigit: 3; /* BITS[14:12] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCTIM0_BCD_REG_s;

typedef union
{
  struct
  {
    uint16_t Hours    : 5; /* BITS[4:0] */
    uint16_t          : 3;
    uint16_t DayofWeek: 3; /* BITS[10:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCTIM1_REG_s;

typedef union
{
  struct
  {
    uint16_t HoursLowDigit : 4; /* BITS[3:0] */
    uint16_t HoursHighDigit: 2; /* BITS[5:4] */
    uint16_t               : 2;
    uint16_t DayofWeek     : 3; /* BITS[10:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCTIM1_BCD_REG_s;

typedef union
{
  struct
  {
    uint16_t Day  : 5; /* BITS[4:0] */
    uint16_t      : 3;
    uint16_t Mo0th: 4; /* BITS[11:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCDATE_REG_s;

typedef union
{
  struct
  {
    uint16_t DayLowDigit   : 4; /* BITS[3:0] */
    uint16_t DayHighDigit  : 2; /* BITS[5:4] */
    uint16_t               : 2;
    uint16_t Mo0thLowDigit : 4; /* BITS[11:8] */
    uint16_t Mo0thHighDigit: 1; /* BITS[12:12] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCDATE_BCD_REG_s;

typedef union
{
  struct
  {
    uint16_t YearLowByte : 8; /* BITS[7:0] */
    uint16_t YearHighByte: 4; /* BITS[11:8] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCYEAR_REG_s;

typedef union
{
  struct
  {
    uint16_t Year            : 4; /* BITS[3:0] */
    uint16_t Decade          : 4; /* BITS[7:4] */
    uint16_t Ce0turyLowDigit : 4; /* BITS[11:8] */
    uint16_t Ce0turyHighDigit: 3; /* BITS[14:12] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCYEAR_BCD_REG_s;

typedef union
{
  struct
  {
    uint16_t Mi0utes: 6; /* BITS[5:0] */
    uint16_t        : 1;
    uint16_t MINAE  : 1; /* BITS[7:7] */
    uint16_t Hours  : 5; /* BITS[12:8] */
    uint16_t        : 2;
    uint16_t HOURAE : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCAMINHR_REG_s;

typedef union
{
  struct
  {
    uint16_t Mi0utesLowDigit : 4; /* BITS[3:0] */
    uint16_t Mi0utesHighDigit: 3; /* BITS[6:4] */
    uint16_t MINAE           : 1; /* BITS[7:7] */
    uint16_t HoursLowDigit   : 4; /* BITS[11:8] */
    uint16_t HoursHighDigit  : 2; /* BITS[13:12] */
    uint16_t                 : 1;
    uint16_t HOURAE          : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCAMINHR_BCD_REG_s;

typedef union
{
  struct
  {
    uint16_t DayofWeek : 3; /* BITS[2:0] */
    uint16_t           : 4;
    uint16_t DOWAE     : 1; /* BITS[7:7] */
    uint16_t DayofMo0th: 5; /* BITS[12:8] */
    uint16_t           : 2;
    uint16_t DAYAE     : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCADOWDAY_REG_s;

typedef union
{
  struct
  {
    uint16_t DayofWeek   : 3; /* BITS[2:0] */
    uint16_t             : 4;
    uint16_t DOWAE       : 1; /* BITS[7:7] */
    uint16_t DayLowDigit : 4; /* BITS[11:8] */
    uint16_t DayHighDigit: 2; /* BITS[13:12] */
    uint16_t             : 1;
    uint16_t DAYAE       : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} RTC_C__RTCADOWDAY_BCD_REG_s;

typedef struct __attribute__((packed))
{
  RTC_C__RTCCTL0_REG_s RTCCTL0; /* Offset: 0x0 */
  RTC_C__RTCCTL13_REG_s RTCCTL13; /* Offset: 0x2 */
  RTC_C__RTCOCAL_REG_s RTCOCAL; /* Offset: 0x4 */
  RTC_C__RTCTCMP_REG_s RTCTCMP; /* Offset: 0x6 */
  RTC_C__RTCPS0CTL_REG_s RTCPS0CTL; /* Offset: 0x8 */
  RTC_C__RTCPS1CTL_REG_s RTCPS1CTL; /* Offset: 0xa */
  RTC_C__RTCPS_REG_s RTCPS; /* Offset: 0xc */
  uint16_t RTCIV; /* Offset: 0xe */
  RTC_C__RTCTIM0_REG_s RTCTIM0; /* Offset: 0x10 */
  RTC_C__RTCTIM0_BCD_REG_s RTCTIM0_BCD; /* Offset: 0x10 */
  RTC_C__RTCTIM1_REG_s RTCTIM1; /* Offset: 0x12 */
  RTC_C__RTCTIM1_BCD_REG_s RTCTIM1_BCD; /* Offset: 0x12 */
  RTC_C__RTCDATE_REG_s RTCDATE; /* Offset: 0x14 */
  RTC_C__RTCDATE_BCD_REG_s RTCDATE_BCD; /* Offset: 0x14 */
  RTC_C__RTCYEAR_REG_s RTCYEAR; /* Offset: 0x16 */
  RTC_C__RTCYEAR_BCD_REG_s RTCYEAR_BCD; /* Offset: 0x16 */
  RTC_C__RTCAMINHR_REG_s RTCAMINHR; /* Offset: 0x18 */
  RTC_C__RTCAMINHR_BCD_REG_s RTCAMINHR_BCD; /* Offset: 0x18 */
  RTC_C__RTCADOWDAY_REG_s RTCADOWDAY; /* Offset: 0x1a */
  RTC_C__RTCADOWDAY_BCD_REG_s RTCADOWDAY_BCD; /* Offset: 0x1a */
  uint16_t RTCBIN2BCD; /* Offset: 0x1c */
  uint16_t RTCBCD2BIN; /* Offset: 0x1e */
} RTC_C__REG_LIST_s;
#endif //  #ifdef __RTC_C_H__
