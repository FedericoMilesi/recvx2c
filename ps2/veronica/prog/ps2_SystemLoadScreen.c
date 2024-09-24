#include "ps2_SystemLoadScreen.h"
#include "types.h"

SELECTFILEWINDOW SelectFileWindow;
SELECTFILEINFO SelectFileInfo[15];
char* cpNameList;
ICONINFORMATION IconInfo;
MEMORYCARDSTATE McState;
SAVEFILE SaveFile;
CONFIGFILE ConfigFile;
unsigned char SaveLoadMessage[10956];
extern Controller Pad[4];
extern SYS* sys;

//
// Start address: 0x2770c0
SYSLOAD_SCREEN* CreateSysLoadScreen(SYSLOAD_SCREEN* pSysLoad, void* vpWorkPtrSys)
{
    // Line 71, Address: 0x2770c0, Func Offset: 0
    // Line 72, Address: 0x2770d0, Func Offset: 0x10
    // Line 73, Address: 0x2770d4, Func Offset: 0x14
    // Line 74, Address: 0x2770d8, Func Offset: 0x18
    // Line 75, Address: 0x2770dc, Func Offset: 0x1c
    // Line 76, Address: 0x2770e0, Func Offset: 0x20
    // Line 77, Address: 0x2770e4, Func Offset: 0x24
    // Line 78, Address: 0x2770e8, Func Offset: 0x28
    // Line 79, Address: 0x2770ec, Func Offset: 0x2c
    // Line 80, Address: 0x2770f4, Func Offset: 0x34
    // Line 81, Address: 0x277108, Func Offset: 0x48
    // Line 82, Address: 0x277118, Func Offset: 0x58
    // Line 83, Address: 0x277128, Func Offset: 0x68
    // Line 84, Address: 0x277144, Func Offset: 0x84
    // Line 85, Address: 0x277154, Func Offset: 0x94
    // Line 86, Address: 0x27716c, Func Offset: 0xac
    // Line 89, Address: 0x277170, Func Offset: 0xb0
    // Line 91, Address: 0x277178, Func Offset: 0xb8
    // Line 92, Address: 0x27717c, Func Offset: 0xbc
    // Func End, Address: 0x277190, Func Offset: 0xd0
}

//
// Start address: 0x277190
void DispSysLoadMessageSelect(int slSelectMes)
{
    // Line 110, Address: 0x277190, Func Offset: 0
    // Line 107, Address: 0x27719c, Func Offset: 0xc
    // Line 110, Address: 0x2771a0, Func Offset: 0x10
    // Line 107, Address: 0x2771a4, Func Offset: 0x14
    // Line 110, Address: 0x2771a8, Func Offset: 0x18
    // Line 107, Address: 0x2771ac, Func Offset: 0x1c
    // Line 110, Address: 0x2771b0, Func Offset: 0x20
    // Line 113, Address: 0x2771bc, Func Offset: 0x2c
    // Line 117, Address: 0x2771e4, Func Offset: 0x54
    // Line 118, Address: 0x277204, Func Offset: 0x74
    // Line 120, Address: 0x27720c, Func Offset: 0x7c
    // Line 121, Address: 0x27722c, Func Offset: 0x9c
    // Line 123, Address: 0x277234, Func Offset: 0xa4
    // Line 124, Address: 0x277254, Func Offset: 0xc4
    // Line 126, Address: 0x27725c, Func Offset: 0xcc
    // Line 127, Address: 0x27727c, Func Offset: 0xec
    // Line 129, Address: 0x277284, Func Offset: 0xf4
    // Line 130, Address: 0x2772a4, Func Offset: 0x114
    // Line 132, Address: 0x2772ac, Func Offset: 0x11c
    // Line 133, Address: 0x2772cc, Func Offset: 0x13c
    // Line 135, Address: 0x2772d4, Func Offset: 0x144
    // Line 136, Address: 0x2772f4, Func Offset: 0x164
    // Line 139, Address: 0x2772fc, Func Offset: 0x16c
    // Line 140, Address: 0x27731c, Func Offset: 0x18c
    // Line 143, Address: 0x277324, Func Offset: 0x194
    // Line 144, Address: 0x277344, Func Offset: 0x1b4
    // Line 147, Address: 0x27734c, Func Offset: 0x1bc
    // Line 148, Address: 0x27736c, Func Offset: 0x1dc
    // Line 151, Address: 0x277374, Func Offset: 0x1e4
    // Line 159, Address: 0x277394, Func Offset: 0x204
    // Line 162, Address: 0x2773ac, Func Offset: 0x21c
    // Func End, Address: 0x2773bc, Func Offset: 0x22c
}

