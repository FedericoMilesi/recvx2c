#include "ps2_MovieFunc.h"

#include <libmpeg.h>
#include <eekernel.h>


int isCountVblank;
int isFrameEnd;
int oddeven;
int handler_error;
int __image_w__;
int __image_h__;
long128 new_tags[64];
VIDEO_DECODER videoDec;
int videoDecTh;
// void* _gp; // MIPS specific thing?
char* videoDecStack;
// void (*videoDecMain)(VIDEO_DECODER*);
REMOTE_INPUT rmi;
unsigned int Ps2_vcount;
FILE_DESCRIPTOR infile;
VIDEO_OUTPUT_BUFFER voBuf;
VIDEO_OUTPUT_BUFFER_TAG* voBufTag;
VIDEO_OUTPUT_BUFFER_DATA* voBufData;
READ_BUFFER* readBuf;
AUDIO_DECODER audioDec;
int iop_zero_buff;
int iop_buff;
unsigned char* audioBuff;
TIMESTAMP_INFO* timeStamp;
long128* viBufTag;
long128* viBufData;
// int (*pcmCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
// int (*videoCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
// int (*mpegTS)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
// int (*mpegRestartDMA)(sceMpeg*, sceMpegCbData*, void*);    // MPEG restart DMA callback
// int (*mpegStopDMA)(sceMpeg*, sceMpegCbData*, void*);       // MPEG stop DMA callback
// int (*mpegNodata)(sceMpeg*, sceMpegCbData*, void*);        // MPEG no data callback
// int (*mpegError)(sceMpeg*, sceMpegCbDataError*, void*);    // MPEG error callback
unsigned char* mpegWork;
int frd;
VIDEO_SIZE mdSize;
int movie_draw;
char sound_flag;
unsigned char* Ps2_MOVIE;
extern long128 test_tag[1400];
sceGsDBuff db;

//
// Start address: 0x2eb590
void initAll()
{
    struct SemaParam param;
    struct ThreadParam th_param;
    // Line 187, Address: 0x2eb590, Func Offset: 0
    // Line 192, Address: 0x2eb598, Func Offset: 0x8
    // Line 193, Address: 0x2eb5a0, Func Offset: 0x10
    // Line 201, Address: 0x2eb5b0, Func Offset: 0x20
    // Line 208, Address: 0x2eb5b8, Func Offset: 0x28
    // Line 212, Address: 0x2eb5c0, Func Offset: 0x30
    // Line 208, Address: 0x2eb5c4, Func Offset: 0x34
    // Line 212, Address: 0x2eb5cc, Func Offset: 0x3c
    // Line 218, Address: 0x2eb5d4, Func Offset: 0x44
    // Line 219, Address: 0x2eb5dc, Func Offset: 0x4c
    // Line 218, Address: 0x2eb5e0, Func Offset: 0x50
    // Line 219, Address: 0x2eb5f0, Func Offset: 0x60
    // Line 225, Address: 0x2eb5f8, Func Offset: 0x68
    // Line 226, Address: 0x2eb600, Func Offset: 0x70
    // Line 228, Address: 0x2eb608, Func Offset: 0x78
    // Line 231, Address: 0x2eb624, Func Offset: 0x94
    // Line 232, Address: 0x2eb640, Func Offset: 0xb0
    // Line 233, Address: 0x2eb65c, Func Offset: 0xcc
    // Line 234, Address: 0x2eb678, Func Offset: 0xe8
    // Line 235, Address: 0x2eb694, Func Offset: 0x104
    // Line 238, Address: 0x2eb6b0, Func Offset: 0x120
    // Line 242, Address: 0x2eb6b8, Func Offset: 0x128
    // Line 244, Address: 0x2eb6c0, Func Offset: 0x130
    // Line 242, Address: 0x2eb6c8, Func Offset: 0x138
    // Line 244, Address: 0x2eb6cc, Func Offset: 0x13c
    // Line 250, Address: 0x2eb6dc, Func Offset: 0x14c
    // Line 246, Address: 0x2eb6e4, Func Offset: 0x154
    // Line 257, Address: 0x2eb6e8, Func Offset: 0x158
    // Line 246, Address: 0x2eb6ec, Func Offset: 0x15c
    // Line 247, Address: 0x2eb6f4, Func Offset: 0x164
    // Line 250, Address: 0x2eb700, Func Offset: 0x170
    // Line 252, Address: 0x2eb708, Func Offset: 0x178
    // Line 255, Address: 0x2eb714, Func Offset: 0x184
    // Line 257, Address: 0x2eb71c, Func Offset: 0x18c
    // Line 260, Address: 0x2eb72c, Func Offset: 0x19c
    // Line 263, Address: 0x2eb738, Func Offset: 0x1a8
    // Line 270, Address: 0x2eb740, Func Offset: 0x1b0
    // Line 271, Address: 0x2eb748, Func Offset: 0x1b8
    // Line 272, Address: 0x2eb750, Func Offset: 0x1c0
    // Line 275, Address: 0x2eb758, Func Offset: 0x1c8
    // Line 279, Address: 0x2eb75c, Func Offset: 0x1cc
    // Line 299, Address: 0x2eb760, Func Offset: 0x1d0
    // Line 287, Address: 0x2eb764, Func Offset: 0x1d4
    // Line 293, Address: 0x2eb76c, Func Offset: 0x1dc
    // Line 272, Address: 0x2eb774, Func Offset: 0x1e4
    // Line 273, Address: 0x2eb77c, Func Offset: 0x1ec
    // Line 274, Address: 0x2eb784, Func Offset: 0x1f4
    // Line 275, Address: 0x2eb78c, Func Offset: 0x1fc
    // Line 276, Address: 0x2eb794, Func Offset: 0x204
    // Line 277, Address: 0x2eb79c, Func Offset: 0x20c
    // Line 279, Address: 0x2eb7a4, Func Offset: 0x214
    // Line 280, Address: 0x2eb7ac, Func Offset: 0x21c
    // Line 281, Address: 0x2eb7b4, Func Offset: 0x224
    // Line 299, Address: 0x2eb7bc, Func Offset: 0x22c
    // Line 287, Address: 0x2eb7c0, Func Offset: 0x230
    // Line 299, Address: 0x2eb7c8, Func Offset: 0x238
    // Line 293, Address: 0x2eb7d4, Func Offset: 0x244
    // Line 299, Address: 0x2eb7d8, Func Offset: 0x248
    // Line 293, Address: 0x2eb7dc, Func Offset: 0x24c
    // Line 299, Address: 0x2eb7e0, Func Offset: 0x250
    // Line 301, Address: 0x2eb7ec, Func Offset: 0x25c
    // Line 308, Address: 0x2eb810, Func Offset: 0x280
    // Line 309, Address: 0x2eb824, Func Offset: 0x294
    // Line 350, Address: 0x2eb82c, Func Offset: 0x29c
    // Line 354, Address: 0x2eb834, Func Offset: 0x2a4
    // Line 310, Address: 0x2eb838, Func Offset: 0x2a8
    // Line 309, Address: 0x2eb83c, Func Offset: 0x2ac
    // Line 310, Address: 0x2eb844, Func Offset: 0x2b4
    // Line 311, Address: 0x2eb84c, Func Offset: 0x2bc
    // Line 312, Address: 0x2eb854, Func Offset: 0x2c4
    // Line 314, Address: 0x2eb85c, Func Offset: 0x2cc
    // Line 352, Address: 0x2eb864, Func Offset: 0x2d4
    // Line 354, Address: 0x2eb868, Func Offset: 0x2d8
    // Line 314, Address: 0x2eb86c, Func Offset: 0x2dc
    // Line 332, Address: 0x2eb870, Func Offset: 0x2e0
    // Line 350, Address: 0x2eb878, Func Offset: 0x2e8
    // Line 356, Address: 0x2eb87c, Func Offset: 0x2ec
    // Line 340, Address: 0x2eb880, Func Offset: 0x2f0
    // Line 351, Address: 0x2eb888, Func Offset: 0x2f8
    // Line 332, Address: 0x2eb890, Func Offset: 0x300
    // Line 333, Address: 0x2eb898, Func Offset: 0x308
    // Line 334, Address: 0x2eb8a0, Func Offset: 0x310
    // Line 351, Address: 0x2eb8a8, Func Offset: 0x318
    // Line 335, Address: 0x2eb8ac, Func Offset: 0x31c
    // Line 352, Address: 0x2eb8b0, Func Offset: 0x320
    // Line 335, Address: 0x2eb8b4, Func Offset: 0x324
    // Line 340, Address: 0x2eb8b8, Func Offset: 0x328
    // Line 353, Address: 0x2eb8bc, Func Offset: 0x32c
    // Line 354, Address: 0x2eb8c0, Func Offset: 0x330
    // Line 340, Address: 0x2eb8c4, Func Offset: 0x334
    // Line 356, Address: 0x2eb8c8, Func Offset: 0x338
    // Line 357, Address: 0x2eb8d8, Func Offset: 0x348
    // Line 358, Address: 0x2eb8ec, Func Offset: 0x35c
    // Func End, Address: 0x2eb8f8, Func Offset: 0x368
}

