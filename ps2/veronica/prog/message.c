#include "types.h"

extern SYS* sys;
extern ROOM* rom;

float mes_spos[4][3];
unsigned char FontSz[126];
float FontScaleCR;
float FontScaleX;
float FontScaleY;

void bhSetMessage(int mes_typ, int mes_idx);
void bhControlMessage(int mode);
void bhDispFont(NJS_POINT2* pos, int code, int color, float pri);
void bhDispFontEx(NJS_POINT2* pos, int code, unsigned int argb, float pri);
int bhDispItemName(NJS_POINT2* pos, int id, int color, int count, float pri);
int bhDispMessage(float px, float py, float pri, int mes_typ, int mes_idx, int color, int count);
int bhDispMessageEx(float px, float py, float pri, int mes_typ, int mes_idx, unsigned int argb, int count);
void bhDispTime(NJS_POINT2* pos, unsigned int flg, int time, int color, float pri);
void bhDispTimeEx(NJS_POINT2* pos, unsigned int flg, int time, unsigned int argb, float pri);
float bhGetFontSize(unsigned short code);
float bhMesLen(unsigned short* dp);
void bhFontScaleSet(float ScaleX, float ScaleY, float ScaleCR);

//
// Start address: 0x2b7510
void bhSetMessage(int mes_typ, int mes_idx)
{
    // Line 119, Address: 0x2b7510, Func Offset: 0
    // Line 121, Address: 0x2b752c, Func Offset: 0x1c
    // Line 122, Address: 0x2b7548, Func Offset: 0x38
    // Line 124, Address: 0x2b7550, Func Offset: 0x40
    // Line 125, Address: 0x2b756c, Func Offset: 0x5c
    // Line 127, Address: 0x2b7574, Func Offset: 0x64
    // Line 130, Address: 0x2b757c, Func Offset: 0x6c
    // Line 145, Address: 0x2b7588, Func Offset: 0x78
    // Line 146, Address: 0x2b7590, Func Offset: 0x80
    // Line 130, Address: 0x2b7598, Func Offset: 0x88
    // Line 131, Address: 0x2b75a4, Func Offset: 0x94
    // Line 135, Address: 0x2b75d4, Func Offset: 0xc4
    // Line 131, Address: 0x2b75d8, Func Offset: 0xc8
    // Line 135, Address: 0x2b75e0, Func Offset: 0xd0
    // Line 136, Address: 0x2b75f0, Func Offset: 0xe0
    // Line 137, Address: 0x2b7604, Func Offset: 0xf4
    // Line 138, Address: 0x2b7618, Func Offset: 0x108
    // Line 139, Address: 0x2b762c, Func Offset: 0x11c
    // Line 145, Address: 0x2b7638, Func Offset: 0x128
    // Line 139, Address: 0x2b763c, Func Offset: 0x12c
    // Line 145, Address: 0x2b7644, Func Offset: 0x134
    // Line 146, Address: 0x2b764c, Func Offset: 0x13c
    // Line 145, Address: 0x2b7650, Func Offset: 0x140
    // Line 146, Address: 0x2b7658, Func Offset: 0x148
    // Line 147, Address: 0x2b7668, Func Offset: 0x158
    // Func End, Address: 0x2b7670, Func Offset: 0x160
}

