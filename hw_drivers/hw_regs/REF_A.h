#ifndef __REF_A_H__
#define __REF_A_H__
typedef union
{
  struct
  {
    uint16_t REFON     : 1; /* BITS[0:0] */
    uint16_t REFOUT    : 1; /* BITS[1:1] */
    uint16_t           : 1;
    uint16_t REFTCOFF  : 1; /* BITS[3:3] */
    uint16_t REFVSEL   : 2; /* BITS[5:4] */
    uint16_t REFGENOT  : 1; /* BITS[6:6] */
    uint16_t REFBGOT   : 1; /* BITS[7:7] */
    uint16_t REFGENACT : 1; /* BITS[8:8] */
    uint16_t REFBGACT  : 1; /* BITS[9:9] */
    uint16_t REFGENBUSY: 1; /* BITS[10:10] */
    uint16_t BGMODE    : 1; /* BITS[11:11] */
    uint16_t REFGENRDY : 1; /* BITS[12:12] */
    uint16_t REFBGRDY  : 1; /* BITS[13:13] */
  } FIELD;
  uint16_t ALL;
} REF_A__REFCTL0_REG_s;

typedef struct __attribute__((packed))
{
  REF_A__REFCTL0_REG_s REFCTL0; /* Offset: 0x0 */
} REF_A__REG_LIST_s;
#endif //  #ifdef __REF_A_H__
