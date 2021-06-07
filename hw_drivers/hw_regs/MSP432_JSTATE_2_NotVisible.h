#ifndef __HIDDEN_H__
#define __HIDDEN_H__
typedef union
{
  struct
  {
    uint   : 30;
    uint PC: 32; /* BITS[0:31] */
  } FIELD;
  uint ALL;
} Hidden__JSTATE3_REG_s;

typedef struct __attribute__((packed))
{
  Hidden__JSTATE3_REG_s JSTATE3; /* Offset: 0x0 */
} Hidden__REG_LIST_s;
#endif //  #ifdef __HIDDEN_H__
