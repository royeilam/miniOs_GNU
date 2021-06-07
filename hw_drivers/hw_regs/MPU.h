#ifndef __MPU_H__
#define __MPU_H__
typedef union
{
  struct
  {
    uint32_t SEPARATE: 1; /* BITS[0:0] */
    uint32_t         : 7;
    uint32_t DREGION : 8; /* BITS[15:8] */
    uint32_t IREGION : 8; /* BITS[23:16] */
  } FIELD;
  uint32_t ALL;
} MPU__MPU_TYPE_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE    : 1; /* BITS[0:0] */
    uint32_t HFNMIENA  : 1; /* BITS[1:1] */
    uint32_t PRIVDEFENA: 1; /* BITS[2:2] */
  } FIELD;
  uint32_t ALL;
} MPU__MPU_CTRL_REG_s;

typedef union
{
  struct
  {
    uint32_t REGION: 8; /* BITS[7:0] */
  } FIELD;
  uint32_t ALL;
} MPU__MPU_RNR_REG_s;

typedef union
{
  struct
  {
    uint32_t REGION: 4; /* BITS[3:0] */
    uint32_t VALID : 1; /* BITS[4:4] */
    uint32_t ADDR  : 27; /* BITS[31:5] */
  } FIELD;
  uint32_t ALL;
} MPU__MPU_RBAR_REG_s;

typedef union
{
  struct
  {
    uint32_t ENABLE: 1; /* BITS[0:0] */
    uint32_t SIZE  : 5; /* BITS[5:1] */
    uint32_t       : 2;
    uint32_t SRD   : 8; /* BITS[15:8] */
    uint32_t B     : 1; /* BITS[16:16] */
    uint32_t C     : 1; /* BITS[17:17] */
    uint32_t S     : 1; /* BITS[18:18] */
    uint32_t TEX   : 3; /* BITS[21:19] */
    uint32_t       : 2;
    uint32_t AP    : 3; /* BITS[26:24] */
    uint32_t       : 1;
    uint32_t XN    : 1; /* BITS[28:28] */
  } FIELD;
  uint32_t ALL;
} MPU__MPU_RASR_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[3472];
  MPU__MPU_TYPE_REG_s MPU_TYPE; /* Offset: 0xd90 */
  MPU__MPU_CTRL_REG_s MPU_CTRL; /* Offset: 0xd94 */
  MPU__MPU_RNR_REG_s MPU_RNR; /* Offset: 0xd98 */
  MPU__MPU_RBAR_REG_s MPU_RBAR; /* Offset: 0xd9c */
  MPU__MPU_RASR_REG_s MPU_RASR; /* Offset: 0xda0 */
  uint32_t MPU_RBAR_A1; /* Offset: 0xda4 */
  uint32_t MPU_RASR_A1; /* Offset: 0xda8 */
  uint32_t MPU_RBAR_A2; /* Offset: 0xdac */
  uint32_t MPU_RASR_A2; /* Offset: 0xdb0 */
  uint32_t MPU_RBAR_A3; /* Offset: 0xdb4 */
  uint32_t MPU_RASR_A3; /* Offset: 0xdb8 */
} MPU__REG_LIST_s;
#endif //  #ifdef __MPU_H__
