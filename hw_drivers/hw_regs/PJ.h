#ifndef __PJ_H__
#define __PJ_H__
typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[288];
  uint16_t PJIN; /* Offset: 0x120 */
  uint16_t PJOUT; /* Offset: 0x122 */
  uint16_t PJDIR; /* Offset: 0x124 */
  uint16_t PJREN; /* Offset: 0x126 */
  uint16_t PJDS; /* Offset: 0x128 */
  uint16_t PJSEL0; /* Offset: 0x12a */
  uint16_t PJSEL1; /* Offset: 0x12c */
  uint8_t RESERVED1[8];
  uint16_t PJSELC; /* Offset: 0x136 */
} PJ__REG_LIST_s;
#endif //  #ifdef __PJ_H__