//
// Start address: 0x2b7670
void bhControlMessage(int mode)
{
    int itn;
    int end;
    int col;
    int mct;
    unsigned short id;
    unsigned short cd;
    unsigned short* dt;
    NJS_POINT2 pos;
    // Line 160, Address: 0x2b7670, Func Offset: 0
    // Line 164, Address: 0x2b7698, Func Offset: 0x28
    // Line 165, Address: 0x2b76ac, Func Offset: 0x3c
    // Line 166, Address: 0x2b76b4, Func Offset: 0x44
    // Line 167, Address: 0x2b76e8, Func Offset: 0x78
    // Line 168, Address: 0x2b76fc, Func Offset: 0x8c
    // Line 167, Address: 0x2b7708, Func Offset: 0x98
    // Line 168, Address: 0x2b770c, Func Offset: 0x9c
    // Line 169, Address: 0x2b7714, Func Offset: 0xa4
    // Line 170, Address: 0x2b7718, Func Offset: 0xa8
    // Line 171, Address: 0x2b771c, Func Offset: 0xac
    // Line 172, Address: 0x2b7720, Func Offset: 0xb0
    // Line 174, Address: 0x2b7728, Func Offset: 0xb8
    // Line 176, Address: 0x2b772c, Func Offset: 0xbc
    // Line 178, Address: 0x2b7838, Func Offset: 0x1c8
    // Line 180, Address: 0x2b7858, Func Offset: 0x1e8
    // Line 179, Address: 0x2b785c, Func Offset: 0x1ec
    // Line 180, Address: 0x2b7860, Func Offset: 0x1f0
    // Line 181, Address: 0x2b7868, Func Offset: 0x1f8
    // Line 183, Address: 0x2b7870, Func Offset: 0x200
    // Line 184, Address: 0x2b7874, Func Offset: 0x204
    // Line 183, Address: 0x2b7884, Func Offset: 0x214
    // Line 184, Address: 0x2b7888, Func Offset: 0x218
    // Line 185, Address: 0x2b7894, Func Offset: 0x224
    // Line 188, Address: 0x2b789c, Func Offset: 0x22c
    // Line 189, Address: 0x2b78b4, Func Offset: 0x244
    // Line 192, Address: 0x2b78bc, Func Offset: 0x24c
    // Line 195, Address: 0x2b78e8, Func Offset: 0x278
    // Line 196, Address: 0x2b78ec, Func Offset: 0x27c
    // Line 198, Address: 0x2b78f4, Func Offset: 0x284
    // Line 199, Address: 0x2b78f8, Func Offset: 0x288
    // Line 198, Address: 0x2b78fc, Func Offset: 0x28c
    // Line 199, Address: 0x2b7900, Func Offset: 0x290
    // Line 201, Address: 0x2b7918, Func Offset: 0x2a8
    // Line 202, Address: 0x2b791c, Func Offset: 0x2ac
    // Line 201, Address: 0x2b7920, Func Offset: 0x2b0
    // Line 203, Address: 0x2b7924, Func Offset: 0x2b4
    // Line 205, Address: 0x2b792c, Func Offset: 0x2bc
    // Line 206, Address: 0x2b7934, Func Offset: 0x2c4
    // Line 209, Address: 0x2b793c, Func Offset: 0x2cc
    // Line 210, Address: 0x2b7940, Func Offset: 0x2d0
    // Line 215, Address: 0x2b7960, Func Offset: 0x2f0
    // Line 217, Address: 0x2b7984, Func Offset: 0x314
    // Line 219, Address: 0x2b798c, Func Offset: 0x31c
    // Line 222, Address: 0x2b7994, Func Offset: 0x324
    // Line 225, Address: 0x2b799c, Func Offset: 0x32c
    // Line 226, Address: 0x2b79ac, Func Offset: 0x33c
    // Line 227, Address: 0x2b79b0, Func Offset: 0x340
    // Line 226, Address: 0x2b79b8, Func Offset: 0x348
    // Line 227, Address: 0x2b79c0, Func Offset: 0x350
    // Line 229, Address: 0x2b79e0, Func Offset: 0x370
    // Line 232, Address: 0x2b79e8, Func Offset: 0x378
    // Line 229, Address: 0x2b79f0, Func Offset: 0x380
    // Line 230, Address: 0x2b7a14, Func Offset: 0x3a4
    // Line 231, Address: 0x2b7a40, Func Offset: 0x3d0
    // Line 232, Address: 0x2b7a64, Func Offset: 0x3f4
    // Line 233, Address: 0x2b7a78, Func Offset: 0x408
    // Line 237, Address: 0x2b7a80, Func Offset: 0x410
    // Line 238, Address: 0x2b7a88, Func Offset: 0x418
    // Line 239, Address: 0x2b7a90, Func Offset: 0x420
    // Line 238, Address: 0x2b7a94, Func Offset: 0x424
    // Line 239, Address: 0x2b7a9c, Func Offset: 0x42c
    // Line 240, Address: 0x2b7aa8, Func Offset: 0x438
    // Line 244, Address: 0x2b7ab0, Func Offset: 0x440
    // Line 248, Address: 0x2b7ab8, Func Offset: 0x448
    // Line 252, Address: 0x2b7ac0, Func Offset: 0x450
    // Line 256, Address: 0x2b7ac8, Func Offset: 0x458
    // Line 260, Address: 0x2b7ad0, Func Offset: 0x460
    // Line 269, Address: 0x2b7ad8, Func Offset: 0x468
    // Line 270, Address: 0x2b7ae8, Func Offset: 0x478
    // Line 271, Address: 0x2b7af4, Func Offset: 0x484
    // Line 272, Address: 0x2b7b00, Func Offset: 0x490
    // Line 271, Address: 0x2b7b04, Func Offset: 0x494
    // Line 273, Address: 0x2b7b0c, Func Offset: 0x49c
    // Line 276, Address: 0x2b7b14, Func Offset: 0x4a4
    // Line 280, Address: 0x2b7b1c, Func Offset: 0x4ac
    // Line 281, Address: 0x2b7b30, Func Offset: 0x4c0
    // Line 282, Address: 0x2b7b34, Func Offset: 0x4c4
    // Line 281, Address: 0x2b7b38, Func Offset: 0x4c8
    // Line 282, Address: 0x2b7b40, Func Offset: 0x4d0
    // Line 284, Address: 0x2b7b58, Func Offset: 0x4e8
    // Line 305, Address: 0x2b7b60, Func Offset: 0x4f0
    // Line 307, Address: 0x2b7b68, Func Offset: 0x4f8
    // Line 308, Address: 0x2b7b84, Func Offset: 0x514
    // Line 309, Address: 0x2b7b98, Func Offset: 0x528
    // Line 308, Address: 0x2b7b9c, Func Offset: 0x52c
    // Line 310, Address: 0x2b7ba8, Func Offset: 0x538
    // Line 311, Address: 0x2b7bd0, Func Offset: 0x560
    // Line 313, Address: 0x2b7bf0, Func Offset: 0x580
    // Line 314, Address: 0x2b7c00, Func Offset: 0x590
    // Line 316, Address: 0x2b7c18, Func Offset: 0x5a8
    // Line 317, Address: 0x2b7c3c, Func Offset: 0x5cc
    // Line 319, Address: 0x2b7c50, Func Offset: 0x5e0
    // Line 317, Address: 0x2b7c54, Func Offset: 0x5e4
    // Line 319, Address: 0x2b7c5c, Func Offset: 0x5ec
    // Line 321, Address: 0x2b7c70, Func Offset: 0x600
    // Line 322, Address: 0x2b7c74, Func Offset: 0x604
    // Line 321, Address: 0x2b7c78, Func Offset: 0x608
    // Line 322, Address: 0x2b7c80, Func Offset: 0x610
    // Line 323, Address: 0x2b7c8c, Func Offset: 0x61c
    // Line 325, Address: 0x2b7c94, Func Offset: 0x624
    // Line 326, Address: 0x2b7cb8, Func Offset: 0x648
    // Line 327, Address: 0x2b7cc4, Func Offset: 0x654
    // Line 328, Address: 0x2b7cd8, Func Offset: 0x668
    // Line 327, Address: 0x2b7cdc, Func Offset: 0x66c
    // Line 328, Address: 0x2b7ce4, Func Offset: 0x674
    // Line 329, Address: 0x2b7d0c, Func Offset: 0x69c
    // Line 332, Address: 0x2b7d20, Func Offset: 0x6b0
    // Line 334, Address: 0x2b7d28, Func Offset: 0x6b8
    // Line 336, Address: 0x2b7d30, Func Offset: 0x6c0
    // Line 334, Address: 0x2b7d34, Func Offset: 0x6c4
    // Line 336, Address: 0x2b7d3c, Func Offset: 0x6cc
    // Line 337, Address: 0x2b7d58, Func Offset: 0x6e8
    // Line 339, Address: 0x2b7d64, Func Offset: 0x6f4
    // Line 337, Address: 0x2b7d6c, Func Offset: 0x6fc
    // Line 338, Address: 0x2b7d7c, Func Offset: 0x70c
    // Line 339, Address: 0x2b7d8c, Func Offset: 0x71c
    // Line 341, Address: 0x2b7d94, Func Offset: 0x724
    // Line 342, Address: 0x2b7db4, Func Offset: 0x744
    // Line 344, Address: 0x2b7dc0, Func Offset: 0x750
    // Line 342, Address: 0x2b7dc8, Func Offset: 0x758
    // Line 343, Address: 0x2b7dd8, Func Offset: 0x768
    // Line 344, Address: 0x2b7de8, Func Offset: 0x778
    // Line 346, Address: 0x2b7df0, Func Offset: 0x780
    // Line 347, Address: 0x2b7e28, Func Offset: 0x7b8
    // Line 348, Address: 0x2b7e58, Func Offset: 0x7e8
    // Line 349, Address: 0x2b7e78, Func Offset: 0x808
    // Line 351, Address: 0x2b7e88, Func Offset: 0x818
    // Line 349, Address: 0x2b7e94, Func Offset: 0x824
    // Line 351, Address: 0x2b7e98, Func Offset: 0x828
    // Line 349, Address: 0x2b7e9c, Func Offset: 0x82c
    // Line 351, Address: 0x2b7eac, Func Offset: 0x83c
    // Line 349, Address: 0x2b7eb4, Func Offset: 0x844
    // Line 350, Address: 0x2b7eb8, Func Offset: 0x848
    // Line 351, Address: 0x2b7ed0, Func Offset: 0x860
    // Line 353, Address: 0x2b7ed8, Func Offset: 0x868
    // Line 354, Address: 0x2b7ef8, Func Offset: 0x888
    // Line 357, Address: 0x2b7f00, Func Offset: 0x890
    // Line 358, Address: 0x2b7f14, Func Offset: 0x8a4
    // Line 359, Address: 0x2b7f1c, Func Offset: 0x8ac
    // Line 358, Address: 0x2b7f20, Func Offset: 0x8b0
    // Line 359, Address: 0x2b7f28, Func Offset: 0x8b8
    // Line 360, Address: 0x2b7f30, Func Offset: 0x8c0
    // Line 359, Address: 0x2b7f34, Func Offset: 0x8c4
    // Line 360, Address: 0x2b7f3c, Func Offset: 0x8cc
    // Line 361, Address: 0x2b7f50, Func Offset: 0x8e0
    // Line 362, Address: 0x2b7f54, Func Offset: 0x8e4
    // Line 363, Address: 0x2b7f64, Func Offset: 0x8f4
    // Line 362, Address: 0x2b7f68, Func Offset: 0x8f8
    // Line 363, Address: 0x2b7f70, Func Offset: 0x900
    // Line 364, Address: 0x2b7f8c, Func Offset: 0x91c
    // Line 365, Address: 0x2b7fac, Func Offset: 0x93c
    // Line 367, Address: 0x2b7fc8, Func Offset: 0x958
    // Line 370, Address: 0x2b7fd0, Func Offset: 0x960
    // Line 371, Address: 0x2b7fe4, Func Offset: 0x974
    // Line 372, Address: 0x2b7ffc, Func Offset: 0x98c
    // Line 373, Address: 0x2b8008, Func Offset: 0x998
    // Line 377, Address: 0x2b8010, Func Offset: 0x9a0
    // Line 373, Address: 0x2b8014, Func Offset: 0x9a4
    // Line 374, Address: 0x2b8020, Func Offset: 0x9b0
    // Line 375, Address: 0x2b8034, Func Offset: 0x9c4
    // Line 376, Address: 0x2b8048, Func Offset: 0x9d8
    // Line 377, Address: 0x2b805c, Func Offset: 0x9ec
    // Line 379, Address: 0x2b8070, Func Offset: 0xa00
    // Line 380, Address: 0x2b8090, Func Offset: 0xa20
    // Line 382, Address: 0x2b80a0, Func Offset: 0xa30
    // Line 381, Address: 0x2b80ac, Func Offset: 0xa3c
    // Line 380, Address: 0x2b80b8, Func Offset: 0xa48
    // Line 381, Address: 0x2b80bc, Func Offset: 0xa4c
    // Line 382, Address: 0x2b80c0, Func Offset: 0xa50
    // Line 384, Address: 0x2b80d4, Func Offset: 0xa64
    // Line 385, Address: 0x2b80f4, Func Offset: 0xa84
    // Line 388, Address: 0x2b80fc, Func Offset: 0xa8c
    // Line 389, Address: 0x2b811c, Func Offset: 0xaac
    // Line 391, Address: 0x2b813c, Func Offset: 0xacc
    // Line 392, Address: 0x2b8150, Func Offset: 0xae0
    // Line 393, Address: 0x2b8158, Func Offset: 0xae8
    // Line 395, Address: 0x2b815c, Func Offset: 0xaec
    // Func End, Address: 0x2b8188, Func Offset: 0xb18
}

