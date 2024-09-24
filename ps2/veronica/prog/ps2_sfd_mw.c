#include "ps2_sfd_mw.h"
#include "libcdvd.h"
#include "ps2_MovieFunc.h"
#include "ps2_prefix.h"

int iRingBufNum;
MWPLY MwHandle;
MWD_IF Ps2Func;
extern FILE_DESCRIPTOR infile;
int iop_read_buff;
extern VIDEO_OUTPUT_BUFFER voBuf;
extern long128 test_tag[1400];
extern REMOTE_INPUT rmi;
extern int movie_draw;
extern VIDEO_SIZE mdSize;
// unsigned int Ps2_vcount;
MWS_PLY_INIT_SFD __sfd_mw_conf__;
MW_PLY_OBJ MwObj;

//
// Start address: 0x2d8700
Sint32 mwPlyCalcWorkSofdec(Sint32 ftype, Sint32 max_bps, Sint32 max_sx, Sint32 max_sy, Sint32 nfb)
{
    // Line 112, Address: 0x2d8700, Func Offset: 0
    // Func End, Address: 0x2d8708, Func Offset: 0x8
}

//
// Start address: 0x2d8710
MWPLY ps2mwPlyCreateSofdec(char* fname)
{
    int loop;
    sceCdRMode mode;
    int i;
    char read_name[256];
    // Line 162, Address: 0x2d8710, Func Offset: 0
    // Line 274, Address: 0x2d8720, Func Offset: 0x10
    // Line 275, Address: 0x2d872c, Func Offset: 0x1c
    // Line 278, Address: 0x2d8734, Func Offset: 0x24
    // Line 280, Address: 0x2d873c, Func Offset: 0x2c
    // Line 281, Address: 0x2d875c, Func Offset: 0x4c
    // Line 284, Address: 0x2d8784, Func Offset: 0x74
    // Line 287, Address: 0x2d87a0, Func Offset: 0x90
    // Line 288, Address: 0x2d87a8, Func Offset: 0x98
    // Line 287, Address: 0x2d87b0, Func Offset: 0xa0
    // Line 288, Address: 0x2d87b8, Func Offset: 0xa8
    // Line 292, Address: 0x2d87d4, Func Offset: 0xc4
    // Line 295, Address: 0x2d87dc, Func Offset: 0xcc
    // Line 297, Address: 0x2d87ec, Func Offset: 0xdc
    // Line 299, Address: 0x2d87f4, Func Offset: 0xe4
    // Line 300, Address: 0x2d8804, Func Offset: 0xf4
    // Line 301, Address: 0x2d8808, Func Offset: 0xf8
    // Line 302, Address: 0x2d880c, Func Offset: 0xfc
    // Line 303, Address: 0x2d8810, Func Offset: 0x100
    // Line 304, Address: 0x2d8814, Func Offset: 0x104
    // Line 305, Address: 0x2d8824, Func Offset: 0x114
    // Line 307, Address: 0x2d8838, Func Offset: 0x128
    // Line 309, Address: 0x2d8840, Func Offset: 0x130
    // Line 310, Address: 0x2d8850, Func Offset: 0x140
    // Line 311, Address: 0x2d8854, Func Offset: 0x144
    // Line 312, Address: 0x2d8858, Func Offset: 0x148
    // Line 313, Address: 0x2d885c, Func Offset: 0x14c
    // Line 314, Address: 0x2d8860, Func Offset: 0x150
    // Line 316, Address: 0x2d8874, Func Offset: 0x164
    // Line 318, Address: 0x2d8890, Func Offset: 0x180
    // Line 319, Address: 0x2d88a0, Func Offset: 0x190
    // Line 322, Address: 0x2d88a8, Func Offset: 0x198
    // Line 323, Address: 0x2d88ac, Func Offset: 0x19c
    // Line 325, Address: 0x2d88b0, Func Offset: 0x1a0
    // Line 319, Address: 0x2d88b4, Func Offset: 0x1a4
    // Line 325, Address: 0x2d88bc, Func Offset: 0x1ac
    // Line 329, Address: 0x2d88cc, Func Offset: 0x1bc
    // Line 335, Address: 0x2d88d8, Func Offset: 0x1c8
    // Line 330, Address: 0x2d88dc, Func Offset: 0x1cc
    // Line 335, Address: 0x2d88e0, Func Offset: 0x1d0
    // Line 330, Address: 0x2d88e8, Func Offset: 0x1d8
    // Line 335, Address: 0x2d88ec, Func Offset: 0x1dc
    // Func End, Address: 0x2d88f4, Func Offset: 0x1e4
}

