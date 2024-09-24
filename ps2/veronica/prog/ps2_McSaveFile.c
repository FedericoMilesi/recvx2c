#include "ps2_McSaveFile.h"

#include "types.h"

char cSubDirName[13];
int Type_Space[3][18];
unsigned short MesNumTbl[10];
extern SYS* sys;

//
// Start address: 0x271830
SELECTFILEINFO* mcSelectFileInfoInit(SELECTFILEINFO* pFileInfo)
{
    SELECTFILEINFO* pBackUpInfo;
    unsigned int ulCnt;
    // Line 174, Address: 0x271830, Func Offset: 0
    // Line 172, Address: 0x271834, Func Offset: 0x4
    // Line 176, Address: 0x271838, Func Offset: 0x8
    // Line 177, Address: 0x27183c, Func Offset: 0xc
    // Line 178, Address: 0x271840, Func Offset: 0x10
    // Line 179, Address: 0x271844, Func Offset: 0x14
    // Line 180, Address: 0x271848, Func Offset: 0x18
    // Line 183, Address: 0x27184c, Func Offset: 0x1c
    // Line 187, Address: 0x27185c, Func Offset: 0x2c
    // Func End, Address: 0x271864, Func Offset: 0x34
}

//
// Start address: 0x271870
SAVEFILE* mcCreateSaveFileInit(SAVEFILE* pSaveFile)
{
    // Line 220, Address: 0x271870, Func Offset: 0
    // Line 225, Address: 0x27187c, Func Offset: 0xc
    // Line 227, Address: 0x27188c, Func Offset: 0x1c
    // Line 228, Address: 0x271890, Func Offset: 0x20
    // Func End, Address: 0x2718a0, Func Offset: 0x30
}

//
// Start address: 0x2718a0
CONFIGFILE* mcCreateConfigInit(CONFIGFILE* pConfigFile)
{
    // Line 244, Address: 0x2718a0, Func Offset: 0
    // Line 247, Address: 0x2718ac, Func Offset: 0xc
    // Line 248, Address: 0x2718b0, Func Offset: 0x10
    // Line 249, Address: 0x2718b4, Func Offset: 0x14
    // Line 250, Address: 0x2718b8, Func Offset: 0x18
    // Line 251, Address: 0x2718bc, Func Offset: 0x1c
    // Line 253, Address: 0x2718c0, Func Offset: 0x20
    // Line 252, Address: 0x2718c4, Func Offset: 0x24
    // Line 253, Address: 0x2718c8, Func Offset: 0x28
    // Line 254, Address: 0x2718cc, Func Offset: 0x2c
    // Line 255, Address: 0x2718d0, Func Offset: 0x30
    // Line 256, Address: 0x2718d4, Func Offset: 0x34
    // Line 257, Address: 0x2718d8, Func Offset: 0x38
    // Line 258, Address: 0x2718e0, Func Offset: 0x40
    // Line 259, Address: 0x2718e4, Func Offset: 0x44
    // Line 262, Address: 0x2718e8, Func Offset: 0x48
    // Line 260, Address: 0x2718ec, Func Offset: 0x4c
    // Line 261, Address: 0x2718f0, Func Offset: 0x50
    // Line 262, Address: 0x2718f4, Func Offset: 0x54
    // Line 264, Address: 0x271900, Func Offset: 0x60
    // Line 265, Address: 0x271904, Func Offset: 0x64
    // Func End, Address: 0x271914, Func Offset: 0x74
}

//
// Start address: 0x271920
int mcGetSaveFileCapacitySize()
{
    // Line 281, Address: 0x271920, Func Offset: 0
    // Func End, Address: 0x271928, Func Offset: 0x8
}

//
// Start address: 0x271930
int mcReadStartSaveFile(SAVEFILE* pSaveFile, MEMORYCARDSTATE* pCard, char** cppFileName, unsigned int ulCreatSaveCount)
{
    // Line 306, Address: 0x271930, Func Offset: 0
    // Line 310, Address: 0x271934, Func Offset: 0x4
    // Line 306, Address: 0x27193c, Func Offset: 0xc
    // Line 310, Address: 0x271944, Func Offset: 0x14
    // Line 314, Address: 0x271974, Func Offset: 0x44
    // Func End, Address: 0x271980, Func Offset: 0x50
}

//
// Start address: 0x271980
int mcCheckReadStartSaveFile(SAVEFILE* pSaveFile, MEMORYCARDSTATE* pCard, char cMode)
{
    int lResult;
    unsigned int ulDataSize;
    // Line 337, Address: 0x271980, Func Offset: 0
    // Line 343, Address: 0x27199c, Func Offset: 0x1c
    // Line 345, Address: 0x2719a8, Func Offset: 0x28
    // Line 350, Address: 0x2719b4, Func Offset: 0x34
    // Line 348, Address: 0x2719b8, Func Offset: 0x38
    // Line 350, Address: 0x2719c0, Func Offset: 0x40
    // Line 353, Address: 0x2719d4, Func Offset: 0x54
    // Line 359, Address: 0x2719dc, Func Offset: 0x5c
    // Line 366, Address: 0x2719f0, Func Offset: 0x70
    // Line 369, Address: 0x271a08, Func Offset: 0x88
    // Line 375, Address: 0x271a14, Func Offset: 0x94
    // Line 378, Address: 0x271a2c, Func Offset: 0xac
    // Func End, Address: 0x271a48, Func Offset: 0xc8
}

//
// Start address: 0x271a50
int mcWriteStartSaveFile(SAVEFILE* pSaveFile, MEMORYCARDSTATE* pCard, char** cppFileName, unsigned int ulCreatSaveCount)
{
    unsigned int ulDataSize;
    unsigned int itemid;
    unsigned int* wp;
    // Line 404, Address: 0x271a50, Func Offset: 0
    // Line 411, Address: 0x271a6c, Func Offset: 0x1c
    // Line 413, Address: 0x271a98, Func Offset: 0x48
    // Line 415, Address: 0x271ab4, Func Offset: 0x64
    // Line 418, Address: 0x271ac0, Func Offset: 0x70
    // Line 419, Address: 0x271acc, Func Offset: 0x7c
    // Line 421, Address: 0x271ad4, Func Offset: 0x84
    // Line 422, Address: 0x271ad8, Func Offset: 0x88
    // Line 425, Address: 0x271ae8, Func Offset: 0x98
    // Line 428, Address: 0x271af8, Func Offset: 0xa8
    // Line 431, Address: 0x271b00, Func Offset: 0xb0
    // Line 436, Address: 0x271b0c, Func Offset: 0xbc
    // Line 440, Address: 0x271b14, Func Offset: 0xc4
    // Line 441, Address: 0x271b28, Func Offset: 0xd8
    // Line 442, Address: 0x271b38, Func Offset: 0xe8
    // Line 443, Address: 0x271b44, Func Offset: 0xf4
    // Line 444, Address: 0x271b50, Func Offset: 0x100
    // Line 447, Address: 0x271b5c, Func Offset: 0x10c
    // Line 452, Address: 0x271b64, Func Offset: 0x114
    // Line 447, Address: 0x271b68, Func Offset: 0x118
    // Line 452, Address: 0x271b74, Func Offset: 0x124
    // Line 455, Address: 0x271b7c, Func Offset: 0x12c
    // Line 460, Address: 0x271b8c, Func Offset: 0x13c
    // Line 469, Address: 0x271bc4, Func Offset: 0x174
    // Func End, Address: 0x271be4, Func Offset: 0x194
}