//
// Start address: 0x2b8190
void bhDispFont(NJS_POINT2* pos, int code, int color, float pri)
{
    NJS_COLOR uv[4];
    NJS_COLOR col[4];
    NJS_POINT2 p[4];
    NJS_POINT2COL p2c;
    // Line 407, Address: 0x2b8190, Func Offset: 0
    // Line 415, Address: 0x2b81b8, Func Offset: 0x28
    // Line 416, Address: 0x2b81c0, Func Offset: 0x30
    // Line 417, Address: 0x2b81cc, Func Offset: 0x3c
    // Line 418, Address: 0x2b81d8, Func Offset: 0x48
    // Line 419, Address: 0x2b81f0, Func Offset: 0x60
    // Line 420, Address: 0x2b8214, Func Offset: 0x84
    // Line 421, Address: 0x2b821c, Func Offset: 0x8c
    // Line 426, Address: 0x2b8224, Func Offset: 0x94
    // Line 422, Address: 0x2b8228, Func Offset: 0x98
    // Line 426, Address: 0x2b822c, Func Offset: 0x9c
    // Line 422, Address: 0x2b8230, Func Offset: 0xa0
    // Line 423, Address: 0x2b8234, Func Offset: 0xa4
    // Line 426, Address: 0x2b823c, Func Offset: 0xac
    // Line 424, Address: 0x2b8244, Func Offset: 0xb4
    // Line 429, Address: 0x2b8248, Func Offset: 0xb8
    // Line 426, Address: 0x2b824c, Func Offset: 0xbc
    // Line 429, Address: 0x2b8250, Func Offset: 0xc0
    // Line 432, Address: 0x2b8254, Func Offset: 0xc4
    // Line 424, Address: 0x2b8258, Func Offset: 0xc8
    // Line 425, Address: 0x2b825c, Func Offset: 0xcc
    // Line 429, Address: 0x2b8260, Func Offset: 0xd0
    // Line 425, Address: 0x2b8264, Func Offset: 0xd4
    // Line 426, Address: 0x2b8268, Func Offset: 0xd8
    // Line 427, Address: 0x2b8274, Func Offset: 0xe4
    // Line 428, Address: 0x2b827c, Func Offset: 0xec
    // Line 429, Address: 0x2b8288, Func Offset: 0xf8
    // Line 430, Address: 0x2b8294, Func Offset: 0x104
    // Line 431, Address: 0x2b829c, Func Offset: 0x10c
    // Line 432, Address: 0x2b82a4, Func Offset: 0x114
    // Line 434, Address: 0x2b82d4, Func Offset: 0x144
    // Line 435, Address: 0x2b82e0, Func Offset: 0x150
    // Line 436, Address: 0x2b82e4, Func Offset: 0x154
    // Line 438, Address: 0x2b82e8, Func Offset: 0x158
    // Line 440, Address: 0x2b82f0, Func Offset: 0x160
    // Line 441, Address: 0x2b82fc, Func Offset: 0x16c
    // Line 442, Address: 0x2b8300, Func Offset: 0x170
    // Line 444, Address: 0x2b8304, Func Offset: 0x174
    // Line 446, Address: 0x2b830c, Func Offset: 0x17c
    // Line 447, Address: 0x2b8318, Func Offset: 0x188
    // Line 448, Address: 0x2b831c, Func Offset: 0x18c
    // Line 450, Address: 0x2b8320, Func Offset: 0x190
    // Line 452, Address: 0x2b8328, Func Offset: 0x198
    // Line 453, Address: 0x2b8334, Func Offset: 0x1a4
    // Line 454, Address: 0x2b8338, Func Offset: 0x1a8
    // Line 456, Address: 0x2b833c, Func Offset: 0x1ac
    // Line 458, Address: 0x2b8344, Func Offset: 0x1b4
    // Line 459, Address: 0x2b834c, Func Offset: 0x1bc
    // Line 460, Address: 0x2b8350, Func Offset: 0x1c0
    // Line 461, Address: 0x2b8354, Func Offset: 0x1c4
    // Line 464, Address: 0x2b8358, Func Offset: 0x1c8
    // Line 474, Address: 0x2b835c, Func Offset: 0x1cc
    // Line 464, Address: 0x2b8360, Func Offset: 0x1d0
    // Line 474, Address: 0x2b8364, Func Offset: 0x1d4
    // Line 465, Address: 0x2b8368, Func Offset: 0x1d8
    // Line 474, Address: 0x2b836c, Func Offset: 0x1dc
    // Line 464, Address: 0x2b8378, Func Offset: 0x1e8
    // Line 466, Address: 0x2b837c, Func Offset: 0x1ec
    // Line 465, Address: 0x2b8384, Func Offset: 0x1f4
    // Line 466, Address: 0x2b8388, Func Offset: 0x1f8
    // Line 465, Address: 0x2b8390, Func Offset: 0x200
    // Line 466, Address: 0x2b8394, Func Offset: 0x204
    // Line 465, Address: 0x2b8398, Func Offset: 0x208
    // Line 466, Address: 0x2b83a4, Func Offset: 0x214
    // Line 465, Address: 0x2b83a8, Func Offset: 0x218
    // Line 466, Address: 0x2b83b0, Func Offset: 0x220
    // Line 467, Address: 0x2b83cc, Func Offset: 0x23c
    // Line 468, Address: 0x2b83d8, Func Offset: 0x248
    // Line 469, Address: 0x2b83e0, Func Offset: 0x250
    // Line 470, Address: 0x2b83ec, Func Offset: 0x25c
    // Line 471, Address: 0x2b83f8, Func Offset: 0x268
    // Line 472, Address: 0x2b8400, Func Offset: 0x270
    // Line 474, Address: 0x2b8408, Func Offset: 0x278
    // Line 476, Address: 0x2b8410, Func Offset: 0x280
    // Func End, Address: 0x2b842c, Func Offset: 0x29c
}

