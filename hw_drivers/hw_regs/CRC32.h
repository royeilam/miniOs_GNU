#ifndef __CRC32_H__
#define __CRC32_H__
typedef struct __attribute__((packed))
{
  uint16_t CRC32DI; /* Offset: 0x0 */
  uint8_t RESERVED0[2];
  uint16_t CRC32DIRB; /* Offset: 0x4 */
  uint8_t RESERVED1[2];
  uint16_t CRC32INIRES_LO; /* Offset: 0x8 */
  uint16_t CRC32INIRES_HI; /* Offset: 0xa */
  uint16_t CRC32RESR_LO; /* Offset: 0xc */
  uint16_t CRC32RESR_HI; /* Offset: 0xe */
  uint16_t CRC16DI; /* Offset: 0x10 */
  uint8_t RESERVED2[2];
  uint16_t CRC16DIRB; /* Offset: 0x14 */
  uint8_t RESERVED3[2];
  uint16_t CRC16INIRES; /* Offset: 0x18 */
  uint8_t RESERVED4[4];
  uint16_t CRC16RESR; /* Offset: 0x1e */
} CRC32__REG_LIST_s;
#endif //  #ifdef __CRC32_H__