//
// Start address: 0x2eb900
void readMpeg()
{
    unsigned int uiReadError;
    // Line 374, Address: 0x2eb900, Func Offset: 0
    // Line 378, Address: 0x2eb908, Func Offset: 0x8
    // Line 383, Address: 0x2eb93c, Func Offset: 0x3c
    // Line 385, Address: 0x2eb958, Func Offset: 0x58
    // Line 387, Address: 0x2eb95c, Func Offset: 0x5c
    // Line 385, Address: 0x2eb960, Func Offset: 0x60
    // Line 384, Address: 0x2eb964, Func Offset: 0x64
    // Line 387, Address: 0x2eb968, Func Offset: 0x68
    // Line 389, Address: 0x2eb974, Func Offset: 0x74
    // Line 397, Address: 0x2eb988, Func Offset: 0x88
    // Line 398, Address: 0x2eb9a8, Func Offset: 0xa8
    // Line 401, Address: 0x2eb9b8, Func Offset: 0xb8
    // Line 405, Address: 0x2eb9dc, Func Offset: 0xdc
    // Line 406, Address: 0x2eb9f8, Func Offset: 0xf8
    // Line 407, Address: 0x2eba04, Func Offset: 0x104
    // Line 410, Address: 0x2eba0c, Func Offset: 0x10c
    // Line 407, Address: 0x2eba14, Func Offset: 0x114
    // Line 410, Address: 0x2eba20, Func Offset: 0x120
    // Line 412, Address: 0x2eba3c, Func Offset: 0x13c
    // Line 413, Address: 0x2eba58, Func Offset: 0x158
    // Line 412, Address: 0x2eba5c, Func Offset: 0x15c
    // Line 413, Address: 0x2eba60, Func Offset: 0x160
    // Line 415, Address: 0x2eba68, Func Offset: 0x168
    // Line 413, Address: 0x2eba6c, Func Offset: 0x16c
    // Line 415, Address: 0x2eba74, Func Offset: 0x174
    // Line 418, Address: 0x2eba8c, Func Offset: 0x18c
    // Line 424, Address: 0x2eba98, Func Offset: 0x198
    // Line 425, Address: 0x2ebaac, Func Offset: 0x1ac
    // Line 426, Address: 0x2ebab8, Func Offset: 0x1b8
    // Line 429, Address: 0x2ebae4, Func Offset: 0x1e4
    // Line 431, Address: 0x2ebaf4, Func Offset: 0x1f4
    // Line 434, Address: 0x2ebb14, Func Offset: 0x214
    // Line 435, Address: 0x2ebb28, Func Offset: 0x228
    // Line 443, Address: 0x2ebb44, Func Offset: 0x244
    // Line 450, Address: 0x2ebb50, Func Offset: 0x250
    // Line 454, Address: 0x2ebb98, Func Offset: 0x298
    // Line 457, Address: 0x2ebba4, Func Offset: 0x2a4
    // Line 460, Address: 0x2ebbc8, Func Offset: 0x2c8
    // Line 461, Address: 0x2ebbd0, Func Offset: 0x2d0
    // Line 464, Address: 0x2ebbd8, Func Offset: 0x2d8
    // Line 466, Address: 0x2ebbe4, Func Offset: 0x2e4
    // Func End, Address: 0x2ebbf0, Func Offset: 0x2f0
}

//
// Start address: 0x2ebbf0
int readBufEndGet(READ_BUFFER* b, int size)
{
    // Line 475, Address: 0x2ebbf0, Func Offset: 0
    // Line 477, Address: 0x2ebbf4, Func Offset: 0x4
    // Line 475, Address: 0x2ebbf8, Func Offset: 0x8
    // Line 477, Address: 0x2ebc00, Func Offset: 0x10
    // Line 479, Address: 0x2ebc04, Func Offset: 0x14
    // Line 480, Address: 0x2ebc08, Func Offset: 0x18
    // Func End, Address: 0x2ebc10, Func Offset: 0x20
}

//
// Start address: 0x2ebc10
void setImageTag(unsigned int* tags, void* image)
{
    unsigned long giftag[2];
    unsigned long* tag;
    int i;
    int mby;
    int mbx;
    // Line 531, Address: 0x2ebc10, Func Offset: 0
    // Line 538, Address: 0x2ebc3c, Func Offset: 0x2c
    // Line 532, Address: 0x2ebc48, Func Offset: 0x38
    // Line 538, Address: 0x2ebc50, Func Offset: 0x40
    // Line 547, Address: 0x2ebc58, Func Offset: 0x48
    // Line 533, Address: 0x2ebc5c, Func Offset: 0x4c
    // Line 532, Address: 0x2ebc64, Func Offset: 0x54
    // Line 538, Address: 0x2ebc6c, Func Offset: 0x5c
    // Line 547, Address: 0x2ebc74, Func Offset: 0x64
    // Line 548, Address: 0x2ebcd4, Func Offset: 0xc4
    // Line 554, Address: 0x2ebcdc, Func Offset: 0xcc
    // Line 564, Address: 0x2ebce8, Func Offset: 0xd8
    // Line 555, Address: 0x2ebcec, Func Offset: 0xdc
    // Line 559, Address: 0x2ebcf0, Func Offset: 0xe0
    // Line 556, Address: 0x2ebcf4, Func Offset: 0xe4
    // Line 559, Address: 0x2ebcf8, Func Offset: 0xe8
    // Line 557, Address: 0x2ebcfc, Func Offset: 0xec
    // Line 559, Address: 0x2ebd00, Func Offset: 0xf0
    // Line 560, Address: 0x2ebd08, Func Offset: 0xf8
    // Line 561, Address: 0x2ebd10, Func Offset: 0x100
    // Line 562, Address: 0x2ebd18, Func Offset: 0x108
    // Line 564, Address: 0x2ebd20, Func Offset: 0x110
    // Line 565, Address: 0x2ebd24, Func Offset: 0x114
    // Line 570, Address: 0x2ebd28, Func Offset: 0x118
    // Line 568, Address: 0x2ebd2c, Func Offset: 0x11c
    // Line 570, Address: 0x2ebd30, Func Offset: 0x120
    // Line 569, Address: 0x2ebd34, Func Offset: 0x124
    // Line 570, Address: 0x2ebd38, Func Offset: 0x128
    // Line 571, Address: 0x2ebd40, Func Offset: 0x130
    // Line 573, Address: 0x2ebd48, Func Offset: 0x138
    // Line 572, Address: 0x2ebd4c, Func Offset: 0x13c
    // Line 573, Address: 0x2ebd50, Func Offset: 0x140
    // Line 576, Address: 0x2ebd54, Func Offset: 0x144
    // Line 579, Address: 0x2ebd5c, Func Offset: 0x14c
    // Line 577, Address: 0x2ebd70, Func Offset: 0x160
    // Line 579, Address: 0x2ebd74, Func Offset: 0x164
    // Line 581, Address: 0x2ebd7c, Func Offset: 0x16c
    // Line 583, Address: 0x2ebd80, Func Offset: 0x170
    // Line 584, Address: 0x2ebd88, Func Offset: 0x178
    // Line 585, Address: 0x2ebd90, Func Offset: 0x180
    // Line 586, Address: 0x2ebda8, Func Offset: 0x198
    // Line 588, Address: 0x2ebdb0, Func Offset: 0x1a0
    // Func End, Address: 0x2ebde0, Func Offset: 0x1d0
}