//
// Start address: 0x2773c0
int ExecuteSysLoadScreen(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 178, Address: 0x2773c0, Func Offset: 0
    // Line 181, Address: 0x2773d0, Func Offset: 0x10
    // Line 183, Address: 0x2773dc, Func Offset: 0x1c
    // Line 186, Address: 0x27745c, Func Offset: 0x9c
    // Line 187, Address: 0x277468, Func Offset: 0xa8
    // Line 189, Address: 0x277470, Func Offset: 0xb0
    // Line 190, Address: 0x27747c, Func Offset: 0xbc
    // Line 192, Address: 0x277484, Func Offset: 0xc4
    // Line 193, Address: 0x277490, Func Offset: 0xd0
    // Line 195, Address: 0x277498, Func Offset: 0xd8
    // Line 196, Address: 0x2774a4, Func Offset: 0xe4
    // Line 198, Address: 0x2774ac, Func Offset: 0xec
    // Line 199, Address: 0x2774b8, Func Offset: 0xf8
    // Line 201, Address: 0x2774c0, Func Offset: 0x100
    // Line 202, Address: 0x2774cc, Func Offset: 0x10c
    // Line 204, Address: 0x2774d4, Func Offset: 0x114
    // Line 205, Address: 0x2774e0, Func Offset: 0x120
    // Line 207, Address: 0x2774e8, Func Offset: 0x128
    // Line 208, Address: 0x2774f4, Func Offset: 0x134
    // Line 210, Address: 0x2774fc, Func Offset: 0x13c
    // Line 211, Address: 0x277508, Func Offset: 0x148
    // Line 213, Address: 0x277510, Func Offset: 0x150
    // Line 218, Address: 0x277518, Func Offset: 0x158
    // Line 220, Address: 0x277524, Func Offset: 0x164
    // Line 221, Address: 0x277528, Func Offset: 0x168
    // Func End, Address: 0x277538, Func Offset: 0x178
}

//
// Start address: 0x277540
void SetStateSysLoadScreenAwarenessCard(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 260, Address: 0x277540, Func Offset: 0
    // Line 262, Address: 0x27754c, Func Offset: 0xc
    // Line 264, Address: 0x277550, Func Offset: 0x10
    // Line 266, Address: 0x277558, Func Offset: 0x18
    // Line 268, Address: 0x277560, Func Offset: 0x20
    // Line 269, Address: 0x277568, Func Offset: 0x28
    // Func End, Address: 0x277578, Func Offset: 0x38
}

//
// Start address: 0x277580
void ExecuteStateSysLoadScreenAwarenessCard(SYSLOAD_SCREEN* pSysLoad)
{
    int lResult;
    // Line 284, Address: 0x277580, Func Offset: 0
    // Line 287, Address: 0x277590, Func Offset: 0x10
    // Line 290, Address: 0x277598, Func Offset: 0x18
    // Line 292, Address: 0x2775a4, Func Offset: 0x24
    // Line 293, Address: 0x2775ac, Func Offset: 0x2c
    // Line 295, Address: 0x2775b4, Func Offset: 0x34
    // Line 302, Address: 0x2775bc, Func Offset: 0x3c
    // Line 305, Address: 0x2775ec, Func Offset: 0x6c
    // Line 306, Address: 0x2775f4, Func Offset: 0x74
    // Line 310, Address: 0x2775fc, Func Offset: 0x7c
    // Line 313, Address: 0x277608, Func Offset: 0x88
    // Func End, Address: 0x277618, Func Offset: 0x98
}

