#pragma once

#ifndef _LOAD_SCREEN_H_
#define _LOAD_SCREEN_H_

#include "configfile.h"
#include "icon_information.h"
#include "memorycard.h"
#include "savefile.h"
#include "selectfilewindow.h"

typedef struct tagLOAD_SCREEN {
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
} LOAD_SCREEN;

LOAD_SCREEN* CreateLoadScreen(LOAD_SCREEN* pLoad);
void DispLoadMessageSelect(char cSelectMes);
void DispLoadTexture(LOAD_SCREEN* pLoad);
int ExecuteLoadScreen(LOAD_SCREEN* pLoad);
void SetStateLoadScreenAwarenessCard(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenAwarenessCard(LOAD_SCREEN* pLoad);
void SetStateLoadScreenErrLostCard(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenErrLostCard(LOAD_SCREEN* pLoad);
void SetStateLoadScreenErrUnPS2MemCard(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenErrUnPS2MemCard(LOAD_SCREEN* pLoad);
void SetStateLoadScreenSelectCard(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenSelectCard(LOAD_SCREEN* pLoad);
void SetStateLoadScreenTitleExit(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenTitleExit(LOAD_SCREEN* pLoad);
void SetStateLoadScreenErrUnFormat(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenErrUnFormat(LOAD_SCREEN* pLoad);
void SetStateLoadScreenErrLostDirCheck(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenErrLostDirCheck(LOAD_SCREEN* pLoad);
void SetStateLoadScreenDirCheck(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenDirCheck(LOAD_SCREEN* pLoad);
void SetStateLoadScreenDirFileBroken(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenDirFileBroken(LOAD_SCREEN* pLoad);
void SetStateLoadScreenSelectFile(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenSelectFile(LOAD_SCREEN* pLoad);
void LoadScreenCheckSave(LOAD_SCREEN* pLoad);
void SetStateLoadScreenNoSave(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenNoSave(LOAD_SCREEN* pLoad);
void SetStateLoadScreenLoadCursor(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenLoadCursor(LOAD_SCREEN* pLoad);
void SetStateLoadScreenLoad(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenLoad(LOAD_SCREEN* pLoad);
void SetStateLoadScreenFileBroken(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenFileBroken(LOAD_SCREEN* pLoad);
void SetStateLoadScreenErrCardRead(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenErrCardRead(LOAD_SCREEN* pLoad);
void SetStateLoadScreenLoadExit(LOAD_SCREEN* pLoad);
void ExecuteStateLoadScreenLoadExit(LOAD_SCREEN* pLoad);
void SetDispLoadSelectMessage();
void CheckDispLoadMemoryCard(LOAD_SCREEN* pLoad);

#endif // _LOAD_SCREEN_H_