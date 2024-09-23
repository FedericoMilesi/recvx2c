#pragma once

#ifndef _SYSLOAD_SCREEN_H_
#define _SYSLOAD_SCREEN_H_

#include "configfile.h"
#include "icon_information.h"
#include "memorycard.h"
#include "savefile.h"
#include "selectfileinfo.h"
#include "selectfilewindow.h"

typedef struct tagSYSLOAD_SCREEN {
    unsigned int ulState;
    unsigned int ulSubState;
    unsigned int ulMemCheckCountTimer;
    unsigned int ulFileSize;
    unsigned short usExitFlag;
    unsigned short usLoopCount;
    int lCardState;
    char cMesFlag;
    CONFIGFILE* pConfigFile;
    SAVEFILE* pSaveFile;
    ICONINFORMATION* pIconInfo;
    MEMORYCARDSTATE* pMcState;
    SELECTFILEINFO* pSelectFileInfo;
    SELECTFILEWINDOW* pSelectFileWindow;
    void* vpReadBuffer;
} SYSLOAD_SCREEN;

SYSLOAD_SCREEN* CreateSysLoadScreen(SYSLOAD_SCREEN* pSysLoad, void* vpWorkPtrSys);
void DispSysLoadMessageSelect(int slSelectMes);
int ExecuteSysLoadScreen(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenAwarenessCard(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenAwarenessCard(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenErrAwareness(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenErrAwareness(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenDirCheck(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenDirCheck(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenFreeCapacity(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenFreeCapacity(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenErrFreeCapacity(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenErrFreeCapacity(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenNoSysFile(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenNoSysFile(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenSysLoad(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenSysLoad(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenFileBroken(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenFileBroken(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenErrCardRead(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenErrCardRead(SYSLOAD_SCREEN* pSysLoad);
void SetStateSysLoadScreenTitleExit(SYSLOAD_SCREEN* pSysLoad);
void ExecuteStateSysLoadScreenTitleExit();

#endif // _SYSLOAD_SCREEN_H_