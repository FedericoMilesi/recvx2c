#pragma once

#ifndef _SAVE_SCREEN_H_
#define _SAVE_SCREEN_H_

#include "configfile.h"
#include "icon_information.h"
#include "memorycard.h"
#include "savefile.h"
#include "selectfileinfo.h"
#include "selectfilewindow.h"

typedef struct tagSYSSAVE_SCREEN {
    unsigned int ulState;
    unsigned int ulSubState;
    unsigned int ulMemCheckCountTimer;
    unsigned int ulFileSize;
    int lCardState;
    short sSelectCur;
    unsigned short usExitFlag;
    unsigned short usMesMode;
    unsigned short usSaveMode;
    unsigned short usLoopCount;
    char cMesFlag;
    CONFIGFILE* pConfigFile;
    SAVEFILE* pSaveFile;
    ICONINFORMATION* pIconInfo;
    MEMORYCARDSTATE* pMcState;
    SELECTFILEINFO* pSelectFileInfo;
    SELECTFILEWINDOW* pSelectFileWindow;
    void* vpReadBuffer;
} SYSSAVE_SCREEN;

SYSSAVE_SCREEN* CreateSysSaveScreen(SYSSAVE_SCREEN* pSysSave, void* vpWorkPtrSys, unsigned short usSaveMesMode, unsigned short usSaveWriteMode);
void DispSysSaveMessageSelect(SYSSAVE_SCREEN* pSysSave);
int ExecuteSysSaveScreen(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveAwarenessCard(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveAwarenessCard(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrUnPS2MemCard(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrUnPS2MemCard(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrLostCard(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrLostCard(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrPort2(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrPort2(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveDirCheck(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveDirCheck(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveFreeCapacity(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveFreeCapacity(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrFreeCapacity(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrFreeCapacity(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveCheckWriteSysData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveCheckWriteSysData(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveWriteSysData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveWriteSysData(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveSuccessWriteSysData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveSuccessWriteSysData(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrWriteSysData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrWriteSysData(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveFileBroken(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveFileBroken(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveExitWriteSysData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveExitWriteSysData(SYSSAVE_SCREEN* pSysSave);
void SetStateWriteRankingData(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateWriteRankingData(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSave(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSave(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrCardWrite(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrCardWrite(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveFormat(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveFormat(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveStartFormat(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveStartFormat(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveExitFormat(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveExitFormat(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveSuccessFormat(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveSuccessFormat(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveErrFormat(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveErrFormat(SYSSAVE_SCREEN* pSysSave);
void SetStateSysSaveTitleExit(SYSSAVE_SCREEN* pSysSave);
void ExecuteStateSysSaveTitleExit();
void SysSaveHikaku(CONFIGFILE* pConfig);
unsigned int GetOkButton();
unsigned int GetCancelButton();

#endif // _SAVE_SCREEN_H_