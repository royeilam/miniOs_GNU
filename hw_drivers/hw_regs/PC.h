#ifndef __PC_H__
#define __PC_H__
typedef struct __attribute__((packed))
{
  uint8_t RESERVED0[64];
  uint16_t PCIN; /* Offset: 0x40 */
  uint16_t PCOUT; /* Offset: 0x42 */
  uint16_t PCDIR; /* Offset: 0x44 */
  uint16_t PCREN; /* Offset: 0x46 */
  uint16_t PCDS; /* Offset: 0x48 */
  uint16_t PCSEL0; /* Offset: 0x4a */
  uint16_t PCSEL1; /* Offset: 0x4c */
  uint8_t RESERVED1[8];
  uint16_t PCSELC; /* Offset: 0x56 */
  uint16_t PCIES; /* Offset: 0x58 */
  uint16_t PCIE; /* Offset: 0x5a */
  uint16_t PCIFG; /* Offset: 0x5c */
} PC__REG_LIST_s;
#endif //  #ifdef __PC_H__
