#pragma once

#ifndef _PS2_MEMORYCARD_H_
#define _PS2_MEMORYCARD_H_

#include "libmc.h"
#include "memorycard.h"

MEMORYCARDSTATE* CreateMemoryCard(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCard(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCardStandby(MEMORYCARDSTATE* pCard);
int AnalyzeMemoryCardAll(MEMORYCARDSTATE* pCard);
int ExecuteAnalyzeMemoryCardAll(MEMORYCARDSTATE* pCard);
int RecoveryMemoryCardAnalyzeAllEnd(MEMORYCARDSTATE* pCard);
void SetCheckMcFlag(MEMORYCARDSTATE* pCard, unsigned int ulFlag);
int ExecuteMemoryCardRead(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCardWrite(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCardFormat(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCardUnFormat(MEMORYCARDSTATE* pCard);
int ExecuteMemoryCardDelete(MEMORYCARDSTATE* pCard);
unsigned int GetMemoryCardError(MEMORYCARDSTATE* pCard);
void RecoveryMemoryCardError(MEMORYCARDSTATE* pCard);
void SetMemoryCardCurrentPort(MEMORYCARDSTATE* pCard, int lPort);
int GetMemoryCardCurrentPort(MEMORYCARDSTATE* pCard);
void SetMemoryCardSelectPortState(MEMORYCARDSTATE* pCard, unsigned int ulPort, unsigned int ulResult);
void SaveMemoryCardSelectPortState(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int CompMemoryCardSelectPortState(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int GetMemoryCardSelectPortState(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int GetMemoryCardFileNumber(MEMORYCARDSTATE* pCard);
void SetMemoryCardFileNumber(MEMORYCARDSTATE* pCard, int lFileNumber);
int SetMemoryCardCurrentDirectoryAbsolute(MEMORYCARDSTATE* pCard, char* cpPath);
int ReadMemoryCard(MEMORYCARDSTATE* pCard, void* pvReadFile, unsigned int ulFileSize, char* cpFileName, int lMode);
int RecoveryMemoryCardReadEnd(MEMORYCARDSTATE* pCard);
int WriteMemoryCard(MEMORYCARDSTATE* pCard, void* pvReadFile, unsigned int ulFileSize, char* cpFileName, int lMode);
int RecoveryMemoryCardWriteEnd(MEMORYCARDSTATE* pCard);
int FormatMemoryCard(MEMORYCARDSTATE* pCard);
int RecoveryMemoryCardFormatEnd(MEMORYCARDSTATE* pCard);
int GetMcSelectPortType(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int CheckMemoryCardChangeConnectTypeAll(MEMORYCARDSTATE* pCard);
int SetMemoryCardFreeCapacity(MEMORYCARDSTATE* pCard, int Free);
int GetMemoryCardFreeCapacity(MEMORYCARDSTATE* pCard);
int GetMemoryCardSelectPortFreeCapacity(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int CheckMemoryCardFormatStatus(MEMORYCARDSTATE* pCard);
int CreateMemoryCardSubDirectory(MEMORYCARDSTATE* pCard);
int CheckMemoryCardExistSubDirectory(MEMORYCARDSTATE* pCard);
int CheckMemoryCardExistFile(MEMORYCARDSTATE* pCard);
int CheckMemoryCardExistFileList(MEMORYCARDSTATE* pCard, char** cppPathList, unsigned int FileCount);
int MemoryCardGetSum(unsigned char* ucpTop, unsigned int ulSize);
int GetMemoryCardSelectPortFormatType(MEMORYCARDSTATE* pCard, unsigned int ulPort);
int CheckMcSelectPortInfoType(unsigned int ulPort);
int CheckMemoryCardInfoFree(MEMORYCARDSTATE* pCard);
int CheckMcSelectPortInfoState(unsigned int ulPort);
int CheckMemoryCardInfoUnformat(MEMORYCARDSTATE* pCard);
int GetMemoryCardDir(MEMORYCARDSTATE* pCard, char* cpPath, int lFlag, int lMaxent, sceMcTblGetDir* pbuff);
int ChangeMemoryCardDir(MEMORYCARDSTATE* pCard, char* cpPath, char* cpbuff);
int MakeMemoryCardDir(MEMORYCARDSTATE* pCard);
int MemoryCardFormat(MEMORYCARDSTATE* pCard);
int MemoryCardUnFormat();
int DeleteMemoryCard();
int MemoryCardFileOpen(MEMORYCARDSTATE* pCard);
int MemoryCardFileClose(MEMORYCARDSTATE* pCard);
int MemoryCardFileRead(MEMORYCARDSTATE* pCard);
int MemoryCardFileWrite(MEMORYCARDSTATE* pCard);

#endif // _PS2_MEMORYCARD_H_