//
// Start address: 0x2b8430
void bhDispFontEx(NJS_POINT2* pos, int code, unsigned int argb, float pri)
{
    NJS_COLOR uv[4];
    NJS_COLOR col[4];
    NJS_POINT2 p[4];
    NJS_POINT2COL p2c;
    // Line 488, Address: 0x2b8430, Func Offset: 0
    // Line 496, Address: 0x2b8458, Func Offset: 0x28
    // Line 497, Address: 0x2b8460, Func Offset: 0x30
    // Line 498, Address: 0x2b846c, Func Offset: 0x3c
    // Line 499, Address: 0x2b8478, Func Offset: 0x48
    // Line 500, Address: 0x2b8490, Func Offset: 0x60
    // Line 501, Address: 0x2b84b4, Func Offset: 0x84
    // Line 527, Address: 0x2b84b8, Func Offset: 0x88
    // Line 501, Address: 0x2b84bc, Func Offset: 0x8c
    // Line 502, Address: 0x2b84c0, Func Offset: 0x90
    // Line 503, Address: 0x2b84c8, Func Offset: 0x98
    // Line 504, Address: 0x2b84d0, Func Offset: 0xa0
    // Line 507, Address: 0x2b84d8, Func Offset: 0xa8
    // Line 517, Address: 0x2b84e4, Func Offset: 0xb4
    // Line 507, Address: 0x2b84e8, Func Offset: 0xb8
    // Line 517, Address: 0x2b84ec, Func Offset: 0xbc
    // Line 505, Address: 0x2b84f0, Func Offset: 0xc0
    // Line 527, Address: 0x2b84f4, Func Offset: 0xc4
    // Line 518, Address: 0x2b84f8, Func Offset: 0xc8
    // Line 510, Address: 0x2b84fc, Func Offset: 0xcc
    // Line 507, Address: 0x2b8504, Func Offset: 0xd4
    // Line 505, Address: 0x2b8508, Func Offset: 0xd8
    // Line 527, Address: 0x2b850c, Func Offset: 0xdc
    // Line 510, Address: 0x2b8514, Func Offset: 0xe4
    // Line 527, Address: 0x2b8518, Func Offset: 0xe8
    // Line 506, Address: 0x2b851c, Func Offset: 0xec
    // Line 507, Address: 0x2b8524, Func Offset: 0xf4
    // Line 508, Address: 0x2b8530, Func Offset: 0x100
    // Line 517, Address: 0x2b8534, Func Offset: 0x104
    // Line 519, Address: 0x2b8538, Func Offset: 0x108
    // Line 518, Address: 0x2b8540, Func Offset: 0x110
    // Line 508, Address: 0x2b8544, Func Offset: 0x114
    // Line 509, Address: 0x2b8548, Func Offset: 0x118
    // Line 519, Address: 0x2b854c, Func Offset: 0x11c
    // Line 509, Address: 0x2b8550, Func Offset: 0x120
    // Line 510, Address: 0x2b8558, Func Offset: 0x128
    // Line 511, Address: 0x2b8564, Func Offset: 0x134
    // Line 512, Address: 0x2b856c, Func Offset: 0x13c
    // Line 518, Address: 0x2b8570, Func Offset: 0x140
    // Line 512, Address: 0x2b8574, Func Offset: 0x144
    // Line 513, Address: 0x2b8578, Func Offset: 0x148
    // Line 518, Address: 0x2b857c, Func Offset: 0x14c
    // Line 519, Address: 0x2b8588, Func Offset: 0x158
    // Line 518, Address: 0x2b858c, Func Offset: 0x15c
    // Line 514, Address: 0x2b8590, Func Offset: 0x160
    // Line 515, Address: 0x2b8594, Func Offset: 0x164
    // Line 519, Address: 0x2b8598, Func Offset: 0x168
    // Line 512, Address: 0x2b85a0, Func Offset: 0x170
    // Line 519, Address: 0x2b85a4, Func Offset: 0x174
    // Line 516, Address: 0x2b85b4, Func Offset: 0x184
    // Line 519, Address: 0x2b85b8, Func Offset: 0x188
    // Line 520, Address: 0x2b85c0, Func Offset: 0x190
    // Line 521, Address: 0x2b85cc, Func Offset: 0x19c
    // Line 522, Address: 0x2b85d4, Func Offset: 0x1a4
    // Line 523, Address: 0x2b85e0, Func Offset: 0x1b0
    // Line 524, Address: 0x2b85ec, Func Offset: 0x1bc
    // Line 525, Address: 0x2b85f4, Func Offset: 0x1c4
    // Line 527, Address: 0x2b85fc, Func Offset: 0x1cc
    // Line 529, Address: 0x2b8604, Func Offset: 0x1d4
    // Func End, Address: 0x2b8620, Func Offset: 0x1f0
}

