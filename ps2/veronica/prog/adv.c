#include "adv.h"

#include "types.h"
#include "ps2_SystemLoadScreen.h"
#include "ps2_SystemSaveScreen.h"
#include "sysload_screen.h"
#include "syssave_screen.h"

unsigned char SaveLoadMessage[10956];
OPTION_DEFINTION OptionDef[7];
int AdvFirstInitFlag;
NJS_TEXLIST AdvTexList[2];
int PatId[0];
ADV_WORK AdvWork;
extern SYS* sys;
NJS_TEXMEMLIST tbuf[0];
extern ROOM* rom;
extern unsigned int palbuf[4096];
extern Controller Pad[4];
NJS_TEXMEMLIST* Ps2_current_texmemlist;
NJS_QUAD_TEXTURE Qtex[16];
NJS_TEXINFO AdvTexInfo[8][2];
NJS_TEXNAME AdvTexName[8][2];
char AdvTexPalBank[8][2];
extern int CurrentPortId;
extern unsigned char FontSz[126];
extern float FontScaleCR;
extern float FontScaleX;
ADV_MESSAGE_DEFINITION AdvVmMsgDef[21];

SYSLOAD_SCREEN* pSysLoad;
SYSLOAD_SCREEN SysLoad;
SYSSAVE_SCREEN* pSysSave;
SYSSAVE_SCREEN SysSave;

float ColorBarSizeY;
float RedLinePosY;
unsigned int ColorBarBright;
extern Sint8* vwbmemp;

void CallPlayerDeadVoice(int PlayerNo);
void CallSystemVoice(int VoiceNo);
float GetSamurai(int Time);
void InitAdvSystem();
void ResetAdvSystem();
void MountAdvAfs();
unsigned char* AdvGetResourcePtr(unsigned char* bp, unsigned int ResId);
void AdvSetSoundMode();
void AdvCheckSoftReset(int Flag);
void AdvPushRoomTexture();
void AdvPopRoomTexture();
void AdvPushPaletteData();
void AdvPopPaletteData();
void RequestAdvInsideFileEx(int InsideFileId, int MemoryBlockNo);
void RequestAdvInsideFile(int InsideFileId);
void FreeAdvMemoryEx(int MemoryBlockNo);
void AllFreeAdvMemory();
int CheckReadEndAdvInsideFile();
void CheckReadEndAdvInsideFile2Ex(int NextMode, int Flag);
void CheckReadEndAdvInsideFile2(int NextMode);
void RequestAdvFade(int FadeType, float FadeSpeed);
int CheckAdvFade();
void AdvDrawFadePolygon(int Type, float Rate, unsigned int BaseColor);
void ExecuteAdvFadeEx(int Type);
void ExecuteAdvFade();
void StopAdvScreenSaver(int Flag);
void ExecuteAdvScreenSaver();
void CheckAdvScreenSaverStopKey(int PortId);
unsigned int AdvGetOkButton();
unsigned int AdvGetCancelButton();
void SetPvrInfo(NJS_TEXNAME* np, NJS_TEXINFO* ip, unsigned char* pp);
int TransPvpData(unsigned char* pp, int Mode);
void AdvTransShadowPalette();
void AdvEasyDrawWindow(NJS_POINT3* tlp, NJS_POINT3* brp, unsigned int WindowColor, unsigned int BackColor);
void AdvEasyDrawTexture(int TexNo, unsigned int BaseColor, NJS_QUAD_TEXTURE* qp, float PosZ, int TransFlag);
void AdvEasyDrawTextureS(int TexNo, unsigned int BaseColor, NJS_QUAD_TEXTURE* qp, float PosZ, int TransFlag, unsigned int ShadowAlpha);
void SetQuadPos(float StartX, float StartY, float SizeX, float SizeY, NJS_QUAD_TEXTURE* qp);
void SetQuadUv2Ex(float u, float v, float SizeX, float SizeY, unsigned int ListNo, unsigned int TexNo, NJS_QUAD_TEXTURE* qp);
void SetQuadUv2(float u, float v, float SizeX, float SizeY, unsigned int TexNo, NJS_QUAD_TEXTURE* qp);
void AdvDwawOnePictureEx(int TexNo, unsigned int BaseColor);
void AdvDwawOnePicture(int TexNo);
void AdvEasySetupTextureBasic(unsigned char* xp, int ListNo, int TexNo);
void AdvEasySetupTextureEx(int ListNo);
void AdvEasySetupTexture();
void AdvEasySetTextureList(int ListNo);
void AdvEasyTransTextureBasic(int ListNo, int TexNum, int Flag);
void AdvEasyTransTextureEx(int ListNo);
void AdvEasyTransTexture();
void AdvEasyReleaseTextureEx(int ListNo);
void AdvEasyReleaseTexture();
void AdvEasyReleaseAllTexture();
int AdvGetCurrentPort();
int CheckConnectVmDrive(int parameter /* UNUSED */, int SlotNo);
int FindFirstVmDrive();
float AdvEasyDispMessage(float PosX, float PosY, unsigned int MessageNo);
float AutoSaveLoadEasyDispMessage(float PosX, float PosY, unsigned char* ucpMsbTop, unsigned int MessageNo);
int DispVmWarningMessage(int MsgId);
void DefaultSetOption();
int Adv_FirstWarningMessage();
int Adv_CapcomLogo();
void ResetFlushPlate();
void FlushPlate();
void DisplayTitleBg();
void DisplayPressStartPlate(float FadeRate);
void DisplayGameModePlate(int Cursor, int CursorMax, float FadeRate, int Flag);
void DisplayNewGamePlate(int Cursor, float FadeRate, int Flag);
void DisplayExtraGamePlate(int Cursor, float FadeRate, int Flag);
void FadeInPlate(int NextMode);
void FadeOutPlate();
void TitleCall(int PortId, int ReturnCode);
int CheckButton(int Level, int Flag, int MaxFlag);
int CheckStartButton();
int Adv_BioCvTitle(); // Meaning: Biohazard Code Veronica Title
void ResetOptionMenuParam(int Mode);
void DisplayOptionScrollPlate(float PosX, float PosY);
void DisplayOptionBg(int Level, int Flag);
int DisplayOptionPlateLevel0(int PortId, int Flag);
int DisplayOptionPlateLevel1(int PortId, int Flag);
int DisplayOptionPlateLevel2(int PortId, int Flag);
int DisplayOptionPlateLevel3(int PortId, int Flag);
int DisplayOptionPlate(int PortId, int Level, int Flag);
int Adv_GameOptionScreen();
int Adv_ChangeDiscScreen();
int Adv_SoundMuseum();




























































































/* 100% match */
void CallPlayerDeadVoice(int PlayerNo) { // Line 211, Address: 0x2c0d40
    PlayBgmEx2(PatId[3], PlayerNo + 8, 1, -45);
}








/* 100% match */
void CallSystemVoice(int VoiceNo) { // Line 223, Address: 0x2c0d60
    PlayVoiceEx2(PatId[3], VoiceNo + 16, 0, 1, 0, 0);
}






/* 100% match */
float GetSamurai(int Time) {
    return 1.0f / (((Time / 100) * 30) + (((Time % 100) * 6) / 10)); // Line 234, Address: 0x2c0d80
} // Line 235, Address: 0x2c0e04








/* 100% match */
void InitAdvSystem() { // Line 245, Address: 0x2c0e10
    ADV_WORK* ap = &AdvWork; // Line 246, Address: 0x2c0e1c

    if (AdvFirstInitFlag == 0) { // Line 248, Address: 0x2c0e24
        memset(&AdvWork, 0, sizeof(ADV_WORK)); // Line 249, Address: 0x2c0e34
        ap->PatId = -1; // Line 250, Address: 0x2c0e48
        ap->Active = 0; // Line 251, Address: 0x2c0e54
        AdvFirstInitFlag = 1; // Line 252, Address: 0x2c0e50, 0x2c0e58
    }

    MountAdvAfs(); // Line 255, Address: 0x2c0e60
} // Line 256, Address: 0x2c0e68








/* 100% match */
void ResetAdvSystem() { // Line 266, Address: 0x2c0e80
	ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 267, Address: 0x2c0e8c
    int i;

    if (ap->Active != 0) // Line 270, Address: 0x2c0e94
        ExitApplication(); // Line 271, Address: 0x2c0ea0

    ap->Active = 1; // Line 273, Address: 0x2c0ea8

    njSetBackColor(0, 0, 0); // Line 275, Address: 0x2c0eb0
    njFogDisable(); // Line 276, Address: 0x2c0ec0

    for (i = 0; i < 8; i++) { // Line 278, Address: 0x2c0ec8
        ap->ptr[i] = NULL; // Line 279, Address: 0x2c0ed4, 0x2c0edc
    } // Line 280, Address: 0x2c0ed0, 0x2c0ed8, 0x2c0ee0
    for (i = 0; i < 2; i++) { // Line 281, Address: 0x2c0eec
        ap->SetTexture[i] = 0; // Line 282, Address: 0x2c0ef0, 0x2c0ef8
    } // Line 283, Address: 0x2c0ef4, 0x2c0efc
    for (i = 0; i < 7; i++) { // Line 284, Address: 0x2c0f0c
        ap->KeyCommandCount[i] = 0; // Line 285, Address: 0x2c0f10, 0x2c0f18
    } // Line 286, Address: 0x2c0f14, 0x2c0f1c

    ap->NextReturnCode = 0; // Line 288, Address: 0x2c0f2c
    ap->Count = 0; // Line 289, Address: 0x2c0f30
    ap->OptIndex = 0; // Line 290, Address: 0x2c0f34
    ap->ErrorId = 0; // Line 291, Address: 0x2c0f38
    ap->ErrorMsgFlushCount = 0; // Line 292, Address: 0x2c0f3c

    ap->ExtraFlag = 0; // Line 294, Address: 0x2c0f40
    ap->Mode2 = 0; // Line 295, Address: 0x2c0f44
    ap->NextMode = 0; // Line 296, Address: 0x2c0f48
    ap->DepthLevel = 0; // Line 297, Address: 0x2c0f4c
    ap->GenFlag = 0; // Line 298, Address: 0x2c0f50
    ap->OptFadeType = 0; // Line 299, Address: 0x2c0f54
    ap->PalNo = 0; // Line 300, Address: 0x2c0f5c
    ap->PalFlag = 1; // Line 301, Address: 0x2c0f58, 0x2c0f60
    ap->TexFlag = 0; // Line 302, Address: 0x2c0f64
    ap->SrFlag = 0; // Line 303, Address: 0x2c0f6c
    ap->SoundMode = -1; // Line 304, Address: 0x2c0f68, 0x2c0f70
    ap->OptSaveFlag = 0; // Line 305, Address: 0x2c0f74
    ap->vMode = 0; // Line 306, Address: 0x2c0f78
    ap->DriveNo = 0; // Line 307, Address: 0x2c0f7c
    ap->OldVmOpMode = 0; // Line 308, Address: 0x2c0f80
    ap->VmOpMode = 0;



































    StopAdvScreenSaver(1); // Line 345, Address: 0x2c0f84
} // Line 346, Address: 0x2c0f8c












/* 100% match */
void MountAdvAfs() { // Line 360, Address: 0x2c0fa0
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // not originally outputted by dwarf2cpp
    temp->PatId = PatId[3]; // Line 362, Address: 0x2c0fb0
}
























/* 100% match */
unsigned char* AdvGetResourcePtr(unsigned char* bp, unsigned int ResId) { // Line 389, Address: 0x2c0fc0
    return &bp[((int *)bp)[ResId]]; // Line 390, Address: 0x2c0fcc
}






/* 100% match */
void AdvSetSoundMode() { // Line 399, Address: 0x2c0fe0
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 400, Address: 0x2c0fec

    if (ap->SoundMode >= 0) { // Line 402, Address: 0x2c0ff4
        syCfgSetSoundMode(ap->SoundMode); // Line 403, Address: 0x2c1000
        ap->SoundMode = -1; // Line 404, Address: 0x2c1008
    }
} // Line 406, Address: 0x2c1010







/* 100% match */
void AdvCheckSoftReset(int Flag) { // Line 415, Address: 0x2c1020
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 416, Address: 0x2c1030

    if ((ap->SrFlag == 0) && (!(sys->ss_flg & 0x20000)) && (CheckSoftResetKeyFlag(-1) != 0)) { // Line 418, Address: 0x2c1038
        if (Flag == 0) { // Line 419, Address: 0x2c1044
            ap->Mode = -1; // Line 420, Address: 0x2c1060
        } else { // Line 421, Address: 0x2c1070
            ap->Mode2 = -1; // Line 422, Address: 0x2c1078
        } // Line 423, Address: 0x2c107c
        AdvSetSoundMode(); // Line 424, Address: 0x2c1084

    } // Line 426, Address: 0x2c108c



} // Line 430, Address: 0x2c1094







/* 100% match */
void AdvPushRoomTexture() { // Line 439, Address: 0x2c10b0
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 440, Address: 0x2c10bc

    ap->TexFlag = 0; // Line 442, Address: 0x2c10c4

    if (rom->mdl.texP != NULL) { // Line 444, Address: 0x2c10c8
        ap->SysMemPtr = sys->memp; // Line 445, Address: 0x2c10dc
        sys->memp = (unsigned char*)bhCopyTexmem2MainmemSub(rom->mdl.texP, (char*)sys->memp); // Line 446, Address: 0x2c10f4
        njReleaseTexture(rom->mdl.texP); // Line 447, Address: 0x2c112c
        bhGarbageTexture(&tbuf, 256); // Line 448, Address: 0x2c113c
        ap->TexFlag = 1; // Line 449, Address: 0x2c114c
    }

} // Line 452, Address: 0x2c1154







/* 100% match */
void AdvPopRoomTexture() { // Line 461, Address: 0x2c1170
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 462, Address: 0x2c117c

    if (ap->TexFlag != 0) { // Line 464, Address: 0x2c1184
        if (rom->mdl.texP != NULL) { // Line 465, Address: 0x2c1190
            bhCopyMainmem2Texmem(rom->mdl.texP); // Line 466, Address: 0x2c11a4
            sys->memp = ap->SysMemPtr; // Line 467, Address: 0x2c11ac
        }
    }
    ap->TexFlag = 0; // Line 470, Address: 0x2c11c4
} // Line 471, Address: 0x2c11c8







/* 100% match */
void AdvPushPaletteData() { // Line 480, Address: 0x2c11e8, 0x2c11f4


    // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 484, Address: 0x2c11e0, 0x2c11ec, 0x2c11f8
    njMemCopy4(&palbuf[3072], &palbuf, 1024); // Line 485, Address: 0x2c1200
    temp->PalMode = njGetPaletteMode(); // Line 486, Address: 0x2c1214
}





/* 100% match */
void AdvPopPaletteData() { // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 495, Address: 0x2c1220, 0x2c122c


    njSetPaletteMode(temp->PalMode); // Line 498, Address: 0x2c1224, 0x2c1230

    njMemCopy4(&palbuf, &palbuf[3072], 1024); // Line 500, Address: 0x2c1238
    sys->gm_flg |= 0x4; // Line 501, Address: 0x2c1250, 0x2c1260

    if ((sys->st_flg & 0x2)) { // Line 503, Address: 0x2c125c, 0x2c1268
        njFogEnable(); // Line 504, Address: 0x2c127c
    }
    sys->gm_flg |= 0x8000; // Line 506, Address: 0x2c1284
} // Line 507, Address: 0x2c1298








/* 100% match */
void RequestAdvInsideFileEx(int InsideFileId, int MemoryBlockNo) { // Line 517, Address: 0x2c12b0
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 518, Address: 0x2c12c4

    ap->ptr[MemoryBlockNo] = bhGetFreeMemory(GetInsideFileSize(ap->PatId, InsideFileId), 32); // Line 520, Address: 0x2c12d0
    RequestReadInsideFile(ap->PatId, InsideFileId, (void*)ap->ptr[MemoryBlockNo]); // Line 521, Address: 0x2c12f8
} // Line 522, Address: 0x2c1308








/* 100% match */
void RequestAdvInsideFile(int InsideFileId) { // Line 532, Address: 0x2c1320
    RequestAdvInsideFileEx(InsideFileId, 0);
}





/* 100% match */
void FreeAdvMemoryEx(int MemoryBlockNo) { // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 542, Address: 0x2c1338, 0x2c1340, 0x2c1348


    if (temp->ptr[MemoryBlockNo] != NULL) { // Line 545, Address: 0x2c1330, 0x2c133c, 0x2c1344, 0x2c134c
        bhReleaseFreeMemory(temp->ptr[MemoryBlockNo]); // Line 546, Address: 0x2c1358
        temp->ptr[MemoryBlockNo] = NULL; // Line 547, Address: 0x2c1360
    }
} // Line 549, Address: 0x2c1364







/* 100% match */
void AllFreeAdvMemory() { // Line 558, Address: 0x2c1380
    int i;

    for (i = 7; i >= 0; i--) { // Line 561, Address: 0x2c138c
        FreeAdvMemoryEx(i); // Line 562, Address: 0x2c1390
    } // Line 563, Address: 0x2c1398
} // Line 564, Address: 0x2c13ac









/* 100% match */
int CheckReadEndAdvInsideFile() { // Line 575, Address: 0x2c13c0
    int ReturnCode;


    ReturnCode = GetReadFileStatus(); // Line 579, Address: 0x2c13c8

    if (ReturnCode == -1) { // Line 581, Address: 0x2c13d4
        AllFreeAdvMemory(); // Line 582, Address: 0x2c13e0
    }

    return ReturnCode; // Line 585, Address: 0x2c13e8
} // Line 586, Address: 0x2c13ec








/* 100% match */
void CheckReadEndAdvInsideFile2Ex(int NextMode, int Flag) { // Line 596, Address: 0x2c1400
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 597, Address: 0x2c1414

    switch (CheckReadEndAdvInsideFile()) { // Line 599, Address: 0x2c1420
    case -1:
        if (Flag == 0) { // Line 601, Address: 0x2c1450
            ap->Mode = -1;
        } else { // Line 603, Address: 0x2c1458
            ap->Mode2 = -1;
        }
        break; // Line 606, Address: 0x2c1460
    case 0:
        if (Flag == 0) { // Line 608, Address: 0x2c1468
            ap->Mode = NextMode;
        } else { // Line 610, Address: 0x2c1470
            ap->Mode2 = NextMode; // Line 611, Address: 0x2c1478
        }
        break;
    case 1:
        break;
    } // Line 616, Address: 0x2c147c
}







/* 100% match */
void CheckReadEndAdvInsideFile2(int NextMode) { // Line 626, Address: 0x2c14a0
    CheckReadEndAdvInsideFile2Ex(NextMode, 0);
}










/* 100% match */
void RequestAdvFade(int FadeType, float FadeSpeed) {
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 641, Address: 0x2c14b0

    ap->FadeType = FadeType; // Line 643, Address: 0x2c14bc


    ap->FadeSpeed = FadeSpeed; // Line 646, Address: 0x2c14b8, 0x2c14c0


    switch (FadeType) { // Line 649, Address: 0x2c14e8
    case 1:
        ap->FadeType = 0; // Line 651, Address: 0x2c14f0
        break; // Line 652, Address: 0x2c14f4
    case 2:
        ap->FadeRate = 1.0f; // Line 654, Address: 0x2c14fc
        break;
    case 3:
        ap->FadeRate = 0; // Line 657, Address: 0x2c1500
        break;
    }
}







/* 100% match */
int CheckAdvFade() { // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 670, Address: 0x2c1510
    return temp->FadeType; // Line 671, Address: 0x2c1518
}












/* 98.40% match */
void AdvDrawFadePolygon(int Type, float Rate, unsigned int BaseColor) { // Line 686, Address: 0x2c1520
	NJS_POLYGON_VTX poly[4];
    float PosZ[4] = { // Line 688, Address: 0x2c152c
        0.98f,
        0.90f,
        1.99f,
        1.98f
    };



    BaseColor |= ((unsigned int)(255.0f * Rate) & 0xFF) << 24; // Line 697, Address: 0x2c1548

    poly[0].x = -2.0f; // Line 699, Address: 0x2c156c
    poly[0].y = -2.0f; // Line 700, Address: 0x2c157c
    poly[1].x = -2.0f; // Line 701, Address: 0x2c1584
    poly[1].y = 482.0f; // Line 702, Address: 0x2c1588
    poly[2].x = 642.0f; // Line 703, Address: 0x2c1580
    poly[2].y = -2.0f; // Line 704, Address: 0x2c1598
    poly[3].x = 642.0f; // Line 705, Address: 0x2c159c
    poly[3].y = 482.0f; // Line 706, Address: 0x2c15a0
    poly[0].z = poly[1].z = poly[2].z = poly[3].z = PosZ[Type]; // Line 707, Address: 0x2c155c
    poly[0].col = poly[1].col = poly[2].col = poly[3].col = BaseColor; // Line 708, Address: 0x2c15b4
    njDrawPolygon(poly, 4, 1); // Line 709, Address: 0x2c15c0
} // Line 710, Address: 0x2c15d4







/* 100% match */
void ExecuteAdvFadeEx(int Type) { // Line 719, Address: 0x2c15f0, 0x2c15fc
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 720, Address: 0x2c15f4

    switch (ap->FadeType) { // Line 722, Address: 0x2c1600




    case 2:
        ap->FadeRate -= ap->FadeSpeed; // Line 728, Address: 0x2c1624, 0x2c1634
        if (ap->FadeRate <= 0) { // Line 729, Address: 0x2c162c, 0x2c1638
            ap->FadeRate = 0; // Line 730, Address: 0x2c1648
            ap->FadeType = 0; // Line 731, Address: 0x2c164c
        }

        AdvDrawFadePolygon(Type, ap->FadeRate, 0); // Line 734, Address: 0x2c1650
        break; // Line 735, Address: 0x2c165c




    case 3:
        ap->FadeRate += ap->FadeSpeed; // Line 741, Address: 0x2c1664, 0x2c1678
        if (ap->FadeRate >= 1.0f) { // Line 742, Address: 0x2c166c, 0x2c167c
            ap->FadeRate = 1.0f; // Line 743, Address: 0x2c168c
            ap->FadeType = 0; // Line 744, Address: 0x2c1690
        }

        AdvDrawFadePolygon(Type, ap->FadeRate, 0); // Line 747, Address: 0x2c1694
        break;
    }
} // Line 750, Address: 0x2c16a0