//
// Start address: 0x271bf0
int mcCheckWriteStartSaveFile(MEMORYCARDSTATE* pCard)
{
    int lResult;
    // Line 486, Address: 0x271bf0, Func Offset: 0
    // Line 490, Address: 0x271bf8, Func Offset: 0x8
    // Line 493, Address: 0x271c00, Func Offset: 0x10
    // Line 496, Address: 0x271c0c, Func Offset: 0x1c
    // Line 498, Address: 0x271c14, Func Offset: 0x24
    // Line 501, Address: 0x271c20, Func Offset: 0x30
    // Line 503, Address: 0x271c34, Func Offset: 0x44
    // Line 506, Address: 0x271c3c, Func Offset: 0x4c
    // Line 507, Address: 0x271c40, Func Offset: 0x50
    // Func End, Address: 0x271c4c, Func Offset: 0x5c
}

//
// Start address: 0x271c50
int mcNewCreateSaveFile(MEMORYCARDSTATE* pCard, SAVEFILE* pSaveFile, char** cppFileName, unsigned int ulCreatSaveCount)
{
    // Line 530, Address: 0x271c50, Func Offset: 0
    // Line 532, Address: 0x271c70, Func Offset: 0x20
    // Line 536, Address: 0x271c78, Func Offset: 0x28
    // Line 541, Address: 0x271cb0, Func Offset: 0x60
    // Func End, Address: 0x271cc8, Func Offset: 0x78
}

//
// Start address: 0x271cd0
int mcGetConfigCapacitySize()
{
    // Line 557, Address: 0x271cd0, Func Offset: 0
    // Func End, Address: 0x271cd8, Func Offset: 0x8
}

//
// Start address: 0x271ce0
int mcReadStartConfigFile(MEMORYCARDSTATE* pCard, CONFIGFILE* pConfigFile)
{
    // Line 579, Address: 0x271ce0, Func Offset: 0
    // Line 583, Address: 0x271ce4, Func Offset: 0x4
    // Line 579, Address: 0x271cf0, Func Offset: 0x10
    // Line 583, Address: 0x271cf4, Func Offset: 0x14
    // Line 587, Address: 0x271d14, Func Offset: 0x34
    // Func End, Address: 0x271d20, Func Offset: 0x40
}

//
// Start address: 0x271d20
int mcCheckReadStartConfigFile(MEMORYCARDSTATE* pCard, CONFIGFILE* pConfigFile)
{
    int lResult;
    unsigned int ulDataSize;
    // Line 607, Address: 0x271d20, Func Offset: 0
    // Line 612, Address: 0x271d34, Func Offset: 0x14
    // Line 614, Address: 0x271d3c, Func Offset: 0x1c
    // Line 622, Address: 0x271d48, Func Offset: 0x28
    // Line 617, Address: 0x271d4c, Func Offset: 0x2c
    // Line 622, Address: 0x271d54, Func Offset: 0x34
    // Line 633, Address: 0x271d74, Func Offset: 0x54
    // Line 636, Address: 0x271d8c, Func Offset: 0x6c
    // Func End, Address: 0x271da4, Func Offset: 0x84
}

//
// Start address: 0x271db0
int mcWriteStartConfigFile(MEMORYCARDSTATE* pCard, CONFIGFILE* pConfigFile)
{
    unsigned int ulDataSize;
    // Line 655, Address: 0x271db0, Func Offset: 0
    // Line 660, Address: 0x271dc8, Func Offset: 0x18
    // Line 665, Address: 0x271dd4, Func Offset: 0x24
    // Line 660, Address: 0x271dd8, Func Offset: 0x28
    // Line 665, Address: 0x271de0, Func Offset: 0x30
    // Line 667, Address: 0x271de8, Func Offset: 0x38
    // Line 672, Address: 0x271df8, Func Offset: 0x48
    // Line 676, Address: 0x271e2c, Func Offset: 0x7c
    // Func End, Address: 0x271e44, Func Offset: 0x94
}

//
// Start address: 0x271e50
int mcCheckWriteStartConfigFile(MEMORYCARDSTATE* pCard)
{
    int lResult;
    // Line 693, Address: 0x271e50, Func Offset: 0
    // Line 697, Address: 0x271e58, Func Offset: 0x8
    // Line 699, Address: 0x271e60, Func Offset: 0x10
    // Line 701, Address: 0x271e6c, Func Offset: 0x1c
    // Line 705, Address: 0x271e74, Func Offset: 0x24
    // Line 709, Address: 0x271e8c, Func Offset: 0x3c
    // Func End, Address: 0x271e98, Func Offset: 0x48
}

//
// Start address: 0x271ea0
int mcNewCreateConfigFile(MEMORYCARDSTATE* pCard, CONFIGFILE* pConfigFile)
{
    // Line 729, Address: 0x271ea0, Func Offset: 0
    // Line 731, Address: 0x271eb0, Func Offset: 0x10
    // Line 736, Address: 0x271ebc, Func Offset: 0x1c
    // Line 740, Address: 0x271eec, Func Offset: 0x4c
    // Func End, Address: 0x271efc, Func Offset: 0x5c
}