//
// Start address: 0x2b8620
int bhDispItemName(NJS_POINT2* pos, int id, int color, int count, float pri)
{
    int num;
    int cflg;
    unsigned short cd;
    unsigned short* dp;
    // Line 543, Address: 0x2b8620, Func Offset: 0
    // Line 547, Address: 0x2b8648, Func Offset: 0x28
    // Line 549, Address: 0x2b8654, Func Offset: 0x34
    // Line 547, Address: 0x2b8664, Func Offset: 0x44
    // Line 546, Address: 0x2b8674, Func Offset: 0x54
    // Line 547, Address: 0x2b867c, Func Offset: 0x5c
    // Line 551, Address: 0x2b8688, Func Offset: 0x68
    // Line 552, Address: 0x2b868c, Func Offset: 0x6c
    // Line 559, Address: 0x2b869c, Func Offset: 0x7c
    // Line 560, Address: 0x2b86a8, Func Offset: 0x88
    // Line 561, Address: 0x2b86b8, Func Offset: 0x98
    // Line 562, Address: 0x2b86d4, Func Offset: 0xb4
    // Line 563, Address: 0x2b86dc, Func Offset: 0xbc
    // Line 567, Address: 0x2b86f8, Func Offset: 0xd8
    // Line 568, Address: 0x2b8700, Func Offset: 0xe0
    // Line 569, Address: 0x2b8704, Func Offset: 0xe4
    // Line 572, Address: 0x2b8714, Func Offset: 0xf4
    // Line 573, Address: 0x2b8718, Func Offset: 0xf8
    // Func End, Address: 0x2b8744, Func Offset: 0x124
}

//
// Start address: 0x2b8750
int bhDispMessage(float px, float py, float pri, int mes_typ, int mes_idx, int color, int count)
{
    float sty;
    float stx;
    unsigned int* mes_dp;
    int num;
    int cflg;
    unsigned short cd;
    unsigned short* dp;
    NJS_POINT2 pos;
    // Line 591, Address: 0x2b8750, Func Offset: 0
    // Line 597, Address: 0x2b877c, Func Offset: 0x2c
    // Line 599, Address: 0x2b87a4, Func Offset: 0x54
    // Line 600, Address: 0x2b87a8, Func Offset: 0x58
    // Line 599, Address: 0x2b87ac, Func Offset: 0x5c
    // Line 600, Address: 0x2b87b0, Func Offset: 0x60
    // Line 601, Address: 0x2b87b8, Func Offset: 0x68
    // Line 603, Address: 0x2b87c0, Func Offset: 0x70
    // Line 604, Address: 0x2b87c8, Func Offset: 0x78
    // Line 603, Address: 0x2b87cc, Func Offset: 0x7c
    // Line 604, Address: 0x2b87d8, Func Offset: 0x88
    // Line 605, Address: 0x2b87e0, Func Offset: 0x90
    // Line 607, Address: 0x2b87e8, Func Offset: 0x98
    // Line 614, Address: 0x2b87fc, Func Offset: 0xac
    // Line 611, Address: 0x2b8800, Func Offset: 0xb0
    // Line 610, Address: 0x2b8804, Func Offset: 0xb4
    // Line 611, Address: 0x2b8808, Func Offset: 0xb8
    // Line 612, Address: 0x2b880c, Func Offset: 0xbc
    // Line 616, Address: 0x2b8814, Func Offset: 0xc4
    // Line 618, Address: 0x2b8818, Func Offset: 0xc8
    // Line 621, Address: 0x2b88e4, Func Offset: 0x194
    // Line 620, Address: 0x2b88ec, Func Offset: 0x19c
    // Line 621, Address: 0x2b88f0, Func Offset: 0x1a0
    // Line 622, Address: 0x2b8900, Func Offset: 0x1b0
    // Line 625, Address: 0x2b8908, Func Offset: 0x1b8
    // Line 626, Address: 0x2b8920, Func Offset: 0x1d0
    // Line 630, Address: 0x2b8928, Func Offset: 0x1d8
    // Line 634, Address: 0x2b8930, Func Offset: 0x1e0
    // Line 637, Address: 0x2b8938, Func Offset: 0x1e8
    // Line 638, Address: 0x2b8950, Func Offset: 0x200
    // Line 660, Address: 0x2b8958, Func Offset: 0x208
    // Line 661, Address: 0x2b8960, Func Offset: 0x210
    // Line 662, Address: 0x2b8970, Func Offset: 0x220
    // Line 663, Address: 0x2b8984, Func Offset: 0x234
    // Line 662, Address: 0x2b8988, Func Offset: 0x238
    // Line 664, Address: 0x2b8990, Func Offset: 0x240
    // Line 665, Address: 0x2b8998, Func Offset: 0x248
    // Line 666, Address: 0x2b899c, Func Offset: 0x24c
    // Line 670, Address: 0x2b89a4, Func Offset: 0x254
    // Func End, Address: 0x2b89d4, Func Offset: 0x284
}