/* 100% match */
void ExecuteAdvFade() { // Line 760, Address: 0x2c16b0
    ExecuteAdvFadeEx(0);
}








/* 100% match */
void StopAdvScreenSaver(int Flag) {
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 773, Address: 0x2c16c0

    ap->SaverTimer = 9000.0f; // Line 775, Address: 0x2c16c8

    ap->SaverCommand = 0; // Line 777, Address: 0x2c16d4
    if (Flag != 0) { // Line 778, Address: 0x2c16dc
        ap->SaverRate = 0;
    } // Line 780, Address: 0x2c16e0
}







/* 100% match */
void ExecuteAdvScreenSaver() { // Line 790, Address: 0x2c16f0

    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 792, Address: 0x2c16f8
    if (ap->SaverCommand == 0) { // Line 793, Address: 0x2c1704, 0x2c1718
        ap->SaverTimer -= 1.0f; // Line 794, Address: 0x2c1710, 0x2c171c
        if (ap->SaverTimer < 0) { // Line 795, Address: 0x2c172c
            ap->SaverCommand = 1; // Line 796, Address: 0x2c1734
            ap->SaverRate = 0;
        }
    }
    if (ap->SaverCommand == 1) { // Line 800, Address: 0x2c1738
        ap->SaverRate += 0.01f; // Line 801, Address: 0x2c1748, 0x2c175c
        if (ap->SaverRate >= 0.5f) { // Line 802, Address: 0x2c1758, 0x2c1760
            ap->SaverRate = 0.5f;
        }
    } else { // Line 805, Address: 0x2c1778
        ap->SaverRate -= 0.05f; // Line 806, Address: 0x2c1780, 0x2c1798
        if (ap->SaverRate <= 0) { // Line 807, Address: 0x2c1790, 0x2c179c
            ap->SaverRate = 0; // Line 808, Address: 0x2c17ac
        }
    }
    AdvDrawFadePolygon(2, ap->SaverRate, 0xF);
} // Line 812, Address: 0x2c17b0








/* 100% match */
void CheckAdvScreenSaverStopKey(int PortId) { // Line 822, Address: 0x2c17d4, 0x2c17dc
    if ((Pad[PortId].on != 0) || (Pad[PortId].x1 != 0) || (Pad[PortId].y1 != 0)) { // Line 823, Address: 0x2c17c0, 0x2c17d8, 0x2c17e0
        StopAdvScreenSaver(0); // Line 824, Address: 0x2c181c
    }
} // Line 826, Address: 0x2c1828








/* 99.38% match */
unsigned int AdvGetOkButton() { // Line 836, Address: 0x2c1850

    // TODO: double-check the assigned values
    unsigned int ButtonDef[3] = {0xC0, 0x60, 0xA0}; // Line 839, Address: 0x2c1840, 0x2c1854, 0x2c185c










    return ButtonDef[sys->keytype]; // Line 850, Address: 0x2c1858, 0x2c1864
} // Line 851, Address: 0x2c1878








/* 99.38% match */
unsigned int AdvGetCancelButton() { // Line 861, Address: 0x2c1890

    // TODO: double-check the assigned values
    unsigned int ButtonDef[3] = {0x20, 0x80, 0x40}; // Line 864, Address: 0x2c1880, 0x2c1894, 0x2c189c










    return ButtonDef[sys->keytype]; // Line 875, Address: 0x2c1898, 0x2c18a4
} // Line 876, Address: 0x2c18b8











/* 100% match */
void SetPvrInfo(NJS_TEXNAME* np, NJS_TEXINFO* ip, unsigned char* pp) { // Line 889, Address: 0x2c18c0
    TIM2_PICTUREHEADER* pPichd;
    unsigned int GlobalIndex;






































    ((PS2_TIM_LIST_ENTRY*)pp)->PictFormat = 0; // Line 930, Address: 0x2c18f0

    GlobalIndex = ((PS2_TIM_LIST_ENTRY*)pp)->Gindex; // Line 932, Address: 0x2c18dc
    pPichd = (TIM2_PICTUREHEADER*)&((PS2_TIM_LIST_ENTRY*)pp)->TotalSize; // Line 933, Address: 0x2c18e0

    Ps2CheckTextureAlpha(pp); // Line 935, Address: 0x2c18f4

    njSetTextureInfo(ip, (unsigned short*)pp, pPichd->PictFormat, pPichd->ImageWidth, pPichd->ImageHeight); // Line 937, Address: 0x2c18fc
    njSetTextureName(np, ip, GlobalIndex, 0x40800000); // Line 938, Address: 0x2c1914

} // Line 940, Address: 0x2c1928









/* 99.62% match */
int TransPvpData(unsigned char* pp, int Mode) { // Line 951, Address: 0x2c1950
    Unknown29* pPvp;
    int temp; // not originally outputted by dwarf2cpp
    short temp2; // not originally outputted by dwarf2cpp

    pPvp = (Unknown29*)pp;


    if (strncmp(&pPvp->ppStrPvpl, "PVPL", 4) != 0) { // Line 959, Address: 0x2c1960
        return -1; // Line 960, Address: 0x2c1980
    }


    temp = pPvp->ppCategoryCode; // Line 964, Address: 0x2c1988
    temp2 = pPvp->ppBankId;



    if (Mode != 0) { // Line 969, Address: 0x2c198c
        njSetPaletteMode(temp); // Line 970, Address: 0x2c1994
    }






    return temp2; // Line 978, Address: 0x2c199c
} // Line 979, Address: 0x2c19a4








/* 100% match */
void AdvTransShadowPalette() { // Line 989, Address: 0x2c19c0
    int i;
    unsigned int* p;
    unsigned int* lp;







    lp = p = (unsigned int*)bhGetFreeMemory(64, 32); // Line 1000, Address: 0x2c19c8, 0x2c19e0
    *lp++ = 0xFFFFFF; // Line 1001, Address: 0x2c19d8, 0x2c19e4
    for (i = 0; i < 15; i++) { // Line 1002, Address: 0x2c19ec
        *lp++ = 0xFF000000; // Line 1003, Address: 0x2c19f0, 0x2c19f8, 0x2c1a00
    } // Line 1004, Address: 0x2c19f4, 0x2c19fc, 0x2c1a04
    njSetPaletteData(16, 16, p); // Line 1005, Address: 0x2c1a10
    bhReleaseFreeMemory(p); // Line 1006, Address: 0x2c1a20


} // Line 1009, Address: 0x2c1a28











/* 100% match */
void AdvEasyDrawWindow(NJS_POINT3* tlp, NJS_POINT3* brp, unsigned int WindowColor, unsigned int BackColor) { // Line 1022, Address: 0x2c1a40
    NJS_POLYGON_VTX poly[4];

    poly[0].z = poly[2].z = tlp->z; // Line 1025, Address: 0x2c1a6c
    poly[1].z = poly[3].z = brp->z; // Line 1026, Address: 0x2c1a88
    poly[0].col = poly[1].col = poly[2].col = poly[3].col = WindowColor; // Line 1027, Address: 0x2c1aa4


    poly[0].x = poly[1].x = tlp->x; // Line 1030, Address: 0x2c1a74, 0x2c1ac4
    poly[2].x = poly[3].x = brp->x; // Line 1031, Address: 0x2c1a78
    poly[0].y = poly[2].y = tlp->y; // Line 1032, Address: 0x2c1a94
    poly[1].y = poly[3].y = 4.0f + tlp->y; // Line 1033, Address: 0x2c1ac8
    njDrawPolygon((NJS_POLYGON_VTX*)&poly, 4, 0); // Line 1034, Address: 0x2c1b00
    poly[0].y = poly[2].y = brp->y - 4.0f; // Line 1035, Address: 0x2c1b28
    poly[1].y = poly[3].y = brp->y; // Line 1036, Address: 0x2c1b50
    njDrawPolygon((NJS_POLYGON_VTX*)&poly, 4, 0); // Line 1037, Address: 0x2c1b34


    poly[0].x = poly[1].x = tlp->x; // Line 1040, Address: 0x2c1b60
    poly[2].x = poly[3].x = 3.0f + tlp->x; // Line 1041, Address: 0x2c1b64
    poly[0].y = poly[2].y = tlp->y; // Line 1042, Address: 0x2c1b70
    poly[1].y = poly[3].y = brp->y; // Line 1043, Address: 0x2c1ba0
    njDrawPolygon((NJS_POLYGON_VTX*)&poly, 4, 0); // Line 1044, Address: 0x2c1b6c
    poly[0].x = poly[1].x = brp->x - 4.0f; // Line 1045, Address: 0x2c1bb0
    poly[2].x = poly[3].x = 3.0f + (brp->x - 4.0f); // Line 1046, Address: 0x2c1bc0
    njDrawPolygon((NJS_POLYGON_VTX*)&poly, 4, 0); // Line 1047, Address: 0x2c1bbc


    poly[0].x = poly[1].x = tlp->x; // Line 1050, Address: 0x2c1bf8
    poly[2].x = poly[3].x = brp->x; // Line 1051, Address: 0x2c1c14
    poly[0].y = poly[2].y = tlp->y; // Line 1052, Address: 0x2c1c18
    poly[1].y = poly[3].y = brp->y; // Line 1053, Address: 0x2c1c38
    poly[0].z = poly[2].z = tlp->z - 0.001f; // Line 1054, Address: 0x2c1bfc
    poly[1].z = poly[3].z = brp->z - 0.001f; // Line 1055, Address: 0x2c1c5c
    poly[0].col = poly[1].col = poly[2].col = poly[3].col = BackColor; // Line 1056, Address: 0x2c1c74
    njDrawPolygon((NJS_POLYGON_VTX*)&poly, 4, 1); // Line 1057, Address: 0x2c1c08
} // Line 1058, Address: 0x2c1c98













/* 100% match */
void AdvEasyDrawTexture(int TexNo, unsigned int BaseColor, NJS_QUAD_TEXTURE* qp, float PosZ, int TransFlag) { // Line 1073, Address: 0x2c1cd0

































    // TODO: find correct cast for line 1109
    if (TransFlag != 0) { // Line 1108, Address: 0x2c1cf4
        ((unsigned short*)Ps2_current_texmemlist->texinfo.texsurface.pSurface)[7] |= 0x8000; // Line 1109, Address: 0x2c1cfc
    }


    njQuadTextureStart(TransFlag); // Line 1113, Address: 0x2c1d14
    njSetQuadTexture(TexNo, BaseColor); // Line 1114, Address: 0x2c1d1c
    njDrawQuadTexture(qp, PosZ); // Line 1115, Address: 0x2c1d28
    njQuadTextureEnd(); // Line 1116, Address: 0x2c1d34
} // Line 1117, Address: 0x2c1d3c














/* 100% match */
void AdvEasyDrawTextureS(int TexNo, unsigned int BaseColor, NJS_QUAD_TEXTURE* qp, float PosZ, int TransFlag, unsigned int ShadowAlpha) { // Line 1133, Address: 0x2c1d60, 0x2c1d7c
    NJS_QUAD_TEXTURE* sqp = &Qtex[15]; // Line 1134, Address: 0x2c1d78, 0x2c1d80

    AdvEasyDrawTexture(TexNo, BaseColor, qp, PosZ, TransFlag); // Line 1136, Address: 0x2c1d90

    memcpy(sqp, qp, 32); // Line 1138, Address: 0x2c1d98
    sqp->x1 = 3.0f + qp->x1; // Line 1139, Address: 0x2c1da8, 0x2c1dd4
    sqp->y1 = 3.0f + qp->y1; // Line 1140, Address: 0x2c1ddc
    sqp->x2 = 3.0f + qp->x2; // Line 1141, Address: 0x2c1de8
    sqp->y2 = 3.0f + qp->y2; // Line 1142, Address: 0x2c1df4






    AdvEasyDrawTexture(TexNo, ShadowAlpha << 24, sqp, PosZ - 0.001f, 1); // Line 1149, Address: 0x2c1dfc

} // Line 1151, Address: 0x2c1e04


































































/* 100% match */
void SetQuadPos(float StartX, float StartY, float SizeX, float SizeY, NJS_QUAD_TEXTURE* qp) { // Line 1219, Address: 0x2c1e38
    qp->x1 = StartX; // Line 1220, Address: 0x2c1e40
    qp->y1 = StartY; // Line 1221, Address: 0x2c1e30, 0x2c1e3c, 0x2c1e44
    qp->x2 = StartX + (SizeX - 1.0f); // Line 1222, Address: 0x2c1e4c
    qp->y2 = StartY + (SizeY - 1.0f); // Line 1223, Address: 0x2c1e54
}














/* 100% match */
void SetQuadUv2Ex(float u, float v, float SizeX, float SizeY, unsigned int ListNo, unsigned int TexNo, NJS_QUAD_TEXTURE* qp) { // Line 1240, Address: 0x2c1e60
	NJS_TEXMEMLIST* temp = (NJS_TEXMEMLIST*)AdvTexList[ListNo].textures[TexNo].texaddr; // Line 1241, Address: 0x2c1ebc
    float TexX, TexY;
    TexX = (temp->texinfo.texsurface.nWidth >= 0) ? temp->texinfo.texsurface.nWidth : temp->texinfo.texsurface.nWidth / 3; // Line 1243, Address: 0x2c1ef0, 0x2c1f00
    TexY = (temp->texinfo.texsurface.nHeight >= 0) ? temp->texinfo.texsurface.nHeight : temp->texinfo.texsurface.nHeight / 3; // Line 1244, Address: 0x2c1f04, 0x2c1f10
    qp->u1 = u / TexX; // Line 1245, Address: 0x2c1efc, 0x2c1f08, 0x2c1f14
    qp->v1 = v / TexY; // Line 1246, Address: 0x2c1f24
    qp->u2 = (u + (SizeX - 1.0f)) / TexX; // Line 1247, Address: 0x2c1f38
    qp->v2 = (v + (SizeY - 1.0f)) / TexY;
}












/* 100% match */
void SetQuadUv2(float u, float v, float SizeX, float SizeY, unsigned int TexNo, NJS_QUAD_TEXTURE* qp) { // Line 1263, Address: 0x2c1f44
    SetQuadUv2Ex(u, v, SizeX, SizeY, 0, TexNo, qp);
}






























/* 99.20% match */
void AdvDwawOnePictureEx(int TexNo, unsigned int BaseColor) { // Line 1297, Address: 0x2c1f50


    NJS_QUAD_TEXTURE* qp = (NJS_QUAD_TEXTURE*)&Qtex[0]; // Line 1300, Address: 0x2c1f68

    njTextureFilterMode(1); // Line 1302, Address: 0x2c1f70
    SetQuadPos(0, 0, 512.0f, 1024.0f, qp); // Line 1303, Address: 0x2c1f7c
    SetQuadUv2(0, 0, 512.0f, 1024.0f, TexNo, qp); // Line 1304, Address: 0x2c1f9c
    AdvEasyDrawTexture(TexNo, BaseColor, qp, 0.01f, 0); // Line 1305, Address: 0x2c1fc0
    njTextureFilterMode(0); // Line 1306, Address: 0x2c1fe0
} // Line 1307, Address: 0x2c1fe8








/* 100% match */
void AdvDwawOnePicture(int TexNo) { // Line 1317, Address: 0x2c2000
    AdvDwawOnePictureEx(TexNo, -1);
}





























/* 100% match */
void AdvEasySetupTextureBasic(unsigned char* xp, int ListNo, int TexNo) { // Line 1350, Address: 0x2c2010
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 1351, Address: 0x2c202c
    unsigned int* lp;



    lp = (unsigned int*)xp; // Line 1356, Address: 0x2c2034
    AdvTexPalBank[ListNo][TexNo] = -1; // Line 1357, Address: 0x2c2054

    if (lp[0] != 0) { // Line 1359, Address: 0x2c2064
        ap->PalNo = TransPvpData(xp + lp[0], ap->PalFlag); // Line 1360, Address: 0x2c2074
        if (ap->PalFlag != 0) { // Line 1361, Address: 0x2c2080
            ap->PalFlag = 0;
        } // Line 1363, Address: 0x2c2084
        AdvTexPalBank[ListNo][TexNo] = ap->PalNo;
    }

    SetPvrInfo(&AdvTexName[ListNo][TexNo], &AdvTexInfo[ListNo][TexNo], xp + lp[1], -1, ap->PalNo); // Line 1367, Address: 0x2c208c
} // Line 1368, Address: 0x2c2100








/* 100% match */
void AdvEasySetupTextureEx(int ListNo) { // Line 1378, Address: 0x2c2120
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 1379, Address: 0x2c212c

    AdvEasySetupTextureBasic(ap->ptr[ap->Count], ListNo, ap->Count); // Line 1381, Address: 0x2c2134
    ap->Count++; // Line 1382, Address: 0x2c214c
} // Line 1383, Address: 0x2c2158









/* 100% match */
void AdvEasySetupTexture() { // Line 1394, Address: 0x2c2170
    AdvEasySetupTextureEx(0);
}







/* 100% match */
void AdvEasySetTextureList(int ListNo) { // Line 1405, Address: 0x2c2188, 0x2c2190
    njSetTexture(&AdvTexList[ListNo]); // Line 1406, Address: 0x2c2180, 0x2c218c, 0x2c2194
    njSetTextureNum(0); // Line 1407, Address: 0x2c219c
} // Line 1408, Address: 0x2c21a4












/* 100% match */
void AdvEasyTransTextureBasic(int ListNo, int TexNum, int Flag) { // Line 1422, Address: 0x2c21b0, 0x2c21cc, 0x2c21d4
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 1423, Address: 0x2c21bc

    AdvTexList[ListNo].nbTexture = TexNum; // Line 1425, Address: 0x2c21c4, 0x2c21d0, 0x2c21d8
    njLoadTexture(&AdvTexList[ListNo]); // Line 1426, Address: 0x2c21e0
    AdvEasySetTextureList(ListNo); // Line 1427, Address: 0x2c21f8

    if (Flag == 0) { // Line 1429, Address: 0x2c2200
        AllFreeAdvMemory(); // Line 1430, Address: 0x2c2208
    }

    ap->Count = 0; // Line 1433, Address: 0x2c2218
    ap->SetTexture[ListNo] = 1; // Line 1434, Address: 0x2c2210, 0x2c221c
} // Line 1435, Address: 0x2c2220











/* 100% match */
void AdvEasyTransTextureEx(int ListNo) { // Line 1448, Address: 0x2c2240
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // not originally outputted by dwarf2cpp
    AdvEasyTransTextureBasic(ListNo, temp->Count, 0);
}







/* 100% match */
void AdvEasyTransTexture() { // Line 1460, Address: 0x2c2260
    AdvEasyTransTextureEx(0);
}







/* 100% match */
void AdvEasyReleaseTextureEx(int ListNo) { // Line 1471, Address: 0x2c2274, 0x2c227c, 0x2c2284
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // not originally outputted by dwarf2cpp

    if (temp->SetTexture[ListNo] != 0) { // Line 1474, Address: 0x2c2270, 0x2c2278, 0x2c2280, 0x2c2288
        njReleaseTexture(&AdvTexList[ListNo]); // Line 1475, Address: 0x2c2298
        temp->SetTexture[ListNo] = 0; // Line 1476, Address: 0x2c22ac
    }

    bhGarbageTexture(NULL, 0); // Line 1479, Address: 0x2c22b0

} // Line 1481, Address: 0x2c22bc









/* 100% match */
void AdvEasyReleaseTexture() { // Line 1492, Address: 0x2c22d0
    AdvEasyReleaseTextureEx(0);
}







/* 100% match */
void AdvEasyReleaseAllTexture() { // Line 1503, Address: 0x2c22e0, 0x2c22ec
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 1504, Address: 0x2c22e4
    int i;

    for (i = 0; i < 2; i++) { // Line 1507, Address: 0x2c22f0
        ap->SetTexture[i] = 0; // Line 1508, Address: 0x2c22f4, 0x2c22fc
    } // Line 1509, Address: 0x2c22f8, 0x2c2300
    njReleaseTextureAll(); // Line 1510, Address: 0x2c2310
    sys->ss_flg &= ~0x40; // Line 1511, Address: 0x2c2318
} // Line 1512, Address: 0x2c2330








































/* 100% match */
int AdvGetCurrentPort() { // Line 1554, Address: 0x2c2340
    return CurrentPortId; // Line 1555, Address: 0x2c2344
}





























































/* 100% match */
int CheckConnectVmDrive(int parameter /* UNUSED */, int SlotNo) { // Line 1619, Address: 0x2c2350
    MEMORYCARDSTATE* pMcDrive;
	MEMORYCARDSTATE McDrive;






    pMcDrive = CreateMemoryCard(&McDrive); // Line 1628, Address: 0x2c235c
    if (GetMcSelectPortType(pMcDrive, SlotNo - 1) == 2) {








        return ((SlotNo % 6) - 1) + ((SlotNo / 6) * 2); // Line 1638, Address: 0x2c2368
    }




























    return -1;
} // Line 1669, Address: 0x2c23c0