//
// Start address: 0x277620
void SetStateSysLoadScreenErrAwareness(SYSLOAD_SCREEN* pSysLoad)
{
    char cFormat2;
    char cFormat1;
    int lDir2;
    int lFree2;
    int lType2;
    int lType1;
    int lSlot2;
    int lSlot1;
    unsigned char MesTbl[5][3];
    // Line 328, Address: 0x277620, Func Offset: 0
    // Line 339, Address: 0x277644, Func Offset: 0x24
    // Line 341, Address: 0x277650, Func Offset: 0x30
    // Line 343, Address: 0x277660, Func Offset: 0x40
    // Line 341, Address: 0x277664, Func Offset: 0x44
    // Line 343, Address: 0x277668, Func Offset: 0x48
    // Line 345, Address: 0x277670, Func Offset: 0x50
    // Line 343, Address: 0x277674, Func Offset: 0x54
    // Line 345, Address: 0x277678, Func Offset: 0x58
    // Line 347, Address: 0x277684, Func Offset: 0x64
    // Line 345, Address: 0x277688, Func Offset: 0x68
    // Line 347, Address: 0x27768c, Func Offset: 0x6c
    // Line 350, Address: 0x277698, Func Offset: 0x78
    // Line 352, Address: 0x2776a8, Func Offset: 0x88
    // Line 355, Address: 0x2776b0, Func Offset: 0x90
    // Line 356, Address: 0x2776c0, Func Offset: 0xa0
    // Line 357, Address: 0x2776dc, Func Offset: 0xbc
    // Line 365, Address: 0x2776ec, Func Offset: 0xcc
    // Line 366, Address: 0x2776fc, Func Offset: 0xdc
    // Line 367, Address: 0x277718, Func Offset: 0xf8
    // Line 368, Address: 0x277730, Func Offset: 0x110
    // Line 369, Address: 0x277740, Func Offset: 0x120
    // Line 370, Address: 0x277764, Func Offset: 0x144
    // Line 378, Address: 0x277778, Func Offset: 0x158
    // Line 381, Address: 0x277794, Func Offset: 0x174
    // Line 378, Address: 0x277798, Func Offset: 0x178
    // Line 381, Address: 0x27779c, Func Offset: 0x17c
    // Line 382, Address: 0x2777a0, Func Offset: 0x180
    // Func End, Address: 0x2777c4, Func Offset: 0x1a4
}

//
// Start address: 0x2777d0
void ExecuteStateSysLoadScreenErrAwareness(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 397, Address: 0x2777d0, Func Offset: 0
    // Line 399, Address: 0x2777d8, Func Offset: 0x8
    // Line 401, Address: 0x2777ec, Func Offset: 0x1c
    // Line 403, Address: 0x2777f0, Func Offset: 0x20
    // Line 404, Address: 0x2777f8, Func Offset: 0x28
    // Line 408, Address: 0x277800, Func Offset: 0x30
    // Line 411, Address: 0x27781c, Func Offset: 0x4c
    // Line 423, Address: 0x277824, Func Offset: 0x54
    // Func End, Address: 0x277830, Func Offset: 0x60
}

//
// Start address: 0x277830
void SetStateSysLoadScreenDirCheck(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 441, Address: 0x277830, Func Offset: 0
    // Line 443, Address: 0x27783c, Func Offset: 0xc
    // Line 445, Address: 0x277844, Func Offset: 0x14
    // Line 447, Address: 0x277848, Func Offset: 0x18
    // Line 449, Address: 0x277850, Func Offset: 0x20
    // Line 451, Address: 0x277854, Func Offset: 0x24
    // Line 453, Address: 0x277860, Func Offset: 0x30
    // Line 454, Address: 0x27786c, Func Offset: 0x3c
    // Func End, Address: 0x27787c, Func Offset: 0x4c
}