//
// Start address: 0x2ebde0
void vbrank_draw()
{
    unsigned long giftag_eop[2];
    unsigned long* tag;
    // Line 591, Address: 0x2ebde0, Func Offset: 0
    // Line 598, Address: 0x2ebde4, Func Offset: 0x4
    // Line 591, Address: 0x2ebdec, Func Offset: 0xc
    // Line 598, Address: 0x2ebdf0, Func Offset: 0x10
    // Line 601, Address: 0x2ebdf8, Func Offset: 0x18
    // Line 607, Address: 0x2ebe00, Func Offset: 0x20
    // Line 603, Address: 0x2ebe08, Func Offset: 0x28
    // Line 608, Address: 0x2ebe18, Func Offset: 0x38
    // Line 607, Address: 0x2ebe20, Func Offset: 0x40
    // Line 611, Address: 0x2ebe28, Func Offset: 0x48
    // Line 608, Address: 0x2ebe30, Func Offset: 0x50
    // Line 612, Address: 0x2ebe38, Func Offset: 0x58
    // Line 611, Address: 0x2ebe40, Func Offset: 0x60
    // Line 613, Address: 0x2ebe48, Func Offset: 0x68
    // Line 612, Address: 0x2ebe50, Func Offset: 0x70
    // Line 613, Address: 0x2ebe54, Func Offset: 0x74
    // Line 645, Address: 0x2ebe58, Func Offset: 0x78
    // Line 647, Address: 0x2ebe78, Func Offset: 0x98
    // Line 616, Address: 0x2ebe98, Func Offset: 0xb8
    // Line 617, Address: 0x2ebea4, Func Offset: 0xc4
    // Line 620, Address: 0x2ebea8, Func Offset: 0xc8
    // Line 643, Address: 0x2ebeac, Func Offset: 0xcc
    // Line 623, Address: 0x2ebeb0, Func Offset: 0xd0
    // Line 624, Address: 0x2ebeb4, Func Offset: 0xd4
    // Line 620, Address: 0x2ebeb8, Func Offset: 0xd8
    // Line 621, Address: 0x2ebec0, Func Offset: 0xe0
    // Line 626, Address: 0x2ebec4, Func Offset: 0xe4
    // Line 621, Address: 0x2ebed4, Func Offset: 0xf4
    // Line 622, Address: 0x2ebed8, Func Offset: 0xf8
    // Line 623, Address: 0x2ebedc, Func Offset: 0xfc
    // Line 626, Address: 0x2ebee0, Func Offset: 0x100
    // Line 625, Address: 0x2ebee4, Func Offset: 0x104
    // Line 624, Address: 0x2ebee8, Func Offset: 0x108
    // Line 625, Address: 0x2ebeec, Func Offset: 0x10c
    // Line 626, Address: 0x2ebef0, Func Offset: 0x110
    // Line 628, Address: 0x2ebef4, Func Offset: 0x114
    // Line 629, Address: 0x2ebefc, Func Offset: 0x11c
    // Line 641, Address: 0x2ebf04, Func Offset: 0x124
    // Line 640, Address: 0x2ebf08, Func Offset: 0x128
    // Line 641, Address: 0x2ebf0c, Func Offset: 0x12c
    // Line 642, Address: 0x2ebf14, Func Offset: 0x134
    // Line 643, Address: 0x2ebf18, Func Offset: 0x138
    // Line 642, Address: 0x2ebf1c, Func Offset: 0x13c
    // Line 644, Address: 0x2ebf20, Func Offset: 0x140
    // Line 643, Address: 0x2ebf24, Func Offset: 0x144
    // Line 644, Address: 0x2ebf28, Func Offset: 0x148
    // Line 645, Address: 0x2ebf2c, Func Offset: 0x14c
    // Line 646, Address: 0x2ebf30, Func Offset: 0x150
    // Line 647, Address: 0x2ebf34, Func Offset: 0x154
    // Line 650, Address: 0x2ebf38, Func Offset: 0x158
    // Line 651, Address: 0x2ebf40, Func Offset: 0x160
    // Line 652, Address: 0x2ebf4c, Func Offset: 0x16c
    // Line 653, Address: 0x2ebf54, Func Offset: 0x174
    // Func End, Address: 0x2ebf60, Func Offset: 0x180
}

//
// Start address: 0x2ebf60
void videoDecMain(VIDEO_DECODER* vd)
{
    // Line 686, Address: 0x2ebf60, Func Offset: 0
    // Line 688, Address: 0x2ebf70, Func Offset: 0x10
    // Line 690, Address: 0x2ebf78, Func Offset: 0x18
    // Line 691, Address: 0x2ebf80, Func Offset: 0x20
    // Line 693, Address: 0x2ebf84, Func Offset: 0x24
    // Line 697, Address: 0x2ebf90, Func Offset: 0x30
    // Line 700, Address: 0x2ebfac, Func Offset: 0x4c
    // Line 701, Address: 0x2ebfb4, Func Offset: 0x54
    // Func End, Address: 0x2ebfc4, Func Offset: 0x64
}

//
// Start address: 0x2ebfd0
int decBs0(VIDEO_DECODER* vd)
{
    int mpeg_param;
    int status;
    // Line 710, Address: 0x2ebfd0, Func Offset: 0
    // Line 722, Address: 0x2ebfe4, Func Offset: 0x14
    // Line 724, Address: 0x2ebff4, Func Offset: 0x24
    // Line 726, Address: 0x2ec004, Func Offset: 0x34
    // Line 727, Address: 0x2ec014, Func Offset: 0x44
    // Line 735, Address: 0x2ec01c, Func Offset: 0x4c
    // Line 737, Address: 0x2ec030, Func Offset: 0x60
    // Line 739, Address: 0x2ec038, Func Offset: 0x68
    // Line 740, Address: 0x2ec040, Func Offset: 0x70
    // Line 741, Address: 0x2ec04c, Func Offset: 0x7c
    // Line 744, Address: 0x2ec054, Func Offset: 0x84
    // Line 746, Address: 0x2ec060, Func Offset: 0x90
    // Line 748, Address: 0x2ec068, Func Offset: 0x98
    // Line 746, Address: 0x2ec070, Func Offset: 0xa0
    // Line 748, Address: 0x2ec074, Func Offset: 0xa4
    // Line 747, Address: 0x2ec07c, Func Offset: 0xac
    // Line 748, Address: 0x2ec088, Func Offset: 0xb8
    // Line 751, Address: 0x2ec094, Func Offset: 0xc4
    // Line 756, Address: 0x2ec098, Func Offset: 0xc8
    // Line 758, Address: 0x2ec0a4, Func Offset: 0xd4
    // Line 759, Address: 0x2ec0ac, Func Offset: 0xdc
    // Line 761, Address: 0x2ec0c0, Func Offset: 0xf0
    // Line 763, Address: 0x2ec0cc, Func Offset: 0xfc
    // Line 764, Address: 0x2ec0d0, Func Offset: 0x100
    // Func End, Address: 0x2ec0e4, Func Offset: 0x114
}

//
// Start address: 0x2ec0f0
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
    // Line 771, Address: 0x2ec0f0, Func Offset: 0
    // Line 772, Address: 0x2ec118, Func Offset: 0x28
    // Line 773, Address: 0x2ec144, Func Offset: 0x54
    // Line 775, Address: 0x2ec14c, Func Offset: 0x5c
    // Line 776, Address: 0x2ec158, Func Offset: 0x68
    // Line 777, Address: 0x2ec164, Func Offset: 0x74
    // Line 778, Address: 0x2ec178, Func Offset: 0x88
    // Line 779, Address: 0x2ec188, Func Offset: 0x98
    // Line 780, Address: 0x2ec190, Func Offset: 0xa0
    // Line 781, Address: 0x2ec1a0, Func Offset: 0xb0
    // Line 782, Address: 0x2ec1ac, Func Offset: 0xbc
    // Line 783, Address: 0x2ec1bc, Func Offset: 0xcc
    // Line 784, Address: 0x2ec1cc, Func Offset: 0xdc
    // Line 785, Address: 0x2ec1d4, Func Offset: 0xe4
    // Line 786, Address: 0x2ec1e0, Func Offset: 0xf0
    // Line 789, Address: 0x2ec1f0, Func Offset: 0x100
    // Line 790, Address: 0x2ec1f4, Func Offset: 0x104
    // Func End, Address: 0x2ec220, Func Offset: 0x130
}

//
// Start address: 0x2ec220
int audioDecSendToIOP(AUDIO_DECODER* ad)
{
    int pos;
    int countAdj;
    int count_sent;
    int s1;
    unsigned char* ps0;
    int d1;
    int d0;
    int pd1;
    int pd0;
    // Line 796, Address: 0x2ec220, Func Offset: 0
    // Line 804, Address: 0x2ec230, Func Offset: 0x10
    // Line 808, Address: 0x2ec26c, Func Offset: 0x4c
    // Line 812, Address: 0x2ec278, Func Offset: 0x58
    // Line 813, Address: 0x2ec29c, Func Offset: 0x7c
    // Line 814, Address: 0x2ec2ac, Func Offset: 0x8c
    // Line 816, Address: 0x2ec2b0, Func Offset: 0x90
    // Line 819, Address: 0x2ec2b8, Func Offset: 0x98
    // Line 821, Address: 0x2ec2d4, Func Offset: 0xb4
    // Line 825, Address: 0x2ec2f0, Func Offset: 0xd0
    // Line 829, Address: 0x2ec314, Func Offset: 0xf4
    // Line 825, Address: 0x2ec31c, Func Offset: 0xfc
    // Line 831, Address: 0x2ec324, Func Offset: 0x104
    // Line 834, Address: 0x2ec33c, Func Offset: 0x11c
    // Line 835, Address: 0x2ec364, Func Offset: 0x144
    // Line 837, Address: 0x2ec374, Func Offset: 0x154
    // Line 839, Address: 0x2ec380, Func Offset: 0x160
    // Line 840, Address: 0x2ec38c, Func Offset: 0x16c
    // Line 842, Address: 0x2ec3a8, Func Offset: 0x188
    // Line 840, Address: 0x2ec3ac, Func Offset: 0x18c
    // Line 843, Address: 0x2ec3b0, Func Offset: 0x190
    // Func End, Address: 0x2ec3c4, Func Offset: 0x1a4
}

//
// Start address: 0x2ec3d0
void iopGetArea(int* pd0, int* d0, int* pd1, int* d1, AUDIO_DECODER* ad, int pos)
{
    int len;
    // Line 851, Address: 0x2ec3d0, Func Offset: 0
    // Line 858, Address: 0x2ec3f4, Func Offset: 0x24
    // Line 855, Address: 0x2ec3f8, Func Offset: 0x28
    // Line 858, Address: 0x2ec400, Func Offset: 0x30
    // Line 859, Address: 0x2ec40c, Func Offset: 0x3c
    // Line 860, Address: 0x2ec418, Func Offset: 0x48
    // Line 861, Address: 0x2ec41c, Func Offset: 0x4c
    // Line 863, Address: 0x2ec420, Func Offset: 0x50
    // Line 866, Address: 0x2ec428, Func Offset: 0x58
    // Line 867, Address: 0x2ec434, Func Offset: 0x64
    // Line 868, Address: 0x2ec444, Func Offset: 0x74
    // Line 869, Address: 0x2ec44c, Func Offset: 0x7c
    // Line 871, Address: 0x2ec460, Func Offset: 0x90
    // Func End, Address: 0x2ec468, Func Offset: 0x98
}

