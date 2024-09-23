#pragma once

#ifndef _MEMORYCARD_H_
#define _MEMORYCARD_H_

typedef struct tagMEMORYCARDPORT {
    int lCrntType;
    int lPrevType;
    int lFreeSize;
    int lFormatType;
} MEMORYCARDPORT;

typedef struct tagMEMORYCARDSTATE {
    unsigned int ulState;
    unsigned int ulError;
    unsigned int ulMcSubState;
    unsigned int ulFileSize;
    int lCurrentPort;
    int lOpenFileNumber;
    int lSelectFileNumber;
    int lOpenMode;
    unsigned short usMcSysState;
    void* vpAddr;
    char cCurrentDir[50];
    char cOpenFileName[32];
    char cRetryCount;
    char cMcCheckFlag;
    char cCheckMcFlag;
    MEMORYCARDPORT Port[2];
} MEMORYCARDSTATE;

#endif // _MEMORYCARD_H_