//
// Start address: 0x277880
void ExecuteStateSysLoadScreenDirCheck(SYSLOAD_SCREEN* pSysLoad)
{
    int lResult;
    // Line 469, Address: 0x277880, Func Offset: 0
    // Line 472, Address: 0x27788c, Func Offset: 0xc
    // Line 475, Address: 0x2778c4, Func Offset: 0x44
    // Line 476, Address: 0x2778cc, Func Offset: 0x4c
    // Line 480, Address: 0x2778d8, Func Offset: 0x58
    // Line 481, Address: 0x2778e0, Func Offset: 0x60
    // Line 484, Address: 0x2778e8, Func Offset: 0x68
    // Line 486, Address: 0x2778f4, Func Offset: 0x74
    // Line 488, Address: 0x2778f8, Func Offset: 0x78
    // Line 492, Address: 0x277900, Func Offset: 0x80
    // Line 493, Address: 0x277914, Func Offset: 0x94
    // Line 496, Address: 0x27791c, Func Offset: 0x9c
    // Line 498, Address: 0x277928, Func Offset: 0xa8
    // Line 499, Address: 0x27792c, Func Offset: 0xac
    // Line 500, Address: 0x277934, Func Offset: 0xb4
    // Line 503, Address: 0x277940, Func Offset: 0xc0
    // Line 505, Address: 0x277948, Func Offset: 0xc8
    // Line 508, Address: 0x277950, Func Offset: 0xd0
    // Line 511, Address: 0x277960, Func Offset: 0xe0
    // Line 513, Address: 0x277968, Func Offset: 0xe8
    // Line 516, Address: 0x277970, Func Offset: 0xf0
    // Line 520, Address: 0x277980, Func Offset: 0x100
    // Line 525, Address: 0x277988, Func Offset: 0x108
    // Line 528, Address: 0x2779a4, Func Offset: 0x124
    // Line 530, Address: 0x2779ac, Func Offset: 0x12c
    // Func End, Address: 0x2779bc, Func Offset: 0x13c
}

//
// Start address: 0x2779c0
void SetStateSysLoadScreenFreeCapacity(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 547, Address: 0x2779c0, Func Offset: 0
    // Line 550, Address: 0x2779c8, Func Offset: 0x8
    // Func End, Address: 0x2779d0, Func Offset: 0x10
}

//
// Start address: 0x2779d0
void ExecuteStateSysLoadScreenFreeCapacity(SYSLOAD_SCREEN* pSysLoad)
{
    int lFree1;
    // Line 565, Address: 0x2779d0, Func Offset: 0
    // Line 568, Address: 0x2779e4, Func Offset: 0x14
    // Line 570, Address: 0x2779f0, Func Offset: 0x20
    // Line 573, Address: 0x277a04, Func Offset: 0x34
    // Line 574, Address: 0x277a0c, Func Offset: 0x3c
    // Line 579, Address: 0x277a14, Func Offset: 0x44
    // Line 581, Address: 0x277a20, Func Offset: 0x50
    // Func End, Address: 0x277a34, Func Offset: 0x64
}

//
// Start address: 0x277a40
void SetStateSysLoadScreenErrFreeCapacity(SYSLOAD_SCREEN* pSysLoad)
{
    char cFormat2;
    int lDir2;
    int lFree2;
    int lType2;
    int lSlot2;
    unsigned char MesTbl[5][1];
    // Line 596, Address: 0x277a40, Func Offset: 0
    // Line 602, Address: 0x277a5c, Func Offset: 0x1c
    // Line 604, Address: 0x277a68, Func Offset: 0x28
    // Line 606, Address: 0x277a78, Func Offset: 0x38
    // Line 608, Address: 0x277a88, Func Offset: 0x48
    // Line 606, Address: 0x277a8c, Func Offset: 0x4c
    // Line 608, Address: 0x277a90, Func Offset: 0x50
    // Line 610, Address: 0x277a9c, Func Offset: 0x5c
    // Line 613, Address: 0x277aa4, Func Offset: 0x64
    // Line 614, Address: 0x277ab4, Func Offset: 0x74
    // Line 615, Address: 0x277ad0, Func Offset: 0x90
    // Line 616, Address: 0x277ae8, Func Offset: 0xa8
    // Line 617, Address: 0x277af8, Func Offset: 0xb8
    // Line 618, Address: 0x277b1c, Func Offset: 0xdc
    // Line 626, Address: 0x277b30, Func Offset: 0xf0
    // Line 628, Address: 0x277b40, Func Offset: 0x100
    // Line 626, Address: 0x277b44, Func Offset: 0x104
    // Line 628, Address: 0x277b48, Func Offset: 0x108
    // Line 629, Address: 0x277b4c, Func Offset: 0x10c
    // Func End, Address: 0x277b68, Func Offset: 0x128
}

