
#ifndef __EUSCI_A_H__
#define __EUSCI_A_H__
typedef union
{
  struct
  {
    uint16_t UCSWRST: 1; /* BITS[0:0] */
    uint16_t UCSTEM : 1; /* BITS[1:1] */
    uint16_t        : 4;
    uint16_t UCSSEL : 2; /* BITS[7:6] */
    uint16_t UCSYNC : 1; /* BITS[8:8] */
    uint16_t UCMODE : 2; /* BITS[10:9] */
    uint16_t UCMST  : 1; /* BITS[11:11] */
    uint16_t UC7BIT : 1; /* BITS[12:12] */
    uint16_t UCMSB  : 1; /* BITS[13:13] */
    uint16_t UCCKPL : 1; /* BITS[14:14] */
    uint16_t UCCKPH : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCACTLW0_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCGLIT: 2; /* BITS[1:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCACTLW1_REG_s;

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
} EUSCI_A__UCAMCTLW_REG_s;

typedef union
{
  struct
  {
    uint16_t UCBUSY  : 1; /* BITS[0:0] */
    uint16_t         : 4;
    uint16_t UCOE    : 1; /* BITS[5:5] */
    uint16_t UCFE    : 1; /* BITS[6:6] */
    uint16_t UCLISTEN: 1; /* BITS[7:7] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCASTATW_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCARXBUF_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCTXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCATXBUF_SPI_REG_s;

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
} EUSCI_A__UCAABCTL_REG_s;

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
} EUSCI_A__UCAIRCTL_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIE: 1; /* BITS[0:0] */
    uint16_t UCTXIE: 1; /* BITS[1:1] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCAIE_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIFG: 1; /* BITS[0:0] */
    uint16_t UCTXIFG: 1; /* BITS[1:1] */
  } FIELD;
  uint16_t ALL;
} EUSCI_A__UCAIFG_SPI_REG_s;

typedef struct __attribute__((packed))
{
  EUSCI_A__UCACTLW0_SPI_REG_s UCACTLW0_SPI; /* Offset: 0x0 */
  EUSCI_A__UCACTLW1_REG_s UCACTLW1; /* Offset: 0x2 */
  uint8_t RESERVED0[2];
  uint16_t UCABRW_SPI; /* Offset: 0x6 */
  EUSCI_A__UCAMCTLW_REG_s UCAMCTLW; /* Offset: 0x8 */
  EUSCI_A__UCASTATW_SPI_REG_s UCASTATW_SPI; /* Offset: 0xa */
  EUSCI_A__UCARXBUF_SPI_REG_s UCARXBUF_SPI; /* Offset: 0xc */
  EUSCI_A__UCATXBUF_SPI_REG_s UCATXBUF_SPI; /* Offset: 0xe */
  EUSCI_A__UCAABCTL_REG_s UCAABCTL; /* Offset: 0x10 */
  EUSCI_A__UCAIRCTL_REG_s UCAIRCTL; /* Offset: 0x12 */
  uint8_t RESERVED1[6];
  EUSCI_A__UCAIE_SPI_REG_s UCAIE_SPI; /* Offset: 0x1a */
  EUSCI_A__UCAIFG_SPI_REG_s UCAIFG_SPI; /* Offset: 0x1c */
  uint16_t UCAIV_SPI; /* Offset: 0x1e */
} EUSCI_A__REG_LIST_s;
#endif //  #ifdef __EUSCI_A_H__