//
// Start address: 0x2b89e0
int bhDispMessageEx(float px, float py, float pri, int mes_typ, int mes_idx, unsigned int argb, int count)
{
    float sty;
    float stx;
    unsigned int* mes_dp;
    int num;
    int cflg;
    unsigned short cd;
    unsigned short* dp;
    NJS_POINT2 pos;
    // Line 688, Address: 0x2b89e0, Func Offset: 0
    // Line 694, Address: 0x2b8a0c, Func Offset: 0x2c
    // Line 696, Address: 0x2b8a34, Func Offset: 0x54
    // Line 697, Address: 0x2b8a38, Func Offset: 0x58
    // Line 696, Address: 0x2b8a3c, Func Offset: 0x5c
    // Line 697, Address: 0x2b8a40, Func Offset: 0x60
    // Line 698, Address: 0x2b8a48, Func Offset: 0x68
    // Line 700, Address: 0x2b8a50, Func Offset: 0x70
    // Line 701, Address: 0x2b8a58, Func Offset: 0x78
    // Line 700, Address: 0x2b8a5c, Func Offset: 0x7c
    // Line 701, Address: 0x2b8a68, Func Offset: 0x88
    // Line 702, Address: 0x2b8a70, Func Offset: 0x90
    // Line 704, Address: 0x2b8a78, Func Offset: 0x98
    // Line 711, Address: 0x2b8a8c, Func Offset: 0xac
    // Line 708, Address: 0x2b8a90, Func Offset: 0xb0
    // Line 707, Address: 0x2b8a94, Func Offset: 0xb4
    // Line 708, Address: 0x2b8a98, Func Offset: 0xb8
    // Line 709, Address: 0x2b8a9c, Func Offset: 0xbc
    // Line 713, Address: 0x2b8aa4, Func Offset: 0xc4
    // Line 715, Address: 0x2b8aa8, Func Offset: 0xc8
    // Line 718, Address: 0x2b8b74, Func Offset: 0x194
    // Line 717, Address: 0x2b8b7c, Func Offset: 0x19c
    // Line 718, Address: 0x2b8b80, Func Offset: 0x1a0
    // Line 719, Address: 0x2b8b90, Func Offset: 0x1b0
    // Line 722, Address: 0x2b8b98, Func Offset: 0x1b8
    // Line 723, Address: 0x2b8bb0, Func Offset: 0x1d0
    // Line 724, Address: 0x2b8bb8, Func Offset: 0x1d8
    // Line 725, Address: 0x2b8bbc, Func Offset: 0x1dc
    // Line 731, Address: 0x2b8bcc, Func Offset: 0x1ec
    // Line 735, Address: 0x2b8bd4, Func Offset: 0x1f4
    // Line 738, Address: 0x2b8bdc, Func Offset: 0x1fc
    // Line 739, Address: 0x2b8bf4, Func Offset: 0x214
    // Line 761, Address: 0x2b8bfc, Func Offset: 0x21c
    // Line 762, Address: 0x2b8c04, Func Offset: 0x224
    // Line 763, Address: 0x2b8c14, Func Offset: 0x234
    // Line 764, Address: 0x2b8c28, Func Offset: 0x248
    // Line 763, Address: 0x2b8c2c, Func Offset: 0x24c
    // Line 765, Address: 0x2b8c34, Func Offset: 0x254
    // Line 766, Address: 0x2b8c3c, Func Offset: 0x25c
    // Line 767, Address: 0x2b8c40, Func Offset: 0x260
    // Line 771, Address: 0x2b8c48, Func Offset: 0x268
    // Func End, Address: 0x2b8c78, Func Offset: 0x298
}

//
// Start address: 0x2b8c80
void bhDispTime(NJS_POINT2* pos, unsigned int flg, int time, int color, float pri)
{
    unsigned short cd;
    int msc;
    int sec;
    int min;
    int hour;
    NJS_POINT2 dps;
    int ntb[10];
    // Line 784, Address: 0x2b8c80, Func Offset: 0
    // Line 800, Address: 0x2b8ca8, Func Offset: 0x28
    // Line 802, Address: 0x2b8cac, Func Offset: 0x2c
    // Line 800, Address: 0x2b8cc0, Func Offset: 0x40
    // Line 801, Address: 0x2b8cc4, Func Offset: 0x44
    // Line 803, Address: 0x2b8cc8, Func Offset: 0x48
    // Line 802, Address: 0x2b8cd0, Func Offset: 0x50
    // Line 801, Address: 0x2b8cdc, Func Offset: 0x5c
    // Line 802, Address: 0x2b8ce0, Func Offset: 0x60
    // Line 803, Address: 0x2b8ce4, Func Offset: 0x64
    // Line 802, Address: 0x2b8ce8, Func Offset: 0x68
    // Line 803, Address: 0x2b8cec, Func Offset: 0x6c
    // Line 804, Address: 0x2b8cf8, Func Offset: 0x78
    // Line 807, Address: 0x2b8d00, Func Offset: 0x80
    // Line 809, Address: 0x2b8d04, Func Offset: 0x84
    // Line 806, Address: 0x2b8d08, Func Offset: 0x88
    // Line 810, Address: 0x2b8d0c, Func Offset: 0x8c
    // Line 812, Address: 0x2b8d14, Func Offset: 0x94
    // Line 811, Address: 0x2b8d24, Func Offset: 0xa4
    // Line 812, Address: 0x2b8d28, Func Offset: 0xa8
    // Line 813, Address: 0x2b8d2c, Func Offset: 0xac
    // Line 812, Address: 0x2b8d34, Func Offset: 0xb4
    // Line 816, Address: 0x2b8d44, Func Offset: 0xc4
    // Line 812, Address: 0x2b8d4c, Func Offset: 0xcc
    // Line 813, Address: 0x2b8d50, Func Offset: 0xd0
    // Line 816, Address: 0x2b8d7c, Func Offset: 0xfc
    // Line 822, Address: 0x2b8da8, Func Offset: 0x128
    // Line 823, Address: 0x2b8db0, Func Offset: 0x130
    // Line 826, Address: 0x2b8dbc, Func Offset: 0x13c
    // Line 825, Address: 0x2b8dc0, Func Offset: 0x140
    // Line 828, Address: 0x2b8dc4, Func Offset: 0x144
    // Line 829, Address: 0x2b8dcc, Func Offset: 0x14c
    // Line 830, Address: 0x2b8de4, Func Offset: 0x164
    // Line 829, Address: 0x2b8dec, Func Offset: 0x16c
    // Line 830, Address: 0x2b8e08, Func Offset: 0x188
    // Line 834, Address: 0x2b8e34, Func Offset: 0x1b4
    // Line 884, Address: 0x2b8e74, Func Offset: 0x1f4
    // Line 885, Address: 0x2b8e80, Func Offset: 0x200
    // Line 886, Address: 0x2b8ec0, Func Offset: 0x240
    // Line 887, Address: 0x2b8ecc, Func Offset: 0x24c
    // Line 886, Address: 0x2b8ed0, Func Offset: 0x250
    // Line 887, Address: 0x2b8ed4, Func Offset: 0x254
    // Line 886, Address: 0x2b8ed8, Func Offset: 0x258
    // Line 887, Address: 0x2b8edc, Func Offset: 0x25c
    // Line 886, Address: 0x2b8ee4, Func Offset: 0x264
    // Line 887, Address: 0x2b8ef0, Func Offset: 0x270
    // Line 888, Address: 0x2b8f10, Func Offset: 0x290
    // Line 890, Address: 0x2b8f24, Func Offset: 0x2a4
    // Line 888, Address: 0x2b8f2c, Func Offset: 0x2ac
    // Line 890, Address: 0x2b8f30, Func Offset: 0x2b0
    // Line 888, Address: 0x2b8f38, Func Offset: 0x2b8
    // Line 890, Address: 0x2b8f3c, Func Offset: 0x2bc
    // Line 891, Address: 0x2b8f44, Func Offset: 0x2c4
    // Line 894, Address: 0x2b8f64, Func Offset: 0x2e4
    // Line 895, Address: 0x2b8f70, Func Offset: 0x2f0
    // Line 896, Address: 0x2b8fa8, Func Offset: 0x328
    // Line 897, Address: 0x2b8fe8, Func Offset: 0x368
    // Line 898, Address: 0x2b8ff4, Func Offset: 0x374
    // Line 897, Address: 0x2b8ff8, Func Offset: 0x378
    // Line 898, Address: 0x2b8ffc, Func Offset: 0x37c
    // Line 897, Address: 0x2b9000, Func Offset: 0x380
    // Line 898, Address: 0x2b9004, Func Offset: 0x384
    // Line 897, Address: 0x2b900c, Func Offset: 0x38c
    // Line 898, Address: 0x2b9018, Func Offset: 0x398
    // Line 899, Address: 0x2b9038, Func Offset: 0x3b8
    // Line 901, Address: 0x2b904c, Func Offset: 0x3cc
    // Line 902, Address: 0x2b9050, Func Offset: 0x3d0
    // Line 899, Address: 0x2b9054, Func Offset: 0x3d4
    // Line 901, Address: 0x2b9058, Func Offset: 0x3d8
    // Line 899, Address: 0x2b9064, Func Offset: 0x3e4
    // Line 902, Address: 0x2b9068, Func Offset: 0x3e8
    // Line 903, Address: 0x2b907c, Func Offset: 0x3fc
    // Line 906, Address: 0x2b909c, Func Offset: 0x41c
    // Line 907, Address: 0x2b90a8, Func Offset: 0x428
    // Line 908, Address: 0x2b90e8, Func Offset: 0x468
    // Line 909, Address: 0x2b90f4, Func Offset: 0x474
    // Line 908, Address: 0x2b90f8, Func Offset: 0x478
    // Line 909, Address: 0x2b90fc, Func Offset: 0x47c
    // Line 908, Address: 0x2b9100, Func Offset: 0x480
    // Line 909, Address: 0x2b9104, Func Offset: 0x484
    // Line 908, Address: 0x2b910c, Func Offset: 0x48c
    // Line 909, Address: 0x2b9118, Func Offset: 0x498
    // Line 910, Address: 0x2b9138, Func Offset: 0x4b8
    // Line 911, Address: 0x2b9154, Func Offset: 0x4d4
    // Line 913, Address: 0x2b915c, Func Offset: 0x4dc
    // Line 914, Address: 0x2b9170, Func Offset: 0x4f0
    // Line 918, Address: 0x2b9190, Func Offset: 0x510
    // Line 919, Address: 0x2b919c, Func Offset: 0x51c
    // Line 920, Address: 0x2b91dc, Func Offset: 0x55c
    // Line 921, Address: 0x2b91e8, Func Offset: 0x568
    // Line 920, Address: 0x2b91ec, Func Offset: 0x56c
    // Line 921, Address: 0x2b91f0, Func Offset: 0x570
    // Line 920, Address: 0x2b91f4, Func Offset: 0x574
    // Line 921, Address: 0x2b91f8, Func Offset: 0x578
    // Line 920, Address: 0x2b9200, Func Offset: 0x580
    // Line 921, Address: 0x2b920c, Func Offset: 0x58c
    // Line 924, Address: 0x2b922c, Func Offset: 0x5ac
    // Func End, Address: 0x2b9258, Func Offset: 0x5d8
}

