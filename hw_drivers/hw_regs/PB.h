#ifndef __PB_H__
#define __PB_H__
typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[32];
  uint16_t PBIN; /* Offset: 0x20 */
  uint16_t PBOUT; /* Offset: 0x22 */
  uint16_t PBDIR; /* Offset: 0x24 */
  uint16_t PBREN; /* Offset: 0x26 */
  uint16_t PBDS; /* Offset: 0x28 */
  uint16_t PBSEL0; /* Offset: 0x2a */
  uint16_t PBSEL1; /* Offset: 0x2c */
  uint8_t RESERVED1[8];
  uint16_t PBSELC; /* Offset: 0x36 */
  uint16_t PBIES; /* Offset: 0x38 */
  uint16_t PBIE; /* Offset: 0x3a */
  uint16_t PBIFG; /* Offset: 0x3c */
} PB__REG_LIST_s;
#endif //  #ifdef __PB_H__