//
// Start address: 0x277b70
void ExecuteStateSysLoadScreenErrFreeCapacity(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 644, Address: 0x277b70, Func Offset: 0
    // Line 646, Address: 0x277b78, Func Offset: 0x8
    // Line 648, Address: 0x277b8c, Func Offset: 0x1c
    // Line 650, Address: 0x277b90, Func Offset: 0x20
    // Line 651, Address: 0x277b98, Func Offset: 0x28
    // Line 655, Address: 0x277ba0, Func Offset: 0x30
    // Line 658, Address: 0x277bbc, Func Offset: 0x4c
    // Line 661, Address: 0x277bc4, Func Offset: 0x54
    // Func End, Address: 0x277bd0, Func Offset: 0x60
}

//
// Start address: 0x277bd0
void SetStateSysLoadScreenNoSysFile(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 678, Address: 0x277bd0, Func Offset: 0
    // Line 680, Address: 0x277bd8, Func Offset: 0x8
    // Line 681, Address: 0x277bdc, Func Offset: 0xc
    // Func End, Address: 0x277be4, Func Offset: 0x14
}

//
// Start address: 0x277bf0
void ExecuteStateSysLoadScreenNoSysFile(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 696, Address: 0x277bf0, Func Offset: 0
    // Line 698, Address: 0x277bf8, Func Offset: 0x8
    // Line 700, Address: 0x277c0c, Func Offset: 0x1c
    // Line 702, Address: 0x277c10, Func Offset: 0x20
    // Line 703, Address: 0x277c18, Func Offset: 0x28
    // Line 707, Address: 0x277c20, Func Offset: 0x30
    // Line 710, Address: 0x277c3c, Func Offset: 0x4c
    // Line 713, Address: 0x277c44, Func Offset: 0x54
    // Func End, Address: 0x277c50, Func Offset: 0x60
}

//
// Start address: 0x277c50
void SetStateSysLoadScreenSysLoad(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 731, Address: 0x277c50, Func Offset: 0
    // Line 735, Address: 0x277c58, Func Offset: 0x8
    // Line 733, Address: 0x277c5c, Func Offset: 0xc
    // Line 735, Address: 0x277c60, Func Offset: 0x10
    // Line 737, Address: 0x277c64, Func Offset: 0x14
    // Line 738, Address: 0x277c68, Func Offset: 0x18
    // Func End, Address: 0x277c70, Func Offset: 0x20
}

//
// Start address: 0x277c70
void ExecuteStateSysLoadScreenSysLoad(SYSLOAD_SCREEN* pSysLoad)
{
    int ulLoadResult;
    // Line 753, Address: 0x277c70, Func Offset: 0
    // Line 757, Address: 0x277c7c, Func Offset: 0xc
    // Line 761, Address: 0x277cb4, Func Offset: 0x44
    // Line 766, Address: 0x277ccc, Func Offset: 0x5c
    // Line 769, Address: 0x277cd4, Func Offset: 0x64
    // Line 770, Address: 0x277ce4, Func Offset: 0x74
    // Line 777, Address: 0x277cec, Func Offset: 0x7c
    // Line 779, Address: 0x277cfc, Func Offset: 0x8c
    // Line 781, Address: 0x277d04, Func Offset: 0x94
    // Line 783, Address: 0x277d10, Func Offset: 0xa0
    // Line 784, Address: 0x277d18, Func Offset: 0xa8
    // Line 785, Address: 0x277d20, Func Offset: 0xb0
    // Line 788, Address: 0x277d2c, Func Offset: 0xbc
    // Line 790, Address: 0x277d38, Func Offset: 0xc8
    // Line 792, Address: 0x277d40, Func Offset: 0xd0
    // Line 793, Address: 0x277d44, Func Offset: 0xd4
    // Line 794, Address: 0x277d4c, Func Offset: 0xdc
    // Line 797, Address: 0x277d58, Func Offset: 0xe8
    // Line 799, Address: 0x277d64, Func Offset: 0xf4
    // Line 801, Address: 0x277d6c, Func Offset: 0xfc
    // Line 803, Address: 0x277d70, Func Offset: 0x100
    // Line 806, Address: 0x277d78, Func Offset: 0x108
    // Line 809, Address: 0x277d88, Func Offset: 0x118
    // Line 811, Address: 0x277d90, Func Offset: 0x120
    // Line 814, Address: 0x277d98, Func Offset: 0x128
    // Line 817, Address: 0x277da8, Func Offset: 0x138
    // Line 821, Address: 0x277db0, Func Offset: 0x140
    // Func End, Address: 0x277dc0, Func Offset: 0x150
}

