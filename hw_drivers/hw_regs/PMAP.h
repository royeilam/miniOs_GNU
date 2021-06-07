#ifndef __PMAP_H__
#define __PMAP_H__
typedef union
{
  struct
  {
    uint16_t PMAPLOCKED: 1; /* BITS[0:0] */
    uint16_t PMAPRECFG : 1; /* BITS[1:1] */
  } FIELD;
  uint16_t ALL;
} PMAP__PMAPCTL_REG_s;

typedef struct __attribute__((packed))
{
  uint16_t PMAPKEYID; /* Offset: 0x0 */
  PMAP__PMAPCTL_REG_s PMAPCTL; /* Offset: 0x2 */
  uint8_t RESERVED0[4];
  uint16_t P1MAP01; /* Offset: 0x8 */
  uint16_t P1MAP23; /* Offset: 0xa */
  uint16_t P1MAP45; /* Offset: 0xc */
  uint16_t P1MAP67; /* Offset: 0xe */
  uint16_t P2MAP01; /* Offset: 0x10 */
  uint16_t P2MAP23; /* Offset: 0x12 */
  uint16_t P2MAP45; /* Offset: 0x14 */
  uint16_t P2MAP67; /* Offset: 0x16 */
  uint16_t P3MAP01; /* Offset: 0x18 */
  uint16_t P3MAP23; /* Offset: 0x1a */
  uint16_t P3MAP45; /* Offset: 0x1c */
  uint16_t P3MAP67; /* Offset: 0x1e */
  uint16_t P4MAP01; /* Offset: 0x20 */
  uint16_t P4MAP23; /* Offset: 0x22 */
  uint16_t P4MAP45; /* Offset: 0x24 */
  uint16_t P4MAP67; /* Offset: 0x26 */
  uint16_t P5MAP01; /* Offset: 0x28 */
  uint16_t P5MAP23; /* Offset: 0x2a */
  uint16_t P5MAP45; /* Offset: 0x2c */
  uint16_t P5MAP67; /* Offset: 0x2e */
  uint16_t P6MAP01; /* Offset: 0x30 */
  uint16_t P6MAP23; /* Offset: 0x32 */
  uint16_t P6MAP45; /* Offset: 0x34 */
  uint16_t P6MAP67; /* Offset: 0x36 */
  uint16_t P7MAP01; /* Offset: 0x38 */
  uint16_t P7MAP23; /* Offset: 0x3a */
  uint16_t P7MAP45; /* Offset: 0x3c */
  uint16_t P7MAP67; /* Offset: 0x3e */
} PMAP__REG_LIST_s;
#endif //  #ifdef __PMAP_H__