/* 100% match */
int FindFirstVmDrive() { // Line 1679, Address: 0x2c23d0
    int DriveNo;
    int j;




    for (j = 1; ; ) { // Line 1686, Address: 0x2c23dc

        DriveNo = CheckConnectVmDrive(0, j); // Line 1688, Address: 0x2c23e0

        if (DriveNo >= 0) { // Line 1690, Address: 0x2c23f4
            return DriveNo;
        } // Line 1692, Address: 0x2c23fc
        j++; // Line 1693, Address: 0x2c240c
        if (j >= 3) {
            break;
        }
    }
























    return -1; // Line 1722, Address: 0x2c2410
}

































































































































/* 100% match */
float AdvEasyDispMessage(float PosX, float PosY, unsigned int MessageNo) { // Line 1854, Address: 0x2c2420
	unsigned char* dmp, * smp;
	unsigned short* mp, * nmp;
    unsigned int* temp2; // not originally outputted by dwarf2cpp
	int x;
    int y;
	int LoopFlag = 1; // Line 1860, Address: 0x2c245c
	int SearchFlag;
	float SizeX, sx;

    float sy = PosY;
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; smp = (void*)((int)temp->MsgPtr + ((int*)temp->MsgPtr)[MessageNo + 1]); // Line 1865, Address: 0x2c2444, 0x2c2454, 0x2c2460
    dmp = syMalloc(1024); // Line 1866, Address: 0x2c246c
    memcpy(dmp, smp, 1024); // Line 1867, Address: 0x2c247c

    nmp = (void*)dmp; // Line 1869, Address: 0x2c248c
    y = 0; // Line 1870, Address: 0x2c2490
    sx = PosX; // Line 1871, Address: 0x2c2494

    while (LoopFlag != 0) {
        for (x = 0, SizeX = 0, SearchFlag = 1; SearchFlag != 0; x++) { // Line 1874, Address: 0x2c2498
            switch (nmp[x]) { // Line 1875, Address: 0x2c24b8
            case 0xFFFF:
                LoopFlag = 0; // Line 1877, Address: 0x2c24e8
                SearchFlag = 0;
                break; // Line 1879, Address: 0x2c24ec
            case 0xFF00:
                nmp[x] = 0xFFFF; // Line 1881, Address: 0x2c24f8
                temp2 = (void*)(&nmp[x] + 1); // Line 1882, Address: 0x2c24f4
                SearchFlag = 0;
                break; // Line 1884, Address: 0x2c24fc
            case 0xFF01:
                SizeX += 14.0f; // Line 1886, Address: 0x2c24b0, 0x2c2504
                break; // Line 1887, Address: 0x2c2508
            default:






                SizeX += FontSz[nmp[x]]; // Line 1895, Address: 0x2c24a8, 0x2c2510
                break;
            }

        } // Line 1899, Address: 0x2c2554

        if (PosX < 0) { // Line 1901, Address: 0x2c255c
            sx = 320.0f - (SizeX / 2.0f); // Line 1902, Address: 0x2c2574
        } // Line 1903, Address: 0x2c2594
        sys->mes_tp = (int*)nmp; // Line 1904, Address: 0x2c2598, 0x2c25b4
        bhDispMessage(sx, sy, -1, 2, 0, 0, 0); // Line 1905, Address: 0x2c25a0, 0x2c25c0
        sy += 30; // Line 1906, Address: 0x2c25d0, 0x2c25dc
        y++; // Line 1907, Address: 0x2c25d8
        nmp = (void*)temp2;
    } // Line 1909, Address: 0x2c25e0

    syFree(dmp); // Line 1911, Address: 0x2c25e8
    if (PosX < 0) {
        return y * 30; // Line 1913, Address: 0x2c25f0
    } else {
        return SizeX;
    }
} // Line 1917, Address: 0x2c2624
















/* 100% match */
float AutoSaveLoadEasyDispMessage(float PosX, float PosY, unsigned char* ucpMsbTop, unsigned int MessageNo) { // Line 1935, Address: 0x2c2650, 0x2c2674, 0x2c2680
	unsigned char* dmp, * smp;
	unsigned short* mp, * nmp;
    unsigned int* temp; // not from the DWARF info
	int x, y;
	int LoopFlag = 1; // Line 1940, Address: 0x2c268c
	int SearchFlag;
    float sx, SizeX;
    float sy = PosY;

    smp = (ucpMsbTop + ((int*)ucpMsbTop)[MessageNo + 1]); // Line 1945, Address: 0x2c2670, 0x2c2678, 0x2c2684, 0x2c2690
    dmp = syMalloc(1024); // Line 1946, Address: 0x2c2694
    memcpy(dmp, smp, 1024); // Line 1947, Address: 0x2c26a0

    nmp = (void*)dmp; // Line 1949, Address: 0x2c26b0
    y = 0; // Line 1950, Address: 0x2c26b4
    sx = PosX; // Line 1951, Address: 0x2c26b8

    while (LoopFlag != 0) {
        for (SizeX = 0, SearchFlag = 1, x = 0; SearchFlag != 0; x++) { // Line 1954, Address: 0x2c26bc
            switch (nmp[x]) { // Line 1955, Address: 0x2c26e0
            case 0xFFFF:
                LoopFlag = 0; // Line 1957, Address: 0x2c2710
                SearchFlag = 0;
                break; // Line 1959, Address: 0x2c2714
            case 0xFF00:
                nmp[x] = 0xFFFF; // Line 1961, Address: 0x2c2720
                temp = (void*)(&nmp[x] + 1); // Line 1962, Address: 0x2c271c
                SearchFlag = 0;
                break; // Line 1964, Address: 0x2c2724
            case 0xFF01:
                SizeX += 14.0f * FontScaleX; // Line 1966, Address: 0x2c26d8, 0x2c272c
                break; // Line 1967, Address: 0x2c2738
            default:






                SizeX += FontSz[nmp[x]] * FontScaleX; // Line 1975, Address: 0x2c26d0, 0x2c2740, 0x2c2790
                break;

            } // Line 1978, Address: 0x2c278c
        } // Line 1979, Address: 0x2c2794

        if (PosX < 0) { // Line 1981, Address: 0x2c279c
            sx = 320.0f - (SizeX / 2); // Line 1982, Address: 0x2c27b4
        } // Line 1983, Address: 0x2c27d4
        sys->mes_tp = nmp; // Line 1984, Address: 0x2c27d8, 0x2c27f4
        bhDispMessage(sx, sy, -1, 2, 0, 0, 0); // Line 1985, Address: 0x2c27e0, 0x2c2800
        sy += 30 * FontScaleCR; // Line 1986, Address: 0x2c2810, 0x2c2828
        y++; // Line 1987, Address: 0x2c2820
        nmp = (void*)temp; // Line 1988, Address: 0x2c2824
    } // Line 1989, Address: 0x2c282c

    syFree(dmp); // Line 1991, Address: 0x2c2834
    if (PosX < 0) {
        return y * 30 * FontScaleCR; // Line 1993, Address: 0x2c283c
    } else {
        return SizeX;
    }
} // Line 1997, Address: 0x2c2878







































































/* 100% match */
int DispVmWarningMessage(int MsgId) { // Line 2070, Address: 0x2c28c0, 0x2c28cc, 0x2c28d4
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 2071, Address: 0x2c28b0
    ADV_MESSAGE_DEFINITION* mp = &AdvVmMsgDef[MsgId]; // Line 2072, Address: 0x2c28b8, 0x2c28c4, 0x2c28d0, 0x2c28d8

    if ((mp->MsgType != 0) && ((Pad[ap->PortId].press & 0x800))) { // Line 2074, Address: 0x2c28dc
        ap->Mode = ap->Mode2 = ap->NextMode; // Line 2075, Address: 0x2c28e8
        return 1; // Line 2076, Address: 0x2c2914, 0x2c291c
    } // Line 2077, Address: 0x2c2918, 0x2c2920



    AdvEasyDispMessage(mp->Sx, mp->Sy, mp->StartMsgNo); // Line 2081, Address: 0x2c2928
    if (mp->NaviMsgNo >= 0) { // Line 2082, Address: 0x2c2938
        AdvEasyDispMessage(-1.0f, 400.0f, mp->NaviMsgNo); // Line 2083, Address: 0x2c2944
    }

    return 0; // Line 2086, Address: 0x2c295c
} // Line 2087, Address: 0x2c2960







/* 100% match */
void DefaultSetOption() { // Line 2096, Address: 0x2c2970

    // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 2099, Address: 0x2c2978
    sys->keytype = 0; // Line 2100, Address: 0x2c2980,
    RequestAdjustDisplay(0, 0); // Line 2101, Address: 0x2c2990
    sys->vibration = (CheckVibrationUnit((temp->PortId * 6) + 2) == 0) ? 0 : 1; // Line 2102, Address: 0x2c29c4
    SetUseVibrationUnit(sys->vibration); // Line 2103, Address: 0x2c29d4
}







/* 99.66% match */
int Adv_FirstWarningMessage() { // Line 2113, Address: 0x2c29e0
	ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 2114, Address: 0x2c29f0
    int ReturnCode;
	int TexNoDef[3] = {0, 1, -1}; // Line 2118, Address: 0x2c29f8, 0x2c2a10
	static int lState;
	static int LoadCheck;

    ReturnCode = 0; // Line 2120, Address: 0x2c2a0c










    ap->PortId = AdvGetCurrentPort(); // Line 2131, Address: 0x2c2a14
    ExecuteAdvFade(); // Line 2132, Address: 0x2c2a1c
    ExecuteAdvScreenSaver(); // Line 2133, Address: 0x2c2a24
    CheckAdvScreenSaverStopKey(ap->PortId); // Line 2134, Address: 0x2c2a2c
    AdvCheckSoftReset(0); // Line 2135, Address: 0x2c2a34

    switch (ap->Mode) { // Line 2137, Address: 0x2c2a3c
    case 0:
        ResetAdvSystem(); // Line 2139, Address: 0x2c2a68



        ap->Mode = 1; // Line 2143, Address: 0x2c2a70
        break; // Line 2144, Address: 0x2c2a74
    case 1:

        ap->ptr[0] = bhGetFreeMemory(GetInsideFileSize(sys->sys_partid, 1), 32); // Line 2147, Address: 0x2c2a7c
        RequestReadInsideFile(sys->sys_partid, 1, ap->ptr[0]); // Line 2148, Address: 0x2c2aa0
        ap->Mode = 2; // Line 2149, Address: 0x2c2ab8
        break; // Line 2150, Address: 0x2c2abc
    case 2:
        CheckReadEndAdvInsideFile2(3); // Line 2152, Address: 0x2c2ac4
        break; // Line 2153, Address: 0x2c2acc
    case 3:
        bhSetFontTexture(ap->ptr[0]); // Line 2155, Address: 0x2c2ad4
        AllFreeAdvMemory(); // Line 2156, Address: 0x2c2adc
        ap->Mode = 4; // Line 2157, Address: 0x2c2ae4

    case 4:

        RequestAdvInsideFileEx(0, 0); // Line 2161, Address: 0x2c2aec
        ap->Mode = 5; // Line 2162, Address: 0x2c2af8
        break; // Line 2163, Address: 0x2c2afc
    case 5:
        CheckReadEndAdvInsideFile2(6); // Line 2165, Address: 0x2c2b04
        break; // Line 2166, Address: 0x2c2b0c
    case 6:
        ap->MsgPtr = AdvGetResourcePtr(ap->ptr[0], 0); // Line 2168, Address: 0x2c2b14
        AdvEasySetupTextureBasic(AdvGetResourcePtr(ap->ptr[0], 2), 0, 0); // Line 2169, Address: 0x2c2b24
        AdvEasySetupTextureBasic(AdvGetResourcePtr(ap->ptr[0], 3), 0, 1); // Line 2170, Address: 0x2c2b40
        ap->PalNo = TransPvpData(AdvGetResourcePtr(ap->ptr[0], 1), ap->PalFlag); // Line 2171, Address: 0x2c2b5c, 0x2c2b7c
        AdvEasyTransTextureBasic(0, 2, 1); // Line 2172, Address: 0x2c2b74, 0x2c2b80










        ap->Mode = 8; // Line 2183, Address: 0x2c2b88


        break; // Line 2186, Address: 0x2c2b8c
    case 8:
    case 9:










































        ap->Mode = 11; // Line 2231, Address: 0x2c2b94
        break; // Line 2232, Address: 0x2c2b98
    case 10:




































        ap->Mode = 11; // Line 2270, Address: 0x2c2ba0









        break; // Line 2280, Address: 0x2c2ba4
    case 11:

        switch (lState) { // Line 2283, Address: 0x2c2bac
        case 0:




            pSysLoad = CreateSysLoadScreen(&SysLoad, NULL); // Line 2289, Address: 0x2c2bd0

            lState = 1; // Line 2291, Address: 0x2c2bf0
            LoadCheck = 0; // Line 2292, Address: 0x2c2be8

            break;// Line 2294, Address: 0x2c2bf8
        case 1:
            LoadCheck = ExecuteSysLoadScreen(pSysLoad); // Line 2296, Address: 0x2c2c00
            if (LoadCheck == 1) { // Line 2297, Address: 0x2c2c14

                ap->Mode = 15; // Line 2299, Address: 0x2c2c28
                lState = 0; // Line 2300, Address: 0x2c2c30
                LoadCheck = 0; // Line 2301, Address: 0x2c2c38
                DefaultSetOption(1); // Line 2302, Address: 0x2c2c3c
            } else { // Line 2303, Address: 0x2c2c44
                if (LoadCheck == 2) { // Line 2304, Address: 0x2c2c4c

                    ap->Mode = 15; // Line 2306, Address: 0x2c2c58
                    lState = 0; // Line 2307, Address: 0x2c2c60
                    LoadCheck = 0; // Line 2308, Address: 0x2c2c68
                    ap->GenFlag = 1; // Line 2309, Address: 0x2c2c70

                    switch (sys->ssd_reserve) { // Line 2311, Address: 0x2c2c74
                    case 0:

                        SetSoundMode(0); // Line 2314, Address: 0x2c2c98
                        break; // Line 2315, Address: 0x2c2ca4
                    case 1:
                        SetSoundMode(1); // Line 2317, Address: 0x2c2cac
                        break;
                    }
                }
            }
        }
        break; // Line 2323, Address: 0x2c2cb4
    case 12:



















































































        ap->Mode = 15; // Line 2408, Address: 0x2c2cbc

        break; // Line 2410, Address: 0x2c2cc0
    case 13:

        ap->Mode = 15; // Line 2413, Address: 0x2c2cc8


















        break; // Line 2432, Address: 0x2c2ccc
    case 14:
        CheckAdvScreenSaverStopKey(ap->PortId); // Line 2434, Address: 0x2c2cd4
        DispVmWarningMessage(ap->MsgNo); // Line 2435, Address: 0x2c2cdc
        break; // Line 2436, Address: 0x2c2ce4
    case 15:
        ap->Mode = 16; // Line 2438, Address: 0x2c2cec
        break; // Line 2439, Address: 0x2c2cf0
    case 16:
        if (ap->GenFlag != 0) { // Line 2441, Address: 0x2c2cf8
            SetAdjustDisplay(); // Line 2442, Address: 0x2c2d04
        }



        RequestAdvFade(2, GetSamurai(50)); // Line 2447, Address: 0x2c2d0c
        ap->Count = 0; // Line 2448, Address: 0x2c2d28
        ap->Mode = 17; // Line 2449, Address: 0x2c2d24

        break; // Line 2451, Address: 0x2c2d2c
    case 17:
        if (CheckAdvFade() == 0) { // Line 2453, Address: 0x2c2d34




            ap->Timer = 150.0f; // Line 2458, Address: 0x2c2d44




            ap->Mode = 18; // Line 2463, Address: 0x2c2d4c
        }
        AdvEasySetTextureList(0); // Line 2465, Address: 0x2c2d54
        AdvDwawOnePicture(TexNoDef[ap->Count]); // Line 2466, Address: 0x2c2d60
        break; // Line 2467, Address: 0x2c2d74
    case 18:
        ap->Timer--; // Line 2469, Address: 0x2c2d7c, 0x2c2d90
        if (ap->Timer < 0) { // Line 2470, Address: 0x2c2d88, 0x2c2d94
            RequestAdvFade(3, GetSamurai(50)); // Line 2471, Address: 0x2c2da4
            ap->Mode = 19; // Line 2472, Address: 0x2c2db8
        }
        AdvEasySetTextureList(0); // Line 2474, Address: 0x2c2dc0
        AdvDwawOnePicture(TexNoDef[ap->Count]); // Line 2475, Address: 0x2c2dc8
        break; // Line 2476, Address: 0x2c2ddc
    case 19:
        if (CheckAdvFade() == 0) { // Line 2478, Address: 0x2c2de4
            ap->Count++; // Line 2479, Address: 0x2c2df4
            if (TexNoDef[ap->Count] < 0) { // Line 2480, Address: 0x2c2e00
                ap->Mode = -1; // Line 2481, Address: 0x2c2e18
            } else { // Line 2482, Address: 0x2c2e1c
                RequestAdvFade(2, GetSamurai(50)); // Line 2483, Address: 0x2c2e24
                ap->Mode = 17; // Line 2484, Address: 0x2c2e3c
            }
        } else { // Line 2486, Address: 0x2c2e40
            AdvEasySetTextureList(0); // Line 2487, Address: 0x2c2e48
            AdvDwawOnePicture(TexNoDef[ap->Count]); // Line 2488, Address: 0x2c2e54
        }
        break;
    }

    if (ap->Mode == -1) { // Line 2493, Address: 0x2c2e68
        AdvEasyReleaseAllTexture(); // Line 2494, Address: 0x2c2e78
        AllFreeAdvMemory(); // Line 2495, Address: 0x2c2e80
        ap->Mode = 0; // Line 2496, Address: 0x2c2e88
        ap->Active = 0; // Line 2497, Address: 0x2c2e90
        ReturnCode = 1; // Line 2498, Address: 0x2c2e8c
    }

    return ReturnCode; // Line 2501, Address: 0x2c2e94
} // Line 2502, Address: 0x2c2e98








/* 99.94% match */
int Adv_CapcomLogo() { // Line 2512, Address: 0x2c2eb0
	ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 2513, Address: 0x2c2ec0
    int ReturnCode = 0;

    ap->PortId = AdvGetCurrentPort(); // Line 2516, Address: 0x2c2ec8
    ExecuteAdvFade(); // Line 2517, Address: 0x2c2ed0
    AdvCheckSoftReset(0); // Line 2518, Address: 0x2c2ed8

    switch (ap->Mode) { // Line 2520, Address: 0x2c2ee0



    case 0:
        ResetAdvSystem(); // Line 2525, Address: 0x2c2f0c



        ap->Mode = 1; // Line 2529, Address: 0x2c2f14


        break; // Line 2532, Address: 0x2c2f18
    case 1:
        RequestAdvInsideFile(1); // Line 2534, Address: 0x2c2f20
        ap->Mode = 2; // Line 2535, Address: 0x2c2f28
        break; // Line 2536, Address: 0x2c2f2c
    case 2:
        CheckReadEndAdvInsideFile2(3); // Line 2538, Address: 0x2c2f34
        break; // Line 2539, Address: 0x2c2f3c
    case 3:
        AdvEasySetupTexture(); // Line 2541, Address: 0x2c2f44
        AdvEasyTransTexture(); // Line 2542, Address: 0x2c2f4c
        RequestAdvFade(2, GetSamurai(50)); // Line 2543, Address: 0x2c2f54
        ap->Mode = 4; // Line 2544, Address: 0x2c2f68
        break; // Line 2545, Address: 0x2c2f6c
    case 4:
        if (CheckAdvFade() == 0) { // Line 2547, Address: 0x2c2f74




            ap->Timer = 150.0f; // Line 2552, Address: 0x2c2f84




            ap->Mode = 5; // Line 2557, Address: 0x2c2f8c
        }
        AdvDwawOnePicture(0); // Line 2559, Address: 0x2c2f94
        break; // Line 2560, Address: 0x2c2fa0
    case 5:
        ap->Timer--; // Line 2562, Address: 0x2c2fa8, 0x2c2fbc

        if (ap->Timer < 0) { // Line 2564, Address: 0x2c2fb4, 0x2c2fc0
            RequestAdvFade(3, GetSamurai(50)); // Line 2565, Address: 0x2c2fd0
            ap->NextMode = 7; // Line 2566, Address: 0x2c2fe4
            ap->Mode = 6; // Line 2567, Address: 0x2c2fec
        }
        AdvDwawOnePicture(0); // Line 2569, Address: 0x2c2ff4
















        break; // Line 2586, Address: 0x2c2ffc
    case 6:
        if (CheckAdvFade() == 0) { // Line 2588, Address: 0x2c3004
            ap->Mode = ap->NextMode; // Line 2589, Address: 0x2c3014
        } // Line 2590, Address: 0x2c3018
        else
        {

            if ((Pad[ap->PortId].press & 0x800)) { // Line 2594, Address: 0x2c3020
                ap->NextMode = -1;
            }
            AdvDwawOnePicture(0); // Line 2597, Address: 0x2c3054
        }
        break; // Line 2599, Address: 0x2c3060
    case 7:




        PlayStartMovieEx(16, 0, 1); // Line 2605, Address: 0x2c3068


        ap->Mode = 8; // Line 2608, Address: 0x2c3078
        break; // Line 2609, Address: 0x2c307c
    case 8:
        switch (WaitPrePlayMovie(0)) { // Line 2611, Address: 0x2c3084
        case 0:
            ap->Mode = 9; // Line 2613, Address: 0x2c30c0
            break; // Line 2614, Address: 0x2c30c4
        case 2:
        case 3:
            ap->Mode = -1; // Line 2617, Address: 0x2c30cc
            break;
        case 1: break;
        }
        break; // Line 2621, Address: 0x2c30d0
    case 9:

        switch (PlayMovieMain(0)) { // Line 2624, Address: 0x2c30d8
        case 1:
        case 2:
        case 3:
            ap->Mode =-1; // Line 2628, Address: 0x2c3114
            break;
        case 0:
            break;
        }
        break;
    }



    if (ap->Mode == -1) { // Line 2638, Address: 0x2c311c
        AdvEasyReleaseTexture(); // Line 2639, Address: 0x2c312c
        ap->Mode = 0; // Line 2640, Address: 0x2c3134
        ap->Active = 0; // Line 2641, Address: 0x2c313c
        ReturnCode = 1; // Line 2642, Address: 0x2c3138
    }

    return ReturnCode; // Line 2645, Address: 0x2c3140
} // Line 2646, Address: 0x2c3144