//
// Start address: 0x277dc0
void SetStateSysLoadScreenFileBroken(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 838, Address: 0x277dc0, Func Offset: 0
    // Line 840, Address: 0x277dc8, Func Offset: 0x8
    // Line 841, Address: 0x277dcc, Func Offset: 0xc
    // Func End, Address: 0x277dd4, Func Offset: 0x14
}

//
// Start address: 0x277de0
void ExecuteStateSysLoadScreenFileBroken(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 855, Address: 0x277de0, Func Offset: 0
    // Line 857, Address: 0x277de8, Func Offset: 0x8
    // Line 860, Address: 0x277dfc, Func Offset: 0x1c
    // Line 862, Address: 0x277e00, Func Offset: 0x20
    // Line 863, Address: 0x277e08, Func Offset: 0x28
    // Line 867, Address: 0x277e10, Func Offset: 0x30
    // Line 870, Address: 0x277e2c, Func Offset: 0x4c
    // Line 873, Address: 0x277e34, Func Offset: 0x54
    // Func End, Address: 0x277e40, Func Offset: 0x60
}

//
// Start address: 0x277e40
void SetStateSysLoadScreenErrCardRead(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 890, Address: 0x277e40, Func Offset: 0
    // Line 892, Address: 0x277e48, Func Offset: 0x8
    // Line 893, Address: 0x277e4c, Func Offset: 0xc
    // Func End, Address: 0x277e54, Func Offset: 0x14
}

//
// Start address: 0x277e60
void ExecuteStateSysLoadScreenErrCardRead(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 907, Address: 0x277e60, Func Offset: 0
    // Line 909, Address: 0x277e68, Func Offset: 0x8
    // Line 912, Address: 0x277e7c, Func Offset: 0x1c
    // Line 914, Address: 0x277e80, Func Offset: 0x20
    // Line 915, Address: 0x277e88, Func Offset: 0x28
    // Line 919, Address: 0x277e90, Func Offset: 0x30
    // Line 922, Address: 0x277eac, Func Offset: 0x4c
    // Line 925, Address: 0x277eb4, Func Offset: 0x54
    // Func End, Address: 0x277ec0, Func Offset: 0x60
}

//
// Start address: 0x277ec0
void SetStateSysLoadScreenTitleExit(SYSLOAD_SCREEN* pSysLoad)
{
    // Line 941, Address: 0x277ec0, Func Offset: 0
    // Line 943, Address: 0x277ecc, Func Offset: 0xc
    // Line 945, Address: 0x277ed4, Func Offset: 0x14
    // Line 947, Address: 0x277ee0, Func Offset: 0x20
    // Line 949, Address: 0x277eec, Func Offset: 0x2c
    // Line 950, Address: 0x277ef4, Func Offset: 0x34
    // Func End, Address: 0x277f04, Func Offset: 0x44
}

//
// Start address: 0x277f10
void ExecuteStateSysLoadScreenTitleExit()
{
    // Line 964, Address: 0x277f10, Func Offset: 0
    // Line 966, Address: 0x277f1c, Func Offset: 0xc
    // Line 968, Address: 0x277f34, Func Offset: 0x24
    // Line 970, Address: 0x277f38, Func Offset: 0x28
    // Func End, Address: 0x277f40, Func Offset: 0x30
}