//
// Start address: 0x271f00
ICONINFORMATION* mcCreateIconInit(ICONINFORMATION* pIcon, char** cppFileName, unsigned int ulFileNamber)
{
    float ambient[4];
    float lightcol[4][3];
    float lightdir[4][3];
    int bgcolor[4][4];
    // Line 756, Address: 0x271f00, Func Offset: 0
    // Line 777, Address: 0x271f1c, Func Offset: 0x1c
    // Line 778, Address: 0x271f2c, Func Offset: 0x2c
    // Line 783, Address: 0x271f3c, Func Offset: 0x3c
    // Line 784, Address: 0x271f4c, Func Offset: 0x4c
    // Line 786, Address: 0x271f54, Func Offset: 0x54
    // Line 787, Address: 0x271f58, Func Offset: 0x58
    // Line 788, Address: 0x271f6c, Func Offset: 0x6c
    // Line 789, Address: 0x271f80, Func Offset: 0x80
    // Line 790, Address: 0x271f94, Func Offset: 0x94
    // Line 791, Address: 0x271fa8, Func Offset: 0xa8
    // Line 792, Address: 0x271fbc, Func Offset: 0xbc
    // Line 793, Address: 0x271fc8, Func Offset: 0xc8
    // Line 795, Address: 0x271fd4, Func Offset: 0xd4
    // Line 796, Address: 0x271fd8, Func Offset: 0xd8
    // Func End, Address: 0x271ff0, Func Offset: 0xf0
}

//
// Start address: 0x271ff0
int mcGetIconCapacitySize()
{
    // Line 812, Address: 0x271ff0, Func Offset: 0
    // Func End, Address: 0x271ff8, Func Offset: 0x8
}

//
// Start address: 0x272000
int mcGetIconFileCapacitySize()
{
    // Line 829, Address: 0x272000, Func Offset: 0
    // Func End, Address: 0x272008, Func Offset: 0x8
}

//
// Start address: 0x272010
int mcNewCreateIcon(ICONINFORMATION* pIcon, MEMORYCARDSTATE* pCard, char** cppFileName, unsigned int ulCreatSaveCount)
{
    // Line 851, Address: 0x272010, Func Offset: 0
    // Line 857, Address: 0x272014, Func Offset: 0x4
    // Line 851, Address: 0x27201c, Func Offset: 0xc
    // Line 857, Address: 0x272024, Func Offset: 0x14
    // Line 861, Address: 0x272054, Func Offset: 0x44
    // Func End, Address: 0x272060, Func Offset: 0x50
}

//
// Start address: 0x272060
int mcReadIconData(void* vpReadAddr, char** cppIconFileName, int lFileNum)
{
    int lFileSize;
    GDS_FS_HANDLE* FileHandle;
    // Line 878, Address: 0x272060, Func Offset: 0
    // Line 883, Address: 0x27206c, Func Offset: 0xc
    // Line 878, Address: 0x272074, Func Offset: 0x14
    // Line 883, Address: 0x27207c, Func Offset: 0x1c
    // Line 884, Address: 0x27208c, Func Offset: 0x2c
    // Line 886, Address: 0x272094, Func Offset: 0x34
    // Line 889, Address: 0x27209c, Func Offset: 0x3c
    // Line 891, Address: 0x2720b0, Func Offset: 0x50
    // Line 893, Address: 0x2720b8, Func Offset: 0x58
    // Line 896, Address: 0x2720c0, Func Offset: 0x60
    // Line 898, Address: 0x2720e0, Func Offset: 0x80
    // Line 900, Address: 0x2720e8, Func Offset: 0x88
    // Line 903, Address: 0x2720f0, Func Offset: 0x90
    // Line 905, Address: 0x2720fc, Func Offset: 0x9c
    // Line 906, Address: 0x272104, Func Offset: 0xa4
    // Func End, Address: 0x272118, Func Offset: 0xb8
}

//
// Start address: 0x272120
int mcWriteIconData(MEMORYCARDSTATE* pCard, void* vpWriteAddr, unsigned int ulDataSize, char** cppFileName, unsigned int ulCreatSaveCount)
{
    // Line 935, Address: 0x272120, Func Offset: 0
    // Line 931, Address: 0x272124, Func Offset: 0x4
    // Line 935, Address: 0x272128, Func Offset: 0x8
    // Line 931, Address: 0x27212c, Func Offset: 0xc
    // Line 935, Address: 0x272130, Func Offset: 0x10
    // Line 939, Address: 0x272154, Func Offset: 0x34
    // Func End, Address: 0x272160, Func Offset: 0x40
}

//
// Start address: 0x272160
int mcGetFreeCapacitySize()
{
    unsigned int ulGetFileSize;
    unsigned int ulGetFileSizeMax;
    // Line 953, Address: 0x272160, Func Offset: 0
    // Line 957, Address: 0x27216c, Func Offset: 0xc
    // Line 958, Address: 0x27217c, Func Offset: 0x1c
    // Line 959, Address: 0x272184, Func Offset: 0x24
    // Line 960, Address: 0x272194, Func Offset: 0x34
    // Line 961, Address: 0x2721a4, Func Offset: 0x44
    // Line 968, Address: 0x2721b0, Func Offset: 0x50
    // Line 961, Address: 0x2721b4, Func Offset: 0x54
    // Line 965, Address: 0x2721bc, Func Offset: 0x5c
    // Line 967, Address: 0x2721c0, Func Offset: 0x60
    // Line 968, Address: 0x2721c4, Func Offset: 0x64
    // Func End, Address: 0x2721d0, Func Offset: 0x70
}

//
// Start address: 0x2721d0
void mcGetPortSelectDirInfo(SAVEFILE* pSaveFile, SELECTFILEWINDOW* pWin, unsigned int ulCheckCounter)
{
    int lCount;
    SELECTFILEINFO* pFileInfo;
    // Line 987, Address: 0x2721d0, Func Offset: 0
    // Line 992, Address: 0x2721e0, Func Offset: 0x10
    // Line 994, Address: 0x2721e4, Func Offset: 0x14
    // Line 997, Address: 0x2721f4, Func Offset: 0x24
    // Line 996, Address: 0x2721f8, Func Offset: 0x28
    // Line 997, Address: 0x2721fc, Func Offset: 0x2c
    // Line 1000, Address: 0x272210, Func Offset: 0x40
    // Line 1001, Address: 0x272238, Func Offset: 0x68
    // Line 1002, Address: 0x272240, Func Offset: 0x70
    // Line 1003, Address: 0x272248, Func Offset: 0x78
    // Line 1004, Address: 0x272250, Func Offset: 0x80
    // Func End, Address: 0x272264, Func Offset: 0x94
}