/* 100% match */
void ResetFlushPlate() {
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 2653, Address: 0x2c3160

    ap->FlushSpeed2 = 0; // Line 2655, Address: 0x2c3168
    ap->FlushCount2 = 0; // Line 2656, Address: 0x2c316c
}



/* 100% match */
void FlushPlate() { // Line 2662, Address: 0x2c3180, 0x2c3188
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 2663, Address: 0x2c3190

    ap->FlushCount2 += ap->FlushSpeed2; // Line 2665, Address: 0x2c3198
    if (ap->FlushSpeed2 < 0) { // Line 2666, Address: 0x2c3184, 0x2c31a8

        if (ap->FlushCount2 <= -64.0f) { // Line 2668, Address: 0x2c31bc
            ap->FlushCount2 = -64.0f; // Line 2669, Address: 0x2c31dc
            ap->FlushSpeed2 = 2.0f; // Line 2670, Address: 0x2c31e0
        }
    } else { // Line 2672, Address: 0x2c31e4

        if (ap->FlushCount2 >= 0) { // Line 2674, Address: 0x2c31ec
            ap->FlushCount2 = 0; // Line 2675, Address: 0x2c3200
            ap->FlushSpeed2 = -2.0f; // Line 2676, Address: 0x2c3204
        }
    }

    ap->FontBaseColor = (unsigned int)ap->FlushCount2 + 0xFF; // Line 2680, Address: 0x2c320c
    ap->FontBaseColor |= ((unsigned int)ap->FlushCount2 + 0xFF) << 16; // Line 2681, Address: 0x2c321c
    ap->FontBaseColor |= ((unsigned int)ap->FlushCount2 + 0xFF) << 8; // Line 2682, Address: 0x2c3238
} // Line 2683, Address: 0x2c3254







/* 99.15% match */
void DisplayTitleBg() { // Line 2692, Address: 0x2c3270, Func Offset: 0
    
    NJS_QUAD_TEXTURE* qp = &Qtex[1]; // Line 2694, Address: 0x2c327c, Func Offset: 0xc
    
    AdvDwawOnePictureEx(0, 0xFFFFFFFF); // Line 2696, Address: 0x2c3284, Func Offset: 0x14
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    SetQuadPos(54.0f, 20.0f, 396.0f, 352.0f, qp); // Line 2719, Address: 0x2c3290, Func Offset: 0x20
    SetQuadUv2(0, 460.0f, 352.0f, 54.0f, 1, qp); // Line 2720, Address: 0x2c32b8, Func Offset: 0x48
    AdvEasyDrawTextureS(1, 0xFFFFFFFF, qp, 0.15f, 1, 192); // Line 2721, Address: 0x2c32e0, Func Offset: 0x70
    
    SetQuadPos(32.0f, 348.0f, 418.0f, 240.0f, qp); // Line 2723, Address: 0x2c3304, Func Offset: 0x94
    SetQuadUv2(432.0f, 240.0f, 32.0f, 272.0f, 1, qp); // Line 2724, Address: 0x2c332c, Func Offset: 0xbc
    AdvEasyDrawTextureS(1, 0xFFFFFFFF, qp, 0.15f, 1, 192); // Line 2725, Address: 0x2c3358, Func Offset: 0xe8
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
} // Line 2743, Address: 0x2c337c, Func Offset: 0x10c

//
// Start address: 0x2c3390
void DisplayPressStartPlate(float FadeRate)
{
	_anon0* qp;
	// Line 2752, Address: 0x2c3390, Func Offset: 0
	// Line 2753, Address: 0x2c33a0, Func Offset: 0x10
	// Line 2752, Address: 0x2c33a4, Func Offset: 0x14
	// Line 2753, Address: 0x2c33a8, Func Offset: 0x18
	// Line 2755, Address: 0x2c33ac, Func Offset: 0x1c
	// Line 2757, Address: 0x2c33b4, Func Offset: 0x24
	// Line 2758, Address: 0x2c33dc, Func Offset: 0x4c
	// Line 2759, Address: 0x2c3400, Func Offset: 0x70
	// Line 2760, Address: 0x2c3448, Func Offset: 0xb8
	// Func End, Address: 0x2c3460, Func Offset: 0xd0
}

//
// Start address: 0x2c3460
void DisplayGameModePlate(int Cursor, int CursorMax, float FadeRate, int Flag)
{
	float VDef[4][2];
	float PosYDef[4][2];
	int DivTbl[4];
	unsigned int Alpha;
	int i;
	_anon0* qp;
	_anon8* ap;
	// Line 2898, Address: 0x2c3460, Func Offset: 0
	// Line 2899, Address: 0x2c3478, Func Offset: 0x18
	// Line 2898, Address: 0x2c3480, Func Offset: 0x20
	// Line 2908, Address: 0x2c3488, Func Offset: 0x28
	// Line 2898, Address: 0x2c348c, Func Offset: 0x2c
	// Line 2908, Address: 0x2c3490, Func Offset: 0x30
	// Line 2919, Address: 0x2c34a8, Func Offset: 0x48
	// Line 2908, Address: 0x2c34b0, Func Offset: 0x50
	// Line 2919, Address: 0x2c34b4, Func Offset: 0x54
	// Line 2939, Address: 0x2c34c0, Func Offset: 0x60
	// Line 2953, Address: 0x2c34c4, Func Offset: 0x64
	// Line 2939, Address: 0x2c34c8, Func Offset: 0x68
	// Line 2919, Address: 0x2c34cc, Func Offset: 0x6c
	// Line 2939, Address: 0x2c34d0, Func Offset: 0x70
	// Line 2919, Address: 0x2c34d4, Func Offset: 0x74
	// Line 2939, Address: 0x2c34d8, Func Offset: 0x78
	// Line 2953, Address: 0x2c34e0, Func Offset: 0x80
	// Line 2939, Address: 0x2c34e8, Func Offset: 0x88
	// Line 2957, Address: 0x2c34ec, Func Offset: 0x8c
	// Line 2939, Address: 0x2c34f0, Func Offset: 0x90
	// Line 2953, Address: 0x2c34f4, Func Offset: 0x94
	// Line 2957, Address: 0x2c34f8, Func Offset: 0x98
	// Line 2955, Address: 0x2c34fc, Func Offset: 0x9c
	// Line 2969, Address: 0x2c3500, Func Offset: 0xa0
	// Line 2955, Address: 0x2c350c, Func Offset: 0xac
	// Line 2969, Address: 0x2c3510, Func Offset: 0xb0
	// Line 2955, Address: 0x2c3514, Func Offset: 0xb4
	// Line 2969, Address: 0x2c3518, Func Offset: 0xb8
	// Line 2970, Address: 0x2c3538, Func Offset: 0xd8
	// Line 2975, Address: 0x2c3564, Func Offset: 0x104
	// Line 2976, Address: 0x2c3590, Func Offset: 0x130
	// Line 2980, Address: 0x2c35bc, Func Offset: 0x15c
	// Line 2981, Address: 0x2c35e8, Func Offset: 0x188
	// Line 2985, Address: 0x2c3614, Func Offset: 0x1b4
	// Line 2986, Address: 0x2c3640, Func Offset: 0x1e0
	// Line 2996, Address: 0x2c366c, Func Offset: 0x20c
	// Line 2997, Address: 0x2c367c, Func Offset: 0x21c
	// Line 2998, Address: 0x2c3684, Func Offset: 0x224
	// Line 2997, Address: 0x2c3688, Func Offset: 0x228
	// Line 2998, Address: 0x2c368c, Func Offset: 0x22c
	// Line 2999, Address: 0x2c3698, Func Offset: 0x238
	// Line 3001, Address: 0x2c36a4, Func Offset: 0x244
	// Line 3002, Address: 0x2c36ac, Func Offset: 0x24c
	// Line 3004, Address: 0x2c36b0, Func Offset: 0x250
	// Line 3005, Address: 0x2c36ec, Func Offset: 0x28c
	// Line 3007, Address: 0x2c36f4, Func Offset: 0x294
	// Line 3008, Address: 0x2c36f8, Func Offset: 0x298
	// Line 3009, Address: 0x2c3700, Func Offset: 0x2a0
	// Line 3010, Address: 0x2c3704, Func Offset: 0x2a4
	// Line 3011, Address: 0x2c3708, Func Offset: 0x2a8
	// Line 3012, Address: 0x2c374c, Func Offset: 0x2ec
	// Line 3014, Address: 0x2c3750, Func Offset: 0x2f0
	// Line 3016, Address: 0x2c3760, Func Offset: 0x300
	// Line 3018, Address: 0x2c3768, Func Offset: 0x308
	// Line 3019, Address: 0x2c3770, Func Offset: 0x310
	// Func End, Address: 0x2c3798, Func Offset: 0x338
}

//
// Start address: 0x2c37a0
void DisplayNewGamePlate(int Cursor, float FadeRate, int Flag)
{
	int DivTbl[3];
	unsigned int Alpha;
	int i;
	_anon0* qp;
	_anon8* ap;
	// Line 3031, Address: 0x2c37a0, Func Offset: 0
	// Line 3032, Address: 0x2c37bc, Func Offset: 0x1c
	// Line 3031, Address: 0x2c37c4, Func Offset: 0x24
	// Line 3036, Address: 0x2c37c8, Func Offset: 0x28
	// Line 3031, Address: 0x2c37d4, Func Offset: 0x34
	// Line 3036, Address: 0x2c37dc, Func Offset: 0x3c
	// Line 3038, Address: 0x2c37e8, Func Offset: 0x48
	// Line 3036, Address: 0x2c37f0, Func Offset: 0x50
	// Line 3038, Address: 0x2c37f4, Func Offset: 0x54
	// Line 3036, Address: 0x2c37f8, Func Offset: 0x58
	// Line 3038, Address: 0x2c37fc, Func Offset: 0x5c
	// Line 3040, Address: 0x2c3800, Func Offset: 0x60
	// Line 3044, Address: 0x2c3808, Func Offset: 0x68
	// Line 3045, Address: 0x2c3830, Func Offset: 0x90
	// Line 3049, Address: 0x2c3858, Func Offset: 0xb8
	// Line 3050, Address: 0x2c3880, Func Offset: 0xe0
	// Line 3054, Address: 0x2c38a8, Func Offset: 0x108
	// Line 3055, Address: 0x2c38d0, Func Offset: 0x130
	// Line 3059, Address: 0x2c38f8, Func Offset: 0x158
	// Line 3060, Address: 0x2c3924, Func Offset: 0x184
	// Line 3106, Address: 0x2c3950, Func Offset: 0x1b0
	// Line 3117, Address: 0x2c3958, Func Offset: 0x1b8
	// Line 3118, Address: 0x2c3960, Func Offset: 0x1c0
	// Line 3117, Address: 0x2c3964, Func Offset: 0x1c4
	// Line 3118, Address: 0x2c3968, Func Offset: 0x1c8
	// Line 3119, Address: 0x2c3974, Func Offset: 0x1d4
	// Line 3121, Address: 0x2c3980, Func Offset: 0x1e0
	// Line 3122, Address: 0x2c3988, Func Offset: 0x1e8
	// Line 3123, Address: 0x2c398c, Func Offset: 0x1ec
	// Line 3124, Address: 0x2c3990, Func Offset: 0x1f0
	// Line 3125, Address: 0x2c39d0, Func Offset: 0x230
	// Line 3127, Address: 0x2c39d8, Func Offset: 0x238
	// Line 3128, Address: 0x2c39dc, Func Offset: 0x23c
	// Line 3129, Address: 0x2c39e4, Func Offset: 0x244
	// Line 3131, Address: 0x2c39e8, Func Offset: 0x248
	// Line 3132, Address: 0x2c3a2c, Func Offset: 0x28c
	// Line 3135, Address: 0x2c3a30, Func Offset: 0x290
	// Line 3136, Address: 0x2c3a40, Func Offset: 0x2a0
	// Line 3138, Address: 0x2c3a84, Func Offset: 0x2e4
	// Line 3140, Address: 0x2c3a8c, Func Offset: 0x2ec
	// Line 3141, Address: 0x2c3a94, Func Offset: 0x2f4
	// Func End, Address: 0x2c3abc, Func Offset: 0x31c
}

//
// Start address: 0x2c3ac0
void DisplayExtraGamePlate(int Cursor, float FadeRate, int Flag)
{
	int DivTbl[2];
	unsigned int Alpha;
	int i;
	_anon0* qp;
	_anon8* ap;
	// Line 3152, Address: 0x2c3ac0, Func Offset: 0
	// Line 3153, Address: 0x2c3adc, Func Offset: 0x1c
	// Line 3152, Address: 0x2c3ae4, Func Offset: 0x24
	// Line 3157, Address: 0x2c3ae8, Func Offset: 0x28
	// Line 3152, Address: 0x2c3af4, Func Offset: 0x34
	// Line 3157, Address: 0x2c3afc, Func Offset: 0x3c
	// Line 3159, Address: 0x2c3b04, Func Offset: 0x44
	// Line 3157, Address: 0x2c3b10, Func Offset: 0x50
	// Line 3159, Address: 0x2c3b14, Func Offset: 0x54
	// Line 3161, Address: 0x2c3b18, Func Offset: 0x58
	// Line 3164, Address: 0x2c3b20, Func Offset: 0x60
	// Line 3165, Address: 0x2c3b48, Func Offset: 0x88
	// Line 3169, Address: 0x2c3b70, Func Offset: 0xb0
	// Line 3170, Address: 0x2c3b98, Func Offset: 0xd8
	// Line 3174, Address: 0x2c3bc0, Func Offset: 0x100
	// Line 3175, Address: 0x2c3be8, Func Offset: 0x128
	// Line 3178, Address: 0x2c3c10, Func Offset: 0x150
	// Line 3189, Address: 0x2c3c18, Func Offset: 0x158
	// Line 3190, Address: 0x2c3c20, Func Offset: 0x160
	// Line 3189, Address: 0x2c3c24, Func Offset: 0x164
	// Line 3190, Address: 0x2c3c28, Func Offset: 0x168
	// Line 3191, Address: 0x2c3c34, Func Offset: 0x174
	// Line 3193, Address: 0x2c3c40, Func Offset: 0x180
	// Line 3194, Address: 0x2c3c48, Func Offset: 0x188
	// Line 3195, Address: 0x2c3c4c, Func Offset: 0x18c
	// Line 3196, Address: 0x2c3c50, Func Offset: 0x190
	// Line 3197, Address: 0x2c3c90, Func Offset: 0x1d0
	// Line 3199, Address: 0x2c3c98, Func Offset: 0x1d8
	// Line 3200, Address: 0x2c3c9c, Func Offset: 0x1dc
	// Line 3201, Address: 0x2c3ca4, Func Offset: 0x1e4
	// Line 3203, Address: 0x2c3ca8, Func Offset: 0x1e8
	// Line 3204, Address: 0x2c3cec, Func Offset: 0x22c
	// Line 3207, Address: 0x2c3cf0, Func Offset: 0x230
	// Line 3208, Address: 0x2c3d00, Func Offset: 0x240
	// Line 3210, Address: 0x2c3d44, Func Offset: 0x284
	// Line 3212, Address: 0x2c3d4c, Func Offset: 0x28c
	// Line 3213, Address: 0x2c3d54, Func Offset: 0x294
	// Func End, Address: 0x2c3d7c, Func Offset: 0x2bc
}

/* 100% match */
void FadeInPlate(int NextMode) { // Line 3219, Address: 0x2c3d80
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 3220, Address: 0x2c3d90

    ResetFlushPlate(); // Line 3222, Address: 0x2c3d98
    ap->FlushCount += ap->FlushSpeed; // Line 3223, Address: 0x2c3da0, 0x2c3db4
    if (ap->FlushCount > 255.0f) { // Line 3224, Address: 0x2c3da8, 0x2c3db8
        ap->FlushCount = 255.0f; // Line 3225, Address: 0x2c3dc8
        ap->FlushSpeed = 32.0f; // Line 3226, Address: 0x2c3dcc
        ap->Mode = NextMode; // Line 3227, Address: 0x2c3dd4
    }
} // Line 3229, Address: 0x2c3dd8

/* 100% match */
void FadeOutPlate() { // Line 3235, Address: 0x2c3df0
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 3236, Address: 0x2c3dfc

    ResetFlushPlate(); // Line 3238, Address: 0x2c3e00
    ap->FlushCount -= ap->FlushSpeed; // Line 3239, Address: 0x2c3e08, 0x2c3e18
    if (ap->FlushCount < 0) { // Line 3240, Address: 0x2c3e10, 0x2c3e1c
        ap->FlushCount = 0; // Line 3241, Address: 0x2c3e2c
        ap->FlushSpeed = 32.0f; // Line 3242, Address: 0x2c3e30
        ap->Mode = ap->NextMode; // Line 3243, Address: 0x2c3e38
    }
} // Line 3245, Address: 0x2c3e40

/* 100% match */
void TitleCall(int PortId, int ReturnCode) { // Line 3251, Address: 0x2c3e50
    ADV_WORK* ap = (ADV_WORK*)&AdvWork; // Line 3252, Address: 0x2c3e64

    StartVibrationEx(PortId, 16); // Line 3254, Address: 0x2c3e6c
    SetVolumeAdx2(0, 0); // Line 3255, Address: 0x2c3e74
    PlayAdx(0, ap->PatId, 3); // Line 3256, Address: 0x2c3e80



    RequestAdvFade(3, GetSamurai(430)); // Line 3260, Address: 0x2c3e90

    ap->FlushCount = 180.0f; // Line 3262, Address: 0x2c3ea4
    ap->NextReturnCode = ReturnCode; // Line 3263, Address: 0x2c3eb0
    ap->Mode = 17; // Line 3264, Address: 0x2c3eac, 0x2c3eb4
    ap->GenFlag = 1; // Line 3265, Address: 0x2c3eb8
} // Line 3266, Address: 0x2c3ec0

