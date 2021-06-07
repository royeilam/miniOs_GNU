#ifndef __PA_H__
#define __PA_H__
typedef struct __attribute__((packed))
{
  uint16_t PAIN; /* Offset: 0x0 */
  uint16_t PAOUT; /* Offset: 0x2 */
  uint16_t PADIR; /* Offset: 0x4 */
  uint16_t PAREN; /* Offset: 0x6 */
  uint16_t PADS; /* Offset: 0x8 */
  uint16_t PASEL0; /* Offset: 0xa */
  uint16_t PASEL1; /* Offset: 0xc */
  uint8_t RESERVED0[8];
  uint16_t PASELC; /* Offset: 0x16 */
  uint16_t PAIES; /* Offset: 0x18 */
  uint16_t PAIE; /* Offset: 0x1a */
  uint16_t PAIFG; /* Offset: 0x1c */
} PA__REG_LIST_s;
#endif //  #ifdef __PA_H__