//
// Start address: 0x2b9260
void bhDispTimeEx(NJS_POINT2* pos, unsigned int flg, int time, unsigned int argb, float pri)
{
    unsigned short cd;
    int msc;
    int sec;
    int min;
    int hour;
    NJS_POINT2 dps;
    int ntb[10];
    // Line 937, Address: 0x2b9260, Func Offset: 0
    // Line 953, Address: 0x2b9288, Func Offset: 0x28
    // Line 955, Address: 0x2b928c, Func Offset: 0x2c
    // Line 953, Address: 0x2b92a0, Func Offset: 0x40
    // Line 954, Address: 0x2b92a4, Func Offset: 0x44
    // Line 956, Address: 0x2b92a8, Func Offset: 0x48
    // Line 955, Address: 0x2b92b0, Func Offset: 0x50
    // Line 954, Address: 0x2b92bc, Func Offset: 0x5c
    // Line 955, Address: 0x2b92c0, Func Offset: 0x60
    // Line 956, Address: 0x2b92c4, Func Offset: 0x64
    // Line 955, Address: 0x2b92c8, Func Offset: 0x68
    // Line 956, Address: 0x2b92cc, Func Offset: 0x6c
    // Line 957, Address: 0x2b92d8, Func Offset: 0x78
    // Line 960, Address: 0x2b92e0, Func Offset: 0x80
    // Line 962, Address: 0x2b92e4, Func Offset: 0x84
    // Line 959, Address: 0x2b92e8, Func Offset: 0x88
    // Line 963, Address: 0x2b92ec, Func Offset: 0x8c
    // Line 965, Address: 0x2b92f4, Func Offset: 0x94
    // Line 964, Address: 0x2b9304, Func Offset: 0xa4
    // Line 965, Address: 0x2b9308, Func Offset: 0xa8
    // Line 966, Address: 0x2b930c, Func Offset: 0xac
    // Line 965, Address: 0x2b9314, Func Offset: 0xb4
    // Line 969, Address: 0x2b9324, Func Offset: 0xc4
    // Line 965, Address: 0x2b932c, Func Offset: 0xcc
    // Line 966, Address: 0x2b9330, Func Offset: 0xd0
    // Line 969, Address: 0x2b935c, Func Offset: 0xfc
    // Line 975, Address: 0x2b9388, Func Offset: 0x128
    // Line 976, Address: 0x2b9390, Func Offset: 0x130
    // Line 979, Address: 0x2b939c, Func Offset: 0x13c
    // Line 978, Address: 0x2b93a0, Func Offset: 0x140
    // Line 981, Address: 0x2b93a4, Func Offset: 0x144
    // Line 982, Address: 0x2b93ac, Func Offset: 0x14c
    // Line 983, Address: 0x2b93c4, Func Offset: 0x164
    // Line 982, Address: 0x2b93cc, Func Offset: 0x16c
    // Line 983, Address: 0x2b93e8, Func Offset: 0x188
    // Line 987, Address: 0x2b9414, Func Offset: 0x1b4
    // Line 1037, Address: 0x2b9454, Func Offset: 0x1f4
    // Line 1038, Address: 0x2b9460, Func Offset: 0x200
    // Line 1039, Address: 0x2b94a0, Func Offset: 0x240
    // Line 1040, Address: 0x2b94ac, Func Offset: 0x24c
    // Line 1039, Address: 0x2b94b0, Func Offset: 0x250
    // Line 1040, Address: 0x2b94b4, Func Offset: 0x254
    // Line 1039, Address: 0x2b94b8, Func Offset: 0x258
    // Line 1040, Address: 0x2b94bc, Func Offset: 0x25c
    // Line 1039, Address: 0x2b94c4, Func Offset: 0x264
    // Line 1040, Address: 0x2b94d0, Func Offset: 0x270
    // Line 1041, Address: 0x2b94f0, Func Offset: 0x290
    // Line 1043, Address: 0x2b9504, Func Offset: 0x2a4
    // Line 1041, Address: 0x2b950c, Func Offset: 0x2ac
    // Line 1043, Address: 0x2b9510, Func Offset: 0x2b0
    // Line 1041, Address: 0x2b9518, Func Offset: 0x2b8
    // Line 1043, Address: 0x2b951c, Func Offset: 0x2bc
    // Line 1044, Address: 0x2b9524, Func Offset: 0x2c4
    // Line 1047, Address: 0x2b9544, Func Offset: 0x2e4
    // Line 1048, Address: 0x2b9550, Func Offset: 0x2f0
    // Line 1049, Address: 0x2b9588, Func Offset: 0x328
    // Line 1050, Address: 0x2b95c8, Func Offset: 0x368
    // Line 1051, Address: 0x2b95d4, Func Offset: 0x374
    // Line 1050, Address: 0x2b95d8, Func Offset: 0x378
    // Line 1051, Address: 0x2b95dc, Func Offset: 0x37c
    // Line 1050, Address: 0x2b95e0, Func Offset: 0x380
    // Line 1051, Address: 0x2b95e4, Func Offset: 0x384
    // Line 1050, Address: 0x2b95ec, Func Offset: 0x38c
    // Line 1051, Address: 0x2b95f8, Func Offset: 0x398
    // Line 1052, Address: 0x2b9618, Func Offset: 0x3b8
    // Line 1054, Address: 0x2b962c, Func Offset: 0x3cc
    // Line 1055, Address: 0x2b9630, Func Offset: 0x3d0
    // Line 1052, Address: 0x2b9634, Func Offset: 0x3d4
    // Line 1054, Address: 0x2b9638, Func Offset: 0x3d8
    // Line 1052, Address: 0x2b9644, Func Offset: 0x3e4
    // Line 1055, Address: 0x2b9648, Func Offset: 0x3e8
    // Line 1056, Address: 0x2b965c, Func Offset: 0x3fc
    // Line 1059, Address: 0x2b967c, Func Offset: 0x41c
    // Line 1060, Address: 0x2b9688, Func Offset: 0x428
    // Line 1061, Address: 0x2b96c8, Func Offset: 0x468
    // Line 1062, Address: 0x2b96d4, Func Offset: 0x474
    // Line 1061, Address: 0x2b96d8, Func Offset: 0x478
    // Line 1062, Address: 0x2b96dc, Func Offset: 0x47c
    // Line 1061, Address: 0x2b96e0, Func Offset: 0x480
    // Line 1062, Address: 0x2b96e4, Func Offset: 0x484
    // Line 1061, Address: 0x2b96ec, Func Offset: 0x48c
    // Line 1062, Address: 0x2b96f8, Func Offset: 0x498
    // Line 1063, Address: 0x2b9718, Func Offset: 0x4b8
    // Line 1064, Address: 0x2b9734, Func Offset: 0x4d4
    // Line 1066, Address: 0x2b973c, Func Offset: 0x4dc
    // Line 1067, Address: 0x2b9750, Func Offset: 0x4f0
    // Line 1071, Address: 0x2b9770, Func Offset: 0x510
    // Line 1072, Address: 0x2b977c, Func Offset: 0x51c
    // Line 1073, Address: 0x2b97bc, Func Offset: 0x55c
    // Line 1074, Address: 0x2b97c8, Func Offset: 0x568
    // Line 1073, Address: 0x2b97cc, Func Offset: 0x56c
    // Line 1074, Address: 0x2b97d0, Func Offset: 0x570
    // Line 1073, Address: 0x2b97d4, Func Offset: 0x574
    // Line 1074, Address: 0x2b97d8, Func Offset: 0x578
    // Line 1073, Address: 0x2b97e0, Func Offset: 0x580
    // Line 1074, Address: 0x2b97ec, Func Offset: 0x58c
    // Line 1077, Address: 0x2b980c, Func Offset: 0x5ac
    // Func End, Address: 0x2b9838, Func Offset: 0x5d8
}