//
// Start address: 0x272270
int mcSelectSaveFileCheck(SELECTFILEWINDOW* pWin, unsigned short ulSaveCount)
{
    unsigned short sCnt;
    SELECTFILEINFO* pFileInfo;
    // Line 1026, Address: 0x272270, Func Offset: 0
    // Line 1028, Address: 0x272278, Func Offset: 0x8
    // Line 1031, Address: 0x272280, Func Offset: 0x10
    // Line 1030, Address: 0x272284, Func Offset: 0x14
    // Line 1031, Address: 0x272288, Func Offset: 0x18
    // Line 1034, Address: 0x2722a0, Func Offset: 0x30
    // Line 1037, Address: 0x2722d0, Func Offset: 0x60
    // Line 1043, Address: 0x2722d8, Func Offset: 0x68
    // Line 1045, Address: 0x2722dc, Func Offset: 0x6c
    // Func End, Address: 0x2722e4, Func Offset: 0x74
}

//
// Start address: 0x2722f0
SELECTFILEWINDOW* mcCreateFileSelectWindow(SELECTFILEWINDOW* pWin, SELECTFILEINFO* pFileInfo, unsigned int ulRecord)
{
    // Line 1067, Address: 0x2722f0, Func Offset: 0
    // Line 1068, Address: 0x2722f4, Func Offset: 0x4
    // Line 1069, Address: 0x2722f8, Func Offset: 0x8
    // Line 1071, Address: 0x2722fc, Func Offset: 0xc
    // Line 1070, Address: 0x272300, Func Offset: 0x10
    // Line 1071, Address: 0x272304, Func Offset: 0x14
    // Line 1072, Address: 0x272308, Func Offset: 0x18
    // Line 1074, Address: 0x27230c, Func Offset: 0x1c
    // Line 1073, Address: 0x272310, Func Offset: 0x20
    // Line 1074, Address: 0x272314, Func Offset: 0x24
    // Line 1075, Address: 0x272318, Func Offset: 0x28
    // Line 1076, Address: 0x272320, Func Offset: 0x30
    // Line 1079, Address: 0x272324, Func Offset: 0x34
    // Line 1077, Address: 0x272328, Func Offset: 0x38
    // Line 1079, Address: 0x27232c, Func Offset: 0x3c
    // Line 1082, Address: 0x272334, Func Offset: 0x44
    // Func End, Address: 0x27233c, Func Offset: 0x4c
}

//
// Start address: 0x272340
void mcSetFileSelectWindowCursolInit(SELECTFILEWINDOW* pWin)
{
    // Line 1115, Address: 0x272340, Func Offset: 0
    // Line 1116, Address: 0x272344, Func Offset: 0x4
    // Line 1118, Address: 0x272348, Func Offset: 0x8
    // Func End, Address: 0x272350, Func Offset: 0x10
}

//
// Start address: 0x272350
void mcSetFileSelectWindowCursol(SELECTFILEWINDOW* pWin, int lCurInfo)
{
    // Line 1134, Address: 0x272350, Func Offset: 0
    // Line 1137, Address: 0x272384, Func Offset: 0x34
    // Line 1138, Address: 0x27238c, Func Offset: 0x3c
    // Line 1141, Address: 0x272394, Func Offset: 0x44
    // Line 1143, Address: 0x27239c, Func Offset: 0x4c
    // Line 1144, Address: 0x2723a4, Func Offset: 0x54
    // Line 1146, Address: 0x2723ac, Func Offset: 0x5c
    // Line 1149, Address: 0x2723b0, Func Offset: 0x60
    // Func End, Address: 0x2723b8, Func Offset: 0x68
}

//
// Start address: 0x2723c0
int mcGetFileSelectWindowCursol(SELECTFILEWINDOW* pWin)
{
    // Line 1165, Address: 0x2723c0, Func Offset: 0
    // Func End, Address: 0x2723c8, Func Offset: 0x8
}

//
// Start address: 0x2723d0
void mcDisplayFileSelectWindow(SELECTFILEWINDOW* pWin, float fX, float fY, unsigned int port)
{
    unsigned int ulDispCount;
    SELECTFILEINFO* pFileInfo;
    unsigned int ulCall;
    // Line 1188, Address: 0x2723d0, Func Offset: 0
    // Line 1198, Address: 0x2723d4, Func Offset: 0x4
    // Line 1188, Address: 0x2723d8, Func Offset: 0x8
    // Line 1198, Address: 0x2723f0, Func Offset: 0x20
    // Line 1188, Address: 0x2723f8, Func Offset: 0x28
    // Line 1198, Address: 0x272408, Func Offset: 0x38
    // Line 1199, Address: 0x272424, Func Offset: 0x54
    // Line 1206, Address: 0x27244c, Func Offset: 0x7c
    // Line 1208, Address: 0x272464, Func Offset: 0x94
    // Line 1210, Address: 0x27248c, Func Offset: 0xbc
    // Line 1212, Address: 0x272490, Func Offset: 0xc0
    // Line 1214, Address: 0x272498, Func Offset: 0xc8
    // Line 1216, Address: 0x2724b4, Func Offset: 0xe4
    // Line 1218, Address: 0x2724c4, Func Offset: 0xf4
    // Line 1220, Address: 0x2724dc, Func Offset: 0x10c
    // Line 1221, Address: 0x2724e4, Func Offset: 0x114
    // Line 1223, Address: 0x2724e8, Func Offset: 0x118
    // Line 1226, Address: 0x272540, Func Offset: 0x170
    // Line 1229, Address: 0x272560, Func Offset: 0x190
    // Line 1230, Address: 0x272578, Func Offset: 0x1a8
    // Line 1231, Address: 0x272580, Func Offset: 0x1b0
    // Line 1233, Address: 0x272588, Func Offset: 0x1b8
    // Line 1236, Address: 0x27259c, Func Offset: 0x1cc
    // Line 1238, Address: 0x2725a8, Func Offset: 0x1d8
    // Line 1240, Address: 0x2725b8, Func Offset: 0x1e8
    // Line 1241, Address: 0x2725c4, Func Offset: 0x1f4
    // Line 1242, Address: 0x2725c8, Func Offset: 0x1f8
    // Line 1243, Address: 0x2725d0, Func Offset: 0x200
    // Line 1246, Address: 0x2725d8, Func Offset: 0x208
    // Line 1247, Address: 0x27262c, Func Offset: 0x25c
    // Line 1248, Address: 0x272630, Func Offset: 0x260
    // Line 1249, Address: 0x272648, Func Offset: 0x278
    // Func End, Address: 0x272668, Func Offset: 0x298
}