//
// Start address: 0x2c3ee0
int CheckButton(int Level, int Flag, int MaxFlag)
{
	int ConnectFlag;
	int CancelMode[3];
	int CancelNextMode[3];
	unsigned char ExGameDef[2];
	unsigned char NewGameDef[3];
	unsigned int UpKey[3];
	unsigned int DownKey[3];
	_anon8* ap;
	// Line 3273, Address: 0x2c3ee0, Func Offset: 0
	// Line 3274, Address: 0x2c3efc, Func Offset: 0x1c
	// Line 3276, Address: 0x2c3f04, Func Offset: 0x24
	// Line 3277, Address: 0x2c3f24, Func Offset: 0x44
	// Line 3276, Address: 0x2c3f30, Func Offset: 0x50
	// Line 3278, Address: 0x2c3f38, Func Offset: 0x58
	// Line 3277, Address: 0x2c3f40, Func Offset: 0x60
	// Line 3284, Address: 0x2c3f48, Func Offset: 0x68
	// Line 3278, Address: 0x2c3f4c, Func Offset: 0x6c
	// Line 3284, Address: 0x2c3f50, Func Offset: 0x70
	// Line 3277, Address: 0x2c3f54, Func Offset: 0x74
	// Line 3278, Address: 0x2c3f5c, Func Offset: 0x7c
	// Line 3284, Address: 0x2c3f60, Func Offset: 0x80
	// Line 3285, Address: 0x2c3f64, Func Offset: 0x84
	// Line 3278, Address: 0x2c3f6c, Func Offset: 0x8c
	// Line 3290, Address: 0x2c3f70, Func Offset: 0x90
	// Line 3285, Address: 0x2c3f74, Func Offset: 0x94
	// Line 3278, Address: 0x2c3f78, Func Offset: 0x98
	// Line 3284, Address: 0x2c3f80, Func Offset: 0xa0
	// Line 3290, Address: 0x2c3f84, Func Offset: 0xa4
	// Line 3284, Address: 0x2c3f88, Func Offset: 0xa8
	// Line 3285, Address: 0x2c3f8c, Func Offset: 0xac
	// Line 3290, Address: 0x2c3f94, Func Offset: 0xb4
	// Line 3285, Address: 0x2c3f98, Func Offset: 0xb8
	// Line 3290, Address: 0x2c3fa0, Func Offset: 0xc0
	// Line 3297, Address: 0x2c3fb0, Func Offset: 0xd0
	// Line 3299, Address: 0x2c3fbc, Func Offset: 0xdc
	// Line 3300, Address: 0x2c3fe0, Func Offset: 0x100
	// Line 3301, Address: 0x2c3fe8, Func Offset: 0x108
	// Line 3304, Address: 0x2c3fec, Func Offset: 0x10c
	// Line 3305, Address: 0x2c3ff4, Func Offset: 0x114
	// Line 3312, Address: 0x2c4034, Func Offset: 0x154
	// Line 3307, Address: 0x2c4038, Func Offset: 0x158
	// Line 3310, Address: 0x2c4044, Func Offset: 0x164
	// Line 3311, Address: 0x2c4058, Func Offset: 0x178
	// Line 3312, Address: 0x2c4070, Func Offset: 0x190
	// Line 3314, Address: 0x2c4074, Func Offset: 0x194
	// Line 3316, Address: 0x2c4078, Func Offset: 0x198
	// Line 3317, Address: 0x2c4084, Func Offset: 0x1a4
	// Line 3318, Address: 0x2c408c, Func Offset: 0x1ac
	// Line 3319, Address: 0x2c4094, Func Offset: 0x1b4
	// Line 3320, Address: 0x2c409c, Func Offset: 0x1bc
	// Line 3323, Address: 0x2c40a0, Func Offset: 0x1c0
	// Line 3324, Address: 0x2c40b4, Func Offset: 0x1d4
	// Line 3328, Address: 0x2c40cc, Func Offset: 0x1ec
	// Line 3329, Address: 0x2c40d0, Func Offset: 0x1f0
	// Line 3330, Address: 0x2c40dc, Func Offset: 0x1fc
	// Line 3331, Address: 0x2c40e4, Func Offset: 0x204
	// Line 3338, Address: 0x2c40fc, Func Offset: 0x21c
	// Line 3333, Address: 0x2c4100, Func Offset: 0x220
	// Line 3336, Address: 0x2c410c, Func Offset: 0x22c
	// Line 3337, Address: 0x2c4120, Func Offset: 0x240
	// Line 3338, Address: 0x2c4138, Func Offset: 0x258
	// Line 3340, Address: 0x2c413c, Func Offset: 0x25c
	// Line 3342, Address: 0x2c4140, Func Offset: 0x260
	// Line 3343, Address: 0x2c4158, Func Offset: 0x278
	// Line 3345, Address: 0x2c4160, Func Offset: 0x280
	// Line 3346, Address: 0x2c4168, Func Offset: 0x288
	// Line 3348, Address: 0x2c416c, Func Offset: 0x28c
	// Line 3349, Address: 0x2c4170, Func Offset: 0x290
	// Line 3350, Address: 0x2c4184, Func Offset: 0x2a4
	// Line 3354, Address: 0x2c419c, Func Offset: 0x2bc
	// Line 3355, Address: 0x2c41a0, Func Offset: 0x2c0
	// Line 3360, Address: 0x2c41ac, Func Offset: 0x2cc
	// Line 3361, Address: 0x2c41f8, Func Offset: 0x318
	// Line 3363, Address: 0x2c4220, Func Offset: 0x340
	// Line 3381, Address: 0x2c425c, Func Offset: 0x37c
	// Line 3382, Address: 0x2c426c, Func Offset: 0x38c
	// Line 3383, Address: 0x2c4278, Func Offset: 0x398
	// Line 3384, Address: 0x2c4280, Func Offset: 0x3a0
	// Line 3385, Address: 0x2c4288, Func Offset: 0x3a8
	// Line 3386, Address: 0x2c428c, Func Offset: 0x3ac
	// Line 3387, Address: 0x2c4290, Func Offset: 0x3b0
	// Line 3390, Address: 0x2c429c, Func Offset: 0x3bc
	// Line 3399, Address: 0x2c42a4, Func Offset: 0x3c4
	// Line 3400, Address: 0x2c42a8, Func Offset: 0x3c8
	// Line 3401, Address: 0x2c42ac, Func Offset: 0x3cc
	// Line 3402, Address: 0x2c42b0, Func Offset: 0x3d0
	// Line 3403, Address: 0x2c42bc, Func Offset: 0x3dc
	// Line 3405, Address: 0x2c42c4, Func Offset: 0x3e4
	// Line 3407, Address: 0x2c42cc, Func Offset: 0x3ec
	// Line 3408, Address: 0x2c42d0, Func Offset: 0x3f0
	// Line 3410, Address: 0x2c42d4, Func Offset: 0x3f4
	// Line 3409, Address: 0x2c42d8, Func Offset: 0x3f8
	// Line 3410, Address: 0x2c42dc, Func Offset: 0x3fc
	// Line 3411, Address: 0x2c42e0, Func Offset: 0x400
	// Line 3412, Address: 0x2c42e4, Func Offset: 0x404
	// Line 3411, Address: 0x2c42e8, Func Offset: 0x408
	// Line 3412, Address: 0x2c42ec, Func Offset: 0x40c
	// Line 3413, Address: 0x2c42f4, Func Offset: 0x414
	// Line 3414, Address: 0x2c4308, Func Offset: 0x428
	// Line 3417, Address: 0x2c4310, Func Offset: 0x430
	// Line 3418, Address: 0x2c4314, Func Offset: 0x434
	// Line 3419, Address: 0x2c4318, Func Offset: 0x438
	// Line 3420, Address: 0x2c431c, Func Offset: 0x43c
	// Line 3421, Address: 0x2c4328, Func Offset: 0x448
	// Line 3452, Address: 0x2c4334, Func Offset: 0x454
	// Line 3454, Address: 0x2c433c, Func Offset: 0x45c
	// Line 3455, Address: 0x2c4358, Func Offset: 0x478
	// Line 3457, Address: 0x2c4360, Func Offset: 0x480
	// Line 3459, Address: 0x2c4368, Func Offset: 0x488
	// Line 3460, Address: 0x2c4384, Func Offset: 0x4a4
	// Line 3464, Address: 0x2c438c, Func Offset: 0x4ac
	// Line 3465, Address: 0x2c4394, Func Offset: 0x4b4
	// Line 3466, Address: 0x2c43c4, Func Offset: 0x4e4
	// Line 3468, Address: 0x2c43d0, Func Offset: 0x4f0
	// Line 3466, Address: 0x2c43d8, Func Offset: 0x4f8
	// Line 3467, Address: 0x2c43dc, Func Offset: 0x4fc
	// Line 3468, Address: 0x2c43e0, Func Offset: 0x500
	// Line 3473, Address: 0x2c43e8, Func Offset: 0x508
	// Line 3472, Address: 0x2c4400, Func Offset: 0x520
	// Line 3473, Address: 0x2c4404, Func Offset: 0x524
	// Func End, Address: 0x2c440c, Func Offset: 0x52c
}

/* 100% match */
int CheckStartButton() { // Line 3511, Address: 0x2c4410, 0x2c441c



















































    // temp var not originally outputted by dwarf2cpp
    ADV_WORK* temp = (ADV_WORK*)&AdvWork; // Line 3564, Address: 0x2c4414, 0x2c4420













    if ((Pad[temp->PortId].press & 0x800)) { // Line 3578, Address: 0x2c444c

        CallSystemSeBasic(3, 0, 0); // Line 3580, Address: 0x2c445c



        StopAdvScreenSaver(0); // Line 3584, Address: 0x2c4464
        return 1;
    }
    return 0; // Line 3587, Address: 0x2c446c
} // Line 3588, Address: 0x2c4470

//
// Start address: 0x2c4480
int Adv_BioCvTitle()
{
	unsigned int a;
	_anon13 poly[4];
	unsigned int McCrntResult;
	int TitleSoftResetFlag;
	int j;
	int i;
	int ReturnCode;
	_anon8* ap;
	unsigned int ulFrame;
	unsigned int McPrevResult;
	// Line 3635, Address: 0x2c4480, Func Offset: 0
	// Line 3636, Address: 0x2c4498, Func Offset: 0x18
	// Line 3637, Address: 0x2c44a0, Func Offset: 0x20
	// Line 3646, Address: 0x2c44a4, Func Offset: 0x24
	// Line 3647, Address: 0x2c44ac, Func Offset: 0x2c
	// Line 3648, Address: 0x2c44b4, Func Offset: 0x34
	// Line 3649, Address: 0x2c44bc, Func Offset: 0x3c
	// Line 3650, Address: 0x2c44c4, Func Offset: 0x44
	// Line 3651, Address: 0x2c44d0, Func Offset: 0x50
	// Line 3653, Address: 0x2c44e0, Func Offset: 0x60
	// Line 3652, Address: 0x2c44e4, Func Offset: 0x64
	// Line 3653, Address: 0x2c44e8, Func Offset: 0x68
	// Line 3657, Address: 0x2c44ec, Func Offset: 0x6c
	// Line 3659, Address: 0x2c4518, Func Offset: 0x98
	// Line 3660, Address: 0x2c4528, Func Offset: 0xa8
	// Line 3661, Address: 0x2c4530, Func Offset: 0xb0
	// Line 3662, Address: 0x2c4538, Func Offset: 0xb8
	// Line 3664, Address: 0x2c453c, Func Offset: 0xbc
	// Line 3666, Address: 0x2c4544, Func Offset: 0xc4
	// Line 3665, Address: 0x2c4548, Func Offset: 0xc8
	// Line 3667, Address: 0x2c4550, Func Offset: 0xd0
	// Line 3666, Address: 0x2c4554, Func Offset: 0xd4
	// Line 3667, Address: 0x2c4558, Func Offset: 0xd8
	// Line 3666, Address: 0x2c455c, Func Offset: 0xdc
	// Line 3667, Address: 0x2c4560, Func Offset: 0xe0
	// Line 3668, Address: 0x2c456c, Func Offset: 0xec
	// Line 3669, Address: 0x2c457c, Func Offset: 0xfc
	// Line 3671, Address: 0x2c4580, Func Offset: 0x100
	// Line 3670, Address: 0x2c4584, Func Offset: 0x104
	// Line 3671, Address: 0x2c4588, Func Offset: 0x108
	// Line 3672, Address: 0x2c458c, Func Offset: 0x10c
	// Line 3690, Address: 0x2c4594, Func Offset: 0x114
	// Line 3691, Address: 0x2c45bc, Func Offset: 0x13c
	// Line 3693, Address: 0x2c45c0, Func Offset: 0x140
	// Line 3694, Address: 0x2c45d0, Func Offset: 0x150
	// Line 3693, Address: 0x2c45d4, Func Offset: 0x154
	// Line 3694, Address: 0x2c45d8, Func Offset: 0x158
	// Line 3693, Address: 0x2c45dc, Func Offset: 0x15c
	// Line 3694, Address: 0x2c45e4, Func Offset: 0x164
	// Line 3700, Address: 0x2c45ec, Func Offset: 0x16c
	// Line 3694, Address: 0x2c45f0, Func Offset: 0x170
	// Line 3700, Address: 0x2c45f8, Func Offset: 0x178
	// Line 3701, Address: 0x2c460c, Func Offset: 0x18c
	// Line 3704, Address: 0x2c4614, Func Offset: 0x194
	// Line 3723, Address: 0x2c4620, Func Offset: 0x1a0
	// Line 3725, Address: 0x2c4628, Func Offset: 0x1a8
	// Line 3724, Address: 0x2c462c, Func Offset: 0x1ac
	// Line 3726, Address: 0x2c4630, Func Offset: 0x1b0
	// Line 3725, Address: 0x2c4634, Func Offset: 0x1b4
	// Line 3727, Address: 0x2c4638, Func Offset: 0x1b8
	// Line 3726, Address: 0x2c463c, Func Offset: 0x1bc
	// Line 3727, Address: 0x2c4640, Func Offset: 0x1c0
	// Line 3731, Address: 0x2c4644, Func Offset: 0x1c4
	// Line 3735, Address: 0x2c4670, Func Offset: 0x1f0
	// Line 3738, Address: 0x2c4678, Func Offset: 0x1f8
	// Line 3761, Address: 0x2c4680, Func Offset: 0x200
	// Line 3777, Address: 0x2c4688, Func Offset: 0x208
	// Line 3779, Address: 0x2c4690, Func Offset: 0x210
	// Line 3778, Address: 0x2c4694, Func Offset: 0x214
	// Line 3780, Address: 0x2c4698, Func Offset: 0x218
	// Line 3779, Address: 0x2c469c, Func Offset: 0x21c
	// Line 3780, Address: 0x2c46a0, Func Offset: 0x220
	// Line 3781, Address: 0x2c46a4, Func Offset: 0x224
	// Line 3785, Address: 0x2c46a8, Func Offset: 0x228
	// Line 3790, Address: 0x2c46d4, Func Offset: 0x254
	// Line 3798, Address: 0x2c46dc, Func Offset: 0x25c
	// Line 3814, Address: 0x2c46e0, Func Offset: 0x260
	// Line 3815, Address: 0x2c46e4, Func Offset: 0x264
	// Line 3817, Address: 0x2c46ec, Func Offset: 0x26c
	// Line 3818, Address: 0x2c4704, Func Offset: 0x284
	// Line 3819, Address: 0x2c470c, Func Offset: 0x28c
	// Line 3821, Address: 0x2c472c, Func Offset: 0x2ac
	// Line 3819, Address: 0x2c4730, Func Offset: 0x2b0
	// Line 3821, Address: 0x2c4734, Func Offset: 0x2b4
	// Line 3822, Address: 0x2c473c, Func Offset: 0x2bc
	// Line 3823, Address: 0x2c4740, Func Offset: 0x2c0
	// Line 3825, Address: 0x2c4748, Func Offset: 0x2c8
	// Line 3826, Address: 0x2c4750, Func Offset: 0x2d0
	// Line 3828, Address: 0x2c4758, Func Offset: 0x2d8
	// Line 3836, Address: 0x2c4768, Func Offset: 0x2e8
	// Line 3838, Address: 0x2c4784, Func Offset: 0x304
	// Line 3839, Address: 0x2c47a0, Func Offset: 0x320
	// Line 3840, Address: 0x2c47b0, Func Offset: 0x330
	// Line 3842, Address: 0x2c47b8, Func Offset: 0x338
	// Line 3843, Address: 0x2c47cc, Func Offset: 0x34c
	// Line 3844, Address: 0x2c47d0, Func Offset: 0x350
	// Line 3846, Address: 0x2c47d8, Func Offset: 0x358
	// Line 3847, Address: 0x2c47e8, Func Offset: 0x368
	// Line 3853, Address: 0x2c4820, Func Offset: 0x3a0
	// Line 3854, Address: 0x2c4824, Func Offset: 0x3a4
	// Line 3861, Address: 0x2c482c, Func Offset: 0x3ac
	// Line 3862, Address: 0x2c4830, Func Offset: 0x3b0
	// Line 3863, Address: 0x2c4838, Func Offset: 0x3b8
	// Line 3867, Address: 0x2c4840, Func Offset: 0x3c0
	// Line 3869, Address: 0x2c4848, Func Offset: 0x3c8
	// Line 3871, Address: 0x2c4850, Func Offset: 0x3d0
	// Line 3872, Address: 0x2c4854, Func Offset: 0x3d4
	// Line 3873, Address: 0x2c4864, Func Offset: 0x3e4
	// Line 3872, Address: 0x2c486c, Func Offset: 0x3ec
	// Line 3875, Address: 0x2c4870, Func Offset: 0x3f0
	// Line 3877, Address: 0x2c4874, Func Offset: 0x3f4
	// Line 3872, Address: 0x2c4878, Func Offset: 0x3f8
	// Line 3873, Address: 0x2c4880, Func Offset: 0x400
	// Line 3875, Address: 0x2c4898, Func Offset: 0x418
	// Line 3876, Address: 0x2c489c, Func Offset: 0x41c
	// Line 3877, Address: 0x2c48a0, Func Offset: 0x420
	// Line 3878, Address: 0x2c48a4, Func Offset: 0x424
	// Line 3879, Address: 0x2c48ac, Func Offset: 0x42c
	// Line 3880, Address: 0x2c48b0, Func Offset: 0x430
	// Line 3882, Address: 0x2c48b8, Func Offset: 0x438
	// Line 3883, Address: 0x2c48c0, Func Offset: 0x440
	// Line 3882, Address: 0x2c48c8, Func Offset: 0x448
	// Line 3883, Address: 0x2c48d0, Func Offset: 0x450
	// Line 3885, Address: 0x2c48e4, Func Offset: 0x464
	// Line 3886, Address: 0x2c4904, Func Offset: 0x484
	// Line 3887, Address: 0x2c4908, Func Offset: 0x488
	// Line 3889, Address: 0x2c490c, Func Offset: 0x48c
	// Line 3891, Address: 0x2c4914, Func Offset: 0x494
	// Line 3892, Address: 0x2c4934, Func Offset: 0x4b4
	// Line 3893, Address: 0x2c4938, Func Offset: 0x4b8
	// Line 3897, Address: 0x2c4940, Func Offset: 0x4c0
	// Line 3898, Address: 0x2c494c, Func Offset: 0x4cc
	// Line 3897, Address: 0x2c4954, Func Offset: 0x4d4
	// Line 3898, Address: 0x2c4958, Func Offset: 0x4d8
	// Line 3899, Address: 0x2c4968, Func Offset: 0x4e8
	// Line 3901, Address: 0x2c497c, Func Offset: 0x4fc
	// Line 3900, Address: 0x2c4980, Func Offset: 0x500
	// Line 3901, Address: 0x2c4984, Func Offset: 0x504
	// Line 3902, Address: 0x2c4988, Func Offset: 0x508
	// Line 3903, Address: 0x2c498c, Func Offset: 0x50c
	// Line 3917, Address: 0x2c4994, Func Offset: 0x514
	// Line 3982, Address: 0x2c49a4, Func Offset: 0x524
	// Line 3983, Address: 0x2c49ac, Func Offset: 0x52c
	// Line 3984, Address: 0x2c49b4, Func Offset: 0x534
	// Line 3985, Address: 0x2c49bc, Func Offset: 0x53c
	// Line 3993, Address: 0x2c49c4, Func Offset: 0x544
	// Line 3994, Address: 0x2c49cc, Func Offset: 0x54c
	// Line 3996, Address: 0x2c49d4, Func Offset: 0x554
	// Line 3997, Address: 0x2c49dc, Func Offset: 0x55c
	// Line 3998, Address: 0x2c49e4, Func Offset: 0x564
	// Line 4000, Address: 0x2c49ec, Func Offset: 0x56c
	// Line 4001, Address: 0x2c49f4, Func Offset: 0x574
	// Line 4002, Address: 0x2c49fc, Func Offset: 0x57c
	// Line 4001, Address: 0x2c4a04, Func Offset: 0x584
	// Line 4006, Address: 0x2c4a08, Func Offset: 0x588
	// Line 4001, Address: 0x2c4a0c, Func Offset: 0x58c
	// Line 4006, Address: 0x2c4a10, Func Offset: 0x590
	// Line 4001, Address: 0x2c4a14, Func Offset: 0x594
	// Line 4002, Address: 0x2c4a1c, Func Offset: 0x59c
	// Line 4006, Address: 0x2c4a34, Func Offset: 0x5b4
	// Line 4007, Address: 0x2c4a38, Func Offset: 0x5b8
	// Line 4017, Address: 0x2c4a40, Func Offset: 0x5c0
	// Line 4018, Address: 0x2c4a5c, Func Offset: 0x5dc
	// Line 4021, Address: 0x2c4a64, Func Offset: 0x5e4
	// Line 4022, Address: 0x2c4a70, Func Offset: 0x5f0
	// Line 4023, Address: 0x2c4a84, Func Offset: 0x604
	// Line 4031, Address: 0x2c4a8c, Func Offset: 0x60c
	// Line 4033, Address: 0x2c4a9c, Func Offset: 0x61c
	// Line 4034, Address: 0x2c4aa8, Func Offset: 0x628
	// Line 4036, Address: 0x2c4ac0, Func Offset: 0x640
	// Line 4037, Address: 0x2c4acc, Func Offset: 0x64c
	// Line 4040, Address: 0x2c4ad4, Func Offset: 0x654
	// Line 4042, Address: 0x2c4ae4, Func Offset: 0x664
	// Line 4043, Address: 0x2c4aec, Func Offset: 0x66c
	// Line 4044, Address: 0x2c4af4, Func Offset: 0x674
	// Line 4046, Address: 0x2c4afc, Func Offset: 0x67c
	// Line 4048, Address: 0x2c4b08, Func Offset: 0x688
	// Line 4049, Address: 0x2c4b14, Func Offset: 0x694
	// Line 4051, Address: 0x2c4b2c, Func Offset: 0x6ac
	// Line 4052, Address: 0x2c4b38, Func Offset: 0x6b8
	// Line 4055, Address: 0x2c4b40, Func Offset: 0x6c0
	// Line 4058, Address: 0x2c4b50, Func Offset: 0x6d0
	// Line 4059, Address: 0x2c4b58, Func Offset: 0x6d8
	// Line 4060, Address: 0x2c4b5c, Func Offset: 0x6dc
	// Line 4064, Address: 0x2c4b64, Func Offset: 0x6e4
	// Line 4065, Address: 0x2c4b70, Func Offset: 0x6f0
	// Line 4066, Address: 0x2c4b84, Func Offset: 0x704
	// Line 4068, Address: 0x2c4b9c, Func Offset: 0x71c
	// Line 4069, Address: 0x2c4ba8, Func Offset: 0x728
	// Line 4070, Address: 0x2c4bb0, Func Offset: 0x730
	// Line 4073, Address: 0x2c4bb8, Func Offset: 0x738
	// Line 4074, Address: 0x2c4bc8, Func Offset: 0x748
	// Line 4076, Address: 0x2c4bd0, Func Offset: 0x750
	// Line 4084, Address: 0x2c4bd8, Func Offset: 0x758
	// Line 4085, Address: 0x2c4bec, Func Offset: 0x76c
	// Line 4087, Address: 0x2c4bf4, Func Offset: 0x774
	// Line 4088, Address: 0x2c4c08, Func Offset: 0x788
	// Line 4089, Address: 0x2c4c10, Func Offset: 0x790
	// Line 4091, Address: 0x2c4c18, Func Offset: 0x798
	// Line 4092, Address: 0x2c4c20, Func Offset: 0x7a0
	// Line 4093, Address: 0x2c4c30, Func Offset: 0x7b0
	// Line 4095, Address: 0x2c4c38, Func Offset: 0x7b8
	// Line 4096, Address: 0x2c4c48, Func Offset: 0x7c8
	// Line 4097, Address: 0x2c4c58, Func Offset: 0x7d8
	// Line 4099, Address: 0x2c4c60, Func Offset: 0x7e0
	// Line 4100, Address: 0x2c4c70, Func Offset: 0x7f0
	// Line 4101, Address: 0x2c4c78, Func Offset: 0x7f8
	// Line 4103, Address: 0x2c4c80, Func Offset: 0x800
	// Line 4104, Address: 0x2c4c88, Func Offset: 0x808
	// Line 4105, Address: 0x2c4c98, Func Offset: 0x818
	// Line 4107, Address: 0x2c4ca0, Func Offset: 0x820
	// Line 4108, Address: 0x2c4cb0, Func Offset: 0x830
	// Line 4109, Address: 0x2c4cc0, Func Offset: 0x840
	// Line 4111, Address: 0x2c4cc8, Func Offset: 0x848
	// Line 4112, Address: 0x2c4cd8, Func Offset: 0x858
	// Line 4113, Address: 0x2c4ce0, Func Offset: 0x860
	// Line 4156, Address: 0x2c4ce8, Func Offset: 0x868
	// Line 4157, Address: 0x2c4cf8, Func Offset: 0x878
	// Line 4158, Address: 0x2c4cfc, Func Offset: 0x87c
	// Line 4159, Address: 0x2c4d04, Func Offset: 0x884
	// Line 4160, Address: 0x2c4d0c, Func Offset: 0x88c
	// Line 4161, Address: 0x2c4d18, Func Offset: 0x898
	// Line 4167, Address: 0x2c4d34, Func Offset: 0x8b4
	// Line 4169, Address: 0x2c4d50, Func Offset: 0x8d0
	// Line 4171, Address: 0x2c4d58, Func Offset: 0x8d8
	// Line 4170, Address: 0x2c4d60, Func Offset: 0x8e0
	// Line 4171, Address: 0x2c4d64, Func Offset: 0x8e4
	// Line 4172, Address: 0x2c4d68, Func Offset: 0x8e8
	// Line 4177, Address: 0x2c4d6c, Func Offset: 0x8ec
	// Line 4173, Address: 0x2c4d70, Func Offset: 0x8f0
	// Line 4174, Address: 0x2c4d74, Func Offset: 0x8f4
	// Line 4175, Address: 0x2c4d7c, Func Offset: 0x8fc
	// Line 4176, Address: 0x2c4d80, Func Offset: 0x900
	// Line 4177, Address: 0x2c4d84, Func Offset: 0x904
	// Line 4178, Address: 0x2c4d8c, Func Offset: 0x90c
	// Line 4179, Address: 0x2c4d90, Func Offset: 0x910
	// Line 4180, Address: 0x2c4d94, Func Offset: 0x914
	// Line 4181, Address: 0x2c4d98, Func Offset: 0x918
	// Line 4182, Address: 0x2c4d9c, Func Offset: 0x91c
	// Line 4183, Address: 0x2c4da0, Func Offset: 0x920
	// Line 4184, Address: 0x2c4da4, Func Offset: 0x924
	// Line 4185, Address: 0x2c4da8, Func Offset: 0x928
	// Line 4188, Address: 0x2c4db8, Func Offset: 0x938
	// Line 4189, Address: 0x2c4dc4, Func Offset: 0x944
	// Line 4188, Address: 0x2c4dcc, Func Offset: 0x94c
	// Line 4189, Address: 0x2c4dd0, Func Offset: 0x950
	// Line 4190, Address: 0x2c4de0, Func Offset: 0x960
	// Line 4198, Address: 0x2c4de4, Func Offset: 0x964
	// Line 4199, Address: 0x2c4df4, Func Offset: 0x974
	// Line 4200, Address: 0x2c4dfc, Func Offset: 0x97c
	// Line 4201, Address: 0x2c4e04, Func Offset: 0x984
	// Line 4208, Address: 0x2c4e2c, Func Offset: 0x9ac
	// Line 4210, Address: 0x2c4e38, Func Offset: 0x9b8
	// Line 4211, Address: 0x2c4e44, Func Offset: 0x9c4
	// Line 4216, Address: 0x2c4e4c, Func Offset: 0x9cc
	// Line 4212, Address: 0x2c4e50, Func Offset: 0x9d0
	// Line 4218, Address: 0x2c4e54, Func Offset: 0x9d4
	// Line 4219, Address: 0x2c4e5c, Func Offset: 0x9dc
	// Line 4222, Address: 0x2c4e78, Func Offset: 0x9f8
	// Line 4223, Address: 0x2c4e7c, Func Offset: 0x9fc
	// Line 4224, Address: 0x2c4e80, Func Offset: 0xa00
	// Line 4225, Address: 0x2c4e84, Func Offset: 0xa04
	// Line 4228, Address: 0x2c4e8c, Func Offset: 0xa0c
	// Line 4229, Address: 0x2c4e90, Func Offset: 0xa10
	// Func End, Address: 0x2c4eac, Func Offset: 0xa2c
}