//
// Start address: 0x2b9840
float bhGetFontSize(unsigned short code)
{
    // Line 1088, Address: 0x2b9840, Func Offset: 0
    // Line 1093, Address: 0x2b989c, Func Offset: 0x5c
    // Func End, Address: 0x2b98a4, Func Offset: 0x64
}

//
// Start address: 0x2b98b0
float bhMesLen(unsigned short* dp)
{
    float len;
    unsigned short cd;
    // Line 1103, Address: 0x2b98b0, Func Offset: 0
    // Line 1106, Address: 0x2b98c0, Func Offset: 0x10
    // Line 1108, Address: 0x2b98c8, Func Offset: 0x18
    // Line 1110, Address: 0x2b98cc, Func Offset: 0x1c
    // Line 1115, Address: 0x2b99d0, Func Offset: 0x120
    // Line 1116, Address: 0x2b99e8, Func Offset: 0x138
    // Line 1119, Address: 0x2b99f0, Func Offset: 0x140
    // Line 1120, Address: 0x2b99f4, Func Offset: 0x144
    // Line 1123, Address: 0x2b99fc, Func Offset: 0x14c
    // Line 1124, Address: 0x2b9a00, Func Offset: 0x150
    // Line 1149, Address: 0x2b9a08, Func Offset: 0x158
    // Line 1150, Address: 0x2b9a14, Func Offset: 0x164
    // Line 1151, Address: 0x2b9a28, Func Offset: 0x178
    // Line 1152, Address: 0x2b9a30, Func Offset: 0x180
    // Line 1153, Address: 0x2b9a34, Func Offset: 0x184
    // Func End, Address: 0x2b9a48, Func Offset: 0x198
}

//
// Start address: 0x2b9a50
void bhFontScaleSet(float ScaleX, float ScaleY, float ScaleCR)
{
    // Line 1235, Address: 0x2b9a50, Func Offset: 0
    // Line 1236, Address: 0x2b9a58, Func Offset: 0x8
    // Line 1237, Address: 0x2b9a60, Func Offset: 0x10
    // Line 1238, Address: 0x2b9a64, Func Offset: 0x14
    // Func End, Address: 0x2b9a6c, Func Offset: 0x1c
}
