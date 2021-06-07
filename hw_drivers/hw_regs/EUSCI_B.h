#ifndef __EUSCI_B_H__
#define __EUSCI_B_H__
typedef union
{
  struct
  {
    uint16_t UCSWRST : 1; /* BITS[0:0] */
    uint16_t UCTXSTT : 1; /* BITS[1:1] */
    uint16_t UCTXSTP : 1; /* BITS[2:2] */
    uint16_t UCTXNACK: 1; /* BITS[3:3] */
    uint16_t UCTR    : 1; /* BITS[4:4] */
    uint16_t UCTXACK : 1; /* BITS[5:5] */
    uint16_t UCSSEL  : 2; /* BITS[7:6] */
    uint16_t UCSYNC  : 1; /* BITS[8:8] */
    uint16_t UCMODE  : 2; /* BITS[10:9] */
    uint16_t UCMST   : 1; /* BITS[11:11] */
    uint16_t         : 1;
    uint16_t UCMM    : 1; /* BITS[13:13] */
    uint16_t UCSLA10 : 1; /* BITS[14:14] */
    uint16_t UCA10   : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBCTLW0_REG_s;

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
} EUSCI_B__UCBCTLW0_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCGLIT   : 2; /* BITS[1:0] */
    uint16_t UCASTP   : 2; /* BITS[3:2] */
    uint16_t UCSWACK  : 1; /* BITS[4:4] */
    uint16_t UCSTPNACK: 1; /* BITS[5:5] */
    uint16_t UCCLTO   : 2; /* BITS[7:6] */
    uint16_t UCETXINT : 1; /* BITS[8:8] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBCTLW1_REG_s;

typedef union
{
  struct
  {
    uint16_t         : 3;
    uint16_t UCBBUSY : 1; /* BITS[4:4] */
    uint16_t UCGC    : 1; /* BITS[5:5] */
    uint16_t UCSCLLOW: 1; /* BITS[6:6] */
    uint16_t         : 1;
    uint16_t UCBCNT  : 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBSTATW_REG_s;

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
} EUSCI_B__UCBSTATW_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCTBCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBTBCNT_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBRXBUF_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBRXBUF_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCTXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBTXBUF_REG_s;