//
// Start address: 0x272670
void mcMoveFileSelectWindowCursor(SELECTFILEWINDOW* pWin, short slCur)
{
    // Line 1268, Address: 0x272670, Func Offset: 0
    // Line 1271, Address: 0x27267c, Func Offset: 0xc
    // Line 1273, Address: 0x272690, Func Offset: 0x20
    // Line 1275, Address: 0x272698, Func Offset: 0x28
    // Line 1277, Address: 0x2726a4, Func Offset: 0x34
    // Line 1278, Address: 0x2726ac, Func Offset: 0x3c
    // Line 1280, Address: 0x2726b0, Func Offset: 0x40
    // Line 1282, Address: 0x2726b8, Func Offset: 0x48
    // Line 1284, Address: 0x2726cc, Func Offset: 0x5c
    // Line 1286, Address: 0x2726d4, Func Offset: 0x64
    // Line 1288, Address: 0x2726ec, Func Offset: 0x7c
    // Line 1289, Address: 0x2726f0, Func Offset: 0x80
    // Line 1292, Address: 0x2726f4, Func Offset: 0x84
    // Func End, Address: 0x2726fc, Func Offset: 0x8c
}

//
// Start address: 0x272700
void mcDisplaySelectFileInfo(SELECTFILEINFO* pFileInfo, float fx, float fy)
{
    // Line 1311, Address: 0x272700, Func Offset: 0
    // Line 1313, Address: 0x272714, Func Offset: 0x14
    // Line 1315, Address: 0x27271c, Func Offset: 0x1c
    // Line 1316, Address: 0x272728, Func Offset: 0x28
    // Func End, Address: 0x27273c, Func Offset: 0x3c
}

//
// Start address: 0x272740
void mcDisplaySelectFileInfoMesCount(SELECTFILEINFO* pFileInfo, float fx, float fy, unsigned int CountMes)
{
    unsigned int ulMaxMes;
    unsigned int ulMesPlace;
    unsigned int ulMesIncrease;
    unsigned int col;
    NJS_POINT2 pos;
    // Line 1338, Address: 0x272740, Func Offset: 0
    // Line 1344, Address: 0x272764, Func Offset: 0x24
    // Line 1346, Address: 0x272778, Func Offset: 0x38
    // Line 1344, Address: 0x27277c, Func Offset: 0x3c
    // Line 1346, Address: 0x272788, Func Offset: 0x48
    // Line 1344, Address: 0x272794, Func Offset: 0x54
    // Line 1348, Address: 0x27279c, Func Offset: 0x5c
    // Line 1351, Address: 0x2727ac, Func Offset: 0x6c
    // Line 1355, Address: 0x2727b4, Func Offset: 0x74
    // Line 1358, Address: 0x2727e0, Func Offset: 0xa0
    // Line 1359, Address: 0x2727e4, Func Offset: 0xa4
    // Line 1361, Address: 0x2727ec, Func Offset: 0xac
    // Line 1362, Address: 0x2727f0, Func Offset: 0xb0
    // Line 1364, Address: 0x2727f8, Func Offset: 0xb8
    // Line 1425, Address: 0x272800, Func Offset: 0xc0
    // Line 1427, Address: 0x272824, Func Offset: 0xe4
    // Line 1428, Address: 0x27284c, Func Offset: 0x10c
    // Line 1429, Address: 0x272854, Func Offset: 0x114
    // Line 1431, Address: 0x27286c, Func Offset: 0x12c
    // Line 1433, Address: 0x272894, Func Offset: 0x154
    // Line 1435, Address: 0x2728c0, Func Offset: 0x180
    // Line 1436, Address: 0x2728c4, Func Offset: 0x184
    // Line 1435, Address: 0x2728d0, Func Offset: 0x190
    // Line 1436, Address: 0x2728d4, Func Offset: 0x194
    // Line 1439, Address: 0x2728dc, Func Offset: 0x19c
    // Line 1442, Address: 0x2728f4, Func Offset: 0x1b4
    // Line 1444, Address: 0x2728fc, Func Offset: 0x1bc
    // Line 1446, Address: 0x272944, Func Offset: 0x204
    // Line 1449, Address: 0x27295c, Func Offset: 0x21c
    // Line 1451, Address: 0x272964, Func Offset: 0x224
    // Line 1454, Address: 0x27299c, Func Offset: 0x25c
    // Line 1457, Address: 0x2729b4, Func Offset: 0x274
    // Line 1458, Address: 0x2729b8, Func Offset: 0x278
    // Line 1457, Address: 0x2729c4, Func Offset: 0x284
    // Line 1458, Address: 0x2729c8, Func Offset: 0x288
    // Line 1461, Address: 0x2729d0, Func Offset: 0x290
    // Line 1463, Address: 0x2729fc, Func Offset: 0x2bc
    // Line 1466, Address: 0x272a08, Func Offset: 0x2c8
    // Line 1467, Address: 0x272a38, Func Offset: 0x2f8
    // Line 1471, Address: 0x272a40, Func Offset: 0x300
    // Line 1473, Address: 0x272a74, Func Offset: 0x334
    // Line 1474, Address: 0x272a7c, Func Offset: 0x33c
    // Line 1476, Address: 0x272a8c, Func Offset: 0x34c
    // Line 1479, Address: 0x272ab8, Func Offset: 0x378
    // Func End, Address: 0x272ae0, Func Offset: 0x3a0
}

//
// Start address: 0x272ae0
void mcCallMessageTypeSe(SELECTFILEINFO* pFileInfo, int CountMes)
{
    // Line 1496, Address: 0x272ae0, Func Offset: 0
    // Line 1511, Address: 0x272ae8, Func Offset: 0x8
    // Line 1513, Address: 0x272af4, Func Offset: 0x14
    // Line 1515, Address: 0x272b18, Func Offset: 0x38
    // Line 1517, Address: 0x272b20, Func Offset: 0x40
    // Line 1519, Address: 0x272b34, Func Offset: 0x54
    // Line 1520, Address: 0x272b44, Func Offset: 0x64
    // Line 1523, Address: 0x272b4c, Func Offset: 0x6c
    // Line 1525, Address: 0x272b58, Func Offset: 0x78
    // Line 1528, Address: 0x272b60, Func Offset: 0x80
    // Line 1530, Address: 0x272b84, Func Offset: 0xa4
    // Line 1532, Address: 0x272b8c, Func Offset: 0xac
    // Line 1534, Address: 0x272ba0, Func Offset: 0xc0
    // Line 1535, Address: 0x272bb0, Func Offset: 0xd0
    // Line 1538, Address: 0x272bb8, Func Offset: 0xd8
    // Line 1573, Address: 0x272bc4, Func Offset: 0xe4
    // Func End, Address: 0x272bd0, Func Offset: 0xf0
}