/* 100% match */
void ResetOptionMenuParam(int Mode) { // Line 4243, Address: 0x2c4eb0
    ADV_WORK* ap = &AdvWork; // Line 4244, Address: 0x2c4ebc
    int i;

    switch (Mode) { // Line 4247, Address: 0x2c4ec4
        case 0:
            sys->vibration = GetUseVibrationUnit(); // Line 4249, Address: 0x2c4ee0









            OptionDef[0].Item = GetSoundMode(); // Line 4259, Address: 0x2c4ef0

            OptionDef[1].Item = sys->keytype; // Line 4261, Address: 0x2c4f00
            OptionDef[2].Item = 0; // Line 4262, Address: 0x2c4f14
            OptionDef[3].Item = 0; // Line 4263, Address: 0x2c4f1c
            OptionDef[4].Item = !(sys->vibration != 0); // Line 4264, Address: 0x2c4f24
            OptionDef[5].Item = 0; // Line 4265, Address: 0x2c4f38
            OptionDef[6].Item = 0; // Line 4266, Address: 0x2c4f40
            ap->OptScrX = sys->adjust_x; // Line 4267, Address: 0x2c4f48, 0x2c4f50
            ap->OptScrY = sys->adjust_y; // Line 4268, Address: 0x2c4f4c, 0x2c4f54, 0x2c4f60
            ap->OptLevel = 0; // Line 4269, Address: 0x2c4f64

            ap->vibration = sys->vibration; // Line 4271, Address: 0x2c4f5c, 0x2c4f68, 0x2c4f74
            ap->keytype = sys->keytype; // Line 4272, Address: 0x2c4f70, 0x2c4f78, 0x2c4f84
            ap->adjust_x = sys->adjust_x; // Line 4273, Address: 0x2c4f80, 0x2c4f88, 0x2c4f94
            ap->adjust_y = sys->adjust_y; // Line 4274, Address: 0x2c4f90, 0x2c4f98
            ap->SoundMode = GetSoundMode(); // Line 4275, Address: 0x2c4fa0

            for (i = 0; i < 2; ++i) { // Line 4277, Address: 0x2c4fac
                ap->ScrollPlatePosX[i][0] = 0.0; // Line 4278, Address: 0x2c4fb8
                ap->ScrollPlatePosX[i][1] = 672.0; // Line 4279, Address: 0x2c4fb0, 0x2c4fbc, 0x2c4fc4
            } // Line 4280, Address: 0x2c4fb4, 0x2c4fc0, 0x2c4fc8
            break; // Line 4281, Address: 0x2c4fd0
        case 2:
            sys->keytype = 0; // Line 4283, Address: 0x2c4fd8
            RequestAdjustDisplay(0, 0); // Line 4284, Address: 0x2c4fe0
            SetSoundModeEx(0, 0); // Line 4285, Address: 0x2c4ff0
            ap->SoundMode = 0; // Line 4286, Address: 0x2c4ffc
            if (CheckVibrationUnit(ap->PortId * 6 + 2) == 0) { // Line 4287, Address: 0x2c5000
                SetUseVibrationUnit(0); // Line 4288, Address: 0x2c5020
                sys->vibration = 0; // Line 4289, Address: 0x2c5028
            } else { // Line 4290, Address: 0x2c5030
                SetUseVibrationUnit(1); // Line 4291, Address: 0x2c5038
                sys->vibration = 1; // Line 4292, Address: 0x2c5044
            }
            OptionDef[0].Item = GetSoundMode(); // Line 4294, Address: 0x2c5054
            OptionDef[1].Item = sys->keytype; // Line 4295, Address: 0x2c5064
            OptionDef[2].Item = 0; // Line 4296, Address: 0x2c5078
            OptionDef[3].Item = 0; // Line 4297, Address: 0x2c5080
            OptionDef[4].Item = !(sys->vibration != 0); // Line 4298, Address: 0x2c5088
            OptionDef[5].Item = 0; // Line 4299, Address: 0x2c509c
            OptionDef[6].Item = 0; // Line 4300, Address: 0x2c50a4
            ap->OptScrX = sys->adjust_x; // Line 4301, Address: 0x2c50ac, 0x2c50b4
            ap->OptScrY = sys->adjust_y; // Line 4302, Address: 0x2c50b0, 0x2c50b8
            break;
    }

    for (i = 0; i < 7; ++i) { // Line 4306, Address: 0x2c50cc
        OptionDef[i].Item2 = 0; // Line 4307, Address: 0x2c50d0
        OptionDef[i].SelectFlag = 0; // Line 4308, Address: 0x2c50d8
        OptionDef[i].Switch = 0; // Line 4309, Address: 0x2c50dc
    } // Line 4310, Address: 0x2c50d4, 0x2c50e0
} // Line 4311, Address: 0x2c50ec

/* 99.70% match */
void DisplayOptionScrollPlate(float PosX, float PosY) { // Line 4321, Address: 0x2c5100, 0x2c5118
    int i;
    NJS_QUAD_TEXTURE* qp;
    qp = &Qtex[1]; // Line 4324, Address: 0x2c5114, 0x2c511c

    njTextureFilterMode(1); // Line 4326, Address: 0x2c5124
    for (i = 0; i < 6; ++i) { // Line 4327, Address: 0x2c5130
      SetQuadPos(PosX + (i * 112.0f), PosY, 114.0f, 80.0f, qp); // Line 4328, Address: 0x2c5134
      SetQuadUv2(400.0f, 80.0f * i, 114.0f, 80.0f, 2, qp); // Line 4329, Address: 0x2c5168
      AdvEasyDrawTexture(2, -1, qp, 0.01f * i + 0.92f, 0); // Line 4330, Address: 0x2c5198
    } // Line 4331, Address: 0x2c51d4
    njTextureFilterMode(0); // Line 4332, Address: 0x2c51e4
} // Line 4333, Address: 0x2c51ec

//
// Start address: 0x2c5210
void DisplayOptionBg(int Level, int Flag)
{
	_anon0* qp;
	float s[2];
	float y[2];
	int j;
	int i;
	_anon8* ap;
	// Line 4342, Address: 0x2c5210, Func Offset: 0
	// Line 4343, Address: 0x2c522c, Func Offset: 0x1c
	// Line 4342, Address: 0x2c5230, Func Offset: 0x20
	// Line 4343, Address: 0x2c5234, Func Offset: 0x24
	// Line 4342, Address: 0x2c5238, Func Offset: 0x28
	// Line 4345, Address: 0x2c5240, Func Offset: 0x30
	// Line 4342, Address: 0x2c5244, Func Offset: 0x34
	// Line 4345, Address: 0x2c5248, Func Offset: 0x38
	// Line 4342, Address: 0x2c524c, Func Offset: 0x3c
	// Line 4345, Address: 0x2c5254, Func Offset: 0x44
	// Line 4346, Address: 0x2c525c, Func Offset: 0x4c
	// Line 4345, Address: 0x2c5268, Func Offset: 0x58
	// Line 4346, Address: 0x2c526c, Func Offset: 0x5c
	// Line 4347, Address: 0x2c5270, Func Offset: 0x60
	// Line 4349, Address: 0x2c5278, Func Offset: 0x68
	// Line 4359, Address: 0x2c52a4, Func Offset: 0x94
	// Line 4360, Address: 0x2c52b0, Func Offset: 0xa0
	// Line 4361, Address: 0x2c52c0, Func Offset: 0xb0
	// Line 4362, Address: 0x2c52cc, Func Offset: 0xbc
	// Line 4363, Address: 0x2c52d0, Func Offset: 0xc0
	// Line 4362, Address: 0x2c52d8, Func Offset: 0xc8
	// Line 4363, Address: 0x2c52e0, Func Offset: 0xd0
	// Line 4364, Address: 0x2c52e8, Func Offset: 0xd8
	// Line 4366, Address: 0x2c52f0, Func Offset: 0xe0
	// Line 4370, Address: 0x2c52f8, Func Offset: 0xe8
	// Line 4365, Address: 0x2c5300, Func Offset: 0xf0
	// Line 4366, Address: 0x2c5308, Func Offset: 0xf8
	// Line 4367, Address: 0x2c531c, Func Offset: 0x10c
	// Line 4369, Address: 0x2c5334, Func Offset: 0x124
	// Line 4370, Address: 0x2c533c, Func Offset: 0x12c
	// Line 4371, Address: 0x2c5350, Func Offset: 0x140
	// Line 4374, Address: 0x2c5368, Func Offset: 0x158
	// Line 4375, Address: 0x2c5378, Func Offset: 0x168
	// Line 4374, Address: 0x2c5380, Func Offset: 0x170
	// Line 4375, Address: 0x2c5388, Func Offset: 0x178
	// Line 4377, Address: 0x2c5390, Func Offset: 0x180
	// Line 4386, Address: 0x2c5398, Func Offset: 0x188
	// Line 4388, Address: 0x2c53a0, Func Offset: 0x190
	// Line 4389, Address: 0x2c53c4, Func Offset: 0x1b4
	// Line 4390, Address: 0x2c53ec, Func Offset: 0x1dc
	// Line 4391, Address: 0x2c5410, Func Offset: 0x200
	// Line 4392, Address: 0x2c5438, Func Offset: 0x228
	// Line 4393, Address: 0x2c545c, Func Offset: 0x24c
	// Line 4395, Address: 0x2c5480, Func Offset: 0x270
	// Line 4398, Address: 0x2c5488, Func Offset: 0x278
	// Func End, Address: 0x2c54bc, Func Offset: 0x2ac
}

//
// Start address: 0x2c54c0
int DisplayOptionPlateLevel0(int PortId, int Flag)
{
	int ForceCursorMoveFlag;
	int PuruFindFlag;
	unsigned int Alpha;
	int ReturnCode;
	int i;
	_anon0* qp;
	_anon8* ap;
	// Line 4410, Address: 0x2c54c0, Func Offset: 0
	// Line 4411, Address: 0x2c54e4, Func Offset: 0x24
	// Line 4419, Address: 0x2c54ec, Func Offset: 0x2c
	// Line 4416, Address: 0x2c5504, Func Offset: 0x44
	// Line 4414, Address: 0x2c5508, Func Offset: 0x48
	// Line 4419, Address: 0x2c550c, Func Offset: 0x4c
	// Line 4420, Address: 0x2c551c, Func Offset: 0x5c
	// Line 4422, Address: 0x2c5528, Func Offset: 0x68
	// Line 4423, Address: 0x2c5534, Func Offset: 0x74
	// Line 4424, Address: 0x2c553c, Func Offset: 0x7c
	// Line 4423, Address: 0x2c5540, Func Offset: 0x80
	// Line 4424, Address: 0x2c5544, Func Offset: 0x84
	// Line 4425, Address: 0x2c5550, Func Offset: 0x90
	// Line 4426, Address: 0x2c5554, Func Offset: 0x94
	// Line 4425, Address: 0x2c5558, Func Offset: 0x98
	// Line 4430, Address: 0x2c555c, Func Offset: 0x9c
	// Line 4434, Address: 0x2c5564, Func Offset: 0xa4
	// Line 4436, Address: 0x2c55a4, Func Offset: 0xe4
	// Line 4438, Address: 0x2c55ac, Func Offset: 0xec
	// Line 4440, Address: 0x2c55bc, Func Offset: 0xfc
	// Line 4441, Address: 0x2c55c4, Func Offset: 0x104
	// Line 4442, Address: 0x2c55dc, Func Offset: 0x11c
	// Line 4443, Address: 0x2c5600, Func Offset: 0x140
	// Line 4444, Address: 0x2c5610, Func Offset: 0x150
	// Line 4445, Address: 0x2c5620, Func Offset: 0x160
	// Line 4446, Address: 0x2c5638, Func Offset: 0x178
	// Line 4447, Address: 0x2c5640, Func Offset: 0x180
	// Line 4449, Address: 0x2c5648, Func Offset: 0x188
	// Line 4450, Address: 0x2c5658, Func Offset: 0x198
	// Line 4451, Address: 0x2c5670, Func Offset: 0x1b0
	// Line 4452, Address: 0x2c5678, Func Offset: 0x1b8
	// Line 4453, Address: 0x2c5684, Func Offset: 0x1c4
	// Line 4454, Address: 0x2c568c, Func Offset: 0x1cc
	// Line 4458, Address: 0x2c5698, Func Offset: 0x1d8
	// Line 4459, Address: 0x2c56a0, Func Offset: 0x1e0
	// Line 4460, Address: 0x2c56a8, Func Offset: 0x1e8
	// Line 4461, Address: 0x2c56c4, Func Offset: 0x204
	// Line 4462, Address: 0x2c56d0, Func Offset: 0x210
	// Line 4463, Address: 0x2c56d4, Func Offset: 0x214
	// Line 4464, Address: 0x2c56dc, Func Offset: 0x21c
	// Line 4465, Address: 0x2c56e4, Func Offset: 0x224
	// Line 4466, Address: 0x2c56fc, Func Offset: 0x23c
	// Line 4469, Address: 0x2c5704, Func Offset: 0x244
	// Line 4470, Address: 0x2c5710, Func Offset: 0x250
	// Line 4471, Address: 0x2c5718, Func Offset: 0x258
	// Line 4472, Address: 0x2c5724, Func Offset: 0x264
	// Line 4474, Address: 0x2c5734, Func Offset: 0x274
	// Line 4475, Address: 0x2c573c, Func Offset: 0x27c
	// Line 4476, Address: 0x2c5744, Func Offset: 0x284
	// Line 4477, Address: 0x2c575c, Func Offset: 0x29c
	// Line 4480, Address: 0x2c5764, Func Offset: 0x2a4
	// Line 4484, Address: 0x2c5770, Func Offset: 0x2b0
	// Line 4485, Address: 0x2c5780, Func Offset: 0x2c0
	// Line 4486, Address: 0x2c57a4, Func Offset: 0x2e4
	// Line 4487, Address: 0x2c57c4, Func Offset: 0x304
	// Line 4488, Address: 0x2c57cc, Func Offset: 0x30c
	// Line 4490, Address: 0x2c57ec, Func Offset: 0x32c
	// Line 4492, Address: 0x2c57f8, Func Offset: 0x338
	// Line 4494, Address: 0x2c5800, Func Offset: 0x340
	// Line 4495, Address: 0x2c5808, Func Offset: 0x348
	// Line 4496, Address: 0x2c5814, Func Offset: 0x354
	// Line 4501, Address: 0x2c5824, Func Offset: 0x364
	// Line 4504, Address: 0x2c5830, Func Offset: 0x370
	// Line 4505, Address: 0x2c5838, Func Offset: 0x378
	// Line 4506, Address: 0x2c5844, Func Offset: 0x384
	// Line 4507, Address: 0x2c5868, Func Offset: 0x3a8
	// Line 4508, Address: 0x2c58a0, Func Offset: 0x3e0
	// Line 4509, Address: 0x2c58a8, Func Offset: 0x3e8
	// Line 4511, Address: 0x2c58c8, Func Offset: 0x408
	// Line 4512, Address: 0x2c58d4, Func Offset: 0x414
	// Line 4513, Address: 0x2c58d8, Func Offset: 0x418
	// Line 4515, Address: 0x2c58e0, Func Offset: 0x420
	// Line 4516, Address: 0x2c58ec, Func Offset: 0x42c
	// Line 4521, Address: 0x2c58f8, Func Offset: 0x438
	// Line 4530, Address: 0x2c590c, Func Offset: 0x44c
	// Line 4532, Address: 0x2c5910, Func Offset: 0x450
	// Line 4531, Address: 0x2c5914, Func Offset: 0x454
	// Line 4532, Address: 0x2c5918, Func Offset: 0x458
	// Line 4531, Address: 0x2c591c, Func Offset: 0x45c
	// Line 4532, Address: 0x2c5920, Func Offset: 0x460
	// Line 4533, Address: 0x2c592c, Func Offset: 0x46c
	// Line 4535, Address: 0x2c5938, Func Offset: 0x478
	// Line 4533, Address: 0x2c5940, Func Offset: 0x480
	// Line 4538, Address: 0x2c5954, Func Offset: 0x494
	// Line 4539, Address: 0x2c5978, Func Offset: 0x4b8
	// Line 4543, Address: 0x2c599c, Func Offset: 0x4dc
	// Line 4544, Address: 0x2c59c0, Func Offset: 0x500
	// Line 4548, Address: 0x2c59e4, Func Offset: 0x524
	// Line 4549, Address: 0x2c5a08, Func Offset: 0x548
	// Line 4553, Address: 0x2c5a30, Func Offset: 0x570
	// Line 4554, Address: 0x2c5a54, Func Offset: 0x594
	// Line 4558, Address: 0x2c5a7c, Func Offset: 0x5bc
	// Line 4559, Address: 0x2c5a9c, Func Offset: 0x5dc
	// Line 4563, Address: 0x2c5ac4, Func Offset: 0x604
	// Line 4564, Address: 0x2c5ae8, Func Offset: 0x628
	// Line 4568, Address: 0x2c5b10, Func Offset: 0x650
	// Line 4569, Address: 0x2c5b34, Func Offset: 0x674
	// Line 4573, Address: 0x2c5b5c, Func Offset: 0x69c
	// Line 4574, Address: 0x2c5b84, Func Offset: 0x6c4
	// Line 4578, Address: 0x2c5bac, Func Offset: 0x6ec
	// Line 4579, Address: 0x2c5bd4, Func Offset: 0x714
	// Line 4583, Address: 0x2c5bfc, Func Offset: 0x73c
	// Line 4584, Address: 0x2c5c24, Func Offset: 0x764
	// Line 4588, Address: 0x2c5c4c, Func Offset: 0x78c
	// Line 4589, Address: 0x2c5c70, Func Offset: 0x7b0
	// Line 4593, Address: 0x2c5cb0, Func Offset: 0x7f0
	// Line 4594, Address: 0x2c5cd8, Func Offset: 0x818
	// Line 4598, Address: 0x2c5d00, Func Offset: 0x840
	// Line 4599, Address: 0x2c5d28, Func Offset: 0x868
	// Line 4603, Address: 0x2c5d50, Func Offset: 0x890
	// Line 4604, Address: 0x2c5d74, Func Offset: 0x8b4
	// Line 4607, Address: 0x2c5da4, Func Offset: 0x8e4
	// Line 4609, Address: 0x2c5da8, Func Offset: 0x8e8
	// Line 4610, Address: 0x2c5db4, Func Offset: 0x8f4
	// Line 4612, Address: 0x2c5dc0, Func Offset: 0x900
	// Line 4611, Address: 0x2c5dc4, Func Offset: 0x904
	// Line 4612, Address: 0x2c5dc8, Func Offset: 0x908
	// Line 4613, Address: 0x2c5dcc, Func Offset: 0x90c
	// Line 4614, Address: 0x2c5dd4, Func Offset: 0x914
	// Line 4615, Address: 0x2c5ddc, Func Offset: 0x91c
	// Line 4616, Address: 0x2c5de0, Func Offset: 0x920
	// Line 4617, Address: 0x2c5e10, Func Offset: 0x950
	// Line 4619, Address: 0x2c5e20, Func Offset: 0x960
	// Line 4620, Address: 0x2c5e30, Func Offset: 0x970
	// Line 4621, Address: 0x2c5e3c, Func Offset: 0x97c
	// Line 4622, Address: 0x2c5e64, Func Offset: 0x9a4
	// Line 4623, Address: 0x2c5e6c, Func Offset: 0x9ac
	// Line 4625, Address: 0x2c5e94, Func Offset: 0x9d4
	// Line 4626, Address: 0x2c5ebc, Func Offset: 0x9fc
	// Line 4627, Address: 0x2c5ec4, Func Offset: 0xa04
	// Line 4628, Address: 0x2c5eec, Func Offset: 0xa2c
	// Line 4629, Address: 0x2c5ef8, Func Offset: 0xa38
	// Line 4630, Address: 0x2c5f20, Func Offset: 0xa60
	// Line 4631, Address: 0x2c5f28, Func Offset: 0xa68
	// Line 4635, Address: 0x2c5f50, Func Offset: 0xa90
	// Line 4636, Address: 0x2c5f60, Func Offset: 0xaa0
	// Line 4637, Address: 0x2c5f84, Func Offset: 0xac4
	// Line 4638, Address: 0x2c5fac, Func Offset: 0xaec
	// Line 4639, Address: 0x2c5fb4, Func Offset: 0xaf4
	// Line 4640, Address: 0x2c5fd8, Func Offset: 0xb18
	// Line 4643, Address: 0x2c6000, Func Offset: 0xb40
	// Line 4644, Address: 0x2c6010, Func Offset: 0xb50
	// Line 4645, Address: 0x2c6020, Func Offset: 0xb60
	// Line 4646, Address: 0x2c6048, Func Offset: 0xb88
	// Line 4647, Address: 0x2c6050, Func Offset: 0xb90
	// Line 4649, Address: 0x2c6078, Func Offset: 0xbb8
	// Line 4650, Address: 0x2c60a0, Func Offset: 0xbe0
	// Line 4651, Address: 0x2c60a8, Func Offset: 0xbe8
	// Line 4652, Address: 0x2c60d0, Func Offset: 0xc10
	// Line 4653, Address: 0x2c60e0, Func Offset: 0xc20
	// Line 4654, Address: 0x2c6108, Func Offset: 0xc48
	// Line 4655, Address: 0x2c6110, Func Offset: 0xc50
	// Line 4659, Address: 0x2c6138, Func Offset: 0xc78
	// Line 4661, Address: 0x2c615c, Func Offset: 0xc9c
	// Line 4663, Address: 0x2c6164, Func Offset: 0xca4
	// Line 4664, Address: 0x2c6168, Func Offset: 0xca8
	// Func End, Address: 0x2c6190, Func Offset: 0xcd0
}

