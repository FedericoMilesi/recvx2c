#include "types.h"

unsigned int KeyWaitFirst;
unsigned int KeyWaitNext;
ControllerButton ButtonInfo[5];
int SoftResetFlag;
int CurrentPortId;
Controller Pad[4];
int MaxContorolPlayer;
KeyRepeatInfo RepeatInfo[4][6];

void InitReadKeyEx(int MaxPlayer);
void SetRepeatKeyTimer(unsigned int FirstTimer, unsigned int NextTimer);
int CheckSoftResetKeyFlag(int ControllerId);
void ClearSoftResetKeyFlag(int ControllerId);








































/* 100% match */
void InitReadKeyEx(int MaxPlayer) {
    unsigned int i, j;

    for (i = 0; i < 4; i++)  { // Line 60, Address: 0x297e10
        RepeatInfo[i][0].Key = 0x8000; // Line 61, Address: 0x297e30
        RepeatInfo[i][1].Key = 0x2000; // Line 62, Address: 0x297e1c, 0x297e38
        RepeatInfo[i][2].Key = 0x1000; // Line 63, Address: 0x297e20, 0x297e3c
        RepeatInfo[i][3].Key = 0x4000; // Line 64, Address: 0x297e24, 0x297e40
        RepeatInfo[i][4].Key = 4; // Line 65, Address: 0x297e28, 0x297e44
        RepeatInfo[i][5].Key = 8; // Line 66, Address: 0x297e2c
        for (j = 0; j < 6; j++) { // Line 67, Address: 0x297e4c
            RepeatInfo[i][j].WaitFlag = 0; // Line 68, Address: 0x297e58
            RepeatInfo[i][j].WaitCnt = 0; // Line 69, Address: 0x297e60
        } // Line 70, Address: 0x297e5c, 0x297e68
        Pad[i].on2 = 0; // Line 71, Address: 0x297e74
        Pad[i].press2 = 0; // Line 72, Address: 0x297e78
        Pad[i].Calibrate = 64; // Line 73, Address: 0x297e14, 0x297e7c
        Pad[i].Flag = 1; // Line 74, Address: 0x297e18, 0x297e80
        Pad[i].SoftReset = 0; // Line 75, Address: 0x297e88
    }   // Line 76, Address: 0x297e84, 0x297e90

    MaxContorolPlayer = MaxPlayer; // Line 78, Address: 0x297e9c

    for (i = 0; i < MaxPlayer; i++) { // Line 80, Address: 0x297ea4
        Pad[i].Flag = 0; // Line 81, Address: 0x297ebc
    } // Line 82, Address: 0x297eb8, 0x297ec4

    CurrentPortId = 0; // Line 84, Address: 0x297ed8
    SoftResetFlag = 0; // Line 85, Address: 0x297ee0
} // Line 86, Address: 0x297ee4





































/* 100% match */
void SetRepeatKeyTimer(unsigned int FirstTimer, unsigned int NextTimer) {
    KeyWaitFirst = FirstTimer; // Line 126, Address: 0x297ef0
    KeyWaitNext = NextTimer; // Line 127, Address: 0x297ef8
} // Line 128, Address: 0x297efc


/* 100% match */
int CheckSoftResetKeyFlag(int ControllerId) {
    if (ControllerId < 0) return Pad[CurrentPortId].SoftReset; else return Pad[ControllerId].SoftReset; // Line 133, Address: 0x297f10



} // Line 137, Address: 0x297f60

/* 100% match */
void ClearSoftResetKeyFlag(int ControllerId) {
    int i;

    if (ControllerId < 0) { // Line 143, Address: 0x297f70
      i = 0; // Line 144, Address: 0x297f80
      do { Pad[i].SoftReset = 0; } // Line 145, Address: 0x297f88, 0x297f90
      while (++i < 4); // Line 146, Address: 0x297f84, 0x297f94
    } // Line 147, Address: 0x297fa0
    else Pad[ControllerId].SoftReset = 0; // Line 148, Address: 0x297fa8


    SoftResetFlag = 0; // Line 151, Address: 0x297fc4
} // Line 152, Address: 0x297fc8
