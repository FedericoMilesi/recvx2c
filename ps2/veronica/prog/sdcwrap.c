#include "types.h"

int GdDaPlayFlag;
unsigned int SddFirstFlag;
char SdcGdDaVolume;

void InitSdcParameter();
int InitSoundDriver(char* SddFileName, char* MufFileName);













/* 100% match */
void InitSdcParameter() { // Line 23, Address: 0x290810
    SetSoundMode(GetSoundMode()); // Line 24, Address: 0x290818
    
    SetMasterVolume(15); // Line 26, Address: 0x290828
    SetGdDaVolume(127); // Line 27, Address: 0x290830
    SetMidiDefaultVolume(0); // Line 28, Address: 0x290838
    SetSeDefaultVolume(0); // Line 29, Address: 0x290840
    
    InitMidiInfo(); // Line 31, Address: 0x290848
    InitSeInfo(); // Line 32, Address: 0x290850
    
    SddFirstFlag = 1; // Line 34, Address: 0x290858
} // Line 35, Address: 0x290864












/* 100% match */
int InitSoundDriver(char* SddFileName, char* MufFileName) { // Line 49, Address: 0x290870
    unsigned int* Address;
    int FileSize;

    FileSize = GetFileSize(SddFileName); // Line 53, Address: 0x29088c
    Address = syMalloc(FileSize); // Line 54, Address: 0x290898
    QuickGetDiscTrayStatus(); // Line 55, Address: 0x2908a0
    if (ReadFileEx(SddFileName, Address) != 0) { // Line 56, Address: 0x2908a8
        ExitApplication(); // Line 57, Address: 0x2908bc
    }
    SetupSoundDriver(Address, FileSize); // Line 59, Address: 0x2908c4
    syFree(Address); // Line 60, Address: 0x2908d0
    
    if (MufFileName != NULL) { // Line 62, Address: 0x2908d8
        FileSize = GetFileSize(MufFileName); // Line 63, Address: 0x2908e0
        Address = syMalloc(FileSize); // Line 64, Address: 0x2908ec
        QuickGetDiscTrayStatus(); // Line 65, Address: 0x2908f4
        if (ReadFileEx(MufFileName, Address) != 0) { // Line 66, Address: 0x2908fc
            ExitApplication(); // Line 67, Address: 0x290910
        }
        SetMultiUnit(Address, FileSize); // Line 69, Address: 0x290918
        syFree(Address); // Line 70, Address: 0x290924
    }
    
    InitSdcParameter(); // Line 73, Address: 0x29092c
    
    return 0; // Line 75, Address: 0x290948
} // Line 76, Address: 0x290934, 0x29094c