//
// Start address: 0x2ec470
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
    int diff;
    // Line 878, Address: 0x2ec470, Func Offset: 0
    // Line 879, Address: 0x2ec494, Func Offset: 0x24
    // Line 878, Address: 0x2ec4a0, Func Offset: 0x30
    // Line 879, Address: 0x2ec4bc, Func Offset: 0x4c
    // Line 881, Address: 0x2ec4c4, Func Offset: 0x54
    // Line 883, Address: 0x2ec4c8, Func Offset: 0x58
    // Line 885, Address: 0x2ec4d4, Func Offset: 0x64
    // Line 887, Address: 0x2ec4dc, Func Offset: 0x6c
    // Line 888, Address: 0x2ec4e4, Func Offset: 0x74
    // Line 894, Address: 0x2ec4e8, Func Offset: 0x78
    // Line 895, Address: 0x2ec4f4, Func Offset: 0x84
    // Line 896, Address: 0x2ec504, Func Offset: 0x94
    // Line 897, Address: 0x2ec514, Func Offset: 0xa4
    // Line 898, Address: 0x2ec528, Func Offset: 0xb8
    // Line 899, Address: 0x2ec530, Func Offset: 0xc0
    // Line 900, Address: 0x2ec540, Func Offset: 0xd0
    // Line 901, Address: 0x2ec550, Func Offset: 0xe0
    // Line 902, Address: 0x2ec560, Func Offset: 0xf0
    // Line 903, Address: 0x2ec574, Func Offset: 0x104
    // Line 904, Address: 0x2ec57c, Func Offset: 0x10c
    // Line 905, Address: 0x2ec58c, Func Offset: 0x11c
    // Line 908, Address: 0x2ec59c, Func Offset: 0x12c
    // Line 909, Address: 0x2ec5a0, Func Offset: 0x130
    // Func End, Address: 0x2ec5cc, Func Offset: 0x15c
}

//
// Start address: 0x2ec5d0
int sendToIOP(int dst, unsigned char* src, int size)
{
    unsigned int* copy;
    unsigned int* data;
    int j;
    int i;
    unsigned int did;
    TRANSFER_DATA transData;
    // Line 915, Address: 0x2ec5d0, Func Offset: 0
    // Line 919, Address: 0x2ec5ec, Func Offset: 0x1c
    // Line 920, Address: 0x2ec5f4, Func Offset: 0x24
    // Line 926, Address: 0x2ec5fc, Func Offset: 0x2c
    // Line 932, Address: 0x2ec60c, Func Offset: 0x3c
    // Line 935, Address: 0x2ec614, Func Offset: 0x44
    // Line 934, Address: 0x2ec618, Func Offset: 0x48
    // Line 936, Address: 0x2ec61c, Func Offset: 0x4c
    // Line 937, Address: 0x2ec628, Func Offset: 0x58
    // Line 938, Address: 0x2ec630, Func Offset: 0x60
    // Line 939, Address: 0x2ec634, Func Offset: 0x64
    // Line 938, Address: 0x2ec63c, Func Offset: 0x6c
    // Line 939, Address: 0x2ec644, Func Offset: 0x74
    // Line 940, Address: 0x2ec64c, Func Offset: 0x7c
    // Line 941, Address: 0x2ec650, Func Offset: 0x80
    // Line 942, Address: 0x2ec654, Func Offset: 0x84
    // Line 964, Address: 0x2ec664, Func Offset: 0x94
    // Line 968, Address: 0x2ec668, Func Offset: 0x98
    // Line 969, Address: 0x2ec66c, Func Offset: 0x9c
    // Line 970, Address: 0x2ec670, Func Offset: 0xa0
    // Line 972, Address: 0x2ec674, Func Offset: 0xa4
    // Line 974, Address: 0x2ec680, Func Offset: 0xb0
    // Line 977, Address: 0x2ec690, Func Offset: 0xc0
    // Line 978, Address: 0x2ec6ac, Func Offset: 0xdc
    // Line 979, Address: 0x2ec6b0, Func Offset: 0xe0
    // Func End, Address: 0x2ec6c8, Func Offset: 0xf8
}

//
// Start address: 0x2ec6d0
void changeInputVolume(unsigned int val)
{
    // Line 985, Address: 0x2ec6d0, Func Offset: 0
    // Line 987, Address: 0x2ec6dc, Func Offset: 0xc
    // Line 988, Address: 0x2ec6f4, Func Offset: 0x24
    // Line 989, Address: 0x2ec708, Func Offset: 0x38
    // Func End, Address: 0x2ec718, Func Offset: 0x48
}

//
// Start address: 0x2ec720
void setD3_CHCR(unsigned int val)
{
    unsigned int stat;
    // Line 1003, Address: 0x2ec720, Func Offset: 0
    // Line 1004, Address: 0x2ec740, Func Offset: 0x20
    // Line 1005, Address: 0x2ec750, Func Offset: 0x30
    // Line 1006, Address: 0x2ec754, Func Offset: 0x34
    // Line 1004, Address: 0x2ec75c, Func Offset: 0x3c
    // Line 1005, Address: 0x2ec764, Func Offset: 0x44
    // Line 1006, Address: 0x2ec768, Func Offset: 0x48
    // Line 1008, Address: 0x2ec774, Func Offset: 0x54
    // Func End, Address: 0x2ec77c, Func Offset: 0x5c
}

//
// Start address: 0x2ec780
void setD4_CHCR(unsigned int val)
{
    unsigned int stat;
    // Line 1012, Address: 0x2ec780, Func Offset: 0
    // Line 1013, Address: 0x2ec7a0, Func Offset: 0x20
    // Line 1014, Address: 0x2ec7b0, Func Offset: 0x30
    // Line 1015, Address: 0x2ec7b4, Func Offset: 0x34
    // Line 1013, Address: 0x2ec7bc, Func Offset: 0x3c
    // Line 1014, Address: 0x2ec7c4, Func Offset: 0x44
    // Line 1015, Address: 0x2ec7c8, Func Offset: 0x48
    // Line 1017, Address: 0x2ec7d4, Func Offset: 0x54
    // Func End, Address: 0x2ec7dc, Func Offset: 0x5c
}

//
// Start address: 0x2ec7e0
void scTag2(DATA128_UNION* q, void* addr, unsigned int id, unsigned int qwc)
{
    // Line 1026, Address: 0x2ec7e0, Func Offset: 0
    // Line 1029, Address: 0x2ec808, Func Offset: 0x28
    // Func End, Address: 0x2ec810, Func Offset: 0x30
}

//
// Start address: 0x2ec810
int viBufReset(VIDEO_INPUT_BUFFER* f)
{
    int i;
    // Line 1034, Address: 0x2ec810, Func Offset: 0
    // Line 1038, Address: 0x2ec828, Func Offset: 0x18
    // Line 1039, Address: 0x2ec82c, Func Offset: 0x1c
    // Line 1041, Address: 0x2ec830, Func Offset: 0x20
    // Line 1040, Address: 0x2ec834, Func Offset: 0x24
    // Line 1041, Address: 0x2ec838, Func Offset: 0x28
    // Line 1043, Address: 0x2ec83c, Func Offset: 0x2c
    // Line 1044, Address: 0x2ec844, Func Offset: 0x34
    // Line 1045, Address: 0x2ec848, Func Offset: 0x38
    // Line 1046, Address: 0x2ec858, Func Offset: 0x48
    // Line 1050, Address: 0x2ec85c, Func Offset: 0x4c
    // Line 1046, Address: 0x2ec860, Func Offset: 0x50
    // Line 1047, Address: 0x2ec868, Func Offset: 0x58
    // Line 1048, Address: 0x2ec874, Func Offset: 0x64
    // Line 1049, Address: 0x2ec880, Func Offset: 0x70
    // Line 1050, Address: 0x2ec890, Func Offset: 0x80
    // Line 1053, Address: 0x2ec8a0, Func Offset: 0x90
    // Line 1055, Address: 0x2ec8b0, Func Offset: 0xa0
    // Line 1061, Address: 0x2ec8dc, Func Offset: 0xcc
    // Line 1062, Address: 0x2ec8f0, Func Offset: 0xe0
    // Line 1069, Address: 0x2ec914, Func Offset: 0x104
    // Line 1070, Address: 0x2ec91c, Func Offset: 0x10c
    // Line 1071, Address: 0x2ec92c, Func Offset: 0x11c
    // Line 1072, Address: 0x2ec938, Func Offset: 0x128
    // Line 1075, Address: 0x2ec944, Func Offset: 0x134
    // Line 1074, Address: 0x2ec958, Func Offset: 0x148
    // Line 1075, Address: 0x2ec95c, Func Offset: 0x14c
    // Func End, Address: 0x2ec964, Func Offset: 0x154
}

