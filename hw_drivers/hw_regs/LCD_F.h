#ifndef __LCD_F_H__
#define __LCD_F_H__
typedef union
{
  struct
  {
    uint32_t LCDON  : 1; /* BITS[0:0] */
    uint32_t LCDLP  : 1; /* BITS[1:1] */
    uint32_t LCDSON : 1; /* BITS[2:2] */
    uint32_t LCDMX  : 3; /* BITS[5:3] */
    uint32_t        : 2;
    uint32_t LCDPRE : 3; /* BITS[10:8] */
    uint32_t LCDDIV : 5; /* BITS[15:11] */
    uint32_t LCDSSEL: 2; /* BITS[17:16] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDBLKMOD: 2; /* BITS[1:0] */
    uint32_t LCDBLKPRE: 3; /* BITS[4:2] */
    uint32_t LCDBLKDIV: 3; /* BITS[7:5] */
    uint32_t          : 8;
    uint32_t LCDDISP  : 1; /* BITS[16:16] */
    uint32_t LCDCLRM  : 1; /* BITS[17:17] */
    uint32_t LCDCLRBM : 1; /* BITS[18:18] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDBMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t LCD2B     : 1; /* BITS[0:0] */
    uint32_t           : 4;
    uint32_t LCDEXTBIAS: 1; /* BITS[5:5] */
    uint32_t R03EXT    : 1; /* BITS[6:6] */
    uint32_t LCDREXT   : 1; /* BITS[7:7] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDVCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDS0 : 1; /* BITS[0:0] */
    uint32_t LCDS1 : 1; /* BITS[1:1] */
    uint32_t LCDS2 : 1; /* BITS[2:2] */
    uint32_t LCDS3 : 1; /* BITS[3:3] */
    uint32_t LCDS4 : 1; /* BITS[4:4] */
    uint32_t LCDS5 : 1; /* BITS[5:5] */
    uint32_t LCDS6 : 1; /* BITS[6:6] */
    uint32_t LCDS7 : 1; /* BITS[7:7] */
    uint32_t LCDS8 : 1; /* BITS[8:8] */
    uint32_t LCDS9 : 1; /* BITS[9:9] */
    uint32_t LCDS10: 1; /* BITS[10:10] */
    uint32_t LCDS11: 1; /* BITS[11:11] */
    uint32_t LCDS12: 1; /* BITS[12:12] */
    uint32_t LCDS13: 1; /* BITS[13:13] */
    uint32_t LCDS14: 1; /* BITS[14:14] */
    uint32_t LCDS15: 1; /* BITS[15:15] */
    uint32_t LCDS16: 1; /* BITS[16:16] */
    uint32_t LCDS17: 1; /* BITS[17:17] */
    uint32_t LCDS18: 1; /* BITS[18:18] */
    uint32_t LCDS19: 1; /* BITS[19:19] */
    uint32_t LCDS20: 1; /* BITS[20:20] */
    uint32_t LCDS21: 1; /* BITS[21:21] */
    uint32_t LCDS22: 1; /* BITS[22:22] */
    uint32_t LCDS23: 1; /* BITS[23:23] */
    uint32_t LCDS24: 1; /* BITS[24:24] */
    uint32_t LCDS25: 1; /* BITS[25:25] */
    uint32_t LCDS26: 1; /* BITS[26:26] */
    uint32_t LCDS27: 1; /* BITS[27:27] */
    uint32_t LCDS28: 1; /* BITS[28:28] */
    uint32_t LCDS29: 1; /* BITS[29:29] */
    uint32_t LCDS30: 1; /* BITS[30:30] */
    uint32_t LCDS31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDPCTL0_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDS32: 1; /* BITS[0:0] */
    uint32_t LCDS33: 1; /* BITS[1:1] */
    uint32_t LCDS34: 1; /* BITS[2:2] */
    uint32_t LCDS35: 1; /* BITS[3:3] */
    uint32_t LCDS36: 1; /* BITS[4:4] */
    uint32_t LCDS37: 1; /* BITS[5:5] */
    uint32_t LCDS38: 1; /* BITS[6:6] */
    uint32_t LCDS39: 1; /* BITS[7:7] */
    uint32_t LCDS40: 1; /* BITS[8:8] */
    uint32_t LCDS41: 1; /* BITS[9:9] */
    uint32_t LCDS42: 1; /* BITS[10:10] */
    uint32_t LCDS43: 1; /* BITS[11:11] */
    uint32_t LCDS44: 1; /* BITS[12:12] */
    uint32_t LCDS45: 1; /* BITS[13:13] */
    uint32_t LCDS46: 1; /* BITS[14:14] */
    uint32_t LCDS47: 1; /* BITS[15:15] */
    uint32_t LCDS48: 1; /* BITS[16:16] */
    uint32_t LCDS49: 1; /* BITS[17:17] */
    uint32_t LCDS50: 1; /* BITS[18:18] */
    uint32_t LCDS51: 1; /* BITS[19:19] */
    uint32_t LCDS52: 1; /* BITS[20:20] */
    uint32_t LCDS53: 1; /* BITS[21:21] */
    uint32_t LCDS54: 1; /* BITS[22:22] */
    uint32_t LCDS55: 1; /* BITS[23:23] */
    uint32_t LCDS56: 1; /* BITS[24:24] */
    uint32_t LCDS57: 1; /* BITS[25:25] */
    uint32_t LCDS58: 1; /* BITS[26:26] */
    uint32_t LCDS59: 1; /* BITS[27:27] */
    uint32_t LCDS60: 1; /* BITS[28:28] */
    uint32_t LCDS61: 1; /* BITS[29:29] */
    uint32_t LCDS62: 1; /* BITS[30:30] */
    uint32_t LCDS63: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDPCTL1_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDCSS0 : 1; /* BITS[0:0] */
    uint32_t LCDCSS1 : 1; /* BITS[1:1] */
    uint32_t LCDCSS2 : 1; /* BITS[2:2] */
    uint32_t LCDCSS3 : 1; /* BITS[3:3] */
    uint32_t LCDCSS4 : 1; /* BITS[4:4] */
    uint32_t LCDCSS5 : 1; /* BITS[5:5] */
    uint32_t LCDCSS6 : 1; /* BITS[6:6] */
    uint32_t LCDCSS7 : 1; /* BITS[7:7] */
    uint32_t LCDCSS8 : 1; /* BITS[8:8] */
    uint32_t LCDCSS9 : 1; /* BITS[9:9] */
    uint32_t LCDCSS10: 1; /* BITS[10:10] */
    uint32_t LCDCSS11: 1; /* BITS[11:11] */
    uint32_t LCDCSS12: 1; /* BITS[12:12] */
    uint32_t LCDCSS13: 1; /* BITS[13:13] */
    uint32_t LCDCSS14: 1; /* BITS[14:14] */
    uint32_t LCDCSS15: 1; /* BITS[15:15] */
    uint32_t LCDCSS16: 1; /* BITS[16:16] */
    uint32_t LCDCSS17: 1; /* BITS[17:17] */
    uint32_t LCDCSS18: 1; /* BITS[18:18] */
    uint32_t LCDCSS19: 1; /* BITS[19:19] */
    uint32_t LCDCSS20: 1; /* BITS[20:20] */
    uint32_t LCDCSS21: 1; /* BITS[21:21] */
    uint32_t LCDCSS22: 1; /* BITS[22:22] */
    uint32_t LCDCSS23: 1; /* BITS[23:23] */
    uint32_t LCDCSS24: 1; /* BITS[24:24] */
    uint32_t LCDCSS25: 1; /* BITS[25:25] */
    uint32_t LCDCSS26: 1; /* BITS[26:26] */
    uint32_t LCDCSS27: 1; /* BITS[27:27] */
    uint32_t LCDCSS28: 1; /* BITS[28:28] */
    uint32_t LCDCSS29: 1; /* BITS[29:29] */
    uint32_t LCDCSS30: 1; /* BITS[30:30] */
    uint32_t LCDCSS31: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDCSSEL0_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDCSS32: 1; /* BITS[0:0] */
    uint32_t LCDCSS33: 1; /* BITS[1:1] */
    uint32_t LCDCSS34: 1; /* BITS[2:2] */
    uint32_t LCDCSS35: 1; /* BITS[3:3] */
    uint32_t LCDCSS36: 1; /* BITS[4:4] */
    uint32_t LCDCSS37: 1; /* BITS[5:5] */
    uint32_t LCDCSS38: 1; /* BITS[6:6] */
    uint32_t LCDCSS39: 1; /* BITS[7:7] */
    uint32_t LCDCSS40: 1; /* BITS[8:8] */
    uint32_t LCDCSS41: 1; /* BITS[9:9] */
    uint32_t LCDCSS42: 1; /* BITS[10:10] */
    uint32_t LCDCSS43: 1; /* BITS[11:11] */
    uint32_t LCDCSS44: 1; /* BITS[12:12] */
    uint32_t LCDCSS45: 1; /* BITS[13:13] */
    uint32_t LCDCSS46: 1; /* BITS[14:14] */
    uint32_t LCDCSS47: 1; /* BITS[15:15] */
    uint32_t LCDCSS48: 1; /* BITS[16:16] */
    uint32_t LCDCSS49: 1; /* BITS[17:17] */
    uint32_t LCDCSS50: 1; /* BITS[18:18] */
    uint32_t LCDCSS51: 1; /* BITS[19:19] */
    uint32_t LCDCSS52: 1; /* BITS[20:20] */
    uint32_t LCDCSS53: 1; /* BITS[21:21] */
    uint32_t LCDCSS54: 1; /* BITS[22:22] */
    uint32_t LCDCSS55: 1; /* BITS[23:23] */
    uint32_t LCDCSS56: 1; /* BITS[24:24] */
    uint32_t LCDCSS57: 1; /* BITS[25:25] */
    uint32_t LCDCSS58: 1; /* BITS[26:26] */
    uint32_t LCDCSS59: 1; /* BITS[27:27] */
    uint32_t LCDCSS60: 1; /* BITS[28:28] */
    uint32_t LCDCSS61: 1; /* BITS[29:29] */
    uint32_t LCDCSS62: 1; /* BITS[30:30] */
    uint32_t LCDCSS63: 1; /* BITS[31:31] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDCSSEL1_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDANMEN : 1; /* BITS[0:0] */
    uint32_t LCDANMSTP: 3; /* BITS[3:1] */
    uint32_t          : 3;
    uint32_t LCDANMCLR: 1; /* BITS[7:7] */
    uint32_t          : 8;
    uint32_t LCDANMPRE: 3; /* BITS[18:16] */
    uint32_t LCDANMDIV: 3; /* BITS[21:19] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDANMCTL_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDBLKOFFIE : 1; /* BITS[1:1] */
    uint32_t LCDBLKONIE  : 1; /* BITS[2:2] */
    uint32_t LCDFRMIE    : 1; /* BITS[3:3] */
    uint32_t             : 4;
    uint32_t LCDANMSTPIE : 1; /* BITS[8:8] */
    uint32_t LCDANMLOOPIE: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDIE_REG_s;

typedef union
{
  struct
  {
    uint32_t LCDBLKOFFIFG : 1; /* BITS[1:1] */
    uint32_t LCDBLKONIFG  : 1; /* BITS[2:2] */
    uint32_t LCDFRMIFG    : 1; /* BITS[3:3] */
    uint32_t              : 4;
    uint32_t LCDANMSTPIFG : 1; /* BITS[8:8] */
    uint32_t LCDANMLOOPIFG: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t SETLCDBLKOFFIFG : 1; /* BITS[1:1] */
    uint32_t SETLCDBLKONIFG  : 1; /* BITS[2:2] */
    uint32_t SETLCDFRMIFG    : 1; /* BITS[3:3] */
    uint32_t                 : 4;
    uint32_t SETLCDANMSTPIFG : 1; /* BITS[8:8] */
    uint32_t SETLCDANMLOOPIFG: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDSETIFG_REG_s;

typedef union
{
  struct
  {
    uint32_t CLRLCDBLKOFFIFG : 1; /* BITS[1:1] */
    uint32_t CLRLCDBLKONIFG  : 1; /* BITS[2:2] */
    uint32_t CLRLCDFRMIFG    : 1; /* BITS[3:3] */
    uint32_t                 : 4;
    uint32_t CLRLCDANMSTPIFG : 1; /* BITS[8:8] */
    uint32_t CLRLCDANMLOOPIFG: 1; /* BITS[9:9] */
  } FIELD;
  uint32_t ALL;
} LCD_F__LCDCLRIFG_REG_s;

typedef struct __attribute__((packed))
{
  LCD_F__LCDCTL_REG_s LCDCTL; /* Offset: 0x0 */
  LCD_F__LCDBMCTL_REG_s LCDBMCTL; /* Offset: 0x4 */
  LCD_F__LCDVCTL_REG_s LCDVCTL; /* Offset: 0x8 */
  LCD_F__LCDPCTL0_REG_s LCDPCTL0; /* Offset: 0xc */
  LCD_F__LCDPCTL1_REG_s LCDPCTL1; /* Offset: 0x10 */
  LCD_F__LCDCSSEL0_REG_s LCDCSSEL0; /* Offset: 0x14 */
  LCD_F__LCDCSSEL1_REG_s LCDCSSEL1; /* Offset: 0x18 */
  LCD_F__LCDANMCTL_REG_s LCDANMCTL; /* Offset: 0x1c */
  uint8_t RESERVED0[240];
  LCD_F__LCDIE_REG_s LCDIE; /* Offset: 0x110 */
  LCD_F__LCDIFG_REG_s LCDIFG; /* Offset: 0x114 */
  LCD_F__LCDSETIFG_REG_s LCDSETIFG; /* Offset: 0x118 */
  LCD_F__LCDCLRIFG_REG_s LCDCLRIFG; /* Offset: 0x11c */
  uint8_t LCDM; /* Offset: 0x120 */
  uint8_t LCDM; /* Offset: 0x121 */
  uint8_t LCDM; /* Offset: 0x122 */
  uint8_t LCDM; /* Offset: 0x123 */
  uint8_t LCDM; /* Offset: 0x124 */
  uint8_t LCDM; /* Offset: 0x125 */
  uint8_t LCDM; /* Offset: 0x126 */
  uint8_t LCDM; /* Offset: 0x127 */
  uint8_t LCDM; /* Offset: 0x128 */
  uint8_t LCDM; /* Offset: 0x129 */
  uint8_t LCDM; /* Offset: 0x12a */
  uint8_t LCDM; /* Offset: 0x12b */
  uint8_t LCDM; /* Offset: 0x12c */
  uint8_t LCDM; /* Offset: 0x12d */
  uint8_t LCDM; /* Offset: 0x12e */
  uint8_t LCDM; /* Offset: 0x12f */
  uint8_t LCDM; /* Offset: 0x130 */
  uint8_t LCDM; /* Offset: 0x131 */
  uint8_t LCDM; /* Offset: 0x132 */
  uint8_t LCDM; /* Offset: 0x133 */
  uint8_t LCDM; /* Offset: 0x134 */
  uint8_t LCDM; /* Offset: 0x135 */
  uint8_t LCDM; /* Offset: 0x136 */
  uint8_t LCDM; /* Offset: 0x137 */
  uint8_t LCDM; /* Offset: 0x138 */
  uint8_t LCDM; /* Offset: 0x139 */
  uint8_t LCDM; /* Offset: 0x13a */
  uint8_t LCDM; /* Offset: 0x13b */
  uint8_t LCDM; /* Offset: 0x13c */
  uint8_t LCDM; /* Offset: 0x13d */
  uint8_t LCDM; /* Offset: 0x13e */
  uint8_t LCDM; /* Offset: 0x13f */
  uint8_t LCDM; /* Offset: 0x140 */
  uint8_t LCDM; /* Offset: 0x141 */
  uint8_t LCDM; /* Offset: 0x142 */
  uint8_t LCDM; /* Offset: 0x143 */
  uint8_t LCDM; /* Offset: 0x144 */
  uint8_t LCDM; /* Offset: 0x145 */
  uint8_t LCDM; /* Offset: 0x146 */
  uint8_t LCDM; /* Offset: 0x147 */
  uint8_t LCDM; /* Offset: 0x148 */
  uint8_t LCDM; /* Offset: 0x149 */
  uint8_t LCDM; /* Offset: 0x14a */
  uint8_t LCDM; /* Offset: 0x14b */
  uint8_t LCDM; /* Offset: 0x14c */
  uint8_t LCDM; /* Offset: 0x14d */
  uint8_t LCDM; /* Offset: 0x14e */
  uint8_t LCDM; /* Offset: 0x14f */
  uint8_t RESERVED1[16];
  uint8_t LCDBM; /* Offset: 0x160 */
  uint8_t LCDBM; /* Offset: 0x161 */
  uint8_t LCDBM; /* Offset: 0x162 */
  uint8_t LCDBM; /* Offset: 0x163 */
  uint8_t LCDBM; /* Offset: 0x164 */
  uint8_t LCDBM; /* Offset: 0x165 */
  uint8_t LCDBM; /* Offset: 0x166 */
  uint8_t LCDBM; /* Offset: 0x167 */
  uint8_t LCDBM; /* Offset: 0x168 */
  uint8_t LCDBM; /* Offset: 0x169 */
  uint8_t LCDBM; /* Offset: 0x16a */
  uint8_t LCDBM; /* Offset: 0x16b */
  uint8_t LCDBM; /* Offset: 0x16c */
  uint8_t LCDBM; /* Offset: 0x16d */
  uint8_t LCDBM; /* Offset: 0x16e */
  uint8_t LCDBM; /* Offset: 0x16f */
  uint8_t LCDBM; /* Offset: 0x170 */
  uint8_t LCDBM; /* Offset: 0x171 */
  uint8_t LCDBM; /* Offset: 0x172 */
  uint8_t LCDBM; /* Offset: 0x173 */
  uint8_t LCDBM; /* Offset: 0x174 */
  uint8_t LCDBM; /* Offset: 0x175 */
  uint8_t LCDBM; /* Offset: 0x176 */
  uint8_t LCDBM; /* Offset: 0x177 */
  uint8_t LCDBM; /* Offset: 0x178 */
  uint8_t LCDBM; /* Offset: 0x179 */
  uint8_t LCDBM; /* Offset: 0x17a */
  uint8_t LCDBM; /* Offset: 0x17b */
  uint8_t LCDBM; /* Offset: 0x17c */
  uint8_t LCDBM; /* Offset: 0x17d */
  uint8_t LCDBM; /* Offset: 0x17e */
  uint8_t LCDBM; /* Offset: 0x17f */
  uint8_t LCDBM; /* Offset: 0x180 */
  uint8_t LCDBM; /* Offset: 0x181 */
  uint8_t LCDBM; /* Offset: 0x182 */
  uint8_t LCDBM; /* Offset: 0x183 */
  uint8_t LCDBM; /* Offset: 0x184 */
  uint8_t LCDBM; /* Offset: 0x185 */
  uint8_t LCDBM; /* Offset: 0x186 */
  uint8_t LCDBM; /* Offset: 0x187 */
  uint8_t LCDBM; /* Offset: 0x188 */
  uint8_t LCDBM; /* Offset: 0x189 */
  uint8_t LCDBM; /* Offset: 0x18a */
  uint8_t LCDBM; /* Offset: 0x18b */
  uint8_t LCDBM; /* Offset: 0x18c */
  uint8_t LCDBM; /* Offset: 0x18d */
  uint8_t LCDBM; /* Offset: 0x18e */
  uint8_t LCDBM; /* Offset: 0x18f */
  uint8_t RESERVED2[16];
  uint8_t LCDANM; /* Offset: 0x1a0 */
  uint8_t LCDANM; /* Offset: 0x1a1 */
  uint8_t LCDANM; /* Offset: 0x1a2 */
  uint8_t LCDANM; /* Offset: 0x1a3 */
  uint8_t LCDANM; /* Offset: 0x1a4 */
  uint8_t LCDANM; /* Offset: 0x1a5 */
  uint8_t LCDANM; /* Offset: 0x1a6 */
  uint8_t LCDANM; /* Offset: 0x1a7 */
} LCD_F__REG_LIST_s;
#endif //  #ifdef __LCD_F_H__
