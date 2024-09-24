#pragma once

#ifndef ADXWRAP_H
#define ADXWRAP_H

#include <sg_mw.h>



struct SOUND_TALK_INFO
{
	ADXT Handle;
	unsigned char* pAdxTWork;
	int WorkSize;
	unsigned int Flag;
	int FadeFunc;
	int FadeCntMax;
	float Volume;
	float VolSpeed;
	float VolLast;
	float VolSave;
	float LimitMaxVol;
	int PanFunc;
	int PanCntMax;
	float Pan;
	float PanSpeed;
	float PanLast;
};

struct ADXWRAP_AFS
{
	unsigned char* pInfoPart;
	unsigned int PartAreaSize;
	unsigned int Flag;
};

struct ADXWRAP_ADXF
{
	ADXF Handle;
	unsigned char* pAdxFWork;
	unsigned int Flag;
	int Mode;
};

void InitAdx();
void ExitAdx();
void DeletePartition(unsigned int PartitionId);
int CreatePartitionEx(SOUND_AFS_PARTITION* ap);
void DeletePartitionEx(SOUND_AFS_PARTITION* ap);
int SearchAdxFSlot();
int OpenAfsInsideFile(unsigned int PartitionId, unsigned int FileId);
int OpenAfsIsoFile(char* FileName);
int GetAfsInsideFileSize(int SlotNo);
void RequestReadAfsInsideFile(int SlotNo, unsigned char* Address);
int CheckReadEndAfsInsideFile(int SlotNo);
void CloseAfsInsideFile(int SlotNo);
void StopAfsInsideFile(int SlotNo);
void RegistAdxStreamEx(int MaxStream, int DummyStream, _anon3* pAdx);
void FreeAdxStream();
void SleepAdxStream();
void WakeupAdxStream(_anon3* pAdx);
void PlayAdxEx(unsigned int SlotNo, unsigned int PartitionId, unsigned int FileId, int Flag);
void PlayAdx(unsigned int SlotNo, unsigned int PartitionId, unsigned int FileId);
void StopAdx(unsigned int SlotNo);
void PauseAdx(unsigned int SlotNo);
void ContinueAdx(unsigned int SlotNo);
int GetAdxStatus(unsigned int SlotNo);
void SetVolumeAdx(unsigned int SlotNo, int Volume);
void SetVolumeAdxEx(unsigned int SlotNo, float Volume, float MaxVolume);
void SetVolumeAdx2(unsigned int SlotNo, float Volume);
void SetPanAdx2(unsigned int SlotNo, float Pan);
void SetPanAdx(unsigned int SlotNo, int Channel, int Pan);
int GetAdxPlayTime(unsigned int SlotNo);
void RequestAdxFadeFunction2(int SlotNo, int Func, int Timer, int FirstVolume);
void RequestAdxFadeFunction(int SlotNo, int Func, int Timer);
void RequestAdxFadeFunctionEx(int SlotNo, int StartVol, int LastVol, int Frame);
int ExecAdxFadeManager();

#endif // ADXWRAP_H