//
// Start address: 0x2ec980
void viBufBeginPut(VIDEO_INPUT_BUFFER* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    int en;
    int es;
    // Line 1084, Address: 0x2ec980, Func Offset: 0
    // Line 1091, Address: 0x2ec9a0, Func Offset: 0x20
    // Line 1096, Address: 0x2ec9b8, Func Offset: 0x38
    // Line 1097, Address: 0x2ec9e0, Func Offset: 0x60
    // Line 1096, Address: 0x2ec9e4, Func Offset: 0x64
    // Line 1099, Address: 0x2ec9e8, Func Offset: 0x68
    // Line 1097, Address: 0x2ec9ec, Func Offset: 0x6c
    // Line 1099, Address: 0x2ec9fc, Func Offset: 0x7c
    // Line 1100, Address: 0x2eca08, Func Offset: 0x88
    // Line 1101, Address: 0x2eca14, Func Offset: 0x94
    // Line 1102, Address: 0x2eca18, Func Offset: 0x98
    // Line 1104, Address: 0x2eca1c, Func Offset: 0x9c
    // Line 1105, Address: 0x2eca24, Func Offset: 0xa4
    // Line 1106, Address: 0x2eca30, Func Offset: 0xb0
    // Line 1107, Address: 0x2eca3c, Func Offset: 0xbc
    // Line 1108, Address: 0x2eca44, Func Offset: 0xc4
    // Line 1112, Address: 0x2eca54, Func Offset: 0xd4
    // Line 1113, Address: 0x2eca5c, Func Offset: 0xdc
    // Func End, Address: 0x2eca7c, Func Offset: 0xfc
}

//
// Start address: 0x2eca80
void viBufEndPut(VIDEO_INPUT_BUFFER* f, int size)
{
    // Line 1119, Address: 0x2eca80, Func Offset: 0
    // Line 1120, Address: 0x2eca94, Func Offset: 0x14
    // Line 1122, Address: 0x2ecaa0, Func Offset: 0x20
    // Line 1123, Address: 0x2ecaa4, Func Offset: 0x24
    // Line 1122, Address: 0x2ecaac, Func Offset: 0x2c
    // Line 1123, Address: 0x2ecab4, Func Offset: 0x34
    // Line 1125, Address: 0x2ecac0, Func Offset: 0x40
    // Line 1126, Address: 0x2ecac8, Func Offset: 0x48
    // Func End, Address: 0x2ecadc, Func Offset: 0x5c
}

//
// Start address: 0x2ecae0
int viBufModifyPts(VIDEO_INPUT_BUFFER* f, TIMESTAMP_INFO* new_ts)
{
    int loop;
    int datasize;
    int rd;
    TIMESTAMP_INFO* ts;
    // Line 1176, Address: 0x2ecae0, Func Offset: 0
    // Line 1178, Address: 0x2ecb00, Func Offset: 0x20
    // Line 1179, Address: 0x2ecb28, Func Offset: 0x48
    // Line 1178, Address: 0x2ecb2c, Func Offset: 0x4c
    // Line 1180, Address: 0x2ecb30, Func Offset: 0x50
    // Line 1182, Address: 0x2ecb34, Func Offset: 0x54
    // Line 1185, Address: 0x2ecb3c, Func Offset: 0x5c
    // Line 1186, Address: 0x2ecb50, Func Offset: 0x70
    // Line 1188, Address: 0x2ecb68, Func Offset: 0x88
    // Line 1190, Address: 0x2ecb80, Func Offset: 0xa0
    // Line 1192, Address: 0x2ecba0, Func Offset: 0xc0
    // Line 1193, Address: 0x2ecbb8, Func Offset: 0xd8
    // Line 1194, Address: 0x2ecbc4, Func Offset: 0xe4
    // Line 1196, Address: 0x2ecbd0, Func Offset: 0xf0
    // Line 1198, Address: 0x2ecbdc, Func Offset: 0xfc
    // Line 1199, Address: 0x2ecbe0, Func Offset: 0x100
    // Line 1200, Address: 0x2ecbe4, Func Offset: 0x104
    // Line 1201, Address: 0x2ecbe8, Func Offset: 0x108
    // Line 1202, Address: 0x2ecbec, Func Offset: 0x10c
    // Line 1203, Address: 0x2ecbf0, Func Offset: 0x110
    // Line 1205, Address: 0x2ecc04, Func Offset: 0x124
    // Line 1206, Address: 0x2ecc0c, Func Offset: 0x12c
    // Line 1207, Address: 0x2ecc10, Func Offset: 0x130
    // Line 1208, Address: 0x2ecc28, Func Offset: 0x148
    // Line 1211, Address: 0x2ecc30, Func Offset: 0x150
    // Line 1210, Address: 0x2ecc4c, Func Offset: 0x16c
    // Line 1211, Address: 0x2ecc50, Func Offset: 0x170
    // Func End, Address: 0x2ecc58, Func Offset: 0x178
}

//
// Start address: 0x2ecc60
int IsPtsInRegion(int tgt, int pos, int len, int size)
{
    // Line 997, Address: 0x2ecc60, Func Offset: 0
    // Line 998, Address: 0x2ecc78, Func Offset: 0x18
    // Func End, Address: 0x2ecc80, Func Offset: 0x20
}

//
// Start address: 0x2ecc80
int viBufPutTs(VIDEO_INPUT_BUFFER* f, TIMESTAMP_INFO* ts)
{
    int ret;
    // Line 1217, Address: 0x2ecc80, Func Offset: 0
    // Line 1220, Address: 0x2ecc98, Func Offset: 0x18
    // Line 1222, Address: 0x2ecca8, Func Offset: 0x28
    // Line 1223, Address: 0x2eccbc, Func Offset: 0x3c
    // Line 1225, Address: 0x2eccc8, Func Offset: 0x48
    // Line 1227, Address: 0x2ecce0, Func Offset: 0x60
    // Line 1228, Address: 0x2eccfc, Func Offset: 0x7c
    // Line 1229, Address: 0x2ecd1c, Func Offset: 0x9c
    // Line 1230, Address: 0x2ecd3c, Func Offset: 0xbc
    // Line 1232, Address: 0x2ecd5c, Func Offset: 0xdc
    // Line 1233, Address: 0x2ecd68, Func Offset: 0xe8
    // Line 1235, Address: 0x2ecd88, Func Offset: 0x108
    // Line 1238, Address: 0x2ecd8c, Func Offset: 0x10c
    // Line 1240, Address: 0x2ecd94, Func Offset: 0x114
    // Line 1241, Address: 0x2ecd98, Func Offset: 0x118
    // Func End, Address: 0x2ecdb0, Func Offset: 0x130
}

//
// Start address: 0x2ecdb0
void voBufIncCount(VIDEO_OUTPUT_BUFFER* f)
{
    unsigned int stat;
    // Line 1246, Address: 0x2ecdb0, Func Offset: 0
    // Line 1248, Address: 0x2ecdd0, Func Offset: 0x20
    // Line 1249, Address: 0x2ecddc, Func Offset: 0x2c
    // Line 1253, Address: 0x2ecde8, Func Offset: 0x38
    // Func End, Address: 0x2ecdf0, Func Offset: 0x40
}

//
// Start address: 0x2ecdf0
void audioDecResume(AUDIO_DECODER* ad)
{
    // Line 1260, Address: 0x2ecdf0, Func Offset: 0
    // Line 1267, Address: 0x2ece00, Func Offset: 0x10
    // Line 1269, Address: 0x2ece08, Func Offset: 0x18
    // Line 1274, Address: 0x2ece34, Func Offset: 0x44
    // Line 1277, Address: 0x2ece3c, Func Offset: 0x4c
    // Line 1278, Address: 0x2ece44, Func Offset: 0x54
    // Func End, Address: 0x2ece54, Func Offset: 0x64
}

//
// Start address: 0x2ece60
int getFIFOindex(VIDEO_INPUT_BUFFER* f, void* addr)
{
    // Line 1285, Address: 0x2ece60, Func Offset: 0
    // Line 1287, Address: 0x2ece70, Func Offset: 0x10
    // Line 1290, Address: 0x2eceac, Func Offset: 0x4c
    // Func End, Address: 0x2ecec0, Func Offset: 0x60
}

//
// Start address: 0x2ecec0
int videoDecPutTs(VIDEO_DECODER* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
    TIMESTAMP_INFO ts;
    // Line 1299, Address: 0x2ecec0, Func Offset: 0
    // Line 1303, Address: 0x2ecec8, Func Offset: 0x8
    // Line 1304, Address: 0x2ececc, Func Offset: 0xc
    // Line 1305, Address: 0x2eced0, Func Offset: 0x10
    // Line 1307, Address: 0x2eced4, Func Offset: 0x14
    // Line 1305, Address: 0x2ecedc, Func Offset: 0x1c
    // Line 1307, Address: 0x2ecee4, Func Offset: 0x24
    // Line 1308, Address: 0x2ecef0, Func Offset: 0x30
    // Func End, Address: 0x2ecefc, Func Offset: 0x3c
}

