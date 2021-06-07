#ifndef __PE_H__
#define __PE_H__
typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[128];
  uint16_t PEIN; /* Offset: 0x80 */
  uint16_t PEOUT; /* Offset: 0x82 */
  uint16_t PEDIR; /* Offset: 0x84 */
  uint16_t PEREN; /* Offset: 0x86 */
  uint16_t PEDS; /* Offset: 0x88 */
  uint16_t PESEL0; /* Offset: 0x8a */
  uint16_t PESEL1; /* Offset: 0x8c */
  uint8_t RESERVED1[8];
  uint16_t PESELC; /* Offset: 0x96 */
  uint16_t PEIES; /* Offset: 0x98 */
  uint16_t PEIE; /* Offset: 0x9a */
  uint16_t PEIFG; /* Offset: 0x9c */
} PE__REG_LIST_s;
#endif //  #ifdef __PE_H__
