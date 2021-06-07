#ifndef __PD_H__
#define __PD_H__
typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[96];
  uint16_t PDIN; /* Offset: 0x60 */
  uint16_t PDOUT; /* Offset: 0x62 */
  uint16_t PDDIR; /* Offset: 0x64 */
  uint16_t PDREN; /* Offset: 0x66 */
  uint16_t PDDS; /* Offset: 0x68 */
  uint16_t PDSEL0; /* Offset: 0x6a */
  uint16_t PDSEL1; /* Offset: 0x6c */
  uint8_t RESERVED1[8];
  uint16_t PDSELC; /* Offset: 0x76 */
  uint16_t PDIES; /* Offset: 0x78 */
  uint16_t PDIE; /* Offset: 0x7a */
  uint16_t PDIFG; /* Offset: 0x7c */
} PD__REG_LIST_s;
#endif //  #ifdef __PD_H__