//
// Start address: 0x2ecf00
void audioDecBeginPut(AUDIO_DECODER* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
    int len;
    // Line 1324, Address: 0x2ecf00, Func Offset: 0
    // Line 1325, Address: 0x2ecf0c, Func Offset: 0xc
    // Line 1326, Address: 0x2ecf14, Func Offset: 0x14
    // Line 1325, Address: 0x2ecf18, Func Offset: 0x18
    // Line 1326, Address: 0x2ecf20, Func Offset: 0x20
    // Line 1327, Address: 0x2ecf2c, Func Offset: 0x2c
    // Line 1328, Address: 0x2ecf34, Func Offset: 0x34
    // Line 1329, Address: 0x2ecf38, Func Offset: 0x38
    // Line 1336, Address: 0x2ecf40, Func Offset: 0x40
    // Line 1338, Address: 0x2ecf48, Func Offset: 0x48
    // Line 1336, Address: 0x2ecf4c, Func Offset: 0x4c
    // Line 1338, Address: 0x2ecf50, Func Offset: 0x50
    // Line 1339, Address: 0x2ecf60, Func Offset: 0x60
    // Line 1340, Address: 0x2ecf6c, Func Offset: 0x6c
    // Line 1341, Address: 0x2ecf70, Func Offset: 0x70
    // Line 1343, Address: 0x2ecf74, Func Offset: 0x74
    // Line 1344, Address: 0x2ecf7c, Func Offset: 0x7c
    // Line 1345, Address: 0x2ecf88, Func Offset: 0x88
    // Line 1346, Address: 0x2ecf98, Func Offset: 0x98
    // Line 1347, Address: 0x2ecfa0, Func Offset: 0xa0
    // Line 1349, Address: 0x2ecfb4, Func Offset: 0xb4
    // Func End, Address: 0x2ecfbc, Func Offset: 0xbc
}

//
// Start address: 0x2ecfc0
void termAll()
{
    // Line 1364, Address: 0x2ecfc0, Func Offset: 0
    // Line 1366, Address: 0x2ecfc4, Func Offset: 0x4
    // Line 1364, Address: 0x2ecfcc, Func Offset: 0xc
    // Line 1366, Address: 0x2ecfd0, Func Offset: 0x10
    // Line 1370, Address: 0x2ecfe4, Func Offset: 0x24
    // Line 1371, Address: 0x2ecff0, Func Offset: 0x30
    // Line 1383, Address: 0x2ecffc, Func Offset: 0x3c
    // Line 1384, Address: 0x2ed008, Func Offset: 0x48
    // Line 1390, Address: 0x2ed014, Func Offset: 0x54
    // Line 1394, Address: 0x2ed01c, Func Offset: 0x5c
    // Line 1404, Address: 0x2ed034, Func Offset: 0x74
    // Line 1405, Address: 0x2ed04c, Func Offset: 0x8c
    // Func End, Address: 0x2ed058, Func Offset: 0x98
}

//
// Start address: 0x2ed060
int viBufDelete(VIDEO_INPUT_BUFFER* f)
{
    // Line 1410, Address: 0x2ed060, Func Offset: 0
    // Line 1411, Address: 0x2ed070, Func Offset: 0x10
    // Line 1412, Address: 0x2ed078, Func Offset: 0x18
    // Line 1413, Address: 0x2ed080, Func Offset: 0x20
    // Line 1414, Address: 0x2ed088, Func Offset: 0x28
    // Line 1417, Address: 0x2ed090, Func Offset: 0x30
    // Line 1419, Address: 0x2ed098, Func Offset: 0x38
    // Line 1418, Address: 0x2ed0a0, Func Offset: 0x40
    // Line 1419, Address: 0x2ed0a4, Func Offset: 0x44
    // Func End, Address: 0x2ed0ac, Func Offset: 0x4c
}

//
// Start address: 0x2ed0b0
int videoDecDelete(VIDEO_DECODER* vd)
{
    // Line 1424, Address: 0x2ed0b0, Func Offset: 0
    // Line 1426, Address: 0x2ed0c0, Func Offset: 0x10
    // Line 1428, Address: 0x2ed0c8, Func Offset: 0x18
    // Line 1431, Address: 0x2ed0d0, Func Offset: 0x20
    // Line 1430, Address: 0x2ed0d8, Func Offset: 0x28
    // Line 1431, Address: 0x2ed0dc, Func Offset: 0x2c
    // Func End, Address: 0x2ed0e4, Func Offset: 0x34
}

//
// Start address: 0x2ed0f0
int audioDecDelete()
{
    // Line 1436, Address: 0x2ed0f0, Func Offset: 0
    // Line 1438, Address: 0x2ed0f8, Func Offset: 0x8
    // Line 1440, Address: 0x2ed100, Func Offset: 0x10
    // Line 1439, Address: 0x2ed104, Func Offset: 0x14
    // Line 1440, Address: 0x2ed108, Func Offset: 0x18
    // Func End, Address: 0x2ed110, Func Offset: 0x20
}

//
// Start address: 0x2ed110
int GetAllWorkMemory()
{
    // Line 1453, Address: 0x2ed110, Func Offset: 0
    // Line 1456, Address: 0x2ed118, Func Offset: 0x8
    // Line 1457, Address: 0x2ed120, Func Offset: 0x10
    // Line 1458, Address: 0x2ed128, Func Offset: 0x18
    // Line 1460, Address: 0x2ed130, Func Offset: 0x20
    // Line 1464, Address: 0x2ed138, Func Offset: 0x28
    // Line 1468, Address: 0x2ed140, Func Offset: 0x30
    // Line 1471, Address: 0x2ed158, Func Offset: 0x48
    // Line 1476, Address: 0x2ed160, Func Offset: 0x50
    // Line 1471, Address: 0x2ed168, Func Offset: 0x58
    // Line 1472, Address: 0x2ed170, Func Offset: 0x60
    // Line 1476, Address: 0x2ed180, Func Offset: 0x70
    // Line 1473, Address: 0x2ed188, Func Offset: 0x78
    // Line 1477, Address: 0x2ed190, Func Offset: 0x80
    // Line 1473, Address: 0x2ed198, Func Offset: 0x88
    // Line 1474, Address: 0x2ed1a0, Func Offset: 0x90
    // Line 1477, Address: 0x2ed1b0, Func Offset: 0xa0
    // Line 1478, Address: 0x2ed1c0, Func Offset: 0xb0
    // Line 1482, Address: 0x2ed1c8, Func Offset: 0xb8
    // Line 1478, Address: 0x2ed1d8, Func Offset: 0xc8
    // Line 1479, Address: 0x2ed1e4, Func Offset: 0xd4
    // Line 1480, Address: 0x2ed1f8, Func Offset: 0xe8
    // Line 1482, Address: 0x2ed210, Func Offset: 0x100
    // Line 1483, Address: 0x2ed218, Func Offset: 0x108
    // Line 1484, Address: 0x2ed234, Func Offset: 0x124
    // Line 1485, Address: 0x2ed24c, Func Offset: 0x13c
    // Line 1486, Address: 0x2ed264, Func Offset: 0x154
    // Line 1487, Address: 0x2ed27c, Func Offset: 0x16c
    // Line 1488, Address: 0x2ed294, Func Offset: 0x184
    // Line 1489, Address: 0x2ed2ac, Func Offset: 0x19c
    // Line 1490, Address: 0x2ed2c4, Func Offset: 0x1b4
    // Line 1492, Address: 0x2ed2d0, Func Offset: 0x1c0
    // Line 1491, Address: 0x2ed2d4, Func Offset: 0x1c4
    // Line 1492, Address: 0x2ed2d8, Func Offset: 0x1c8
    // Func End, Address: 0x2ed2e0, Func Offset: 0x1d0
}

//
// Start address: 0x2ed2e0
void OutPutCdErrorCode(unsigned int* err)
{
    // Line 1499, Address: 0x2ed2e0, Func Offset: 0
    // Line 1500, Address: 0x2ed2f0, Func Offset: 0x10
    // Line 1505, Address: 0x2ed358, Func Offset: 0x78
    // Line 1506, Address: 0x2ed364, Func Offset: 0x84
    // Line 1508, Address: 0x2ed36c, Func Offset: 0x8c
    // Line 1509, Address: 0x2ed378, Func Offset: 0x98
    // Line 1511, Address: 0x2ed380, Func Offset: 0xa0
    // Line 1512, Address: 0x2ed38c, Func Offset: 0xac
    // Line 1514, Address: 0x2ed394, Func Offset: 0xb4
    // Line 1515, Address: 0x2ed3a0, Func Offset: 0xc0
    // Line 1517, Address: 0x2ed3a8, Func Offset: 0xc8
    // Line 1518, Address: 0x2ed3b4, Func Offset: 0xd4
    // Line 1520, Address: 0x2ed3bc, Func Offset: 0xdc
    // Line 1521, Address: 0x2ed3c8, Func Offset: 0xe8
    // Line 1523, Address: 0x2ed3d0, Func Offset: 0xf0
    // Line 1524, Address: 0x2ed3dc, Func Offset: 0xfc
    // Line 1526, Address: 0x2ed3e4, Func Offset: 0x104
    // Line 1529, Address: 0x2ed3f0, Func Offset: 0x110
    // Line 1531, Address: 0x2ed408, Func Offset: 0x128
    // Line 1539, Address: 0x2ed414, Func Offset: 0x134
    // Func End, Address: 0x2ed424, Func Offset: 0x144
}