//
// Start address: 0x2d8900
void mwPlyExecServer()
{
    // Line 366, Address: 0x2d8900, Func Offset: 0
    // Line 378, Address: 0x2d8908, Func Offset: 0x8
    // Line 383, Address: 0x2d8910, Func Offset: 0x10
    // Line 384, Address: 0x2d8918, Func Offset: 0x18
    // Line 390, Address: 0x2d8940, Func Offset: 0x40
    // Line 394, Address: 0x2d894c, Func Offset: 0x4c
    // Line 395, Address: 0x2d8960, Func Offset: 0x60
    // Line 396, Address: 0x2d8968, Func Offset: 0x68
    // Line 399, Address: 0x2d897c, Func Offset: 0x7c
    // Func End, Address: 0x2d8988, Func Offset: 0x88
}

//
// Start address: 0x2d8990
void mwPlyFinishSofdec()
{
    // Line 426, Address: 0x2d8990, Func Offset: 0
    // Func End, Address: 0x2d8998, Func Offset: 0x8
}

//
// Start address: 0x2d89a0
int mwPlyGetBright(MWPLY mwply)
{
    // Line 459, Address: 0x2d89a0, Func Offset: 0
    // Func End, Address: 0x2d89a8, Func Offset: 0x8
}

//
// Start address: 0x2d89b0
void mwPlyInitSofdec(MWS_PLY_INIT_SFD* iprm)
{
    // Line 518, Address: 0x2d89b0, Func Offset: 0
    // Func End, Address: 0x2d89b8, Func Offset: 0x8
}

//
// Start address: 0x2d89c0
void mwPlyPreInitSofdec()
{
    // Line 544, Address: 0x2d89c0, Func Offset: 0
    // Func End, Address: 0x2d89c8, Func Offset: 0x8
}

//
// Start address: 0x2d89d0
void mwPlySetDispMode(Sint32 mode, Sint32 frame, Sint32 count, Sint32 latency)
{
    // Line 602, Address: 0x2d89d0, Func Offset: 0
    // Func End, Address: 0x2d89d8, Func Offset: 0x8
}

//
// Start address: 0x2d89e0
void mwPlySetDispPos(MWPLY mwply, float lx, float ly)
{
    // Line 629, Address: 0x2d89e0, Func Offset: 0
    // Line 630, Address: 0x2d89ec, Func Offset: 0xc
    // Line 631, Address: 0x2d89fc, Func Offset: 0x1c
    // Line 632, Address: 0x2d8a0c, Func Offset: 0x2c
    // Func End, Address: 0x2d8a1c, Func Offset: 0x3c
}

//
// Start address: 0x2d8a20
void mwPlySetFastHalfpel(MWPLY mwply, Sint32 sw)
{
    // Line 662, Address: 0x2d8a20, Func Offset: 0
    // Func End, Address: 0x2d8a28, Func Offset: 0x8
}

//
// Start address: 0x2d8a30
void mwPlyStartFrame()
{
    // Line 688, Address: 0x2d8a30, Func Offset: 0
    // Func End, Address: 0x2d8a38, Func Offset: 0x8
}

//
// Start address: 0x2d8a40
void mwPlySetDispSize(MWPLY mwply, float sx, float sy)
{
    // Line 715, Address: 0x2d8a40, Func Offset: 0
    // Line 716, Address: 0x2d8a4c, Func Offset: 0xc
    // Line 717, Address: 0x2d8a5c, Func Offset: 0x1c
    // Line 718, Address: 0x2d8a6c, Func Offset: 0x2c
    // Func End, Address: 0x2d8a7c, Func Offset: 0x3c
}

//
// Start address: 0x2d8a80
void ps2mwPlyVsyncHndl()
{
    // Line 744, Address: 0x2d8a80, Func Offset: 0
    // Func End, Address: 0x2d8a88, Func Offset: 0x8
}

