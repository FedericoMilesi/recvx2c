#pragma once

#ifndef _ADV_WORK_H_
#define _ADV_WORK_H_

typedef struct ADV_WORK
{
	int PatId;
	int Mode;
	int Mode2;
	int NextMode;
	int NextReturnCode;
	int PortId;
	int OptIndex;
	int OptLevel;
	int NextOptLevel;
	int OptScrX;
	int OptScrY;
	unsigned int PalNo;
	unsigned int PalMode;
	unsigned int FontBaseColor;
	unsigned char* SysMemPtr;
	unsigned char* MsgPtr;
	unsigned char* ptr[8];
	float Timer;
	float FadeRate;
	float FadeSpeed;
	float SaverTimer;
	float SaverRate;
	float FlushCount;
	float FlushSpeed;
	float FlushCount2;
	float FlushSpeed2;
	float ScrollPlatePosX[2][2];
	char Active;
	char AppMode;
	char ExtraFlag;
	char FadeType;
	char SaverCommand;
	char Count;
	char LastLevel;
	char FromTitle;
	char CurrentDiscId;
	char NextDiscId;
	char ErrorId;
	unsigned char ErrorMsgFlushCount;
	char AnimId;
	unsigned char AnimTime;
	char GenFlag;
	char PalFlag;
	char SrFlag;
	char OptFadeType;
	char TexFlag;
	char SoundMode;
	char vibration;
	char keytype;
	char adjust_x;
	char adjust_y;
	char OptSaveFlag;
	char vMode;
	char DriveNo;
	char MsgNo;
	char DepthLevel;
	char OldVmOpMode;
	char VmOpMode;
	char SetTexture[2];
	char KeyCommandCount[7];
	char Cursor[3];
	char CursorMax[3];
	char CursorFlag[4][4];
	char ModeCommandId[4];
} ADV_WORK;

#endif // _ADV_WORK_H_