//
// Start address: 0x272bd0
void mcDispFileNumber(SELECTFILEINFO* pFileInfo, float fx, float fy)
{
    unsigned int col;
    unsigned int ulTenfigure;
    NJS_POINT2 pos;
    // Line 1592, Address: 0x272bd0, Func Offset: 0
    // Line 1596, Address: 0x272be4, Func Offset: 0x14
    // Line 1598, Address: 0x272c18, Func Offset: 0x48
    // Line 1599, Address: 0x272c1c, Func Offset: 0x4c
    // Line 1602, Address: 0x272c24, Func Offset: 0x54
    // Line 1605, Address: 0x272c28, Func Offset: 0x58
    // Line 1606, Address: 0x272c2c, Func Offset: 0x5c
    // Line 1609, Address: 0x272c30, Func Offset: 0x60
    // Line 1614, Address: 0x272c60, Func Offset: 0x90
    // Line 1618, Address: 0x272c88, Func Offset: 0xb8
    // Line 1623, Address: 0x272c90, Func Offset: 0xc0
    // Line 1618, Address: 0x272c94, Func Offset: 0xc4
    // Line 1623, Address: 0x272c98, Func Offset: 0xc8
    // Line 1618, Address: 0x272ca0, Func Offset: 0xd0
    // Line 1623, Address: 0x272ca4, Func Offset: 0xd4
    // Line 1626, Address: 0x272cd8, Func Offset: 0x108
    // Line 1630, Address: 0x272ce0, Func Offset: 0x110
    // Line 1626, Address: 0x272ce4, Func Offset: 0x114
    // Line 1630, Address: 0x272ce8, Func Offset: 0x118
    // Line 1632, Address: 0x272cfc, Func Offset: 0x12c
    // Func End, Address: 0x272d14, Func Offset: 0x144
}

//
// Start address: 0x272d20
void mcDispFileName(SELECTFILEINFO* pFileInfo, float fy)
{
    unsigned int col;
    NJS_POINT2 pos;
    // Line 1649, Address: 0x272d20, Func Offset: 0
    // Line 1653, Address: 0x272d34, Func Offset: 0x14
    // Line 1655, Address: 0x272d68, Func Offset: 0x48
    // Line 1656, Address: 0x272d94, Func Offset: 0x74
    // Line 1660, Address: 0x272d9c, Func Offset: 0x7c
    // Line 1663, Address: 0x272dc8, Func Offset: 0xa8
    // Line 1664, Address: 0x272dcc, Func Offset: 0xac
    // Line 1666, Address: 0x272dd4, Func Offset: 0xb4
    // Line 1667, Address: 0x272dd8, Func Offset: 0xb8
    // Line 1669, Address: 0x272de0, Func Offset: 0xc0
    // Line 1674, Address: 0x272de8, Func Offset: 0xc8
    // Line 1677, Address: 0x272e14, Func Offset: 0xf4
    // Line 1682, Address: 0x272e1c, Func Offset: 0xfc
    // Line 1687, Address: 0x272e34, Func Offset: 0x114
    // Line 1692, Address: 0x272e3c, Func Offset: 0x11c
    // Line 1695, Address: 0x272e84, Func Offset: 0x164
    // Line 1700, Address: 0x272e8c, Func Offset: 0x16c
    // Line 1704, Address: 0x272ec4, Func Offset: 0x1a4
    // Line 1708, Address: 0x272ec8, Func Offset: 0x1a8
    // Line 1704, Address: 0x272ed4, Func Offset: 0x1b4
    // Line 1708, Address: 0x272ed8, Func Offset: 0x1b8
    // Line 1712, Address: 0x272ee0, Func Offset: 0x1c0
    // Line 1714, Address: 0x272f0c, Func Offset: 0x1ec
    // Func End, Address: 0x272f24, Func Offset: 0x204
}

//
// Start address: 0x272f30
void mcSetTyepWriteMode(SELECTFILEWINDOW* pWin, unsigned int SetState)
{
    // Line 1734, Address: 0x272f30, Func Offset: 0
    // Func End, Address: 0x272f38, Func Offset: 0x8
}

//
// Start address: 0x272f40
int mcSetStringSaveFile(SELECTFILEINFO* pFileInfo)
{
    // Line 1753, Address: 0x272f40, Func Offset: 0
    // Line 1757, Address: 0x272f64, Func Offset: 0x24
    // Func End, Address: 0x272f6c, Func Offset: 0x2c
}

//
// Start address: 0x272f70
int mcGetStringEnd(SELECTFILEWINDOW* pWin, unsigned short usSaveEnd)
{
    // Line 1775, Address: 0x272f70, Func Offset: 0
    // Line 1777, Address: 0x272f84, Func Offset: 0x14
    // Line 1779, Address: 0x272f88, Func Offset: 0x18
    // Line 1778, Address: 0x272f8c, Func Offset: 0x1c
    // Line 1779, Address: 0x272f90, Func Offset: 0x20
    // Line 1780, Address: 0x272f94, Func Offset: 0x24
    // Line 1783, Address: 0x272f98, Func Offset: 0x28
    // Line 1784, Address: 0x272f9c, Func Offset: 0x2c
    // Func End, Address: 0x272fa4, Func Offset: 0x34
}

//
// Start address: 0x272fb0
void mcDispWindowCurSol(SELECTFILEWINDOW* pWin, float fx, float fy)
{
    // Line 1804, Address: 0x272fb0, Func Offset: 0
    // Func End, Address: 0x272fd8, Func Offset: 0x28
}

