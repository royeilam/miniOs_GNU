#ifndef __FL_BOOTOVER_MAILBOX_H__
#define __FL_BOOTOVER_MAILBOX_H__
typedef struct __attribute__((packed))
{
  uint32_t MB_START; /* Offset: 0x0 */
  uint32_t CMD; /* Offset: 0x4 */
  uint8_t RESERVED0[8];
  uint32_t JTAG_SWD_LOCK_SECEN; /* Offset: 0x10 */
  uint32_t JTAG_SWD_LOCK_AES_INIT_VECT; /* Offset: 0x14 */
  uint32_t JTAG_SWD_LOCK_AES_INIT_VECT; /* Offset: 0x18 */
  uint32_t JTAG_SWD_LOCK_AES_INIT_VECT; /* Offset: 0x1c */
  uint32_t JTAG_SWD_LOCK_AES_INIT_VECT; /* Offset: 0x20 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x24 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x28 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x2c */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x30 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x34 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x38 */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x3c */
  uint32_t JTAG_SWD_LOCK_AES_SECKEYS; /* Offset: 0x40 */
  uint32_t JTAG_SWD_LOCK_UNENC_PWD; /* Offset: 0x44 */
  uint32_t JTAG_SWD_LOCK_UNENC_PWD; /* Offset: 0x48 */
  uint32_t JTAG_SWD_LOCK_UNENC_PWD; /* Offset: 0x4c */
  uint32_t JTAG_SWD_LOCK_UNENC_PWD; /* Offset: 0x50 */
  uint32_t JTAG_SWD_LOCK_ACK; /* Offset: 0x54 */
  uint8_t RESERVED1[392];
  uint32_t BSL_ENABLE; /* Offset: 0x1e0 */
  uint32_t BSL_START_ADDRESS; /* Offset: 0x1e4 */
  uint32_t BSL_PARAMETERS; /* Offset: 0x1e8 */
  uint8_t RESERVED2[8];
  uint32_t BSL_ACK; /* Offset: 0x1f4 */
  uint32_t JTAG_SWD_LOCK_ENCPAYLOADADD; /* Offset: 0x1f8 */
  uint32_t JTAG_SWD_LOCK_ENCPAYLOADLEN; /* Offset: 0x1fc */
  uint32_t JTAG_SWD_LOCK_DST_ADDR; /* Offset: 0x200 */
  uint32_t ENC_UPDATE_ACK; /* Offset: 0x204 */
  uint8_t RESERVED3[72];
  uint32_t FACTORY_RESET_ENABLE; /* Offset: 0x250 */
  uint32_t FACTORY_RESET_PWDEN; /* Offset: 0x254 */
  uint32_t FACTORY_RESET_PWD; /* Offset: 0x258 */
  uint32_t FACTORY_RESET_PWD; /* Offset: 0x25c */
  uint32_t FACTORY_RESET_PWD; /* Offset: 0x260 */
  uint32_t FACTORY_RESET_PWD; /* Offset: 0x264 */
  uint32_t FACTORY_RESET_PARAMS_ACK; /* Offset: 0x268 */
  uint8_t RESERVED4[4];
  uint32_t FACTORY_RESET_PASSWORD; /* Offset: 0x270 */
  uint32_t FACTORY_RESET_PASSWORD; /* Offset: 0x274 */
  uint32_t FACTORY_RESET_PASSWORD; /* Offset: 0x278 */
  uint32_t FACTORY_RESET_PASSWORD; /* Offset: 0x27c */
  uint32_t FACTORY_RESET_ACK; /* Offset: 0x280 */
  uint8_t RESERVED5[8];
  uint32_t MB_END; /* Offset: 0x28c */
} FL_BOOTOVER_MAILBOX__REG_LIST_s;
#endif //  #ifdef __FL_BOOTOVER_MAILBOX_H__