//
// Start address: 0x2c6190
int DisplayOptionPlateLevel1(int PortId, int Flag)
{
	float KeyNameV[12];
	float KeyNameU[12];
	float KeyNameSizY[12];
	float KeyNameSizX[12];
	float KeyNamePosY[12];
	float KeyNamePosX[12];
	int ButtonSet[3][3];
	int i;
	int ReturnCode;
	_anon0* qp;
	_anon8* ap;
	// Line 4676, Address: 0x2c6190, Func Offset: 0
	// Line 4677, Address: 0x2c61bc, Func Offset: 0x2c
	// Line 4679, Address: 0x2c61c4, Func Offset: 0x34
	// Line 4684, Address: 0x2c61cc, Func Offset: 0x3c
	// Line 4706, Address: 0x2c61e4, Func Offset: 0x54
	// Line 4707, Address: 0x2c61e8, Func Offset: 0x58
	// Line 4706, Address: 0x2c61ec, Func Offset: 0x5c
	// Line 4684, Address: 0x2c61f0, Func Offset: 0x60
	// Line 4706, Address: 0x2c61f4, Func Offset: 0x64
	// Line 4684, Address: 0x2c61f8, Func Offset: 0x68
	// Line 4706, Address: 0x2c6200, Func Offset: 0x70
	// Line 4707, Address: 0x2c6208, Func Offset: 0x78
	// Line 4708, Address: 0x2c6210, Func Offset: 0x80
	// Line 4706, Address: 0x2c6218, Func Offset: 0x88
	// Line 4708, Address: 0x2c621c, Func Offset: 0x8c
	// Line 4709, Address: 0x2c6220, Func Offset: 0x90
	// Line 4706, Address: 0x2c6224, Func Offset: 0x94
	// Line 4707, Address: 0x2c6230, Func Offset: 0xa0
	// Line 4709, Address: 0x2c6238, Func Offset: 0xa8
	// Line 4710, Address: 0x2c6240, Func Offset: 0xb0
	// Line 4707, Address: 0x2c6244, Func Offset: 0xb4
	// Line 4708, Address: 0x2c6254, Func Offset: 0xc4
	// Line 4710, Address: 0x2c6260, Func Offset: 0xd0
	// Line 4711, Address: 0x2c6264, Func Offset: 0xd4
	// Line 4710, Address: 0x2c6268, Func Offset: 0xd8
	// Line 4708, Address: 0x2c626c, Func Offset: 0xdc
	// Line 4709, Address: 0x2c6278, Func Offset: 0xe8
	// Line 4711, Address: 0x2c6280, Func Offset: 0xf0
	// Line 4709, Address: 0x2c6288, Func Offset: 0xf8
	// Line 4710, Address: 0x2c6298, Func Offset: 0x108
	// Line 4711, Address: 0x2c62b0, Func Offset: 0x120
	// Line 4720, Address: 0x2c62c4, Func Offset: 0x134
	// Line 4721, Address: 0x2c62cc, Func Offset: 0x13c
	// Line 4722, Address: 0x2c62f4, Func Offset: 0x164
	// Line 4723, Address: 0x2c6300, Func Offset: 0x170
	// Line 4744, Address: 0x2c6304, Func Offset: 0x174
	// Line 4745, Address: 0x2c6314, Func Offset: 0x184
	// Line 4746, Address: 0x2c6320, Func Offset: 0x190
	// Line 4745, Address: 0x2c6328, Func Offset: 0x198
	// Line 4746, Address: 0x2c6340, Func Offset: 0x1b0
	// Line 4747, Address: 0x2c635c, Func Offset: 0x1cc
	// Line 4749, Address: 0x2c6370, Func Offset: 0x1e0
	// Line 4750, Address: 0x2c6394, Func Offset: 0x204
	// Line 4751, Address: 0x2c63a4, Func Offset: 0x214
	// Line 4752, Address: 0x2c63ac, Func Offset: 0x21c
	// Line 4753, Address: 0x2c63b8, Func Offset: 0x228
	// Line 4754, Address: 0x2c63c4, Func Offset: 0x234
	// Line 4753, Address: 0x2c63cc, Func Offset: 0x23c
	// Line 4754, Address: 0x2c63dc, Func Offset: 0x24c
	// Line 4753, Address: 0x2c63e4, Func Offset: 0x254
	// Line 4754, Address: 0x2c63ec, Func Offset: 0x25c
	// Line 4755, Address: 0x2c6414, Func Offset: 0x284
	// Line 4757, Address: 0x2c6418, Func Offset: 0x288
	// Line 4758, Address: 0x2c643c, Func Offset: 0x2ac
	// Line 4764, Address: 0x2c644c, Func Offset: 0x2bc
	// Line 4767, Address: 0x2c6454, Func Offset: 0x2c4
	// Line 4768, Address: 0x2c6478, Func Offset: 0x2e8
	// Line 4769, Address: 0x2c64a0, Func Offset: 0x310
	// Line 4840, Address: 0x2c64c0, Func Offset: 0x330
	// Line 4841, Address: 0x2c64e8, Func Offset: 0x358
	// Line 4842, Address: 0x2c650c, Func Offset: 0x37c
	// Line 4845, Address: 0x2c652c, Func Offset: 0x39c
	// Line 4846, Address: 0x2c6554, Func Offset: 0x3c4
	// Line 4847, Address: 0x2c657c, Func Offset: 0x3ec
	// Line 4850, Address: 0x2c659c, Func Offset: 0x40c
	// Line 4851, Address: 0x2c65c0, Func Offset: 0x430
	// Line 4852, Address: 0x2c6618, Func Offset: 0x488
	// Line 4855, Address: 0x2c6638, Func Offset: 0x4a8
	// Line 4856, Address: 0x2c665c, Func Offset: 0x4cc
	// Line 4857, Address: 0x2c6684, Func Offset: 0x4f4
	// Line 4860, Address: 0x2c66bc, Func Offset: 0x52c
	// Line 4861, Address: 0x2c66e0, Func Offset: 0x550
	// Line 4862, Address: 0x2c6708, Func Offset: 0x578
	// Line 4864, Address: 0x2c6740, Func Offset: 0x5b0
	// Line 4865, Address: 0x2c675c, Func Offset: 0x5cc
	// Line 4866, Address: 0x2c6788, Func Offset: 0x5f8
	// Line 4867, Address: 0x2c67ec, Func Offset: 0x65c
	// Line 4868, Address: 0x2c680c, Func Offset: 0x67c
	// Line 4869, Address: 0x2c6848, Func Offset: 0x6b8
	// Line 4870, Address: 0x2c6898, Func Offset: 0x708
	// Line 4871, Address: 0x2c68b8, Func Offset: 0x728
	// Line 4870, Address: 0x2c68c0, Func Offset: 0x730
	// Line 4871, Address: 0x2c68d4, Func Offset: 0x744
	// Line 4872, Address: 0x2c68dc, Func Offset: 0x74c
	// Line 4873, Address: 0x2c6910, Func Offset: 0x780
	// Line 4874, Address: 0x2c693c, Func Offset: 0x7ac
	// Line 4875, Address: 0x2c6948, Func Offset: 0x7b8
	// Line 4876, Address: 0x2c6978, Func Offset: 0x7e8
	// Line 4877, Address: 0x2c6980, Func Offset: 0x7f0
	// Line 4879, Address: 0x2c69a8, Func Offset: 0x818
	// Line 4880, Address: 0x2c69c8, Func Offset: 0x838
	// Line 4881, Address: 0x2c69d8, Func Offset: 0x848
	// Line 4882, Address: 0x2c6a24, Func Offset: 0x894
	// Line 4883, Address: 0x2c6a94, Func Offset: 0x904
	// Line 4884, Address: 0x2c6aac, Func Offset: 0x91c
	// Line 4885, Address: 0x2c6ad4, Func Offset: 0x944
	// Line 4886, Address: 0x2c6b20, Func Offset: 0x990
	// Line 4887, Address: 0x2c6b88, Func Offset: 0x9f8
	// Line 4888, Address: 0x2c6b90, Func Offset: 0xa00
	// Line 4889, Address: 0x2c6bd8, Func Offset: 0xa48
	// Line 4891, Address: 0x2c6c20, Func Offset: 0xa90
	// Line 4892, Address: 0x2c6c28, Func Offset: 0xa98
	// Line 4893, Address: 0x2c6c64, Func Offset: 0xad4
	// Line 4894, Address: 0x2c6cbc, Func Offset: 0xb2c
	// Line 4895, Address: 0x2c6cc0, Func Offset: 0xb30
	// Line 4896, Address: 0x2c6ce4, Func Offset: 0xb54
	// Line 4895, Address: 0x2c6ce8, Func Offset: 0xb58
	// Line 4896, Address: 0x2c6cf8, Func Offset: 0xb68
	// Line 4895, Address: 0x2c6cfc, Func Offset: 0xb6c
	// Line 4896, Address: 0x2c6d08, Func Offset: 0xb78
	// Line 4899, Address: 0x2c6d10, Func Offset: 0xb80
	// Line 4901, Address: 0x2c6d18, Func Offset: 0xb88
	// Line 4902, Address: 0x2c6d1c, Func Offset: 0xb8c
	// Func End, Address: 0x2c6d4c, Func Offset: 0xbbc
}

//
// Start address: 0x2c6d50
int DisplayOptionPlateLevel2(int PortId, int Flag)
{
	unsigned int CursorCol[4];
	char Str[4];
	_anon32 BotRigt;
	_anon32 TopLeft;
	int ReturnCode;
	_anon0* qp;
	_anon8* ap;
	// Line 4914, Address: 0x2c6d50, Func Offset: 0
	// Line 4915, Address: 0x2c6d6c, Func Offset: 0x1c
	// Line 4916, Address: 0x2c6d74, Func Offset: 0x24
	// Line 4922, Address: 0x2c6d7c, Func Offset: 0x2c
	// Line 4918, Address: 0x2c6d8c, Func Offset: 0x3c
	// Line 4925, Address: 0x2c6d90, Func Offset: 0x40
	// Line 4926, Address: 0x2c6d98, Func Offset: 0x48
	// Line 4927, Address: 0x2c6dc0, Func Offset: 0x70
	// Line 4929, Address: 0x2c6dcc, Func Offset: 0x7c
	// Line 4930, Address: 0x2c6dd4, Func Offset: 0x84
	// Line 4931, Address: 0x2c6de0, Func Offset: 0x90
	// Line 4932, Address: 0x2c6de8, Func Offset: 0x98
	// Line 4933, Address: 0x2c6df4, Func Offset: 0xa4
	// Line 4934, Address: 0x2c6e00, Func Offset: 0xb0
	// Line 4935, Address: 0x2c6e08, Func Offset: 0xb8
	// Line 4936, Address: 0x2c6e14, Func Offset: 0xc4
	// Line 4937, Address: 0x2c6e24, Func Offset: 0xd4
	// Line 4938, Address: 0x2c6e2c, Func Offset: 0xdc
	// Line 4939, Address: 0x2c6e38, Func Offset: 0xe8
	// Line 4940, Address: 0x2c6e44, Func Offset: 0xf4
	// Line 4942, Address: 0x2c6e48, Func Offset: 0xf8
	// Line 4943, Address: 0x2c6e50, Func Offset: 0x100
	// Line 4944, Address: 0x2c6e5c, Func Offset: 0x10c
	// Line 4945, Address: 0x2c6e6c, Func Offset: 0x11c
	// Line 4946, Address: 0x2c6e74, Func Offset: 0x124
	// Line 4947, Address: 0x2c6e80, Func Offset: 0x130
	// Line 4948, Address: 0x2c6e8c, Func Offset: 0x13c
	// Line 4950, Address: 0x2c6e90, Func Offset: 0x140
	// Line 4951, Address: 0x2c6e98, Func Offset: 0x148
	// Line 4952, Address: 0x2c6ea4, Func Offset: 0x154
	// Line 4953, Address: 0x2c6eb4, Func Offset: 0x164
	// Line 4954, Address: 0x2c6ebc, Func Offset: 0x16c
	// Line 4955, Address: 0x2c6ec8, Func Offset: 0x178
	// Line 4956, Address: 0x2c6ed4, Func Offset: 0x184
	// Line 4958, Address: 0x2c6ed8, Func Offset: 0x188
	// Line 4959, Address: 0x2c6ee0, Func Offset: 0x190
	// Line 4960, Address: 0x2c6eec, Func Offset: 0x19c
	// Line 4961, Address: 0x2c6efc, Func Offset: 0x1ac
	// Line 4962, Address: 0x2c6f04, Func Offset: 0x1b4
	// Line 4963, Address: 0x2c6f10, Func Offset: 0x1c0
	// Line 4964, Address: 0x2c6f1c, Func Offset: 0x1cc
	// Line 4977, Address: 0x2c6f24, Func Offset: 0x1d4
	// Line 4979, Address: 0x2c6f4c, Func Offset: 0x1fc
	// Line 4980, Address: 0x2c6f74, Func Offset: 0x224
	// Line 4986, Address: 0x2c6f94, Func Offset: 0x244
	// Line 4987, Address: 0x2c6fb8, Func Offset: 0x268
	// Line 4989, Address: 0x2c6fe4, Func Offset: 0x294
	// Line 4993, Address: 0x2c7008, Func Offset: 0x2b8
	// Line 4994, Address: 0x2c7030, Func Offset: 0x2e0
	// Line 4995, Address: 0x2c7058, Func Offset: 0x308
	// Line 5003, Address: 0x2c7078, Func Offset: 0x328
	// Line 5004, Address: 0x2c709c, Func Offset: 0x34c
	// Line 5005, Address: 0x2c70c4, Func Offset: 0x374
	// Line 5008, Address: 0x2c70e4, Func Offset: 0x394
	// Line 5009, Address: 0x2c7108, Func Offset: 0x3b8
	// Line 5010, Address: 0x2c7130, Func Offset: 0x3e0
	// Line 5013, Address: 0x2c7150, Func Offset: 0x400
	// Line 5014, Address: 0x2c7174, Func Offset: 0x424
	// Line 5015, Address: 0x2c719c, Func Offset: 0x44c
	// Line 5018, Address: 0x2c71bc, Func Offset: 0x46c
	// Line 5019, Address: 0x2c71e0, Func Offset: 0x490
	// Line 5020, Address: 0x2c7208, Func Offset: 0x4b8
	// Line 5023, Address: 0x2c7228, Func Offset: 0x4d8
	// Line 5024, Address: 0x2c724c, Func Offset: 0x4fc
	// Line 5025, Address: 0x2c7274, Func Offset: 0x524
	// Line 5028, Address: 0x2c7298, Func Offset: 0x548
	// Line 5029, Address: 0x2c72c0, Func Offset: 0x570
	// Line 5030, Address: 0x2c72ec, Func Offset: 0x59c
	// Line 5033, Address: 0x2c7310, Func Offset: 0x5c0
	// Line 5034, Address: 0x2c731c, Func Offset: 0x5cc
	// Line 5035, Address: 0x2c7344, Func Offset: 0x5f4
	// Line 5036, Address: 0x2c7370, Func Offset: 0x620
	// Line 5038, Address: 0x2c7394, Func Offset: 0x644
	// Line 5039, Address: 0x2c73bc, Func Offset: 0x66c
	// Line 5040, Address: 0x2c73e4, Func Offset: 0x694
	// Line 5041, Address: 0x2c7428, Func Offset: 0x6d8
	// Line 5042, Address: 0x2c744c, Func Offset: 0x6fc
	// Line 5043, Address: 0x2c7474, Func Offset: 0x724
	// Line 5044, Address: 0x2c74bc, Func Offset: 0x76c
	// Line 5047, Address: 0x2c74e0, Func Offset: 0x790
	// Line 5048, Address: 0x2c7508, Func Offset: 0x7b8
	// Line 5049, Address: 0x2c7530, Func Offset: 0x7e0
	// Line 5052, Address: 0x2c7554, Func Offset: 0x804
	// Line 5053, Address: 0x2c757c, Func Offset: 0x82c
	// Line 5054, Address: 0x2c75a8, Func Offset: 0x858
	// Line 5056, Address: 0x2c75cc, Func Offset: 0x87c
	// Line 5057, Address: 0x2c75d8, Func Offset: 0x888
	// Line 5058, Address: 0x2c7600, Func Offset: 0x8b0
	// Line 5059, Address: 0x2c762c, Func Offset: 0x8dc
	// Line 5061, Address: 0x2c7650, Func Offset: 0x900
	// Line 5062, Address: 0x2c7678, Func Offset: 0x928
	// Line 5063, Address: 0x2c76a0, Func Offset: 0x950
	// Line 5064, Address: 0x2c76e4, Func Offset: 0x994
	// Line 5065, Address: 0x2c7708, Func Offset: 0x9b8
	// Line 5066, Address: 0x2c7730, Func Offset: 0x9e0
	// Line 5067, Address: 0x2c7774, Func Offset: 0xa24
	// Line 5070, Address: 0x2c7798, Func Offset: 0xa48
	// Line 5071, Address: 0x2c77a0, Func Offset: 0xa50
	// Line 5072, Address: 0x2c77ac, Func Offset: 0xa5c
	// Line 5073, Address: 0x2c77bc, Func Offset: 0xa6c
	// Line 5074, Address: 0x2c77c4, Func Offset: 0xa74
	// Line 5076, Address: 0x2c77d0, Func Offset: 0xa80
	// Line 5075, Address: 0x2c77d4, Func Offset: 0xa84
	// Line 5076, Address: 0x2c77d8, Func Offset: 0xa88
	// Line 5075, Address: 0x2c77e8, Func Offset: 0xa98
	// Line 5076, Address: 0x2c77ec, Func Offset: 0xa9c
	// Line 5079, Address: 0x2c77f4, Func Offset: 0xaa4
	// Line 5082, Address: 0x2c77fc, Func Offset: 0xaac
	// Line 5084, Address: 0x2c7804, Func Offset: 0xab4
	// Line 5085, Address: 0x2c7810, Func Offset: 0xac0
	// Line 5086, Address: 0x2c7818, Func Offset: 0xac8
	// Line 5088, Address: 0x2c7820, Func Offset: 0xad0
	// Line 5087, Address: 0x2c7834, Func Offset: 0xae4
	// Line 5088, Address: 0x2c7838, Func Offset: 0xae8
	// Line 5282, Address: 0x2c7840, Func Offset: 0xaf0
	// Line 5284, Address: 0x2c7848, Func Offset: 0xaf8
	// Line 5285, Address: 0x2c784c, Func Offset: 0xafc
	// Func End, Address: 0x2c786c, Func Offset: 0xb1c
}

