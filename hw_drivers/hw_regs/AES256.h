#ifndef __AES256_H__
#define __AES256_H__
typedef union
{
  struct
  {
    uint16_t AESOP    : 2; /* BITS[1:0] */
    uint16_t AESKL    : 2; /* BITS[3:2] */
    uint16_t          : 1;
    uint16_t AESCM    : 2; /* BITS[6:5] */
    uint16_t AESSWRST : 1; /* BITS[7:7] */
    uint16_t AESRDYIFG: 1; /* BITS[8:8] */
    uint16_t          : 2;
    uint16_t AESERRFG : 1; /* BITS[11:11] */
    uint16_t AESRDYIE : 1; /* BITS[12:12] */
    uint16_t          : 2;
    uint16_t AESCMEN  : 1; /* BITS[15:15] */
  } FIELD;
  uint16_t ALL;
} AES256__AESACTL0_REG_s;

typedef union
{
  struct
  {
    uint16_t AESBLKCNT: 8; /* BITS[7:0] */
  } FIELD;
  uint16_t ALL;
} AES256__AESACTL1_REG_s;

typedef union
{
  struct
  {
    uint16_t AESBUSY   : 1; /* BITS[0:0] */
    uint16_t AESKEYWR  : 1; /* BITS[1:1] */
    uint16_t AESDINWR  : 1; /* BITS[2:2] */
    uint16_t AESDOUTRD : 1; /* BITS[3:3] */
    uint16_t AESKEYCNT : 4; /* BITS[7:4] */
    uint16_t AESDINCNT : 4; /* BITS[11:8] */
    uint16_t AESDOUTCNT: 4; /* BITS[15:12] */
  } FIELD;
  uint16_t ALL;
} AES256__AESASTAT_REG_s;

typedef union
{
  struct
  {
    uint16_t AESKEY0: 8; /* BITS[7:0] */
    uint16_t AESKEY1: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} AES256__AESAKEY_REG_s;

typedef union
{
  struct
  {
    uint16_t AESDIN0: 8; /* BITS[7:0] */
    uint16_t AESDIN1: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} AES256__AESADIN_REG_s;

typedef union
{
  struct
  {
    uint16_t AESDOUT0: 8; /* BITS[7:0] */
    uint16_t AESDOUT1: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} AES256__AESADOUT_REG_s;

typedef union
{
  struct
  {
    uint16_t AESXDIN0: 8; /* BITS[7:0] */
    uint16_t AESXDIN1: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} AES256__AESAXDIN_REG_s;

typedef union
{
  struct
  {
    uint16_t AESXIN0: 8; /* BITS[7:0] */
    uint16_t AESXIN1: 8; /* BITS[15:8] */
  } FIELD;
  uint16_t ALL;
} AES256__AESAXIN_REG_s;

typedef struct __attribute__((packed))
{
  AES256__AESACTL0_REG_s AESACTL0; /* Offset: 0x0 */
  AES256__AESACTL1_REG_s AESACTL1; /* Offset: 0x2 */
  AES256__AESASTAT_REG_s AESASTAT; /* Offset: 0x4 */
  AES256__AESAKEY_REG_s AESAKEY; /* Offset: 0x6 */
  AES256__AESADIN_REG_s AESADIN; /* Offset: 0x8 */
  AES256__AESADOUT_REG_s AESADOUT; /* Offset: 0xa */
  AES256__AESAXDIN_REG_s AESAXDIN; /* Offset: 0xc */
  AES256__AESAXIN_REG_s AESAXIN; /* Offset: 0xe */
} AES256__REG_LIST_s;
#endif //  #ifdef __AES256_H__