typedef union
{
  struct
  {
    uint16_t UCTXBUF: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBTXBUF_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t I2COA0: 10; /* BITS[9:0] */
    uint16_t UCOAEN: 1; /* BITS[10:10] */
    uint16_t       : 4;
    uint16_t UCGCEN: 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBI2COA0_REG_s;

typedef union
{
  struct
  {
    uint16_t I2COA1: 10; /* BITS[9:0] */
    uint16_t UCOAEN: 1; /* BITS[10:10] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBI2COA1_REG_s;

typedef union
{
  struct
  {
    uint16_t I2COA2: 10; /* BITS[9:0] */
    uint16_t UCOAEN: 1; /* BITS[10:10] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBI2COA2_REG_s;

typedef union
{
  struct
  {
    uint16_t I2COA3: 10; /* BITS[9:0] */
    uint16_t UCOAEN: 1; /* BITS[10:10] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBI2COA3_REG_s;

typedef union
{
  struct
  {
    uint16_t ADDRX: 10; /* BITS[9:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBADDRX_REG_s;

typedef union
{
  struct
  {
    uint16_t ADDMASK: 10; /* BITS[9:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBADDMASK_REG_s;

typedef union
{
  struct
  {
    uint16_t I2CSA: 10; /* BITS[9:0] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBI2CSA_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIE0 : 1; /* BITS[0:0] */
    uint16_t UCTXIE0 : 1; /* BITS[1:1] */
    uint16_t UCSTTIE : 1; /* BITS[2:2] */
    uint16_t UCSTPIE : 1; /* BITS[3:3] */
    uint16_t UCALIE  : 1; /* BITS[4:4] */
    uint16_t UCNACKIE: 1; /* BITS[5:5] */
    uint16_t UCBCNTIE: 1; /* BITS[6:6] */
    uint16_t UCCLTOIE: 1; /* BITS[7:7] */
    uint16_t UCRXIE1 : 1; /* BITS[8:8] */
    uint16_t UCTXIE1 : 1; /* BITS[9:9] */
    uint16_t UCRXIE2 : 1; /* BITS[10:10] */
    uint16_t UCTXIE2 : 1; /* BITS[11:11] */
    uint16_t UCRXIE3 : 1; /* BITS[12:12] */
    uint16_t UCTXIE3 : 1; /* BITS[13:13] */
    uint16_t UCBIT9IE: 1; /* BITS[14:14] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBIE_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIE: 1; /* BITS[0:0] */
    uint16_t UCTXIE: 1; /* BITS[1:1] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBIE_SPI_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIFG0 : 1; /* BITS[0:0] */
    uint16_t UCTXIFG0 : 1; /* BITS[1:1] */
    uint16_t UCSTTIFG : 1; /* BITS[2:2] */
    uint16_t UCSTPIFG : 1; /* BITS[3:3] */
    uint16_t UCALIFG  : 1; /* BITS[4:4] */
    uint16_t UCNACKIFG: 1; /* BITS[5:5] */
    uint16_t UCBCNTIFG: 1; /* BITS[6:6] */
    uint16_t UCCLTOIFG: 1; /* BITS[7:7] */
    uint16_t UCRXIFG1 : 1; /* BITS[8:8] */
    uint16_t UCTXIFG1 : 1; /* BITS[9:9] */
    uint16_t UCRXIFG2 : 1; /* BITS[10:10] */
    uint16_t UCTXIFG2 : 1; /* BITS[11:11] */
    uint16_t UCRXIFG3 : 1; /* BITS[12:12] */
    uint16_t UCTXIFG3 : 1; /* BITS[13:13] */
    uint16_t UCBIT9IFG: 1; /* BITS[14:14] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBIFG_REG_s;

typedef union
{
  struct
  {
    uint16_t UCRXIFG: 1; /* BITS[0:0] */
    uint16_t UCTXIFG: 1; /* BITS[1:1] */
  } FIELD;
  uint16_t ALL;
} EUSCI_B__UCBIFG_SPI_REG_s;

typedef struct __attribute__((packed))
{
  EUSCI_B__UCBCTLW0_REG_s UCBCTLW0; /* Offset: 0x0 */
  EUSCI_B__UCBCTLW0_SPI_REG_s UCBCTLW0_SPI; /* Offset: 0x0 */
  EUSCI_B__UCBCTLW1_REG_s UCBCTLW1; /* Offset: 0x2 */
  uint8_t RESERVED0[2];
  uint16_t UCBBRW; /* Offset: 0x6 */
  uint16_t UCBBRW_SPI; /* Offset: 0x6 */
  EUSCI_B__UCBSTATW_REG_s UCBSTATW; /* Offset: 0x8 */
  EUSCI_B__UCBSTATW_SPI_REG_s UCBSTATW_SPI; /* Offset: 0x8 */
  EUSCI_B__UCBTBCNT_REG_s UCBTBCNT; /* Offset: 0xa */
  EUSCI_B__UCBRXBUF_REG_s UCBRXBUF; /* Offset: 0xc */
  EUSCI_B__UCBRXBUF_SPI_REG_s UCBRXBUF_SPI; /* Offset: 0xc */
  EUSCI_B__UCBTXBUF_REG_s UCBTXBUF; /* Offset: 0xe */
  EUSCI_B__UCBTXBUF_SPI_REG_s UCBTXBUF_SPI; /* Offset: 0xe */
  uint8_t RESERVED1[4];
  EUSCI_B__UCBI2COA0_REG_s UCBI2COA0; /* Offset: 0x14 */
  EUSCI_B__UCBI2COA1_REG_s UCBI2COA1; /* Offset: 0x16 */
  EUSCI_B__UCBI2COA2_REG_s UCBI2COA2; /* Offset: 0x18 */
  EUSCI_B__UCBI2COA3_REG_s UCBI2COA3; /* Offset: 0x1a */
  EUSCI_B__UCBADDRX_REG_s UCBADDRX; /* Offset: 0x1c */
  EUSCI_B__UCBADDMASK_REG_s UCBADDMASK; /* Offset: 0x1e */
  EUSCI_B__UCBI2CSA_REG_s UCBI2CSA; /* Offset: 0x20 */
  uint8_t RESERVED2[8];
  EUSCI_B__UCBIE_REG_s UCBIE; /* Offset: 0x2a */
  EUSCI_B__UCBIE_SPI_REG_s UCBIE_SPI; /* Offset: 0x2a */
  EUSCI_B__UCBIFG_REG_s UCBIFG; /* Offset: 0x2c */
  EUSCI_B__UCBIFG_SPI_REG_s UCBIFG_SPI; /* Offset: 0x2c */
  uint16_t UCBIV; /* Offset: 0x2e */
  uint16_t UCBIV_SPI; /* Offset: 0x2e */
} EUSCI_B__REG_LIST_s;
#endif //  #ifdef __EUSCI_B_H__