//
// Start address: 0x2c7870
int DisplayOptionPlateLevel3(int PortId, int Flag)
{
	unsigned int PolyCol;
	_anon28 ColorBarDef[8];
	_anon13 poly[4];
	_anon32 BotRigt;
	_anon32 TopLeft;
	int ReturnCode;
	int i;
	_anon0* qp;
	_anon8* ap;
	// Line 5302, Address: 0x2c7870, Func Offset: 0
	// Line 5303, Address: 0x2c789c, Func Offset: 0x2c
	// Line 5309, Address: 0x2c78a4, Func Offset: 0x34
	// Line 5306, Address: 0x2c78bc, Func Offset: 0x4c
	// Line 5309, Address: 0x2c78c0, Func Offset: 0x50
	// Line 5317, Address: 0x2c78d0, Func Offset: 0x60
	// Line 5318, Address: 0x2c78d8, Func Offset: 0x68
	// Line 5319, Address: 0x2c7900, Func Offset: 0x90
	// Line 5320, Address: 0x2c790c, Func Offset: 0x9c
	// Line 5352, Address: 0x2c7910, Func Offset: 0xa0
	// Line 5355, Address: 0x2c7918, Func Offset: 0xa8
	// Line 5356, Address: 0x2c793c, Func Offset: 0xcc
	// Line 5357, Address: 0x2c7964, Func Offset: 0xf4
	// Line 5360, Address: 0x2c7984, Func Offset: 0x114
	// Line 5361, Address: 0x2c79a8, Func Offset: 0x138
	// Line 5362, Address: 0x2c79d4, Func Offset: 0x164
	// Line 5365, Address: 0x2c7a0c, Func Offset: 0x19c
	// Line 5366, Address: 0x2c7a34, Func Offset: 0x1c4
	// Line 5367, Address: 0x2c7a5c, Func Offset: 0x1ec
	// Line 5370, Address: 0x2c7a80, Func Offset: 0x210
	// Line 5371, Address: 0x2c7a94, Func Offset: 0x224
	// Line 5372, Address: 0x2c7a98, Func Offset: 0x228
	// Line 5371, Address: 0x2c7aa0, Func Offset: 0x230
	// Line 5375, Address: 0x2c7aac, Func Offset: 0x23c
	// Line 5371, Address: 0x2c7ab0, Func Offset: 0x240
	// Line 5372, Address: 0x2c7abc, Func Offset: 0x24c
	// Line 5375, Address: 0x2c7adc, Func Offset: 0x26c
	// Line 5376, Address: 0x2c7ae4, Func Offset: 0x274
	// Line 5379, Address: 0x2c7af0, Func Offset: 0x280
	// Line 5376, Address: 0x2c7af4, Func Offset: 0x284
	// Line 5377, Address: 0x2c7afc, Func Offset: 0x28c
	// Line 5379, Address: 0x2c7b14, Func Offset: 0x2a4
	// Line 5380, Address: 0x2c7b24, Func Offset: 0x2b4
	// Line 5381, Address: 0x2c7b34, Func Offset: 0x2c4
	// Line 5382, Address: 0x2c7b38, Func Offset: 0x2c8
	// Line 5383, Address: 0x2c7b44, Func Offset: 0x2d4
	// Line 5384, Address: 0x2c7b54, Func Offset: 0x2e4
	// Line 5385, Address: 0x2c7b58, Func Offset: 0x2e8
	// Line 5386, Address: 0x2c7b64, Func Offset: 0x2f4
	// Line 5388, Address: 0x2c7b70, Func Offset: 0x300
	// Line 5389, Address: 0x2c7b80, Func Offset: 0x310
	// Line 5390, Address: 0x2c7b8c, Func Offset: 0x31c
	// Line 5389, Address: 0x2c7b90, Func Offset: 0x320
	// Line 5390, Address: 0x2c7b94, Func Offset: 0x324
	// Line 5389, Address: 0x2c7b98, Func Offset: 0x328
	// Line 5390, Address: 0x2c7b9c, Func Offset: 0x32c
	// Line 5391, Address: 0x2c7ba4, Func Offset: 0x334
	// Line 5390, Address: 0x2c7bac, Func Offset: 0x33c
	// Line 5391, Address: 0x2c7bb4, Func Offset: 0x344
	// Line 5394, Address: 0x2c7bbc, Func Offset: 0x34c
	// Line 5397, Address: 0x2c7be4, Func Offset: 0x374
	// Line 5398, Address: 0x2c7bec, Func Offset: 0x37c
	// Line 5397, Address: 0x2c7bf8, Func Offset: 0x388
	// Line 5398, Address: 0x2c7bfc, Func Offset: 0x38c
	// Line 5399, Address: 0x2c7c08, Func Offset: 0x398
	// Line 5400, Address: 0x2c7c0c, Func Offset: 0x39c
	// Line 5399, Address: 0x2c7c14, Func Offset: 0x3a4
	// Line 5401, Address: 0x2c7c1c, Func Offset: 0x3ac
	// Line 5402, Address: 0x2c7c20, Func Offset: 0x3b0
	// Line 5399, Address: 0x2c7c24, Func Offset: 0x3b4
	// Line 5400, Address: 0x2c7c2c, Func Offset: 0x3bc
	// Line 5402, Address: 0x2c7c38, Func Offset: 0x3c8
	// Line 5400, Address: 0x2c7c3c, Func Offset: 0x3cc
	// Line 5401, Address: 0x2c7c48, Func Offset: 0x3d8
	// Line 5402, Address: 0x2c7c58, Func Offset: 0x3e8
	// Line 5405, Address: 0x2c7c64, Func Offset: 0x3f4
	// Line 5406, Address: 0x2c7c6c, Func Offset: 0x3fc
	// Line 5407, Address: 0x2c7c74, Func Offset: 0x404
	// Line 5408, Address: 0x2c7c7c, Func Offset: 0x40c
	// Line 5409, Address: 0x2c7c88, Func Offset: 0x418
	// Line 5411, Address: 0x2c7c90, Func Offset: 0x420
	// Line 5407, Address: 0x2c7ca4, Func Offset: 0x434
	// Line 5410, Address: 0x2c7ca8, Func Offset: 0x438
	// Line 5411, Address: 0x2c7cac, Func Offset: 0x43c
	// Line 5413, Address: 0x2c7cb4, Func Offset: 0x444
	// Line 5415, Address: 0x2c7cbc, Func Offset: 0x44c
	// Line 5416, Address: 0x2c7cc0, Func Offset: 0x450
	// Func End, Address: 0x2c7cf0, Func Offset: 0x480
}

/* 100% match */
int DisplayOptionPlate(int PortId, int Level, int Flag) { // Line 5429, Address: 0x2c7cf0
    switch (Level) { // Line 5430, Address: 0x2c7cf4
        case 0:
            return DisplayOptionPlateLevel0(PortId, Flag); // Line 5432, Address: 0x2c7d28
        case 1:

            return DisplayOptionPlateLevel1(PortId, Flag); // Line 5435, Address: 0x2c7d3c
        case 2:

            return DisplayOptionPlateLevel2(PortId, Flag); // Line 5438, Address: 0x2c7d50
        case 3:

            return DisplayOptionPlateLevel3(PortId, Flag); // Line 5441, Address: 0x2c7d64
        default:

            return -1; // Line 5444, Address: 0x2c7d74
    }
} // Line 5446, Address: 0x2c7d78

//
// Start address: 0x2c7d90
int Adv_GameOptionScreen()
{
	int ReturnCode;
	_anon8* ap;
	int SaveCheck;
	int ulState;
	// Line 5465, Address: 0x2c7d90, Func Offset: 0
	// Line 5466, Address: 0x2c7da0, Func Offset: 0x10
	// Line 5476, Address: 0x2c7da8, Func Offset: 0x18
	// Line 5477, Address: 0x2c7db4, Func Offset: 0x24
	// Line 5478, Address: 0x2c7dbc, Func Offset: 0x2c
	// Line 5479, Address: 0x2c7dc8, Func Offset: 0x38
	// Line 5481, Address: 0x2c7dd0, Func Offset: 0x40
	// Line 5483, Address: 0x2c7ddc, Func Offset: 0x4c
	// Line 5485, Address: 0x2c7e08, Func Offset: 0x78
	// Line 5486, Address: 0x2c7e10, Func Offset: 0x80
	// Line 5492, Address: 0x2c7e18, Func Offset: 0x88
	// Line 5493, Address: 0x2c7e28, Func Offset: 0x98
	// Line 5495, Address: 0x2c7e30, Func Offset: 0xa0
	// Line 5496, Address: 0x2c7e54, Func Offset: 0xc4
	// Line 5497, Address: 0x2c7e6c, Func Offset: 0xdc
	// Line 5498, Address: 0x2c7e70, Func Offset: 0xe0
	// Line 5500, Address: 0x2c7e78, Func Offset: 0xe8
	// Line 5501, Address: 0x2c7e84, Func Offset: 0xf4
	// Line 5503, Address: 0x2c7e8c, Func Offset: 0xfc
	// Line 5504, Address: 0x2c7e94, Func Offset: 0x104
	// Line 5505, Address: 0x2c7e9c, Func Offset: 0x10c
	// Line 5506, Address: 0x2c7ea0, Func Offset: 0x110
	// Line 5508, Address: 0x2c7ea8, Func Offset: 0x118
	// Line 5509, Address: 0x2c7eb4, Func Offset: 0x124
	// Line 5510, Address: 0x2c7eb8, Func Offset: 0x128
	// Line 5512, Address: 0x2c7ec0, Func Offset: 0x130
	// Line 5513, Address: 0x2c7ed4, Func Offset: 0x144
	// Line 5515, Address: 0x2c7edc, Func Offset: 0x14c
	// Line 5516, Address: 0x2c7ee4, Func Offset: 0x154
	// Line 5517, Address: 0x2c7ee8, Func Offset: 0x158
	// Line 5519, Address: 0x2c7ef0, Func Offset: 0x160
	// Line 5520, Address: 0x2c7ef8, Func Offset: 0x168
	// Line 5521, Address: 0x2c7efc, Func Offset: 0x16c
	// Line 5523, Address: 0x2c7f04, Func Offset: 0x174
	// Line 5524, Address: 0x2c7f20, Func Offset: 0x190
	// Line 5525, Address: 0x2c7f3c, Func Offset: 0x1ac
	// Line 5526, Address: 0x2c7f58, Func Offset: 0x1c8
	// Line 5527, Address: 0x2c7f74, Func Offset: 0x1e4
	// Line 5528, Address: 0x2c7f80, Func Offset: 0x1f0
	// Line 5527, Address: 0x2c7f88, Func Offset: 0x1f8
	// Line 5528, Address: 0x2c7f8c, Func Offset: 0x1fc
	// Line 5530, Address: 0x2c7f94, Func Offset: 0x204
	// Line 5531, Address: 0x2c7fa4, Func Offset: 0x214
	// Line 5532, Address: 0x2c7fb0, Func Offset: 0x220
	// Line 5534, Address: 0x2c7fbc, Func Offset: 0x22c
	// Line 5535, Address: 0x2c7fc0, Func Offset: 0x230
	// Line 5537, Address: 0x2c7fc8, Func Offset: 0x238
	// Line 5538, Address: 0x2c7fd8, Func Offset: 0x248
	// Line 5539, Address: 0x2c7fe4, Func Offset: 0x254
	// Line 5540, Address: 0x2c7ff4, Func Offset: 0x264
	// Line 5542, Address: 0x2c7ff8, Func Offset: 0x268
	// Line 5544, Address: 0x2c8000, Func Offset: 0x270
	// Line 5545, Address: 0x2c8008, Func Offset: 0x278
	// Line 5546, Address: 0x2c801c, Func Offset: 0x28c
	// Line 5547, Address: 0x2c8028, Func Offset: 0x298
	// Line 5548, Address: 0x2c8038, Func Offset: 0x2a8
	// Line 5550, Address: 0x2c8048, Func Offset: 0x2b8
	// Line 5549, Address: 0x2c804c, Func Offset: 0x2bc
	// Line 5551, Address: 0x2c8050, Func Offset: 0x2c0
	// Line 5552, Address: 0x2c8058, Func Offset: 0x2c8
	// Line 5554, Address: 0x2c8060, Func Offset: 0x2d0
	// Line 5557, Address: 0x2c80b8, Func Offset: 0x328
	// Line 5564, Address: 0x2c80c0, Func Offset: 0x330
	// Line 5565, Address: 0x2c80d0, Func Offset: 0x340
	// Line 5566, Address: 0x2c80d8, Func Offset: 0x348
	// Line 5569, Address: 0x2c80dc, Func Offset: 0x34c
	// Line 5571, Address: 0x2c80e4, Func Offset: 0x354
	// Line 5572, Address: 0x2c80f4, Func Offset: 0x364
	// Line 5573, Address: 0x2c8100, Func Offset: 0x370
	// Line 5575, Address: 0x2c8120, Func Offset: 0x390
	// Line 5577, Address: 0x2c8158, Func Offset: 0x3c8
	// Line 5583, Address: 0x2c8164, Func Offset: 0x3d4
	// Line 5585, Address: 0x2c816c, Func Offset: 0x3dc
	// Line 5588, Address: 0x2c8178, Func Offset: 0x3e8
	// Line 5589, Address: 0x2c8184, Func Offset: 0x3f4
	// Line 5590, Address: 0x2c8194, Func Offset: 0x404
	// Line 5591, Address: 0x2c8198, Func Offset: 0x408
	// Line 5590, Address: 0x2c819c, Func Offset: 0x40c
	// Line 5592, Address: 0x2c81a0, Func Offset: 0x410
	// Line 5593, Address: 0x2c81a8, Func Offset: 0x418
	// Line 5598, Address: 0x2c81ac, Func Offset: 0x41c
	// Line 5594, Address: 0x2c81b0, Func Offset: 0x420
	// Line 5601, Address: 0x2c81b4, Func Offset: 0x424
	// Line 5602, Address: 0x2c81bc, Func Offset: 0x42c
	// Line 5603, Address: 0x2c81cc, Func Offset: 0x43c
	// Line 5605, Address: 0x2c81d8, Func Offset: 0x448
	// Line 5607, Address: 0x2c81e0, Func Offset: 0x450
	// Line 5608, Address: 0x2c81e8, Func Offset: 0x458
	// Line 5609, Address: 0x2c81ec, Func Offset: 0x45c
	// Line 5645, Address: 0x2c81f4, Func Offset: 0x464
	// Line 5647, Address: 0x2c8200, Func Offset: 0x470
	// Line 5651, Address: 0x2c8224, Func Offset: 0x494
	// Line 5652, Address: 0x2c8234, Func Offset: 0x4a4
	// Line 5651, Address: 0x2c8240, Func Offset: 0x4b0
	// Line 5652, Address: 0x2c8244, Func Offset: 0x4b4
	// Line 5654, Address: 0x2c825c, Func Offset: 0x4cc
	// Line 5653, Address: 0x2c8264, Func Offset: 0x4d4
	// Line 5655, Address: 0x2c826c, Func Offset: 0x4dc
	// Line 5657, Address: 0x2c8274, Func Offset: 0x4e4
	// Line 5658, Address: 0x2c8288, Func Offset: 0x4f8
	// Line 5660, Address: 0x2c829c, Func Offset: 0x50c
	// Line 5661, Address: 0x2c82a4, Func Offset: 0x514
	// Line 5662, Address: 0x2c82a8, Func Offset: 0x518
	// Line 5661, Address: 0x2c82ac, Func Offset: 0x51c
	// Line 5663, Address: 0x2c82b0, Func Offset: 0x520
	// Line 5664, Address: 0x2c82b8, Func Offset: 0x528
	// Line 5666, Address: 0x2c82c4, Func Offset: 0x534
	// Line 5667, Address: 0x2c82cc, Func Offset: 0x53c
	// Line 5668, Address: 0x2c82d0, Func Offset: 0x540
	// Line 5667, Address: 0x2c82d4, Func Offset: 0x544
	// Line 5672, Address: 0x2c82d8, Func Offset: 0x548
	// Line 5675, Address: 0x2c82e0, Func Offset: 0x550
	// Line 5677, Address: 0x2c82e4, Func Offset: 0x554
	// Line 5730, Address: 0x2c82ec, Func Offset: 0x55c
	// Line 5731, Address: 0x2c82f4, Func Offset: 0x564
	// Line 5732, Address: 0x2c82fc, Func Offset: 0x56c
	// Line 5733, Address: 0x2c8304, Func Offset: 0x574
	// Line 5735, Address: 0x2c830c, Func Offset: 0x57c
	// Line 5736, Address: 0x2c8318, Func Offset: 0x588
	// Line 5737, Address: 0x2c8320, Func Offset: 0x590
	// Line 5738, Address: 0x2c8324, Func Offset: 0x594
	// Line 5739, Address: 0x2c832c, Func Offset: 0x59c
	// Line 5740, Address: 0x2c8334, Func Offset: 0x5a4
	// Line 5742, Address: 0x2c8338, Func Offset: 0x5a8
	// Line 5744, Address: 0x2c8340, Func Offset: 0x5b0
	// Line 5745, Address: 0x2c8348, Func Offset: 0x5b8
	// Line 5746, Address: 0x2c834c, Func Offset: 0x5bc
	// Line 5748, Address: 0x2c8354, Func Offset: 0x5c4
	// Line 5749, Address: 0x2c835c, Func Offset: 0x5cc
	// Line 5750, Address: 0x2c8360, Func Offset: 0x5d0
	// Line 5752, Address: 0x2c8368, Func Offset: 0x5d8
	// Line 5756, Address: 0x2c8370, Func Offset: 0x5e0
	// Line 5757, Address: 0x2c8380, Func Offset: 0x5f0
	// Line 5758, Address: 0x2c838c, Func Offset: 0x5fc
	// Line 5759, Address: 0x2c8394, Func Offset: 0x604
	// Line 5760, Address: 0x2c839c, Func Offset: 0x60c
	// Line 5762, Address: 0x2c83a4, Func Offset: 0x614
	// Line 5763, Address: 0x2c83ac, Func Offset: 0x61c
	// Line 5764, Address: 0x2c83b4, Func Offset: 0x624
	// Line 5765, Address: 0x2c83b8, Func Offset: 0x628
	// Line 5767, Address: 0x2c83c0, Func Offset: 0x630
	// Line 5766, Address: 0x2c83c4, Func Offset: 0x634
	// Line 5770, Address: 0x2c83c8, Func Offset: 0x638
	// Line 5771, Address: 0x2c83cc, Func Offset: 0x63c
	// Func End, Address: 0x2c83e0, Func Offset: 0x650
}


/* 100% match */
int Adv_ChangeDiscScreen() { // Line 5818, Address: 0x2c83e0
    ADV_WORK* ap = &AdvWork; // Line 5819, Address: 0x2c83ec






    UnmountSoundAfs(); // Line 5896, Address: 0x2c83f0

    sys->ss_flg &= ~0x40000; // Line 5898, Address: 0x2c83f8, 0x2c8410, 0x2c8418
    sys->ss_flg &= ~0x10000; // Line 5899, Address: 0x2c8408, 0x2c8414, 0x2c8420, 0x2c842c
    if (!(sys->ss_flg & 0x1)) { // Line 5900, Address: 0x2c8428, 0x2c8434
        sys->ss_flg |= 0x1; // Line 5901, Address: 0x2c844c
    } else { // Line 5902, Address: 0x2c8454
        sys->ss_flg &= ~0x1; // Line 5903, Address: 0x2c845c
    }
    ap->NextReturnCode = 1; // Line 5905, Address: 0x2c846c

    MountSoundAfs(); // Line 5907, Address: 0x2c8470



    sys->ss_flg &= ~0x20000; // Line 5971, Address: 0x2c8478, 0x2c8490, 0x2c8498
    sys->ss_flg &= ~0x10000; // Line 5972, Address: 0x2c8488, 0x2c8494, 0x2c84a0
    ap->Mode = 0; // Line 5973, Address: 0x2c84b0
    ap->Active = 0; // Line 5974, Address: 0x2c84b4




    return ap->NextReturnCode; // Line 5979, Address: 0x2c84b8
} // Line 5980, Address: 0x2c84bc

/* 100% match */
int Adv_SoundMuseum() { // Line 6907, Address: 0x2c84d0
    return 1;
}