//
// Start address: 0x2d8a90
void ps2mwPlyExecSvrHndl()
{
    // Line 770, Address: 0x2d8a90, Func Offset: 0
    // Func End, Address: 0x2d8a98, Func Offset: 0x8
}

//
// Start address: 0x2d8aa0
void ps2mwPlyDestroy()
{
    // Line 796, Address: 0x2d8aa0, Func Offset: 0
    // Func End, Address: 0x2d8aa8, Func Offset: 0x8
}

//
// Start address: 0x2d8ab0
void ps2mwPlyStartFname(char* fname)
{
    char* src;
    char* dest;
    char nameBuf[256];
    // Line 822, Address: 0x2d8ab0, Func Offset: 0
    // Line 827, Address: 0x2d8abc, Func Offset: 0xc
    // Line 829, Address: 0x2d8ac4, Func Offset: 0x14
    // Line 833, Address: 0x2d8ad4, Func Offset: 0x24
    // Line 834, Address: 0x2d8adc, Func Offset: 0x2c
    // Line 837, Address: 0x2d8af8, Func Offset: 0x48
    // Line 838, Address: 0x2d8b10, Func Offset: 0x60
    // Line 840, Address: 0x2d8b20, Func Offset: 0x70
    // Line 842, Address: 0x2d8b2c, Func Offset: 0x7c
    // Func End, Address: 0x2d8b3c, Func Offset: 0x8c
}

//
// Start address: 0x2d8b40
void ps2mwPlyStop()
{
    // Line 868, Address: 0x2d8b40, Func Offset: 0
    // Func End, Address: 0x2d8b48, Func Offset: 0x8
}

//
// Start address: 0x2d8b50
MWE_PLY_STAT ps2mwPlyGetStat()
{
    // Line 895, Address: 0x2d8b50, Func Offset: 0
    // Line 896, Address: 0x2d8b54, Func Offset: 0x4
    // Func End, Address: 0x2d8b5c, Func Offset: 0xc
}

//
// Start address: 0x2d8b60
void ps2mwPlyGetTime(int* ncount, int* tscale)
{
    // Line 928, Address: 0x2d8b60, Func Offset: 0
    // Line 931, Address: 0x2d8b68, Func Offset: 0x8
    // Line 928, Address: 0x2d8b6c, Func Offset: 0xc
    // Line 932, Address: 0x2d8b7c, Func Offset: 0x1c
    // Func End, Address: 0x2d8b84, Func Offset: 0x24
}

//
// Start address: 0x2d8b90
void ps2mwPlyPause(int sw)
{
    // Line 959, Address: 0x2d8b90, Func Offset: 0
    // Line 960, Address: 0x2d8b98, Func Offset: 0x8
    // Line 962, Address: 0x2d8bb0, Func Offset: 0x20
    // Line 963, Address: 0x2d8bc8, Func Offset: 0x38
    // Func End, Address: 0x2d8bd0, Func Offset: 0x40
}

//
// Start address: 0x2d8bd0
void ps2mwPlySetOutVol(int vol)
{
    // Line 990, Address: 0x2d8bd0, Func Offset: 0
    // Line 994, Address: 0x2d8bd8, Func Offset: 0x8
    // Line 995, Address: 0x2d8c10, Func Offset: 0x40
    // Func End, Address: 0x2d8c1c, Func Offset: 0x4c
}

//
// Start address: 0x2d8c20
int ps2mwPlyGetOutVol()
{
    // Line 1021, Address: 0x2d8c20, Func Offset: 0
    // Func End, Address: 0x2d8c28, Func Offset: 0x8
}

//
// Start address: 0x2d8c30
void ps2mwErrorStop()
{
    // Line 1028, Address: 0x2d8c30, Func Offset: 0
    // Func End, Address: 0x2d8c3c, Func Offset: 0xc
}

//
// Start address: 0x2d8c40
void Setps2FuncTbl(MWPLY mwply)
{
    // Line 1041, Address: 0x2d8c40, Func Offset: 0
    // Line 1042, Address: 0x2d8c48, Func Offset: 0x8
    // Func End, Address: 0x2d8c50, Func Offset: 0x10
}
