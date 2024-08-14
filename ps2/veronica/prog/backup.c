#include "types.h"

void(*BupInitCallback)();
Drive gBupInfo[8];

void BupInit();
void BupExit();
void ClearInfo(int drive);
int BupComplete(int drive, int op, int stat);
int BupProgress(int drive, int op, int count, int max);
void BupInitCallback();



/* Matching - 100% */
void BupInit() { // Line 16, Address: 0x2c9a60, 0x2c9a70
    memset(gBupInfo, 0, sizeof(gBupInfo)); // Line 17, Address: 0x2c9a64, 0x2c9a74
    buInit(122, 255, 0, &BupInitCallback); // Line 18, Address: 0x2c9a7c
} // Line 19, Address: 0x2c9a94


/* Matching - 100% */
void BupExit() { // Line 23, Address: 0x2c9aa0

    while (buExit() != 0); // Line 25, Address: 0x2c9aa8
} // Line 26, Address: 0x2c9ac8

















































































































































































/* Matching - 100% */
void ClearInfo(int drive) {
    Drive* info = &gBupInfo[drive]; // Line 206, Address: 0x2c9ae0
    info->ProgressCount = 0; // Line 207, Address: 0x2c9af8
    info->ProgressMax = 0; // Line 208, Address: 0x2c9afc
    info->Operation = 0; // Line 209, Address: 0x2c9b00
    info->Ready = 0; // Line 210, Address: 0x2c9b04
    info->IsFormat = 0; // Line 211, Address: 0x2c9b08
    info->Work = 0; // Line 212, Address: 0x2c9b14
    memset(&info->DiskInfo, 0, sizeof(info->DiskInfo)); // Line 213, Address: 0x2c9b0c, 0x2c9b18
}


/* Matching - 99.79% */
int BupComplete(int drive, int op, int stat) { // Line 218, Address: 0x2c9b28, 0x2c9b30, 0x2c9b40
    int ret;
    Drive* info;

    info = &gBupInfo[drive]; // Line 222, Address: 0x2c9b20, 0x2c9b38, 0x2c9b44

    switch (op) { // Line 224, Address: 0x2c9b48

        case 18:
            info->Connect = drive * 96; // Line 227, Address: 0x2c9b94
            info->WorkSize = stat * 512 + 32; // Line 228, Address: 0x2c9b8c, 0x2c9b98

            info->Capacity = stat; // Line 230, Address: 0x2c9b9c
            break;
        case 1:
            if (stat != 0) break; // Line 233, Address: 0x2c9ba4

            info->Ready = 1; // Line 235, Address: 0x2c9bac
            if (buGetDiskInfo(drive, &info->DiskInfo) == 0) { // Line 236, Address: 0x2c9bb8
                info->IsFormat = 1; // Line 237, Address: 0x2c9bc0
            }



            info->LastError = 0; // Line 242, Address: 0x2c9bc8
            break;
        case 2:
            if (info->Work != 0) { // Line 245, Address: 0x2c9bd0
                if (info->MemMode == 0) { // Line 246, Address: 0x2c9bdc
                    syFree(info->Work); // Line 247, Address: 0x2c9be8
                }
            }
            ClearInfo(drive); // Line 250, Address: 0x2c9bf0

            info->Connect = 0; // Line 252, Address: 0x2c9bfc
            break;
        case 12:
            info->LastError = stat; // Line 255, Address: 0x2c9c04
            break;
        case 11:
            info->LastError = stat; // Line 258, Address: 0x2c9c0c
            break;
        default:



            info->LastError = stat; buGetDiskInfo(drive, &info->DiskInfo); // Line 264, Address: 0x2c9c14
            break;
    }

    info->Operation = 0; // Line 268, Address: 0x2c9c20

    return ret = 0; // Line 270, Address: 0x2c9c30
} // Line 271, Address: 0x2c9c24, 0x2c9c34




/* Matching - 100% */
int BupProgress(int drive, int op, int count, int max) {
    Drive* info = &gBupInfo[drive]; // Line 278, Address: 0x2c9c40


    info->ProgressCount = count; // Line 281, Address: 0x2c9c58
    info->ProgressMax = max; // Line 282, Address: 0x2c9c5c
    info->Operation = op; // Line 283, Address: 0x2c9c60


    return 0; // Line 286, Address: 0x2c9c64
}

/* Matching - 100% */
void BupInitCallback() { // Line 290, Address: 0x2c9c70, 0x2c9c78



  buSetCompleteCallback(BupComplete); // Line 294, Address: 0x2c9c74, 0x2c9c7c
  buSetProgressCallback(BupProgress); // Line 295, Address: 0x2c9c84
} // Line 296, Address: 0x2c9c90