//
// Start address: 0x2ed430
int videoCallback(sceMpegCbDataStr* str, void* data)
{
    int len;
    int d1;
    int d0;
    unsigned char* pd1Unc;
    unsigned char* pd0Unc;
    unsigned char* pd1;
    unsigned char* pd0;
    int s1;
    int s0;
    unsigned char* ps0;
    READ_BUFFER* rb;
    // Line 1551, Address: 0x2ed430, Func Offset: 0
    // Line 1555, Address: 0x2ed450, Func Offset: 0x20
    // Line 1553, Address: 0x2ed454, Func Offset: 0x24
    // Line 1555, Address: 0x2ed458, Func Offset: 0x28
    // Line 1552, Address: 0x2ed460, Func Offset: 0x30
    // Line 1555, Address: 0x2ed464, Func Offset: 0x34
    // Line 1556, Address: 0x2ed474, Func Offset: 0x44
    // Line 1565, Address: 0x2ed478, Func Offset: 0x48
    // Line 1567, Address: 0x2ed498, Func Offset: 0x68
    // Line 1568, Address: 0x2ed4a0, Func Offset: 0x70
    // Line 1570, Address: 0x2ed4ac, Func Offset: 0x7c
    // Line 1573, Address: 0x2ed4d4, Func Offset: 0xa4
    // Line 1574, Address: 0x2ed4dc, Func Offset: 0xac
    // Line 1575, Address: 0x2ed500, Func Offset: 0xd0
    // Line 1578, Address: 0x2ed50c, Func Offset: 0xdc
    // Line 1584, Address: 0x2ed51c, Func Offset: 0xec
    // Line 1585, Address: 0x2ed528, Func Offset: 0xf8
    // Func End, Address: 0x2ed54c, Func Offset: 0x11c
}

//
// Start address: 0x2ed550
int pcmCallback(sceMpegCbDataStr* str, void* data)
{
    int hdr_add;
    int ret;
    unsigned int len;
    int d1;
    int d0;
    unsigned char* pd1;
    unsigned char* pd0;
    int s0;
    unsigned char* ps0;
    READ_BUFFER* rb;
    // Line 1594, Address: 0x2ed550, Func Offset: 0
    // Line 1607, Address: 0x2ed568, Func Offset: 0x18
    // Line 1608, Address: 0x2ed56c, Func Offset: 0x1c
    // Line 1607, Address: 0x2ed570, Func Offset: 0x20
    // Line 1608, Address: 0x2ed574, Func Offset: 0x24
    // Line 1609, Address: 0x2ed584, Func Offset: 0x34
    // Line 1611, Address: 0x2ed588, Func Offset: 0x38
    // Line 1614, Address: 0x2ed58c, Func Offset: 0x3c
    // Line 1611, Address: 0x2ed590, Func Offset: 0x40
    // Line 1614, Address: 0x2ed594, Func Offset: 0x44
    // Line 1617, Address: 0x2ed5a4, Func Offset: 0x54
    // Line 1618, Address: 0x2ed5c0, Func Offset: 0x70
    // Line 1620, Address: 0x2ed5e4, Func Offset: 0x94
    // Line 1621, Address: 0x2ed5f4, Func Offset: 0xa4
    // Line 1623, Address: 0x2ed60c, Func Offset: 0xbc
    // Line 1625, Address: 0x2ed620, Func Offset: 0xd0
    // Line 1626, Address: 0x2ed634, Func Offset: 0xe4
    // Line 1629, Address: 0x2ed640, Func Offset: 0xf0
    // Line 1628, Address: 0x2ed648, Func Offset: 0xf8
    // Line 1629, Address: 0x2ed64c, Func Offset: 0xfc
    // Line 1630, Address: 0x2ed670, Func Offset: 0x120
    // Line 1631, Address: 0x2ed684, Func Offset: 0x134
    // Line 1632, Address: 0x2ed694, Func Offset: 0x144
    // Line 1633, Address: 0x2ed698, Func Offset: 0x148
    // Line 1635, Address: 0x2ed6a0, Func Offset: 0x150
    // Line 1636, Address: 0x2ed6c8, Func Offset: 0x178
    // Line 1637, Address: 0x2ed6dc, Func Offset: 0x18c
    // Line 1644, Address: 0x2ed6f0, Func Offset: 0x1a0
    // Line 1645, Address: 0x2ed6fc, Func Offset: 0x1ac
    // Func End, Address: 0x2ed718, Func Offset: 0x1c8
}

//
// Start address: 0x2ed720
int mpegError(sceMpegCbDataError* cberror)
{
    // Line 1653, Address: 0x2ed720, Func Offset: 0
    // Line 1654, Address: 0x2ed728, Func Offset: 0x8
    // Line 1656, Address: 0x2ed738, Func Offset: 0x18
    // Line 1655, Address: 0x2ed73c, Func Offset: 0x1c
    // Line 1656, Address: 0x2ed740, Func Offset: 0x20
    // Func End, Address: 0x2ed748, Func Offset: 0x28
}

//
// Start address: 0x2ed750
int mpegNodata()
{
    int read_n;
    int read_start;
    int consume;
    int isNewData;
    unsigned int d4chcr;
    int last;
    int index;
    int i;
    // Line 1664, Address: 0x2ed750, Func Offset: 0
    // Line 1675, Address: 0x2ed76c, Func Offset: 0x1c
    // Line 1677, Address: 0x2ed774, Func Offset: 0x24
    // Line 1679, Address: 0x2ed780, Func Offset: 0x30
    // Line 1680, Address: 0x2ed790, Func Offset: 0x40
    // Line 1681, Address: 0x2ed79c, Func Offset: 0x4c
    // Line 1693, Address: 0x2ed7a4, Func Offset: 0x54
    // Line 1694, Address: 0x2ed7b0, Func Offset: 0x60
    // Line 1700, Address: 0x2ed7b8, Func Offset: 0x68
    // Line 1701, Address: 0x2ed7cc, Func Offset: 0x7c
    // Line 1702, Address: 0x2ed7f4, Func Offset: 0xa4
    // Line 1703, Address: 0x2ed810, Func Offset: 0xc0
    // Line 1709, Address: 0x2ed824, Func Offset: 0xd4
    // Line 1710, Address: 0x2ed84c, Func Offset: 0xfc
    // Line 1709, Address: 0x2ed854, Func Offset: 0x104
    // Line 1710, Address: 0x2ed858, Func Offset: 0x108
    // Line 1711, Address: 0x2ed85c, Func Offset: 0x10c
    // Line 1717, Address: 0x2ed874, Func Offset: 0x124
    // Line 1718, Address: 0x2ed87c, Func Offset: 0x12c
    // Line 1719, Address: 0x2ed8ac, Func Offset: 0x15c
    // Line 1718, Address: 0x2ed8b4, Func Offset: 0x164
    // Line 1719, Address: 0x2ed8b8, Func Offset: 0x168
    // Line 1725, Address: 0x2ed8dc, Func Offset: 0x18c
    // Line 1729, Address: 0x2ed8e0, Func Offset: 0x190
    // Line 1731, Address: 0x2ed8ec, Func Offset: 0x19c
    // Line 1737, Address: 0x2ed928, Func Offset: 0x1d8
    // Line 1738, Address: 0x2ed940, Func Offset: 0x1f0
    // Line 1737, Address: 0x2ed944, Func Offset: 0x1f4
    // Line 1738, Address: 0x2ed948, Func Offset: 0x1f8
    // Line 1740, Address: 0x2ed958, Func Offset: 0x208
    // Line 1746, Address: 0x2ed96c, Func Offset: 0x21c
    // Line 1747, Address: 0x2ed97c, Func Offset: 0x22c
    // Line 1748, Address: 0x2ed984, Func Offset: 0x234
    // Line 1750, Address: 0x2ed994, Func Offset: 0x244
    // Line 1753, Address: 0x2ed9a0, Func Offset: 0x250
    // Line 1755, Address: 0x2ed9ac, Func Offset: 0x25c
    // Line 1756, Address: 0x2ed9b0, Func Offset: 0x260
    // Func End, Address: 0x2ed9d0, Func Offset: 0x280
}