//
// Start address: 0x272fe0
void DispCursolTexture(float pos_x, float pos_y, unsigned int color)
{
    _anon37 twt[18];
    // Line 1824, Address: 0x272fe0, Func Offset: 0
    // Line 1827, Address: 0x272ff4, Func Offset: 0x14
    // Line 1829, Address: 0x273014, Func Offset: 0x34
    // Line 1839, Address: 0x27301c, Func Offset: 0x3c
    // Line 1830, Address: 0x273020, Func Offset: 0x40
    // Line 1831, Address: 0x273024, Func Offset: 0x44
    // Line 1830, Address: 0x273028, Func Offset: 0x48
    // Line 1831, Address: 0x27302c, Func Offset: 0x4c
    // Line 1832, Address: 0x273030, Func Offset: 0x50
    // Line 1835, Address: 0x27303c, Func Offset: 0x5c
    // Line 1833, Address: 0x273040, Func Offset: 0x60
    // Line 1832, Address: 0x27304c, Func Offset: 0x6c
    // Line 1837, Address: 0x273050, Func Offset: 0x70
    // Line 1838, Address: 0x273058, Func Offset: 0x78
    // Line 1832, Address: 0x27305c, Func Offset: 0x7c
    // Line 1833, Address: 0x273060, Func Offset: 0x80
    // Line 1839, Address: 0x273064, Func Offset: 0x84
    // Line 1833, Address: 0x273068, Func Offset: 0x88
    // Line 1835, Address: 0x273070, Func Offset: 0x90
    // Line 1836, Address: 0x273074, Func Offset: 0x94
    // Line 1837, Address: 0x273078, Func Offset: 0x98
    // Line 1839, Address: 0x27307c, Func Offset: 0x9c
    // Line 1840, Address: 0x273084, Func Offset: 0xa4
    // Line 1842, Address: 0x273098, Func Offset: 0xb8
    // Line 1843, Address: 0x2730a0, Func Offset: 0xc0
    // Func End, Address: 0x2730b8, Func Offset: 0xd8
}

//
// Start address: 0x2730c0
void DispUpDownCursol(float fx, float fy, unsigned int mode)
{
    NJS_COLOR col[4];
    NJS_POINT2 p[4];
    NJS_POINT2COL p2c;
    // Line 1862, Address: 0x2730c0, Func Offset: 0
    // Line 1869, Address: 0x2730c4, Func Offset: 0x4
    // Line 1862, Address: 0x2730c8, Func Offset: 0x8
    // Line 1869, Address: 0x2730cc, Func Offset: 0xc
    // Line 1870, Address: 0x2730d0, Func Offset: 0x10
    // Line 1872, Address: 0x2730d8, Func Offset: 0x18
    // Line 1871, Address: 0x2730dc, Func Offset: 0x1c
    // Line 1872, Address: 0x2730e0, Func Offset: 0x20
    // Line 1875, Address: 0x2730e4, Func Offset: 0x24
    // Line 1880, Address: 0x273118, Func Offset: 0x58
    // Line 1879, Address: 0x27311c, Func Offset: 0x5c
    // Line 1880, Address: 0x273120, Func Offset: 0x60
    // Line 1881, Address: 0x273124, Func Offset: 0x64
    // Line 1885, Address: 0x273130, Func Offset: 0x70
    // Line 1881, Address: 0x27313c, Func Offset: 0x7c
    // Line 1882, Address: 0x273144, Func Offset: 0x84
    // Line 1883, Address: 0x27314c, Func Offset: 0x8c
    // Line 1884, Address: 0x273158, Func Offset: 0x98
    // Line 1885, Address: 0x273160, Func Offset: 0xa0
    // Line 1886, Address: 0x27316c, Func Offset: 0xac
    // Line 1887, Address: 0x273174, Func Offset: 0xb4
    // Line 1891, Address: 0x27317c, Func Offset: 0xbc
    // Line 1892, Address: 0x273184, Func Offset: 0xc4
    // Line 1891, Address: 0x273188, Func Offset: 0xc8
    // Line 1896, Address: 0x27318c, Func Offset: 0xcc
    // Line 1891, Address: 0x273190, Func Offset: 0xd0
    // Line 1890, Address: 0x273194, Func Offset: 0xd4
    // Line 1891, Address: 0x273198, Func Offset: 0xd8
    // Line 1892, Address: 0x27319c, Func Offset: 0xdc
    // Line 1896, Address: 0x2731a4, Func Offset: 0xe4
    // Line 1892, Address: 0x2731ac, Func Offset: 0xec
    // Line 1893, Address: 0x2731b4, Func Offset: 0xf4
    // Line 1894, Address: 0x2731bc, Func Offset: 0xfc
    // Line 1895, Address: 0x2731c8, Func Offset: 0x108
    // Line 1896, Address: 0x2731d0, Func Offset: 0x110
    // Line 1897, Address: 0x2731dc, Func Offset: 0x11c
    // Line 1898, Address: 0x2731e4, Func Offset: 0x124
    // Line 1902, Address: 0x2731ec, Func Offset: 0x12c
    // Line 1901, Address: 0x2731f0, Func Offset: 0x130
    // Line 1902, Address: 0x2731f4, Func Offset: 0x134
    // Line 1903, Address: 0x2731f8, Func Offset: 0x138
    // Line 1908, Address: 0x273204, Func Offset: 0x144
    // Line 1903, Address: 0x273210, Func Offset: 0x150
    // Line 1904, Address: 0x273218, Func Offset: 0x158
    // Line 1905, Address: 0x273224, Func Offset: 0x164
    // Line 1906, Address: 0x273230, Func Offset: 0x170
    // Line 1907, Address: 0x27323c, Func Offset: 0x17c
    // Line 1908, Address: 0x273244, Func Offset: 0x184
    // Line 1909, Address: 0x27324c, Func Offset: 0x18c
    // Line 1913, Address: 0x273254, Func Offset: 0x194
    // Line 1914, Address: 0x27325c, Func Offset: 0x19c
    // Line 1913, Address: 0x273260, Func Offset: 0x1a0
    // Line 1919, Address: 0x273264, Func Offset: 0x1a4
    // Line 1913, Address: 0x273268, Func Offset: 0x1a8
    // Line 1912, Address: 0x27326c, Func Offset: 0x1ac
    // Line 1913, Address: 0x273270, Func Offset: 0x1b0
    // Line 1914, Address: 0x273274, Func Offset: 0x1b4
    // Line 1919, Address: 0x27327c, Func Offset: 0x1bc
    // Line 1914, Address: 0x273284, Func Offset: 0x1c4
    // Line 1915, Address: 0x27328c, Func Offset: 0x1cc
    // Line 1916, Address: 0x273298, Func Offset: 0x1d8
    // Line 1917, Address: 0x2732a4, Func Offset: 0x1e4
    // Line 1918, Address: 0x2732b0, Func Offset: 0x1f0
    // Line 1919, Address: 0x2732b8, Func Offset: 0x1f8
    // Line 1923, Address: 0x2732c4, Func Offset: 0x204
    // Line 1924, Address: 0x2732d0, Func Offset: 0x210
    // Line 1925, Address: 0x2732d4, Func Offset: 0x214
    // Line 1926, Address: 0x2732d8, Func Offset: 0x218
    // Line 1928, Address: 0x2732dc, Func Offset: 0x21c
    // Line 1929, Address: 0x2732f4, Func Offset: 0x234
    // Func End, Address: 0x273300, Func Offset: 0x240
}

