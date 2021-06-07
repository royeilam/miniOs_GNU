#ifndef __CAPTIO_H__
#define __CAPTIO_H__
typedef union
{
  struct
  {
    uint16_t CAPTIOPISEL: 3; /* BITS[3:1] */
    uint16_t CAPTIOPOSEL: 4; /* BITS[7:4] */
    uint16_t CAPTIOEN   : 1; /* BITS[8:8] */
    uint16_t CAPTIOSTATE: 1; /* BITS[9:9] */
  } FIELD;
  uint16_t ALL;
} CAPTIO__CAPTIOCTL_REG_s;

typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[14];
  CAPTIO__CAPTIOCTL_REG_s CAPTIOCTL; /* Offset: 0xe */
} CAPTIO__REG_LIST_s;
#endif //  #ifdef __CAPTIO_H__
