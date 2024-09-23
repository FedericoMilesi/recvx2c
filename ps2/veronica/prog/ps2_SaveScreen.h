#pragma once

#ifndef _SAVE_SCREEN_H_
#define _SAVE_SCREEN_H_

#include "configfile.h"
#include "icon_information.h"
#include "memorycard.h"
#include "savefile.h"
#include "selectfileinfo.h"
#include "selectfilewindow.h"

typedef struct tagSAVE_SCREEN {
    unsigned int ulState;
    unsigned int ulSubState;
    unsigned int ulMemCheckCountTimer;
    unsigned int ulFileSize;
    int lCardState;
    short sCursorX;
    short sCursorY;
    short sSelectCur;
    unsigned short usExitFlag;
    unsigned short usSaveEnd;
    unsigned short usLoopCount;
    char cMesFlag;
    char cCgFlag;
    CONFIGFILE* pConfigFile;
    SAVEFILE* pSaveFile;
    ICONINFORMATION* pIconInfo;
    MEMORYCARDSTATE* pMcState;
    SELECTFILEINFO* pSelectFileInfo;
    SELECTFILEWINDOW* pSelectFileWindow;
    void* vpReadBuffer;
} SAVE_SCREEN;

SAVE_SCREEN* CreateSaveScreen(SAVE_SCREEN* pSave, void* vpWorkPtrSys);
void DispMessageSelect(char cSelectMes);
void DispTexture(SAVE_SCREEN* pSave);
int ExecuteSaveScreen(SAVE_SCREEN* pSave);
void SetStateSaveScreenAwarenessCard(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenAwarenessCard(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrLostCard(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrLostCard(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrUnPS2MemCard(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrUnPS2MemCard(SAVE_SCREEN* pSave);
void SetStateSaveScreenSelectCard(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSelectCard(SAVE_SCREEN* pSave);
void SetStateSaveScreenExit(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenExit(SAVE_SCREEN* pSave);
void SetSaveScreenSpecialSave(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSpecialSave(SAVE_SCREEN* pSave);
void SetStateSaveScreenLostDirCheck(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenLostDirCheck(SAVE_SCREEN* pSave);
void SetStateSaveScreenFreeCapacity(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenFreeCapacity(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrFreeCapacity(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrFreeCapacity(SAVE_SCREEN* pSave);
void SetStateSaveScreenCreateSaveFileCheck(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenCreateSaveFileCheck(SAVE_SCREEN* pSave);
void SetStateSaveScreenCreateSaveFile(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenCreateSaveFile(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrCreateSaveFile(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrCreateSaveFile(SAVE_SCREEN* pSave);
void SetStateSaveScreenSelectFile(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSelectFile(SAVE_SCREEN* pSave);
void SetStateSaveScreenSaveCursor(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSaveCursor(SAVE_SCREEN* pSave);
void SetStateSaveScreenSaveCursorOld(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSaveCursorOld(SAVE_SCREEN* pSave);
void SetStateSaveScreenSaveCursorNew(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSaveCursorNew(SAVE_SCREEN* pSave);
void SetStateSaveScreenSave(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSave(SAVE_SCREEN* pSave);
void SetStateSaveScreenSuccessCardWrite(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSuccessCardWrite(SAVE_SCREEN* pSave);
void SetStateSaveScreenSuccessCardWriteMessage(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSuccessCardWriteMessage(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrCardWrite(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrCardWrite(SAVE_SCREEN* pSave);
void SetStateSaveScreenFormat(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenFormat(SAVE_SCREEN* pSave);
void SetStateSaveScreenStartFormat(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenStartFormat(SAVE_SCREEN* pSave);
void SetStateSaveScreenExitFormat(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenExitFormat(SAVE_SCREEN* pSave);
void SetStateSaveScreenSuccessFormat(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenSuccessFormat(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrFormat(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrFormat(SAVE_SCREEN* pSave);
void SetStateSaveScreenErrDer(SAVE_SCREEN* pSave);
void ExecuteStateSaveScreenErrDer(SAVE_SCREEN* pSave);
void SetDispSelectMessage();
void CheckDispMemoryCard(SAVE_SCREEN* pSave);

#endif // _SAVE_SCREEN_H_