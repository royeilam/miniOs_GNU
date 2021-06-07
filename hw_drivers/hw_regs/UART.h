
#ifndef __UART_H__
#define __UART_H__
typedef union
{
  struct
  {
    uint16_t UCSWRST : 1; /* BITS[0:0] */
    uint16_t UCTXBRK : 1; /* BITS[1:1] */
    uint16_t UCTXADDR: 1; /* BITS[2:2] */
    uint16_t UCDORM  : 1; /* BITS[3:3] */
    uint16_t UCBRKIE : 1; /* BITS[4:4] */
    uint16_t UCRXEIE : 1; /* BITS[5:5] */
    uint16_t UCSSEL  : 2; /* BITS[7:6] */
    uint16_t UCSYNC  : 1; /* BITS[8:8] */
    uint16_t UCMODE  : 2; /* BITS[10:9] */
    uint16_t UCSPB   : 1; /* BITS[11:11] */
    uint16_t UC7BIT  : 1; /* BITS[12:12] */
    uint16_t UCMSB   : 1; /* BITS[13:13] */
    uint16_t UCPAR   : 1; /* BITS[14:14] */
    uint16_t UCPEN   : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} UART__UCACTLW0_REG_s;

typedef union
{
  struct
  {
    uint16_t UCGLIT: 2; /* BITS[1:0] */
  } FIELD;
  uint16_t ALL;
} UART__UCACTLW1_REG_s;

typedef union
{
  struct
  {
    uint16_t UCOS16: 1; /* BITS[0:0] */
    uint16_t       : 3;
    uint16_t UCBRF : 4; /* BITS[7:4] */
    uint16_t UCBRS : 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} UART__UCAMCTLW_REG_s;

typedef union
{
  struct
  {
    uint16_t UCBUSY       : 1; /* BITS[0:0] */
    uint16_t UCADDR_UCIDLE: 1; /* BITS[1:1] */
    uint16_t UCRXERR      : 1; /* BITS[2:2] */
    uint16_t UCBRK        : 1; /* BITS[3:3] */
    uint16_t UCPE         : 1; /* BITS[4:4] */
    uint16_t UCOE         : 1; /* BITS[5:5] */
    uint16_t UCFE         : 1; /* BITS[6:6] */
    uint16_t UCLISTEN     : 1; /* BITS[7:7] */
  } FIELD;
  uint16_t ALL;
} UART__UCASTATW_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} UART__UCARXBUF_REG_s;

typedef union
{
  struct
  {
    uint16_t UCTXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} UART__UCATXBUF_REG_s;

typedef union
{
  struct
  {
    uint16_t UCABDEN: 1; /* BITS[0:0] */
    uint16_t        : 1;
    uint16_t UCBTOE : 1; /* BITS[2:2] */
    uint16_t UCSTOE : 1; /* BITS[3:3] */
    uint16_t UCDELIM: 2; /* BITS[5:4] */
  } FIELD;
  uint16_t ALL;
} UART__UCAABCTL_REG_s;

typedef union
{
  struct
  {
    uint16_t UCIREN   : 1; /* BITS[0:0] */
    uint16_t UCIRTXCLK: 1; /* BITS[1:1] */
    uint16_t UCIRTXPL : 6; /* BITS[7:2] */
    uint16_t UCIRRXFE : 1; /* BITS[8:8] */
    uint16_t UCIRRXPL : 1; /* BITS[9:9] */
    uint16_t UCIRRXFL : 4; /* BITS[13:10] */
  } FIELD;
  uint16_t ALL;
} UART__UCAIRCTL_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIE   : 1; /* BITS[0:0] */
    uint16_t UCTXIE   : 1; /* BITS[1:1] */
    uint16_t UCSTTIE  : 1; /* BITS[2:2] */
    uint16_t UCTXCPTIE: 1; /* BITS[3:3] */
  } FIELD;
  uint16_t ALL;
} UART__UCAIE_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIFG   : 1; /* BITS[0:0] */
    uint16_t UCTXIFG   : 1; /* BITS[1:1] */
    uint16_t UCSTTIFG  : 1; /* BITS[2:2] */
    uint16_t UCTXCPTIFG: 1; /* BITS[3:3] */
  } FIELD;
  uint16_t ALL;
} UART__UCAIFG_REG_s;

typedef struct __attribute__((packed))
{
  UART__UCACTLW0_REG_s UCACTLW0; /* Offset: 0x0 */
  UART__UCACTLW1_REG_s UCACTLW1; /* Offset: 0x2 */
  uint8_t RESERVED0[2];
  uint16_t UCABRW; /* Offset: 0x6 */
  UART__UCAMCTLW_REG_s UCAMCTLW; /* Offset: 0x8 */
  UART__UCASTATW_REG_s UCASTATW; /* Offset: 0xa */
  UART__UCARXBUF_REG_s UCARXBUF; /* Offset: 0xc */
  UART__UCATXBUF_REG_s UCATXBUF; /* Offset: 0xe */
  UART__UCAABCTL_REG_s UCAABCTL; /* Offset: 0x10 */
  UART__UCAIRCTL_REG_s UCAIRCTL; /* Offset: 0x12 */
  uint8_t RESERVED1[6];
  UART__UCAIE_REG_s UCAIE; /* Offset: 0x1a */
  UART__UCAIFG_REG_s UCAIFG; /* Offset: 0x1c */
  uint16_t UCAIV; /* Offset: 0x1e */
} UART__REG_LIST_s;
#endif //  #ifdef __UART_H__