//
// Start address: 0x2ed9d0
int mpegStopDMA()
{
    // Line 1763, Address: 0x2ed9d0, Func Offset: 0
    // Line 1764, Address: 0x2ed9d8, Func Offset: 0x8
    // Line 1768, Address: 0x2ed9e4, Func Offset: 0x14
    // Line 1766, Address: 0x2ed9e8, Func Offset: 0x18
    // Line 1768, Address: 0x2ed9ec, Func Offset: 0x1c
    // Line 1770, Address: 0x2ed9f4, Func Offset: 0x24
    // Line 1771, Address: 0x2eda04, Func Offset: 0x34
    // Line 1772, Address: 0x2eda14, Func Offset: 0x44
    // Line 1773, Address: 0x2eda24, Func Offset: 0x54
    // Line 1777, Address: 0x2eda34, Func Offset: 0x64
    // Line 1780, Address: 0x2eda50, Func Offset: 0x80
    // Line 1781, Address: 0x2eda58, Func Offset: 0x88
    // Line 1782, Address: 0x2eda68, Func Offset: 0x98
    // Line 1783, Address: 0x2eda78, Func Offset: 0xa8
    // Line 1785, Address: 0x2eda88, Func Offset: 0xb8
    // Line 1786, Address: 0x2eda98, Func Offset: 0xc8
    // Line 1788, Address: 0x2edaa8, Func Offset: 0xd8
    // Line 1791, Address: 0x2edab4, Func Offset: 0xe4
    // Line 1790, Address: 0x2edab8, Func Offset: 0xe8
    // Line 1791, Address: 0x2edabc, Func Offset: 0xec
    // Func End, Address: 0x2edac4, Func Offset: 0xf4
}

//
// Start address: 0x2edad0
int mpegRestartDMA()
{
    int id;
    int index_next;
    int index;
    unsigned int d4chcr_next;
    unsigned int d4tadr_next;
    unsigned int d4qwc_next;
    unsigned int d4madr_next;
    int ifc;
    int fp;
    unsigned int bp;
    // Line 1797, Address: 0x2edad0, Func Offset: 0
    // Line 1798, Address: 0x2edaf4, Func Offset: 0x24
    // Line 1801, Address: 0x2edafc, Func Offset: 0x2c
    // Line 1799, Address: 0x2edb04, Func Offset: 0x34
    // Line 1800, Address: 0x2edb0c, Func Offset: 0x3c
    // Line 1801, Address: 0x2edb14, Func Offset: 0x44
    // Line 1802, Address: 0x2edb18, Func Offset: 0x48
    // Line 1798, Address: 0x2edb20, Func Offset: 0x50
    // Line 1803, Address: 0x2edb24, Func Offset: 0x54
    // Line 1802, Address: 0x2edb2c, Func Offset: 0x5c
    // Line 1801, Address: 0x2edb30, Func Offset: 0x60
    // Line 1804, Address: 0x2edb38, Func Offset: 0x68
    // Line 1809, Address: 0x2edb40, Func Offset: 0x70
    // Line 1814, Address: 0x2edb50, Func Offset: 0x80
    // Line 1815, Address: 0x2edb64, Func Offset: 0x94
    // Line 1816, Address: 0x2edb6c, Func Offset: 0x9c
    // Line 1817, Address: 0x2edb74, Func Offset: 0xa4
    // Line 1816, Address: 0x2edb7c, Func Offset: 0xac
    // Line 1817, Address: 0x2edb80, Func Offset: 0xb0
    // Line 1818, Address: 0x2edb88, Func Offset: 0xb8
    // Line 1822, Address: 0x2edbc0, Func Offset: 0xf0
    // Line 1818, Address: 0x2edbc8, Func Offset: 0xf8
    // Line 1822, Address: 0x2edbd4, Func Offset: 0x104
    // Line 1825, Address: 0x2edbd8, Func Offset: 0x108
    // Line 1822, Address: 0x2edbe0, Func Offset: 0x110
    // Line 1825, Address: 0x2edbf0, Func Offset: 0x120
    // Line 1826, Address: 0x2edc2c, Func Offset: 0x15c
    // Line 1827, Address: 0x2edc38, Func Offset: 0x168
    // Line 1829, Address: 0x2edc48, Func Offset: 0x178
    // Line 1831, Address: 0x2edc80, Func Offset: 0x1b0
    // Line 1832, Address: 0x2edc94, Func Offset: 0x1c4
    // Line 1831, Address: 0x2edca0, Func Offset: 0x1d0
    // Line 1833, Address: 0x2edca4, Func Offset: 0x1d4
    // Line 1832, Address: 0x2edcac, Func Offset: 0x1dc
    // Line 1833, Address: 0x2edcb8, Func Offset: 0x1e8
    // Line 1837, Address: 0x2edd00, Func Offset: 0x230
    // Line 1833, Address: 0x2edd08, Func Offset: 0x238
    // Line 1837, Address: 0x2edd24, Func Offset: 0x254
    // Line 1840, Address: 0x2edd38, Func Offset: 0x268
    // Line 1841, Address: 0x2edd68, Func Offset: 0x298
    // Line 1842, Address: 0x2edd70, Func Offset: 0x2a0
    // Line 1847, Address: 0x2edd84, Func Offset: 0x2b4
    // Line 1848, Address: 0x2edda4, Func Offset: 0x2d4
    // Line 1849, Address: 0x2eddac, Func Offset: 0x2dc
    // Line 1850, Address: 0x2eddbc, Func Offset: 0x2ec
    // Line 1853, Address: 0x2eddcc, Func Offset: 0x2fc
    // Line 1855, Address: 0x2edddc, Func Offset: 0x30c
    // Line 1857, Address: 0x2eddf8, Func Offset: 0x328
    // Line 1859, Address: 0x2ede00, Func Offset: 0x330
    // Line 1860, Address: 0x2ede1c, Func Offset: 0x34c
    // Line 1863, Address: 0x2ede20, Func Offset: 0x350
    // Line 1864, Address: 0x2ede28, Func Offset: 0x358
    // Line 1865, Address: 0x2ede30, Func Offset: 0x360
    // Line 1866, Address: 0x2ede38, Func Offset: 0x368
    // Line 1867, Address: 0x2ede48, Func Offset: 0x378
    // Line 1869, Address: 0x2ede50, Func Offset: 0x380
    // Line 1871, Address: 0x2ede58, Func Offset: 0x388
    // Line 1869, Address: 0x2ede5c, Func Offset: 0x38c
    // Line 1871, Address: 0x2ede64, Func Offset: 0x394
    // Line 1873, Address: 0x2ede6c, Func Offset: 0x39c
    // Line 1876, Address: 0x2ede78, Func Offset: 0x3a8
    // Line 1875, Address: 0x2ede98, Func Offset: 0x3c8
    // Line 1876, Address: 0x2ede9c, Func Offset: 0x3cc
    // Func End, Address: 0x2edea4, Func Offset: 0x3d4
}

//
// Start address: 0x2edeb0
int mpegTS(sceMpegCbDataTimeStamp* cbts)
{
    int rd;
    int i;
    int tscount;
    int isEnd;
    int datasize;
    unsigned int stop;
    int ifc;
    int fp;
    int bp;
    unsigned int ipubp;
    unsigned int d4madr;
    // Line 1884, Address: 0x2edeb0, Func Offset: 0
    // Line 1886, Address: 0x2ededc, Func Offset: 0x2c
    // Line 1894, Address: 0x2edee8, Func Offset: 0x38
    // Line 1887, Address: 0x2edeec, Func Offset: 0x3c
    // Line 1888, Address: 0x2edef4, Func Offset: 0x44
    // Line 1889, Address: 0x2edefc, Func Offset: 0x4c
    // Line 1890, Address: 0x2edf04, Func Offset: 0x54
    // Line 1893, Address: 0x2edf0c, Func Offset: 0x5c
    // Line 1888, Address: 0x2edf14, Func Offset: 0x64
    // Line 1899, Address: 0x2edf18, Func Offset: 0x68
    // Line 1904, Address: 0x2edf28, Func Offset: 0x78
    // Line 1901, Address: 0x2edf48, Func Offset: 0x98
    // Line 1902, Address: 0x2edf4c, Func Offset: 0x9c
    // Line 1904, Address: 0x2edf50, Func Offset: 0xa0
    // Line 1906, Address: 0x2edf60, Func Offset: 0xb0
    // Line 1904, Address: 0x2edf68, Func Offset: 0xb8
    // Line 1909, Address: 0x2edf6c, Func Offset: 0xbc
    // Line 1911, Address: 0x2edf80, Func Offset: 0xd0
    // Line 1913, Address: 0x2edfa0, Func Offset: 0xf0
    // Line 1916, Address: 0x2edfd4, Func Offset: 0x124
    // Line 1918, Address: 0x2edfdc, Func Offset: 0x12c
    // Line 1916, Address: 0x2edfe0, Func Offset: 0x130
    // Line 1917, Address: 0x2edfe8, Func Offset: 0x138
    // Line 1919, Address: 0x2edfec, Func Offset: 0x13c
    // Line 1918, Address: 0x2edff0, Func Offset: 0x140
    // Line 1919, Address: 0x2edff4, Func Offset: 0x144
    // Line 1922, Address: 0x2ee000, Func Offset: 0x150
    // Line 1924, Address: 0x2ee030, Func Offset: 0x180
    // Line 1926, Address: 0x2ee050, Func Offset: 0x1a0
    // Line 1928, Address: 0x2ee05c, Func Offset: 0x1ac
    // Line 1929, Address: 0x2ee064, Func Offset: 0x1b4
    // Line 1931, Address: 0x2ee068, Func Offset: 0x1b8
    // Line 1930, Address: 0x2ee090, Func Offset: 0x1e0
    // Line 1931, Address: 0x2ee094, Func Offset: 0x1e4
    // Func End, Address: 0x2ee09c, Func Offset: 0x1ec
}