//
// Start address: 0x273300
void DispBackGroundTexture()
{
    _anon37 twt[18];
    // Line 1943, Address: 0x273300, Func Offset: 0
    // Line 1948, Address: 0x27330c, Func Offset: 0xc
    // Line 1950, Address: 0x273320, Func Offset: 0x20
    // Line 1951, Address: 0x273328, Func Offset: 0x28
    // Line 1952, Address: 0x27332c, Func Offset: 0x2c
    // Line 1953, Address: 0x273330, Func Offset: 0x30
    // Line 1954, Address: 0x273338, Func Offset: 0x38
    // Line 1956, Address: 0x273340, Func Offset: 0x40
    // Line 1957, Address: 0x273344, Func Offset: 0x44
    // Line 1958, Address: 0x273348, Func Offset: 0x48
    // Line 1959, Address: 0x273350, Func Offset: 0x50
    // Line 1961, Address: 0x27335c, Func Offset: 0x5c
    // Line 1962, Address: 0x27336c, Func Offset: 0x6c
    // Line 1964, Address: 0x273380, Func Offset: 0x80
    // Line 1965, Address: 0x27338c, Func Offset: 0x8c
    // Line 1966, Address: 0x273390, Func Offset: 0x90
    // Line 1967, Address: 0x273398, Func Offset: 0x98
    // Line 1969, Address: 0x2733a0, Func Offset: 0xa0
    // Line 1971, Address: 0x2733a4, Func Offset: 0xa4
    // Line 1970, Address: 0x2733a8, Func Offset: 0xa8
    // Line 1971, Address: 0x2733ac, Func Offset: 0xac
    // Line 1972, Address: 0x2733b4, Func Offset: 0xb4
    // Line 1974, Address: 0x2733c0, Func Offset: 0xc0
    // Line 1975, Address: 0x2733d0, Func Offset: 0xd0
    // Line 1976, Address: 0x2733e4, Func Offset: 0xe4
    // Line 1978, Address: 0x2733ec, Func Offset: 0xec
    // Func End, Address: 0x2733fc, Func Offset: 0xfc
}

//
// Start address: 0x273400
void DispMemoryCardTexture(float fx, float fy, unsigned int type, unsigned int mode)
{
    _anon37 twt[18];
    // Line 1999, Address: 0x273400, Func Offset: 0
    // Line 2005, Address: 0x273418, Func Offset: 0x18
    // Line 2007, Address: 0x27343c, Func Offset: 0x3c
    // Line 2009, Address: 0x273448, Func Offset: 0x48
    // Line 2010, Address: 0x273450, Func Offset: 0x50
    // Line 2013, Address: 0x273458, Func Offset: 0x58
    // Line 2016, Address: 0x273464, Func Offset: 0x64
    // Line 2017, Address: 0x273468, Func Offset: 0x68
    // Line 2016, Address: 0x27346c, Func Offset: 0x6c
    // Line 2017, Address: 0x273470, Func Offset: 0x70
    // Line 2018, Address: 0x273474, Func Offset: 0x74
    // Line 2019, Address: 0x273480, Func Offset: 0x80
    // Line 2018, Address: 0x27348c, Func Offset: 0x8c
    // Line 2021, Address: 0x273490, Func Offset: 0x90
    // Line 2018, Address: 0x273494, Func Offset: 0x94
    // Line 2019, Address: 0x273498, Func Offset: 0x98
    // Line 2021, Address: 0x2734a0, Func Offset: 0xa0
    // Line 2023, Address: 0x2734a8, Func Offset: 0xa8
    // Line 2024, Address: 0x2734ac, Func Offset: 0xac
    // Line 2025, Address: 0x2734b0, Func Offset: 0xb0
    // Line 2026, Address: 0x2734b8, Func Offset: 0xb8
    // Line 2027, Address: 0x2734bc, Func Offset: 0xbc
    // Line 2030, Address: 0x2734c4, Func Offset: 0xc4
    // Line 2031, Address: 0x2734cc, Func Offset: 0xcc
    // Line 2032, Address: 0x2734d0, Func Offset: 0xd0
    // Line 2033, Address: 0x2734d8, Func Offset: 0xd8
    // Line 2036, Address: 0x2734e0, Func Offset: 0xe0
    // Line 2038, Address: 0x2734f0, Func Offset: 0xf0
    // Line 2040, Address: 0x273504, Func Offset: 0x104
    // Line 2042, Address: 0x27350c, Func Offset: 0x10c
    // Func End, Address: 0x273528, Func Offset: 0x128
}

//
// Start address: 0x273530
void mcDispWindowFoundtion(float fx, float fy, float fSizeW, float fSizeH, unsigned int Argb)
{
    NJS_POLYGON_VTX poly[4];
    // Line 2065, Address: 0x273530, Func Offset: 0
    // Line 2070, Address: 0x273538, Func Offset: 0x8
    // Line 2069, Address: 0x27353c, Func Offset: 0xc
    // Line 2068, Address: 0x273540, Func Offset: 0x10
    // Line 2069, Address: 0x273544, Func Offset: 0x14
    // Line 2070, Address: 0x273548, Func Offset: 0x18
    // Line 2071, Address: 0x273550, Func Offset: 0x20
    // Line 2072, Address: 0x273554, Func Offset: 0x24
    // Line 2084, Address: 0x273558, Func Offset: 0x28
    // Line 2072, Address: 0x273560, Func Offset: 0x30
    // Line 2073, Address: 0x273564, Func Offset: 0x34
    // Line 2074, Address: 0x273568, Func Offset: 0x38
    // Line 2075, Address: 0x27356c, Func Offset: 0x3c
    // Line 2076, Address: 0x273570, Func Offset: 0x40
    // Line 2077, Address: 0x273574, Func Offset: 0x44
    // Line 2078, Address: 0x27357c, Func Offset: 0x4c
    // Line 2079, Address: 0x273580, Func Offset: 0x50
    // Line 2080, Address: 0x273584, Func Offset: 0x54
    // Line 2081, Address: 0x273588, Func Offset: 0x58
    // Line 2082, Address: 0x27358c, Func Offset: 0x5c
    // Line 2083, Address: 0x273590, Func Offset: 0x60
    // Line 2084, Address: 0x273594, Func Offset: 0x64
    // Line 2085, Address: 0x27359c, Func Offset: 0x6c
    // Func End, Address: 0x2735a8, Func Offset: 0x78
}
