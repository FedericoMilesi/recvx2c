#include "sg_gd.h"
#include "types.h"

typedef struct GDS_FS_DIRREC_TBL GDS_FS_DIRREC_TBL;
typedef struct GDS_FS_HANDLE GDS_FS_HANDLE;
typedef struct GDS_FS_DIRINFO GDS_FS_DIRINFO;

unsigned int MaxDirectoryEntry;
unsigned int DiscOpenTrayFlag;
unsigned int NewDiscCheckSw;
unsigned int GdErrorFlag;
LfOpen LfOpenInfo[14];
GDS_FS_DIRREC_TBL* GdDirRec;
// void(*CallbackGdErrorFunc)(void*, int);
unsigned char* pDirTbl;
unsigned char* pDirWork;
unsigned int RequestMultiReadFlag;
unsigned int RequestReadBufferFlag;
unsigned int RequestReadFlag;
GDS_FS_HANDLE* CurrentGdFs;
GDS_FS_HANDLE* CurrentGdFsBuf;
unsigned int StatusUpdateCounter;
GDS_FS_HANDLE* LfGdFs;

void LfInitLib();
void CallbackGdErrorFunc(int unused, int err);
unsigned int InitGdSystem();
unsigned int InitGdSystemEx(unsigned int MaxDirNum);
void ExitGdSystem();
int GetFileSize(char* FileName);
int ReadFileEx(char* FileName, void* ReadAddress);
unsigned int CheckOpenTray();















/* 100% match */
void LfInitLib() {
    unsigned int i;
    for (i = 0; i < 14; ++i) { // Line 51, Address: 0x28e9a8
      LfOpenInfo[i].Flag = 0; // Line 52, Address: 0x28e9b0
    } // Line 53, Address: 0x28e9ac, 0x28e9b8
} // Line 54, Address: 0x28e9c8










































































/* 100% match */
void CallbackGdErrorFunc(int unused, int err) {
    if (err == -23 || err == -33) { // Line 131, Address: 0x28e9d0
        GdErrorFlag = 1; // Line 132, Address: 0x28e9e8
    }
} // Line 134, Address: 0x28e9f4

/* 100% match */
unsigned int InitGdSystem() { // Line 137, Address: 0x28ea00
    int GdErrorCode;
    unsigned int i;

    pDirWork = syMalloc(5484); // Line 141, Address: 0x28ea08
    pDirTbl = syMalloc(MaxDirectoryEntry * 22 + 16); // Line 142, Address: 0x28ea1c

    RequestReadFlag = 0; // Line 144, Address: 0x28ea48
    RequestReadBufferFlag = 0; // Line 145, Address: 0x28ea50
    RequestMultiReadFlag = 0; // Line 146, Address: 0x28ea58

    LfInitLib(); // Line 148, Address: 0x28ea5c

    for (i = 0; i < 128; ++i) { // Line 150, Address: 0x28ea64
        GdErrorCode = gdFsInit(14, pDirWork, MaxDirectoryEntry, pDirTbl); // Line 151, Address: 0x28ea68

        if (GdErrorCode == -23 || GdErrorCode == -33) return 1; // Line 153, Address: 0x28ea88


        if (GdErrorCode == 0) { // Line 156, Address: 0x28eaa0
            GdDirRec = gdFsCreateDirhn(pDirTbl, MaxDirectoryEntry); // Line 157, Address: 0x28eaa8
            gdFsLoadDir("\\", GdDirRec); // Line 158, Address: 0x28eac4
            gdFsSetDir(GdDirRec); // Line 159, Address: 0x28ead8

            gdFsEntryErrFuncAll((GDFS_ERRFUNC)CallbackGdErrorFunc, 0); // Line 161, Address: 0x28eae4

            return 0; // Line 163, Address: 0x28eaf4
        }
    } // Line 165, Address: 0x28eafc

    return 1; // Line 167, Address: 0x28eb10
} // Line 168, Address: 0x28eb14

/* 100% match */
unsigned int InitGdSystemEx(unsigned int MaxDirNum) {
    MaxDirectoryEntry = MaxDirNum; // Line 172, Address: 0x28eb30, Func Offset: 0
    InitGdSystem(); // Line 173, Address: 0x28eb34, Func Offset: 0x4
}

/* 100% match */
void ExitGdSystem() { // Line 177, Address: 0x28eb40
    syFree(pDirTbl); // Line 178, Address: 0x28eb48
    syFree(pDirWork); // Line 179, Address: 0x28eb54

    gdFsFinish(); // Line 181, Address: 0x28eb60
} // Line 182, Address: 0x28eb68






/* 100% match */
int GetFileSize(char* FileName) { // Line 190, Address: 0x28eb80
    GDS_FS_DIRINFO DirInfo;


    if (gdFsGetDirInfo(FileName, &DirInfo) != 0) return 0; else return DirInfo.fsize; // Line 194, Address: 0x28eb88



} // Line 198, Address: 0x28eba4

/* 100% match */
int ReadFileEx(char* FileName, void* ReadAddress) { // Line 201, Address: 0x28ebb0
    int FileSize;
    GDS_FS_HANDLE* GdFs;


    if (DiscOpenTrayFlag == -1) { // Line 206, Address: 0x28ebc0
        return 1; // Line 207, Address: 0x28ebd4
    }

    if ((GdFs = gdFsOpen(FileName, GdDirRec)) == 0) { // Line 210, Address: 0x28ebdc
        return 1; // Line 211, Address: 0x28ebf0
    }

    gdFsGetFileSize(GdFs, &FileSize); // Line 214, Address: 0x28ebf8

    if (gdFsRead(GdFs, (FileSize + 2047) >> 11, ReadAddress) != 0) { // Line 216, Address: 0x28ec04
        return 1; // Line 217, Address: 0x28ec24
    }

    gdFsClose(GdFs); // Line 220, Address: 0x28ec2c

    return 0; // Line 222, Address: 0x28ec38
} // Line 223, Address: 0x28ec3c






















































































































































/* 100% match */
unsigned int CheckOpenTray() { // Line 375, Address: 0x28ec50
    int Stat;

    Stat = gdFsGetDrvStat(); // Line 378, Address: 0x28ec58

    if (Stat == 6 || Stat == 9) { // Line 380, Address: 0x28ec60
        DiscOpenTrayFlag = -1; // Line 381, Address: 0x28ec78
        return -1; // Line 382, Address: 0x28ec80
    }


    --StatusUpdateCounter; // Line 386, Address: 0x28ec88
    if (!(StatusUpdateCounter & 0x1F)) { // Line 387, Address: 0x28ec9c
        gdFsReqDrvStat(); // Line 388, Address: 0x28ecb0
    }













    DiscOpenTrayFlag = 0; // Line 403, Address: 0x28ecb8
    return 0; // Line 404, Address: 0x28ecc0
} // Line 405, Address: 0x28ecc4
