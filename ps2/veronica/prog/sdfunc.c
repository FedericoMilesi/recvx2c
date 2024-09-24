#include "types.h"
#include <sg_sd.h>
#include <sg_mw.h>

typedef struct SND_ENEMY_SLOT {
    int SeNo; // Sound effect number
    unsigned short Flag; // Flags
    unsigned short Attrib; // Attributes
    unsigned short Prio; // Priority
    unsigned short EnemyNo; // Enemy number
} SND_ENEMY_SLOT;

typedef struct SND_ENEMY_INFO {
    NJS_POINT3 Pos;
    float Dist;
    int SeNo;
    int SeNoV;
    int FadeRate;
    char ReqFlag;
    char ReqFlagV;
    char CallFlag;
    char CallFlagV;
    char Prio;
    char Pan;
    char Vol;
    unsigned char VolType;
} SND_ENEMY_INFO;

typedef struct SOUND_REQUEST {
    int SeNo;      // Sound effect number
    short Timer;   // Timer for sound request (delay or duration)
    short ReqFlag; // Request flag (indicates if the sound should be played)
} SOUND_REQUEST;


typedef struct SOUND_TRANSITION {
    int OfsPointBgSe[2];       // Offset points for background sound effects
    int FadeNextBgSe[2];       // Fade transition for next background sound effects
    int OfsPointBgm;           // Offset point for background music
    int FadeNextBgm;           // Fade transition for next background music
    short NextBgmType;         // Type of the next background music
    unsigned short NextBgSeNo[2]; // Next background sound effect numbers
    char ComNextBgm;           // Command for next background music
    char PointNextBgm;         // Pointer for next background music
    unsigned char NextBgmNo;   // Next background music number
    char ComNextBgSe[2];       // Command for next background sound effects
    char PointNextBgSe[2];     // Pointer for next background sound effects
    char SetNextBgmFlag;       // Flag to set the next background music
    char SetNextBgSeFlag[2];   // Flags to set the next background sound effects
} SOUND_TRANSITION;

typedef struct SND_OBJECT_SLOT {
    int SeNo; // Sound effect number
    short Flag; // Flags
    short FindFlag; // Find flag
    short Prio; // Priority
    short ObjectNo; // Object number
} SND_OBJECT_SLOT;

typedef struct SND_MIDI_INFO {
    unsigned int Flag; // Flags
    int FadeFunc; // Fade function
    int FadeCntMax; // Maximum fade count
    float Volume; // Volume
    float VolSpeed; // Volume speed
    float VolLast; // Last volume
    float LimitMaxVol; // Maximum volume limit
    int PanFunc; // Pan function
    int PanCntMax; // Maximum pan count
    float Pan; // Pan
    float PanSpeed; // Pan speed
    float PanLast; // Last pan
} SND_MIDI_INFO;

typedef struct SOUND_DATA { 
    int Offset; // Offset
    int Size; // Size
    int Type; // Type
    int BankNo; // BankNo
} SOUND_DATA;

typedef struct SOUND_EFFECT {
    int Type;
    int SlotNo;
    int SeNo;
    int StartVol;
    int LastVol;
    int StartPan;
    int LastPan;
    int Frame;
} SOUND_EFFECT;

typedef struct SOUND_SLOT {
    unsigned int SlotNo;
    short PanDelayTime;
    short VolumeDelayTime;
    short Pitch;
    short PitchDelayTime;
    short Speed;
    short SpeedDelayTime;
    char BankNo;
    char ListNo;
    char Priority;
    char Pan;
    char Volume;
    char FxInput;
    char FxLevel;
} SOUND_SLOT;

typedef struct SOUND_OBJECT {
    NJS_POINT3 Pos;
    float Dist;
    int SeNo;
    char ReqFlag;
    char Prio;
    char SlotNo;
    char Type;
    char Pan;
    char Vol;
    int Flag;
    int VolFadeP[3];
    int PanFadeP[3];
} SOUND_OBJECT;

typedef struct MOVIE_DEFINITION {
    unsigned short sSizeX;
    unsigned short sSizeY;
    unsigned short dPosX;
    unsigned short dPosY;
    unsigned short dSizeX;
    unsigned short dSizeY;
    unsigned char DispType;
} MOVIE_DEFINITION;

typedef struct SOUND_ADX {
    unsigned int MaxChannel;
    unsigned int MaxSampleRate;
    int RecoverType;
    int ReloadSector;
} SOUND_ADX;

typedef struct SOUND_COMMAND {
    int MaxCommand;
    unsigned char ComTbl[2];
} SOUND_COMMAND;

typedef struct GS_SLOT_INFO {
    unsigned char Flag;
} GS_SLOT_INFO;

typedef struct ROOM_SOUND_SETTINGS {
    char VolPlayerVoice;     // Volume for player voice
    char VolPlayerAction;    // Volume for player actions
    char VolWeaponSe;        // Volume for weapon sound effects
    char VolCartridgeSe;     // Volume for cartridge sound effects
    char VolEnemySe;         // Volume for enemy sound effects
    char VolBgSe0;           // Volume for background sound effect 0
    char VolBgSe1;           // Volume for background sound effect 1
    char VolObjectSe;        // Volume for object sound effects
    char VolEventSe;         // Volume for event sound effects
    char RoomFxLevel;        // Room FX level (reverb or environmental effects)
    char RoomFxProg;         // Room FX program (which FX to apply)
    char MaxEventSeSlots;    // Maximum event sound effect slots
    char MaxObjectSeSlots;   // Maximum object sound effect slots
    char Dummy1;             // Reserved or unused
    char Dummy2;             // Reserved or unused
    char Dummy3;             // Reserved or unused
} ROOM_SOUND_SETTINGS;

typedef struct SND_COM_FUNC {
    void (*FuncName)(int);
} SND_COM_FUNC;

int PatId[4];
SOUND_AFS_PARTITION SoundAfsPatDef[8];
SOUND_ADX AdxDef[2];
SDE_DATA_TYPE SdTypeDef[5];
int PlayerFootStepSwitch[3];
int SystemSeSlotSwitch;
int WeaponSeSlotSwitch;
int EnemyBackGroundSeFlag;
char MoviePlayTrayOpenFlag;
int CurrentBgmNo;
int CurrentBgSeNo[2];
int RoomSoundCaseNo;
short DefBg[3];
short DefObj[5];
short DefEvt[5];
short DefEne[6];
int SoundInitLevel;
int SdReadMode;
int SpqFileReadRequestFlag;
int TransSoundPackDataFlag;
int ReadFileRequestFlag;
int FileReadStatus;
int KeyReadSwitch;
extern SYS* sys;
extern unsigned int DiscOpenTrayFlag;
extern unsigned int StatusUpdateCounter;
SYS_BT_SYSTEMID BootDiscSystemId;
extern HardwareScreenInfo* hws;
SOUND_COMMAND SoundCommand;
MOVIE_INFO MovieInfo;
unsigned char* pConfigWork;
unsigned short* pSpqList;
unsigned char* pSoundAfs;
char SpqFileName[32];
int EventVibrationMode;
SOUND_REQUEST BgSePrmBuf[2];
int ReqFadeBgSe[2];
int ReqFadeBgmNo;
int NextBgmVolume;
int CurrentBgmVolume;
unsigned char* pSdReadBuf;
SOUND_DATA* pSpqHeader;
int AddFxLevel;
int CurrentFxLevel;
int RoomFxLevel;
ROOM_SOUND_SETTINGS Room_SoundEnv;
char FxLevelTimer;
unsigned short SpqKeyCode;
char CurrentDoorNo;
int MaxSlotEventSe;
int MaxSlotObjectSe;
char ThreeDVolTbl[510];
char PanTbl360[68];
char PanTbl360Vol[68];
extern Camera cam;
extern ROOM* rom;
char CurrentRoomFxLevel;
int AngBak;
SOUND_SLOT RequestInfo;
NJS_POINT3 CameraPos;
GS_SLOT_INFO GsSlotInfoAx[2];
SOUND_OBJECT ObjectInfo[16];
GS_SLOT_INFO GsSlotInfoMi[8];
GS_SLOT_INFO GsSlotInfoSe[20];
NJS_POINT3 PlayerPos;
int xAng;
int xVol;
int xPan;
extern SDS_PORT_REF** MidiHandle[8];
int StartInitScriptFlag;
extern SND_MIDI_INFO MidiInfo[8];
SND_ENEMY_INFO EnemyInfo[128];
SND_ENEMY_SLOT EnemySlotInfo[6];
int MaxObjectReqList;
unsigned char ObjectReqList[16];
unsigned int AdxPlayFlag[2];
char CurrentRoomFxProgNo;
int MaxRequestList;
unsigned char RequestList[128];
SND_OBJECT_SLOT ObjectSlotInfo[3];
SND_COM_FUNC SdComFuncTbl[10];
extern BH_PWORK* plp;
unsigned char* DestReadPtr;
int GenAdxfSlot;
int OpenDriveTrayFlag;
unsigned char MovieTypeDef[22];
short MovieVolDef[22];
MOVIE_DEFINITION MovieDef[4];
extern REMOTE_INPUT rmi;
extern Controller Pad[4];
extern int CurrentPortId;
VIBPARAM VibP[32];
char VibFlag[5];
int SystemAdjustFlag;
float xDist;
SOUND_TRANSITION NextSoundInfo;

void bhReleaseFreeMemory(void* mp);
void ExitApplication();
void QuickGetDiscTrayStatus();
void InitFirstSofdec();
int GetBootDiscId();
void InitSofdecSystem(int Mode);
void ExitSofdecSystem();
void InitSoundProgram();
void ExitSoundProgram();
int MountSoundAfs();
void UnmountSoundAfs();
void ExecSoundSynchProgram();
void InitGameSoundSystem();
int SearchAfsInsideFileId(unsigned short KeyCode);
void StopThePsgSound();
int CheckSpecialBank(int Type, int BankNo);
int LoadSoundPackFile(char* SpqFile);
void ExecTransSoundData();
void RequestRoomSoundBank(int StageNo, int RoomNo, int CaseNo);
void RequestArmsSoundBank(int ArmsNo);
void RequestDoorSoundBank(int DoorNo);
void RequestPlayerVoiceSoundBank(int PlayerNo);
int CheckTransEndSoundBank();
void SetRoomSoundCaseNo(int CaseNo);
int GetRoomSoundCaseNo();
int CustomMidiSlotDef(int ObjectSlot, int EventSlot);
void ResetRoomSoundEnvParam();
int wadGetAngle(NJS_POINT3* pPos1, int Ang, NJS_POINT3* pPos2);
int CheckCollision4Sound(NJS_POINT3* pP2);
int Get3DSoundParameter(NJS_POINT3* pP1, NJS_POINT3* pP2, char* pPan, char* pVol, float* pDist, int Mode);
int SetupSeGenericParm(int SlotNo, int SeNo, NJS_POINT3* pPos, int Flag, unsigned int Flag2);
void Set3dSoundFlag(int Type, int SlotNo, unsigned int Flag);
void Reset3dSoundFlag();
void SetUserSoundVolume(int Type, int SlotNo, int StartVol, int LastVol, int Frame);
void SetUserSoundPan(int Type, int SlotNo, int StartPan, int LastPan, int Frame);
void PlayGameSe4Event(SOUND_EFFECT* gp, NJS_POINT3* pPos, int FloorType, int SeType);
void CallSystemSeBasic(int SeNo, int Volume, int FxLevel);
void CallSystemSeEx(int SeNo, int Volume);
void CallSystemSe(int SeNo);
void StopSystemSe();
void SetSyukanModeSoundParam();
void CallPlayerVoice(int SeNo);
int GetPlayerActionSeSlotNo(int Type, int Id);
void CallPlayerFootStepSeEx(int FloorType, int Type, int Flag, int Id, NJS_POINT3* pPos);
void CallPlayerFootStepSe(int FloorType, int Type, int Flag);
void CallPlayerActionSe(int SeNo, int Flag);
void CallPlayerWeaponSeEx(NJS_POINT3* pPos, int SeNo, int SlotNo);
void CallYakkyouSe(NJS_POINT3* pPos, int SeNo);
void CallBackGroundSeEx(unsigned int SlotNo, int SeNo, short Timer);
void CallBackGroundSe(unsigned int SlotNo, int SeNo);
void CallBackGroundSe2(unsigned int SlotNo, int SeNo);
void StopBackGroundSeEx(unsigned int SlotNo, short Timer);
void StopBackGroundSe2(unsigned int SlotNo);
void CallDoorSe(unsigned int No);
void RequestEnemySeBasic(int EnemyNo, NJS_POINT3* pPos, int SeNo, int Flag, int FadeRate);
void RequestEnemySe(int EnemyNo, NJS_POINT3* pPos, int SeNo);
void RequestEnemySeEx(int EnemyNo, NJS_POINT3* pPos, int SeNo, int FadeRate);
int ChechPlayEnemySe(int EnemyNo, int SeNo);
void AllStopEnemySe();
void CallEnemySe(int SlotNo, NJS_POINT3* pPos, int SeNo);
void StopEnemySe(int SlotNo);
int CallNativeEventSe(int SlotNo, NJS_POINT3* pPos, int SeNo, int Mode);
int StopNativeEventSe(int SlotNo);
void RequestObjectSeEx(int ObjectNo, NJS_POINT3* pPos, int Type);
void RegistObjectSe(int ObjectNo, NJS_POINT3* pPos, int SeNo, int Prio);
void FreeObjectSe(int ObjectNo);
void PlayBgmEx2(unsigned int PatId, int BgmNo, int FadeInRate, int Volume);
void PlayBgmEx(int BgmNo, int FadeInRate, int Volume);
void PlayBgm(int BgmNo, int FadeInRate);
void PlayBgm2(int BgmNo, int Volume);
void StopBgm(int FadeOutRate);
void StopBgm2();
void PlayVoiceEx2(int PatId, int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate, int PauseFlag);
void PlayVoiceEx(int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate, int PauseFlag);
void PlayVoice(int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate);
void ContinuePlayVoice();
void StopVoice(int FadeOutRate);
int CheckPlayEndAdx(int SlotNo);
int GetTimeAdx(int SlotNo);
void SetRoomSoundFxLevel(char FxProgNo, char FxLevel);
void SetRoomSoundFxLevelEx();
int SearchPlayingEnemySe(int EnemyNo, int Attrib);
int SearchFreeEnemySeSlot();
int CheckPlaySameSe(int EnemyNo, int SeNo, int Flag);
void CallEnemySeMain(unsigned int SlotNo, int SeNo, char Pan, char Vol, int Flag, int FadeRate);
void RegistEnemySlot(int SlotNo, int EnemyNo, int SeNo);
void ResetEnemySeInfo();
void ExecEnemySeManager();
int SearchPlayingObjectSeEx(int ObjectNo, int Mode);
int SearchPlayingObjectSe(int ObjectNo);
int SearchFreeObjectSeSlot();
void CallObjectSe2(unsigned int SlotNo, SOUND_OBJECT* oip, int Flag);
void RegistObjectSlot(int SlotNo, int ObjectNo, int SeNo);
void ResetObjectSeInfo();
void ExecObjectSeManager();
void RequestSoundFade(int Func, int Attr, short Timer);
void RequestAllStopSoundEx(int AdxFlag, int InSoundFlag, int FadeCount);
void ResetSoundComInfo();
void Com_ExecRoomFadeIn();
void Com_ExecRoomFadeOut();
void Com_ExecCallBgm_And_BgSe();
void Com_StartInitScript();
void Com_FinishInitScript();
void ExecuteSoundCommand();
void SendSoundCommand(unsigned int CommandNo);
void ExecSoundSystemMonitor();
int RequestReadIsoFile(char* FileName, void* DestPtr);
int RequestReadInsideFile(unsigned int PartitionId, unsigned int FileId, void* DestPtr);
int GetIsoFileSize(char* FileName);
int GetInsideFileSize(unsigned int PartitionId, unsigned int FileId);
int GetReadFileStatus();
void ExecFileManager();
int PlayStartMovieEx(int MovieNo, int MovieType, int PauseFlag);
void PlayStopMovieEx(int Mode);
void PlayStopMovie();
int CheckPlayEndMovie();
int GetTimeMoive();
int WaitPrePlayMovie(int parameter /* UNUSED */);
int PlayMovieMain(int parameter /* UNUSED */);
void SetEventVibrationMode(int Mode);
void StartVibrationBasic(int PortNo, int AtrbId, int VibNo);
void StartVibrationEx(int AtrbId, int VibNo);
void StopVibrationBasic(int PortNo);
void StopVibrationEx();
void SetAdjustDisplay();
void RequestAdjustDisplay(int AdjustX, int AdjustY);
void ExecAdjustDisplay();
void InitPlayLogSystem();
void ExitPlayLogSystem();
void ReadPlayLog();
void WritePlayLog();

/* 100% match */
void bhReleaseFreeMemory(void* mp) { // Line 236, Address: 0x292410, Func Offset: 0
    sys->memp = mp; // Line 237, Address: 0x292420, Func Offset: 0x10
}

/* 100% match */
void ExitApplication() { // Line 241, Address: 0x292430, Func Offset: 0
    njUserExit();
}

/* 100% match */
void QuickGetDiscTrayStatus() { // Line 245, Address: 0x292440, 0x292448 Func Offset: 0, 0x8
    StatusUpdateCounter = 1; // Line 246, Address: 0x292444, 0x29244c Func Offset: 0x4, 0xc
    njWaitVSync(); // Line 247, Address: 0x292450, Func Offset: 0x10
    if (DiscOpenTrayFlag == -1) { // Line 248, Address: 0x292458, Func Offset: 0x18
        ExitApplication(DiscOpenTrayFlag); // Line 249, Address: 0x29246c, Func Offset: 0x2c
    }
} // Line 251, Address: 0x292474, Func Offset: 0x34

// 
// Start address: 0x292480
void InitFirstSofdec()
{
	// Line 262, Address: 0x292480, Func Offset: 0
	// Func End, Address: 0x292488, Func Offset: 0x8
}

// 
// Start address: 0x292490
int GetBootDiscId()
{
	int ReturnCode;
	unsigned char* p;
	// Line 277, Address: 0x292490, Func Offset: 0
	// Line 281, Address: 0x292494, Func Offset: 0x4
	// Line 277, Address: 0x292498, Func Offset: 0x8
	// Line 281, Address: 0x2924a0, Func Offset: 0x10
	// Line 291, Address: 0x2924ac, Func Offset: 0x1c
	// Line 292, Address: 0x2924b4, Func Offset: 0x24
	// Line 293, Address: 0x2924bc, Func Offset: 0x2c
	// Line 294, Address: 0x2924d4, Func Offset: 0x44
	// Line 296, Address: 0x2924dc, Func Offset: 0x4c
	// Line 297, Address: 0x2924e0, Func Offset: 0x50
	// Line 299, Address: 0x2924e8, Func Offset: 0x58
	// Line 300, Address: 0x2924ec, Func Offset: 0x5c
	// Func End, Address: 0x292500, Func Offset: 0x70
}

// 
// Start address: 0x292500
void InitSofdecSystem(int Mode)
{
	MWS_PLY_INIT_SFD iprm;
	// Line 308, Address: 0x292500, Func Offset: 0
	// Line 312, Address: 0x292510, Func Offset: 0x10
	// Line 313, Address: 0x292520, Func Offset: 0x20
	// Line 314, Address: 0x292530, Func Offset: 0x30
	// Line 315, Address: 0x292538, Func Offset: 0x38
	// Line 316, Address: 0x292540, Func Offset: 0x40
	// Line 318, Address: 0x2925a8, Func Offset: 0xa8
	// Line 319, Address: 0x2925b0, Func Offset: 0xb0
	// Line 320, Address: 0x2925bc, Func Offset: 0xbc
	// Line 321, Address: 0x2925c4, Func Offset: 0xc4
	// Line 324, Address: 0x2925cc, Func Offset: 0xcc
	// Func End, Address: 0x2925dc, Func Offset: 0xdc
}

// 
// Start address: 0x2925e0
void ExitSofdecSystem()
{
	// Line 332, Address: 0x2925e0, Func Offset: 0
	// Line 334, Address: 0x2925e8, Func Offset: 0x8
	// Line 335, Address: 0x2925f8, Func Offset: 0x18
	// Line 338, Address: 0x292600, Func Offset: 0x20
	// Func End, Address: 0x29260c, Func Offset: 0x2c
}

// 
// Start address: 0x292610
void InitSoundProgram()
{
	int i;
	// Line 347, Address: 0x292610, Func Offset: 0
	// Line 352, Address: 0x292618, Func Offset: 0x8
	// Line 354, Address: 0x29263c, Func Offset: 0x2c
	// Line 355, Address: 0x292650, Func Offset: 0x40
	// Line 357, Address: 0x292658, Func Offset: 0x48
	// Line 363, Address: 0x29266c, Func Offset: 0x5c
	// Line 364, Address: 0x292680, Func Offset: 0x70
	// Line 365, Address: 0x29268c, Func Offset: 0x7c
	// Line 371, Address: 0x292698, Func Offset: 0x88
	// Line 373, Address: 0x2926ac, Func Offset: 0x9c
	// Line 376, Address: 0x2926b8, Func Offset: 0xa8
	// Line 377, Address: 0x2926bc, Func Offset: 0xac
	// Line 378, Address: 0x2926c4, Func Offset: 0xb4
	// Line 379, Address: 0x2926d8, Func Offset: 0xc8
	// Line 380, Address: 0x2926dc, Func Offset: 0xcc
	// Line 381, Address: 0x2926e4, Func Offset: 0xd4
	// Line 382, Address: 0x2926f8, Func Offset: 0xe8
	// Line 385, Address: 0x292704, Func Offset: 0xf4
	// Line 386, Address: 0x29270c, Func Offset: 0xfc
	// Line 387, Address: 0x292714, Func Offset: 0x104
	// Line 390, Address: 0x29271c, Func Offset: 0x10c
	// Line 394, Address: 0x292724, Func Offset: 0x114
	// Line 396, Address: 0x292738, Func Offset: 0x128
	// Line 397, Address: 0x292748, Func Offset: 0x138
	// Line 399, Address: 0x292750, Func Offset: 0x140
	// Line 402, Address: 0x292758, Func Offset: 0x148
	// Line 403, Address: 0x292764, Func Offset: 0x154
	// Line 406, Address: 0x292770, Func Offset: 0x160
	// Line 414, Address: 0x292778, Func Offset: 0x168
	// Line 418, Address: 0x292780, Func Offset: 0x170
	// Line 421, Address: 0x29278c, Func Offset: 0x17c
	// Line 422, Address: 0x292794, Func Offset: 0x184
	// Line 423, Address: 0x29279c, Func Offset: 0x18c
	// Line 426, Address: 0x2927b0, Func Offset: 0x1a0
	// Line 428, Address: 0x2927b8, Func Offset: 0x1a8
	// Line 429, Address: 0x2927c4, Func Offset: 0x1b4
	// Func End, Address: 0x2927d4, Func Offset: 0x1c4
}

// 
// Start address: 0x2927e0
void ExitSoundProgram()
{
	// Line 438, Address: 0x2927e0, Func Offset: 0
	// Line 441, Address: 0x2927e8, Func Offset: 0x8
	// Line 444, Address: 0x292834, Func Offset: 0x54
	// Line 446, Address: 0x29283c, Func Offset: 0x5c
	// Line 448, Address: 0x292844, Func Offset: 0x64
	// Line 449, Address: 0x29284c, Func Offset: 0x6c
	// Line 450, Address: 0x292854, Func Offset: 0x74
	// Line 452, Address: 0x29285c, Func Offset: 0x7c
	// Line 454, Address: 0x292864, Func Offset: 0x84
	// Line 456, Address: 0x29286c, Func Offset: 0x8c
	// Line 457, Address: 0x292874, Func Offset: 0x94
	// Line 459, Address: 0x292880, Func Offset: 0xa0
	// Func End, Address: 0x29288c, Func Offset: 0xac
}

// 
// Start address: 0x292890
int MountSoundAfs()
{
	unsigned char* p;
	int WorkSize;
	int i;
	// Line 469, Address: 0x292890, Func Offset: 0
	// Line 481, Address: 0x29289c, Func Offset: 0xc
	// Line 482, Address: 0x2928b4, Func Offset: 0x24
	// Line 483, Address: 0x2928c4, Func Offset: 0x34
	// Line 484, Address: 0x2928d0, Func Offset: 0x40
	// Line 485, Address: 0x2928dc, Func Offset: 0x4c
	// Line 486, Address: 0x2928e4, Func Offset: 0x54
	// Line 489, Address: 0x2928ec, Func Offset: 0x5c
	// Line 490, Address: 0x2928fc, Func Offset: 0x6c
	// Line 491, Address: 0x292908, Func Offset: 0x78
	// Line 492, Address: 0x292914, Func Offset: 0x84
	// Line 498, Address: 0x292928, Func Offset: 0x98
	// Line 499, Address: 0x292934, Func Offset: 0xa4
	// Line 500, Address: 0x292938, Func Offset: 0xa8
	// Line 499, Address: 0x29293c, Func Offset: 0xac
	// Line 500, Address: 0x292958, Func Offset: 0xc8
	// Line 502, Address: 0x292964, Func Offset: 0xd4
	// Line 504, Address: 0x292974, Func Offset: 0xe4
	// Line 505, Address: 0x29297c, Func Offset: 0xec
	// Line 507, Address: 0x292984, Func Offset: 0xf4
	// Line 511, Address: 0x29298c, Func Offset: 0xfc
	// Line 512, Address: 0x2929a4, Func Offset: 0x114
	// Line 513, Address: 0x2929c0, Func Offset: 0x130
	// Line 515, Address: 0x2929c8, Func Offset: 0x138
	// Line 517, Address: 0x2929d0, Func Offset: 0x140
	// Line 518, Address: 0x2929ec, Func Offset: 0x15c
	// Line 531, Address: 0x2929fc, Func Offset: 0x16c
	// Line 532, Address: 0x292a04, Func Offset: 0x174
	// Line 533, Address: 0x292a08, Func Offset: 0x178
	// Line 534, Address: 0x292a0c, Func Offset: 0x17c
	// Line 533, Address: 0x292a10, Func Offset: 0x180
	// Line 534, Address: 0x292a2c, Func Offset: 0x19c
	// Line 536, Address: 0x292a3c, Func Offset: 0x1ac
	// Line 537, Address: 0x292a44, Func Offset: 0x1b4
	// Line 538, Address: 0x292a58, Func Offset: 0x1c8
	// Line 544, Address: 0x292a60, Func Offset: 0x1d0
	// Line 545, Address: 0x292a68, Func Offset: 0x1d8
	// Line 546, Address: 0x292a70, Func Offset: 0x1e0
	// Line 547, Address: 0x292a78, Func Offset: 0x1e8
	// Line 548, Address: 0x292a80, Func Offset: 0x1f0
	// Line 544, Address: 0x292a90, Func Offset: 0x200
	// Line 545, Address: 0x292a98, Func Offset: 0x208
	// Line 546, Address: 0x292aa0, Func Offset: 0x210
	// Line 547, Address: 0x292aa8, Func Offset: 0x218
	// Line 548, Address: 0x292ab0, Func Offset: 0x220
	// Line 549, Address: 0x292ab4, Func Offset: 0x224
	// Line 562, Address: 0x292abc, Func Offset: 0x22c
	// Line 549, Address: 0x292ac0, Func Offset: 0x230
	// Line 550, Address: 0x292acc, Func Offset: 0x23c
	// Line 563, Address: 0x292ae0, Func Offset: 0x250
	// Func End, Address: 0x292af0, Func Offset: 0x260
}

// 
// Start address: 0x292af0
void UnmountSoundAfs()
{
	// Line 572, Address: 0x292af0, Func Offset: 0
	// Line 575, Address: 0x292af8, Func Offset: 0x8
	// Line 576, Address: 0x292b0c, Func Offset: 0x1c
	// Line 577, Address: 0x292b18, Func Offset: 0x28
	// Line 578, Address: 0x292b24, Func Offset: 0x34
	// Line 591, Address: 0x292b48, Func Offset: 0x58
	// Func End, Address: 0x292b54, Func Offset: 0x64
}

// 
// Start address: 0x292b60
void ExecSoundSynchProgram()
{
	// Line 601, Address: 0x292b60, Func Offset: 0
	// Line 602, Address: 0x292b68, Func Offset: 0x8
	// Line 607, Address: 0x292b78, Func Offset: 0x18
	// Line 611, Address: 0x292b80, Func Offset: 0x20
	// Line 612, Address: 0x292b90, Func Offset: 0x30
	// Line 613, Address: 0x292ba4, Func Offset: 0x44
	// Line 623, Address: 0x292bac, Func Offset: 0x4c
	// Line 626, Address: 0x292bb4, Func Offset: 0x54
	// Line 627, Address: 0x292bbc, Func Offset: 0x5c
	// Line 628, Address: 0x292bc4, Func Offset: 0x64
	// Line 629, Address: 0x292be0, Func Offset: 0x80
	// Line 647, Address: 0x292be8, Func Offset: 0x88
	// Line 660, Address: 0x292bfc, Func Offset: 0x9c
	// Line 663, Address: 0x292c04, Func Offset: 0xa4
	// Line 664, Address: 0x292c0c, Func Offset: 0xac
	// Func End, Address: 0x292c18, Func Offset: 0xb8
}

// 
// Start address: 0x292c20
void InitGameSoundSystem()
{
	int i;
	// Line 673, Address: 0x292c20, Func Offset: 0
	// Line 680, Address: 0x292c24, Func Offset: 0x4
	// Line 673, Address: 0x292c2c, Func Offset: 0xc
	// Line 680, Address: 0x292c30, Func Offset: 0x10
	// Line 681, Address: 0x292c3c, Func Offset: 0x1c
	// Line 687, Address: 0x292c50, Func Offset: 0x30
	// Line 684, Address: 0x292c58, Func Offset: 0x38
	// Line 685, Address: 0x292c64, Func Offset: 0x44
	// Line 686, Address: 0x292c70, Func Offset: 0x50
	// Line 690, Address: 0x292c88, Func Offset: 0x68
	// Line 693, Address: 0x292c8c, Func Offset: 0x6c
	// Line 691, Address: 0x292c90, Func Offset: 0x70
	// Line 692, Address: 0x292c94, Func Offset: 0x74
	// Line 693, Address: 0x292c98, Func Offset: 0x78
	// Line 692, Address: 0x292c9c, Func Offset: 0x7c
	// Line 693, Address: 0x292ca0, Func Offset: 0x80
	// Line 694, Address: 0x292ca8, Func Offset: 0x88
	// Line 696, Address: 0x292cbc, Func Offset: 0x9c
	// Line 699, Address: 0x292cc4, Func Offset: 0xa4
	// Line 702, Address: 0x292ccc, Func Offset: 0xac
	// Line 704, Address: 0x292ce0, Func Offset: 0xc0
	// Line 706, Address: 0x292cec, Func Offset: 0xcc
	// Line 707, Address: 0x292cf4, Func Offset: 0xd4
	// Line 709, Address: 0x292cfc, Func Offset: 0xdc
	// Line 710, Address: 0x292d04, Func Offset: 0xe4
	// Func End, Address: 0x292d10, Func Offset: 0xf0
}

// 
// Start address: 0x292d10
int SearchAfsInsideFileId(unsigned short KeyCode)
{
	unsigned short* lp;
	int i;
	// Line 728, Address: 0x292d10, Func Offset: 0
	// Line 729, Address: 0x292d20, Func Offset: 0x10
	// Line 730, Address: 0x292d30, Func Offset: 0x20
	// Line 732, Address: 0x292d38, Func Offset: 0x28
	// Line 733, Address: 0x292d40, Func Offset: 0x30
	// Line 735, Address: 0x292d48, Func Offset: 0x38
	// Line 737, Address: 0x292d58, Func Offset: 0x48
	// Line 738, Address: 0x292d5c, Func Offset: 0x4c
	// Func End, Address: 0x292d64, Func Offset: 0x54
}

// 
// Start address: 0x292d70
void StopThePsgSound()
{
	// Line 748, Address: 0x292d70, Func Offset: 0
	// Line 749, Address: 0x292d78, Func Offset: 0x8
	// Line 750, Address: 0x292d88, Func Offset: 0x18
	// Line 752, Address: 0x292d94, Func Offset: 0x24
	// Line 753, Address: 0x292da8, Func Offset: 0x38
	// Line 755, Address: 0x292db4, Func Offset: 0x44
	// Func End, Address: 0x292dc0, Func Offset: 0x50
}

// 
// Start address: 0x292dc0
int CheckSpecialBank(int Type, int BankNo)
{
	// Line 766, Address: 0x292dc0, Func Offset: 0
	// Line 775, Address: 0x292dc4, Func Offset: 0x4
	// Line 776, Address: 0x292df0, Func Offset: 0x30
	// Line 778, Address: 0x292e18, Func Offset: 0x58
	// Line 779, Address: 0x292e20, Func Offset: 0x60
	// Line 781, Address: 0x292e28, Func Offset: 0x68
	// Line 783, Address: 0x292e4c, Func Offset: 0x8c
	// Line 784, Address: 0x292e54, Func Offset: 0x94
	// Line 787, Address: 0x292e5c, Func Offset: 0x9c
	// Line 798, Address: 0x292e68, Func Offset: 0xa8
	// Line 799, Address: 0x292e6c, Func Offset: 0xac
	// Func End, Address: 0x292e78, Func Offset: 0xb8
}

// 
// Start address: 0x292e80
int LoadSoundPackFile(char* SpqFile)
{
	int InsideId;
	int FileSize;
	// Line 812, Address: 0x292e80, Func Offset: 0
	// Line 816, Address: 0x292e90, Func Offset: 0x10
	// Line 819, Address: 0x292ecc, Func Offset: 0x4c
	// Line 820, Address: 0x292ee0, Func Offset: 0x60
	// Line 821, Address: 0x292ef0, Func Offset: 0x70
	// Line 824, Address: 0x292ef8, Func Offset: 0x78
	// Line 825, Address: 0x292f08, Func Offset: 0x88
	// Line 827, Address: 0x292f10, Func Offset: 0x90
	// Line 828, Address: 0x292f28, Func Offset: 0xa8
	// Line 834, Address: 0x292f30, Func Offset: 0xb0
	// Line 836, Address: 0x292f44, Func Offset: 0xc4
	// Line 837, Address: 0x292f58, Func Offset: 0xd8
	// Line 838, Address: 0x292f68, Func Offset: 0xe8
	// Line 839, Address: 0x292f70, Func Offset: 0xf0
	// Line 852, Address: 0x292f88, Func Offset: 0x108
	// Line 854, Address: 0x292f9c, Func Offset: 0x11c
	// Line 856, Address: 0x292fcc, Func Offset: 0x14c
	// Line 857, Address: 0x292fd4, Func Offset: 0x154
	// Line 856, Address: 0x292fdc, Func Offset: 0x15c
	// Line 857, Address: 0x292fe4, Func Offset: 0x164
	// Line 859, Address: 0x292fec, Func Offset: 0x16c
	// Line 864, Address: 0x292ff4, Func Offset: 0x174
	// Line 866, Address: 0x293000, Func Offset: 0x180
	// Line 867, Address: 0x293004, Func Offset: 0x184
	// Line 871, Address: 0x293010, Func Offset: 0x190
	// Line 872, Address: 0x293028, Func Offset: 0x1a8
	// Line 873, Address: 0x293038, Func Offset: 0x1b8
	// Line 878, Address: 0x293074, Func Offset: 0x1f4
	// Line 879, Address: 0x29307c, Func Offset: 0x1fc
	// Line 891, Address: 0x29309c, Func Offset: 0x21c
	// Line 890, Address: 0x2930a4, Func Offset: 0x224
	// Line 892, Address: 0x2930b0, Func Offset: 0x230
	// Line 891, Address: 0x2930b8, Func Offset: 0x238
	// Line 892, Address: 0x2930c4, Func Offset: 0x244
	// Line 898, Address: 0x2930dc, Func Offset: 0x25c
	// Line 899, Address: 0x2930ec, Func Offset: 0x26c
	// Line 901, Address: 0x2930f4, Func Offset: 0x274
	// Line 902, Address: 0x29310c, Func Offset: 0x28c
	// Line 903, Address: 0x29311c, Func Offset: 0x29c
	// Line 907, Address: 0x29312c, Func Offset: 0x2ac
	// Line 908, Address: 0x293140, Func Offset: 0x2c0
	// Line 912, Address: 0x293154, Func Offset: 0x2d4
	// Line 915, Address: 0x293160, Func Offset: 0x2e0
	// Line 917, Address: 0x293168, Func Offset: 0x2e8
	// Line 918, Address: 0x293170, Func Offset: 0x2f0
	// Line 920, Address: 0x293178, Func Offset: 0x2f8
	// Line 921, Address: 0x293180, Func Offset: 0x300
	// Line 922, Address: 0x293188, Func Offset: 0x308
	// Line 923, Address: 0x293194, Func Offset: 0x314
	// Line 927, Address: 0x2931a8, Func Offset: 0x328
	// Line 930, Address: 0x2931b4, Func Offset: 0x334
	// Line 932, Address: 0x2931bc, Func Offset: 0x33c
	// Line 933, Address: 0x2931c4, Func Offset: 0x344
	// Line 935, Address: 0x2931cc, Func Offset: 0x34c
	// Line 940, Address: 0x2931d8, Func Offset: 0x358
	// Line 941, Address: 0x2931dc, Func Offset: 0x35c
	// Func End, Address: 0x2931f0, Func Offset: 0x370
}

// 
// Start address: 0x2931f0
void ExecTransSoundData()
{
	// Line 950, Address: 0x2931f0, Func Offset: 0
	// Line 951, Address: 0x2931f8, Func Offset: 0x8
	// Line 952, Address: 0x293208, Func Offset: 0x18
	// Line 954, Address: 0x293228, Func Offset: 0x38
	// Line 958, Address: 0x293260, Func Offset: 0x70
	// Line 959, Address: 0x293270, Func Offset: 0x80
	// Line 961, Address: 0x293278, Func Offset: 0x88
	// Line 963, Address: 0x293288, Func Offset: 0x98
	// Line 962, Address: 0x29328c, Func Offset: 0x9c
	// Line 964, Address: 0x2932a0, Func Offset: 0xb0
	// Line 965, Address: 0x2932b4, Func Offset: 0xc4
	// Line 972, Address: 0x2932b8, Func Offset: 0xc8
	// Func End, Address: 0x2932c4, Func Offset: 0xd4
}

// 
// Start address: 0x2932d0
void RequestRoomSoundBank(int StageNo, int RoomNo, int CaseNo)
{
	// Line 1010, Address: 0x2932d0, Func Offset: 0
	// Line 1011, Address: 0x2932ec, Func Offset: 0x1c
	// Line 1013, Address: 0x2932f4, Func Offset: 0x24
	// Line 1016, Address: 0x293314, Func Offset: 0x44
	// Line 1019, Address: 0x293344, Func Offset: 0x74
	// Line 1020, Address: 0x293350, Func Offset: 0x80
	// Func End, Address: 0x293368, Func Offset: 0x98
}

// 
// Start address: 0x293370
void RequestArmsSoundBank(int ArmsNo)
{
	// Line 1030, Address: 0x293370, Func Offset: 0
	// Line 1031, Address: 0x293380, Func Offset: 0x10
	// Line 1034, Address: 0x293398, Func Offset: 0x28
	// Line 1037, Address: 0x2933a4, Func Offset: 0x34
	// Line 1038, Address: 0x2933b0, Func Offset: 0x40
	// Func End, Address: 0x2933c0, Func Offset: 0x50
}

// 
// Start address: 0x2933c0
void RequestDoorSoundBank(int DoorNo)
{
	// Line 1048, Address: 0x2933c0, Func Offset: 0
	// Line 1049, Address: 0x2933d0, Func Offset: 0x10
	// Line 1055, Address: 0x2933e8, Func Offset: 0x28
	// Line 1052, Address: 0x2933f0, Func Offset: 0x30
	// Line 1057, Address: 0x2933fc, Func Offset: 0x3c
	// Line 1058, Address: 0x293408, Func Offset: 0x48
	// Func End, Address: 0x293418, Func Offset: 0x58
}

// 
// Start address: 0x293420
void RequestPlayerVoiceSoundBank(int PlayerNo)
{
	// Line 1068, Address: 0x293420, Func Offset: 0
	// Line 1069, Address: 0x293430, Func Offset: 0x10
	// Line 1073, Address: 0x293448, Func Offset: 0x28
	// Line 1076, Address: 0x293454, Func Offset: 0x34
	// Line 1077, Address: 0x293460, Func Offset: 0x40
	// Func End, Address: 0x293470, Func Offset: 0x50
}

// 
// Start address: 0x293470
int CheckTransEndSoundBank()
{
	// Line 1135, Address: 0x293470, Func Offset: 0
	// Line 1137, Address: 0x293474, Func Offset: 0x4
	// Func End, Address: 0x29347c, Func Offset: 0xc
}

// 
// Start address: 0x293480
void SetRoomSoundCaseNo(int CaseNo)
{
	// Line 1146, Address: 0x293480, Func Offset: 0
	// Line 1147, Address: 0x293484, Func Offset: 0x4
	// Func End, Address: 0x29348c, Func Offset: 0xc
}

// 
// Start address: 0x293490
int GetRoomSoundCaseNo()
{
	int ReturnCode;
	// Line 1159, Address: 0x293490, Func Offset: 0
	// Line 1160, Address: 0x293498, Func Offset: 0x8
	// Line 1163, Address: 0x29349c, Func Offset: 0xc
	// Func End, Address: 0x2934a4, Func Offset: 0x14
}

// 
// Start address: 0x2934b0
int CustomMidiSlotDef(int ObjectSlot, int EventSlot)
{
	// Line 1178, Address: 0x2934b0, Func Offset: 0
	// Line 1179, Address: 0x2934c0, Func Offset: 0x10
	// Line 1180, Address: 0x2934cc, Func Offset: 0x1c
	// Line 1181, Address: 0x2934d4, Func Offset: 0x24
	// Line 1183, Address: 0x2934dc, Func Offset: 0x2c
	// Line 1184, Address: 0x2934e8, Func Offset: 0x38
	// Line 1185, Address: 0x2934f4, Func Offset: 0x44
	// Line 1186, Address: 0x2934fc, Func Offset: 0x4c
	// Line 1188, Address: 0x293504, Func Offset: 0x54
	// Line 1189, Address: 0x29350c, Func Offset: 0x5c
	// Line 1190, Address: 0x293514, Func Offset: 0x64
	// Line 1193, Address: 0x293518, Func Offset: 0x68
	// Func End, Address: 0x293520, Func Offset: 0x70
}

// 
// Start address: 0x293520
void ResetRoomSoundEnvParam()
{
	// Line 1202, Address: 0x293520, Func Offset: 0
	// Func End, Address: 0x293534, Func Offset: 0x14
}

// 
// Start address: 0x293540
int wadGetAngle(NJS_POINT3* pPos1, int Ang, NJS_POINT3* pPos2)
{
	// Line 1216, Address: 0x293540, Func Offset: 0
	// Line 1222, Address: 0x29354c, Func Offset: 0xc
	// Line 1223, Address: 0x293584, Func Offset: 0x44
	// Line 1222, Address: 0x29358c, Func Offset: 0x4c
	// Line 1223, Address: 0x293594, Func Offset: 0x54
	// Func End, Address: 0x29359c, Func Offset: 0x5c
}

// 
// Start address: 0x2935a0
int CheckCollision4Sound(NJS_POINT3* pP2)
{
	int ReturnCode;
	NJS_CAPSULE Capsule;
	// Line 1374, Address: 0x2935a0, Func Offset: 0
	// Line 1379, Address: 0x2935ac, Func Offset: 0xc
	// Line 1383, Address: 0x2935c4, Func Offset: 0x24
	// Line 1389, Address: 0x2935cc, Func Offset: 0x2c
	// Line 1384, Address: 0x2935d4, Func Offset: 0x34
	// Line 1383, Address: 0x2935dc, Func Offset: 0x3c
	// Line 1385, Address: 0x2935e0, Func Offset: 0x40
	// Line 1384, Address: 0x2935e8, Func Offset: 0x48
	// Line 1385, Address: 0x2935ec, Func Offset: 0x4c
	// Line 1386, Address: 0x2935f0, Func Offset: 0x50
	// Line 1387, Address: 0x2935f8, Func Offset: 0x58
	// Line 1388, Address: 0x293600, Func Offset: 0x60
	// Line 1390, Address: 0x293608, Func Offset: 0x68
	// Line 1391, Address: 0x29361c, Func Offset: 0x7c
	// Line 1399, Address: 0x293620, Func Offset: 0x80
	// Line 1400, Address: 0x293624, Func Offset: 0x84
	// Func End, Address: 0x293634, Func Offset: 0x94
}

// 
// Start address: 0x293640
int Get3DSoundParameter(NJS_POINT3* pP1, NJS_POINT3* pP2, char* pPan, char* pVol, float* pDist, int Mode)
{
	NJS_POINT3 pd;
	NJS_POINT2 ScreenPos;
	int Ang;
	int Val;
	int ReturnCode;
	// Line 1415, Address: 0x293640, Func Offset: 0
	// Line 1429, Address: 0x29367c, Func Offset: 0x3c
	// Line 1430, Address: 0x293688, Func Offset: 0x48
	// Line 1431, Address: 0x29369c, Func Offset: 0x5c
	// Line 1433, Address: 0x2936ac, Func Offset: 0x6c
	// Line 1434, Address: 0x2936bc, Func Offset: 0x7c
	// Line 1436, Address: 0x2936c8, Func Offset: 0x88
	// Line 1437, Address: 0x2936d0, Func Offset: 0x90
	// Line 1438, Address: 0x2936d8, Func Offset: 0x98
	// Line 1442, Address: 0x2936dc, Func Offset: 0x9c
	// Line 1443, Address: 0x2936f4, Func Offset: 0xb4
	// Line 1444, Address: 0x293720, Func Offset: 0xe0
	// Line 1445, Address: 0x293740, Func Offset: 0x100
	// Line 1446, Address: 0x293750, Func Offset: 0x110
	// Line 1445, Address: 0x29375c, Func Offset: 0x11c
	// Line 1446, Address: 0x293760, Func Offset: 0x120
	// Line 1448, Address: 0x293778, Func Offset: 0x138
	// Line 1450, Address: 0x293780, Func Offset: 0x140
	// Line 1456, Address: 0x2937c0, Func Offset: 0x180
	// Line 1457, Address: 0x2937c4, Func Offset: 0x184
	// Func End, Address: 0x2937f0, Func Offset: 0x1b0
}

// 
// Start address: 0x2937f0
int SetupSeGenericParm(int SlotNo, int SeNo, NJS_POINT3* pPos, int Flag, unsigned int Flag2)
{
	float Distance;
	int ReturnCode;
	// Line 1480, Address: 0x2937f0, Func Offset: 0
	// Line 1484, Address: 0x293804, Func Offset: 0x14
	// Line 1480, Address: 0x29380c, Func Offset: 0x1c
	// Line 1484, Address: 0x29381c, Func Offset: 0x2c
	// Line 1486, Address: 0x293840, Func Offset: 0x50
	// Line 1487, Address: 0x293844, Func Offset: 0x54
	// Line 1488, Address: 0x29384c, Func Offset: 0x5c
	// Line 1489, Address: 0x293850, Func Offset: 0x60
	// Line 1490, Address: 0x293858, Func Offset: 0x68
	// Line 1492, Address: 0x293864, Func Offset: 0x74
	// Line 1493, Address: 0x293874, Func Offset: 0x84
	// Line 1494, Address: 0x293878, Func Offset: 0x88
	// Line 1496, Address: 0x293884, Func Offset: 0x94
	// Line 1497, Address: 0x29388c, Func Offset: 0x9c
	// Line 1498, Address: 0x293894, Func Offset: 0xa4
	// Line 1500, Address: 0x29389c, Func Offset: 0xac
	// Line 1502, Address: 0x2938a8, Func Offset: 0xb8
	// Line 1503, Address: 0x2938b0, Func Offset: 0xc0
	// Line 1504, Address: 0x2938b8, Func Offset: 0xc8
	// Line 1506, Address: 0x2938c0, Func Offset: 0xd0
	// Line 1507, Address: 0x2938c8, Func Offset: 0xd8
	// Line 1508, Address: 0x2938d4, Func Offset: 0xe4
	// Line 1509, Address: 0x2938dc, Func Offset: 0xec
	// Line 1512, Address: 0x2938e4, Func Offset: 0xf4
	// Func End, Address: 0x293900, Func Offset: 0x110
}

// 
// Start address: 0x293900
void Set3dSoundFlag(int Type, int SlotNo, unsigned int Flag)
{
	int No;
	// Line 1552, Address: 0x293900, Func Offset: 0
	// Line 1553, Address: 0x29390c, Func Offset: 0xc
	// Line 1552, Address: 0x293910, Func Offset: 0x10
	// Line 1553, Address: 0x293914, Func Offset: 0x14
	// Line 1555, Address: 0x293938, Func Offset: 0x38
	// Line 1556, Address: 0x29393c, Func Offset: 0x3c
	// Line 1557, Address: 0x293948, Func Offset: 0x48
	// Line 1559, Address: 0x293958, Func Offset: 0x58
	// Line 1560, Address: 0x293964, Func Offset: 0x64
	// Line 1562, Address: 0x293974, Func Offset: 0x74
	// Line 1564, Address: 0x29397c, Func Offset: 0x7c
	// Line 1565, Address: 0x293990, Func Offset: 0x90
	// Line 1566, Address: 0x2939a0, Func Offset: 0xa0
	// Line 1567, Address: 0x2939ac, Func Offset: 0xac
	// Line 1568, Address: 0x2939bc, Func Offset: 0xbc
	// Line 1570, Address: 0x2939cc, Func Offset: 0xcc
	// Line 1571, Address: 0x2939d8, Func Offset: 0xd8
	// Line 1572, Address: 0x2939e8, Func Offset: 0xe8
	// Line 1574, Address: 0x2939f8, Func Offset: 0xf8
	// Line 1576, Address: 0x293a00, Func Offset: 0x100
	// Line 1577, Address: 0x293a04, Func Offset: 0x104
	// Line 1578, Address: 0x293a10, Func Offset: 0x110
	// Line 1580, Address: 0x293a20, Func Offset: 0x120
	// Line 1581, Address: 0x293a2c, Func Offset: 0x12c
	// Line 1583, Address: 0x293a3c, Func Offset: 0x13c
	// Line 1585, Address: 0x293a44, Func Offset: 0x144
	// Line 1586, Address: 0x293a4c, Func Offset: 0x14c
	// Line 1587, Address: 0x293a54, Func Offset: 0x154
	// Line 1588, Address: 0x293a58, Func Offset: 0x158
	// Line 1589, Address: 0x293a64, Func Offset: 0x164
	// Line 1590, Address: 0x293a74, Func Offset: 0x174
	// Line 1591, Address: 0x293a84, Func Offset: 0x184
	// Line 1593, Address: 0x293a94, Func Offset: 0x194
	// Line 1594, Address: 0x293aa0, Func Offset: 0x1a0
	// Line 1595, Address: 0x293ab0, Func Offset: 0x1b0
	// Line 1596, Address: 0x293ac0, Func Offset: 0x1c0
	// Line 1598, Address: 0x293ad0, Func Offset: 0x1d0
	// Line 1600, Address: 0x293ad8, Func Offset: 0x1d8
	// Line 1601, Address: 0x293adc, Func Offset: 0x1dc
	// Line 1602, Address: 0x293ae8, Func Offset: 0x1e8
	// Line 1604, Address: 0x293af8, Func Offset: 0x1f8
	// Line 1605, Address: 0x293b04, Func Offset: 0x204
	// Line 1607, Address: 0x293b14, Func Offset: 0x214
	// Line 1609, Address: 0x293b1c, Func Offset: 0x21c
	// Line 1610, Address: 0x293b38, Func Offset: 0x238
	// Line 1609, Address: 0x293b3c, Func Offset: 0x23c
	// Line 1610, Address: 0x293b40, Func Offset: 0x240
	// Line 1611, Address: 0x293b48, Func Offset: 0x248
	// Line 1613, Address: 0x293b5c, Func Offset: 0x25c
	// Line 1614, Address: 0x293b68, Func Offset: 0x268
	// Line 1616, Address: 0x293b78, Func Offset: 0x278
	// Line 1618, Address: 0x293b80, Func Offset: 0x280
	// Line 1619, Address: 0x293ba0, Func Offset: 0x2a0
	// Line 1620, Address: 0x293bac, Func Offset: 0x2ac
	// Line 1625, Address: 0x293bc0, Func Offset: 0x2c0
	// Line 1627, Address: 0x293bc8, Func Offset: 0x2c8
	// Line 1628, Address: 0x293be4, Func Offset: 0x2e4
	// Line 1627, Address: 0x293be8, Func Offset: 0x2e8
	// Line 1628, Address: 0x293bec, Func Offset: 0x2ec
	// Line 1629, Address: 0x293bf4, Func Offset: 0x2f4
	// Line 1631, Address: 0x293c08, Func Offset: 0x308
	// Line 1632, Address: 0x293c14, Func Offset: 0x314
	// Line 1634, Address: 0x293c24, Func Offset: 0x324
	// Line 1639, Address: 0x293c2c, Func Offset: 0x32c
	// Line 1641, Address: 0x293c44, Func Offset: 0x344
	// Line 1639, Address: 0x293c48, Func Offset: 0x348
	// Line 1641, Address: 0x293c4c, Func Offset: 0x34c
	// Line 1642, Address: 0x293c5c, Func Offset: 0x35c
	// Line 1643, Address: 0x293c68, Func Offset: 0x368
	// Line 1645, Address: 0x293c88, Func Offset: 0x388
	// Line 1646, Address: 0x293c94, Func Offset: 0x394
	// Line 1650, Address: 0x293cb4, Func Offset: 0x3b4
	// Line 1661, Address: 0x293cbc, Func Offset: 0x3bc
	// Line 1662, Address: 0x293cc4, Func Offset: 0x3c4
	// Line 1672, Address: 0x293cd4, Func Offset: 0x3d4
	// Func End, Address: 0x293ce8, Func Offset: 0x3e8
}

// 
// Start address: 0x293cf0
void Reset3dSoundFlag()
{
	int i;
	// Line 1681, Address: 0x293cf0, Func Offset: 0
	// Line 1684, Address: 0x293cf8, Func Offset: 0x8
	// Line 1685, Address: 0x293d0c, Func Offset: 0x1c
	// Line 1686, Address: 0x293d10, Func Offset: 0x20
	// Line 1687, Address: 0x293d20, Func Offset: 0x30
	// Line 1688, Address: 0x293d30, Func Offset: 0x40
	// Line 1689, Address: 0x293d40, Func Offset: 0x50
	// Line 1690, Address: 0x293d50, Func Offset: 0x60
	// Line 1691, Address: 0x293d60, Func Offset: 0x70
	// Line 1692, Address: 0x293d64, Func Offset: 0x74
	// Line 1693, Address: 0x293d74, Func Offset: 0x84
	// Line 1694, Address: 0x293d84, Func Offset: 0x94
	// Line 1695, Address: 0x293d94, Func Offset: 0xa4
	// Line 1696, Address: 0x293da4, Func Offset: 0xb4
	// Line 1697, Address: 0x293db4, Func Offset: 0xc4
	// Line 1698, Address: 0x293dbc, Func Offset: 0xcc
	// Line 1699, Address: 0x293dcc, Func Offset: 0xdc
	// Line 1700, Address: 0x293de4, Func Offset: 0xf4
	// Line 1701, Address: 0x293dec, Func Offset: 0xfc
	// Line 1702, Address: 0x293dfc, Func Offset: 0x10c
	// Line 1703, Address: 0x293e14, Func Offset: 0x124
	// Line 1704, Address: 0x293e24, Func Offset: 0x134
	// Line 1705, Address: 0x293e34, Func Offset: 0x144
	// Line 1706, Address: 0x293e44, Func Offset: 0x154
	// Func End, Address: 0x293e54, Func Offset: 0x164
}

// 
// Start address: 0x293e60
void SetUserSoundVolume(int Type, int SlotNo, int StartVol, int LastVol, int Frame)
{
	// Line 1740, Address: 0x293e60, Func Offset: 0
	// Line 1741, Address: 0x293e74, Func Offset: 0x14
	// Line 1740, Address: 0x293e78, Func Offset: 0x18
	// Line 1741, Address: 0x293e84, Func Offset: 0x24
	// Line 1743, Address: 0x293ea8, Func Offset: 0x48
	// Line 1744, Address: 0x293ebc, Func Offset: 0x5c
	// Line 1746, Address: 0x293ed0, Func Offset: 0x70
	// Line 1748, Address: 0x293ed8, Func Offset: 0x78
	// Line 1749, Address: 0x293ef8, Func Offset: 0x98
	// Line 1750, Address: 0x293f0c, Func Offset: 0xac
	// Line 1752, Address: 0x293f20, Func Offset: 0xc0
	// Line 1754, Address: 0x293f28, Func Offset: 0xc8
	// Line 1755, Address: 0x293f3c, Func Offset: 0xdc
	// Line 1757, Address: 0x293f50, Func Offset: 0xf0
	// Line 1759, Address: 0x293f58, Func Offset: 0xf8
	// Line 1760, Address: 0x293f6c, Func Offset: 0x10c
	// Line 1761, Address: 0x293f80, Func Offset: 0x120
	// Line 1762, Address: 0x293f94, Func Offset: 0x134
	// Line 1764, Address: 0x293fa8, Func Offset: 0x148
	// Line 1766, Address: 0x293fb0, Func Offset: 0x150
	// Line 1767, Address: 0x293fc4, Func Offset: 0x164
	// Line 1769, Address: 0x293fd8, Func Offset: 0x178
	// Line 1771, Address: 0x293fe0, Func Offset: 0x180
	// Line 1772, Address: 0x294010, Func Offset: 0x1b0
	// Line 1774, Address: 0x294020, Func Offset: 0x1c0
	// Line 1776, Address: 0x294028, Func Offset: 0x1c8
	// Line 1777, Address: 0x294058, Func Offset: 0x1f8
	// Line 1779, Address: 0x294068, Func Offset: 0x208
	// Line 1781, Address: 0x294070, Func Offset: 0x210
	// Line 1782, Address: 0x2940a0, Func Offset: 0x240
	// Line 1784, Address: 0x2940b0, Func Offset: 0x250
	// Line 1786, Address: 0x2940b8, Func Offset: 0x258
	// Line 1787, Address: 0x2940e0, Func Offset: 0x280
	// Line 1788, Address: 0x2940f0, Func Offset: 0x290
	// Line 1789, Address: 0x294100, Func Offset: 0x2a0
	// Line 1790, Address: 0x294110, Func Offset: 0x2b0
	// Line 1792, Address: 0x294118, Func Offset: 0x2b8
	// Line 1799, Address: 0x294120, Func Offset: 0x2c0
	// Line 1800, Address: 0x294134, Func Offset: 0x2d4
	// Line 1809, Address: 0x294148, Func Offset: 0x2e8
	// Func End, Address: 0x294164, Func Offset: 0x304
}

// 
// Start address: 0x294170
void SetUserSoundPan(int Type, int SlotNo, int StartPan, int LastPan, int Frame)
{
	// Line 1841, Address: 0x294170, Func Offset: 0
	// Line 1842, Address: 0x294184, Func Offset: 0x14
	// Line 1841, Address: 0x294188, Func Offset: 0x18
	// Line 1842, Address: 0x294194, Func Offset: 0x24
	// Line 1844, Address: 0x2941b8, Func Offset: 0x48
	// Line 1845, Address: 0x2941cc, Func Offset: 0x5c
	// Line 1847, Address: 0x2941e0, Func Offset: 0x70
	// Line 1849, Address: 0x2941e8, Func Offset: 0x78
	// Line 1850, Address: 0x294208, Func Offset: 0x98
	// Line 1851, Address: 0x29421c, Func Offset: 0xac
	// Line 1853, Address: 0x294230, Func Offset: 0xc0
	// Line 1855, Address: 0x294238, Func Offset: 0xc8
	// Line 1856, Address: 0x29424c, Func Offset: 0xdc
	// Line 1858, Address: 0x294260, Func Offset: 0xf0
	// Line 1860, Address: 0x294268, Func Offset: 0xf8
	// Line 1861, Address: 0x29427c, Func Offset: 0x10c
	// Line 1862, Address: 0x294290, Func Offset: 0x120
	// Line 1863, Address: 0x2942a4, Func Offset: 0x134
	// Line 1865, Address: 0x2942b8, Func Offset: 0x148
	// Line 1867, Address: 0x2942c0, Func Offset: 0x150
	// Line 1868, Address: 0x2942d4, Func Offset: 0x164
	// Line 1870, Address: 0x2942e8, Func Offset: 0x178
	// Line 1872, Address: 0x2942f0, Func Offset: 0x180
	// Line 1873, Address: 0x294320, Func Offset: 0x1b0
	// Line 1875, Address: 0x294330, Func Offset: 0x1c0
	// Line 1877, Address: 0x294338, Func Offset: 0x1c8
	// Line 1878, Address: 0x294368, Func Offset: 0x1f8
	// Line 1880, Address: 0x294378, Func Offset: 0x208
	// Line 1882, Address: 0x294380, Func Offset: 0x210
	// Line 1883, Address: 0x2943a8, Func Offset: 0x238
	// Line 1884, Address: 0x2943b8, Func Offset: 0x248
	// Line 1885, Address: 0x2943c8, Func Offset: 0x258
	// Line 1886, Address: 0x2943d8, Func Offset: 0x268
	// Line 1897, Address: 0x2943e4, Func Offset: 0x274
	// Func End, Address: 0x294400, Func Offset: 0x290
}

// 
// Start address: 0x294400
void PlayGameSe4Event(SOUND_EFFECT* gp, NJS_POINT3* pPos, int FloorType, int SeType)
{
	int Flag;
	// Line 1947, Address: 0x294400, Func Offset: 0
	// Line 1950, Address: 0x294418, Func Offset: 0x18
	// Line 1951, Address: 0x294438, Func Offset: 0x38
	// Line 1953, Address: 0x29443c, Func Offset: 0x3c
	// Line 1954, Address: 0x29444c, Func Offset: 0x4c
	// Line 1956, Address: 0x294450, Func Offset: 0x50
	// Line 1958, Address: 0x29445c, Func Offset: 0x5c
	// Line 1959, Address: 0x29446c, Func Offset: 0x6c
	// Line 1961, Address: 0x294480, Func Offset: 0x80
	// Line 1962, Address: 0x294490, Func Offset: 0x90
	// Line 1965, Address: 0x2944a4, Func Offset: 0xa4
	// Line 1967, Address: 0x2944d0, Func Offset: 0xd0
	// Line 1968, Address: 0x2944d8, Func Offset: 0xd8
	// Line 1970, Address: 0x2944e0, Func Offset: 0xe0
	// Line 1971, Address: 0x2944f8, Func Offset: 0xf8
	// Line 1973, Address: 0x294500, Func Offset: 0x100
	// Line 1974, Address: 0x29450c, Func Offset: 0x10c
	// Line 1976, Address: 0x294514, Func Offset: 0x114
	// Line 1977, Address: 0x294524, Func Offset: 0x124
	// Line 1979, Address: 0x29452c, Func Offset: 0x12c
	// Line 1980, Address: 0x294538, Func Offset: 0x138
	// Line 1982, Address: 0x294540, Func Offset: 0x140
	// Line 1983, Address: 0x294550, Func Offset: 0x150
	// Line 1985, Address: 0x294558, Func Offset: 0x158
	// Line 1986, Address: 0x294564, Func Offset: 0x164
	// Line 1988, Address: 0x29456c, Func Offset: 0x16c
	// Line 1999, Address: 0x294580, Func Offset: 0x180
	// Func End, Address: 0x29459c, Func Offset: 0x19c
}

// 
// Start address: 0x2945a0
void CallSystemSeBasic(int SeNo, int Volume, int FxLevel)
{
	int SlotDef[2];
	// Line 2012, Address: 0x2945a0, Func Offset: 0
	// Line 2013, Address: 0x2945a4, Func Offset: 0x4
	// Line 2012, Address: 0x2945ac, Func Offset: 0xc
	// Line 2013, Address: 0x2945b0, Func Offset: 0x10
	// Line 2015, Address: 0x2945b8, Func Offset: 0x18
	// Line 2018, Address: 0x2945bc, Func Offset: 0x1c
	// Line 2015, Address: 0x2945c0, Func Offset: 0x20
	// Line 2013, Address: 0x2945c8, Func Offset: 0x28
	// Line 2015, Address: 0x2945cc, Func Offset: 0x2c
	// Line 2016, Address: 0x2945d0, Func Offset: 0x30
	// Line 2017, Address: 0x2945d8, Func Offset: 0x38
	// Line 2018, Address: 0x2945e0, Func Offset: 0x40
	// Line 2019, Address: 0x2945e8, Func Offset: 0x48
	// Line 2020, Address: 0x2945f0, Func Offset: 0x50
	// Line 2021, Address: 0x2945f8, Func Offset: 0x58
	// Line 2022, Address: 0x294600, Func Offset: 0x60
	// Line 2023, Address: 0x294608, Func Offset: 0x68
	// Line 2024, Address: 0x294610, Func Offset: 0x70
	// Line 2025, Address: 0x294618, Func Offset: 0x78
	// Line 2026, Address: 0x29461c, Func Offset: 0x7c
	// Line 2027, Address: 0x294624, Func Offset: 0x84
	// Line 2028, Address: 0x29462c, Func Offset: 0x8c
	// Line 2031, Address: 0x294634, Func Offset: 0x94
	// Line 2032, Address: 0x294644, Func Offset: 0xa4
	// Line 2033, Address: 0x29464c, Func Offset: 0xac
	// Line 2034, Address: 0x294658, Func Offset: 0xb8
	// Line 2035, Address: 0x294664, Func Offset: 0xc4
	// Line 2036, Address: 0x29466c, Func Offset: 0xcc
	// Line 2038, Address: 0x294674, Func Offset: 0xd4
	// Line 2036, Address: 0x29467c, Func Offset: 0xdc
	// Line 2037, Address: 0x294688, Func Offset: 0xe8
	// Line 2036, Address: 0x294698, Func Offset: 0xf8
	// Line 2038, Address: 0x29469c, Func Offset: 0xfc
	// Line 2040, Address: 0x2946a4, Func Offset: 0x104
	// Func End, Address: 0x2946b0, Func Offset: 0x110
}

// 
// Start address: 0x2946b0
void CallSystemSeEx(int SeNo, int Volume)
{
	// Line 2053, Address: 0x2946b0, Func Offset: 0
	// Func End, Address: 0x2946b8, Func Offset: 0x8
}

// 
// Start address: 0x2946c0
void CallSystemSe(int SeNo)
{
	// Line 2065, Address: 0x2946c0, Func Offset: 0
	// Func End, Address: 0x2946cc, Func Offset: 0xc
}

// 
// Start address: 0x2946d0
void StopSystemSe()
{
	// Line 2091, Address: 0x2946d0, Func Offset: 0
	// Func End, Address: 0x2946d8, Func Offset: 0x8
}

// 
// Start address: 0x2946e0
void SetSyukanModeSoundParam()
{
	// Line 2102, Address: 0x2946e0, Func Offset: 0
	// Line 2103, Address: 0x2946fc, Func Offset: 0x1c
	// Line 2104, Address: 0x294704, Func Offset: 0x24
	// Line 2105, Address: 0x29470c, Func Offset: 0x2c
	// Line 2106, Address: 0x294714, Func Offset: 0x34
	// Line 2108, Address: 0x29471c, Func Offset: 0x3c
	// Func End, Address: 0x294724, Func Offset: 0x44
}

// 
// Start address: 0x294730
void CallPlayerVoice(int SeNo)
{
	// Line 2116, Address: 0x294730, Func Offset: 0
	// Line 2117, Address: 0x294738, Func Offset: 0x8
	// Line 2120, Address: 0x294758, Func Offset: 0x28
	// Line 2118, Address: 0x294760, Func Offset: 0x30
	// Line 2120, Address: 0x294768, Func Offset: 0x38
	// Line 2121, Address: 0x294774, Func Offset: 0x44
	// Line 2124, Address: 0x294790, Func Offset: 0x60
	// Line 2125, Address: 0x29479c, Func Offset: 0x6c
	// Func End, Address: 0x2947a8, Func Offset: 0x78
}

// 
// Start address: 0x2947b0
int GetPlayerActionSeSlotNo(int Type, int Id)
{
	int SlotDef[6];
	// Line 2135, Address: 0x2947b0, Func Offset: 0
	// Line 2134, Address: 0x2947bc, Func Offset: 0xc
	// Line 2135, Address: 0x2947c0, Func Offset: 0x10
	// Line 2140, Address: 0x2947c4, Func Offset: 0x14
	// Line 2135, Address: 0x2947c8, Func Offset: 0x18
	// Line 2140, Address: 0x2947d0, Func Offset: 0x20
	// Line 2145, Address: 0x2947f4, Func Offset: 0x44
	// Line 2155, Address: 0x294808, Func Offset: 0x58
	// Line 2145, Address: 0x29480c, Func Offset: 0x5c
	// Line 2155, Address: 0x294818, Func Offset: 0x68
	// Line 2160, Address: 0x294830, Func Offset: 0x80
	// Line 2162, Address: 0x294834, Func Offset: 0x84
	// Func End, Address: 0x29483c, Func Offset: 0x8c
}

// 
// Start address: 0x294840
void CallPlayerFootStepSeEx(int FloorType, int Type, int Flag, int Id, NJS_POINT3* pPos)
{
	float Distance;
	char FootDef[5];
	short RunPitchTbl[4];
	short WalkPitchTbl[4];
	// Line 2184, Address: 0x294840, Func Offset: 0
	// Line 2185, Address: 0x294854, Func Offset: 0x14
	// Line 2184, Address: 0x294858, Func Offset: 0x18
	// Line 2185, Address: 0x29485c, Func Offset: 0x1c
	// Line 2186, Address: 0x294874, Func Offset: 0x34
	// Line 2185, Address: 0x29487c, Func Offset: 0x3c
	// Line 2186, Address: 0x294880, Func Offset: 0x40
	// Line 2187, Address: 0x29488c, Func Offset: 0x4c
	// Line 2186, Address: 0x294898, Func Offset: 0x58
	// Line 2187, Address: 0x29489c, Func Offset: 0x5c
	// Line 2191, Address: 0x2948a0, Func Offset: 0x60
	// Line 2187, Address: 0x2948b0, Func Offset: 0x70
	// Line 2191, Address: 0x2948b4, Func Offset: 0x74
	// Line 2187, Address: 0x2948c4, Func Offset: 0x84
	// Line 2191, Address: 0x2948cc, Func Offset: 0x8c
	// Line 2192, Address: 0x2948d4, Func Offset: 0x94
	// Line 2198, Address: 0x2948dc, Func Offset: 0x9c
	// Line 2202, Address: 0x2948e4, Func Offset: 0xa4
	// Line 2199, Address: 0x2948ec, Func Offset: 0xac
	// Line 2200, Address: 0x2948f4, Func Offset: 0xb4
	// Line 2198, Address: 0x2948fc, Func Offset: 0xbc
	// Line 2199, Address: 0x294904, Func Offset: 0xc4
	// Line 2200, Address: 0x29490c, Func Offset: 0xcc
	// Line 2202, Address: 0x294910, Func Offset: 0xd0
	// Line 2203, Address: 0x294920, Func Offset: 0xe0
	// Line 2204, Address: 0x294928, Func Offset: 0xe8
	// Line 2206, Address: 0x294930, Func Offset: 0xf0
	// Line 2207, Address: 0x294938, Func Offset: 0xf8
	// Line 2210, Address: 0x29496c, Func Offset: 0x12c
	// Line 2209, Address: 0x294974, Func Offset: 0x134
	// Line 2210, Address: 0x29497c, Func Offset: 0x13c
	// Line 2211, Address: 0x294980, Func Offset: 0x140
	// Line 2212, Address: 0x2949d4, Func Offset: 0x194
	// Line 2213, Address: 0x2949d8, Func Offset: 0x198
	// Line 2222, Address: 0x2949e0, Func Offset: 0x1a0
	// Line 2221, Address: 0x2949e8, Func Offset: 0x1a8
	// Line 2222, Address: 0x2949f0, Func Offset: 0x1b0
	// Line 2223, Address: 0x2949f4, Func Offset: 0x1b4
	// Line 2224, Address: 0x294a48, Func Offset: 0x208
	// Line 2225, Address: 0x294a4c, Func Offset: 0x20c
	// Line 2233, Address: 0x294a54, Func Offset: 0x214
	// Line 2235, Address: 0x294a5c, Func Offset: 0x21c
	// Line 2236, Address: 0x294a68, Func Offset: 0x228
	// Line 2237, Address: 0x294a70, Func Offset: 0x230
	// Line 2245, Address: 0x294a78, Func Offset: 0x238
	// Line 2246, Address: 0x294a84, Func Offset: 0x244
	// Line 2247, Address: 0x294a8c, Func Offset: 0x24c
	// Line 2251, Address: 0x294a98, Func Offset: 0x258
	// Line 2252, Address: 0x294abc, Func Offset: 0x27c
	// Line 2253, Address: 0x294ac4, Func Offset: 0x284
	// Line 2254, Address: 0x294acc, Func Offset: 0x28c
	// Line 2256, Address: 0x294ad4, Func Offset: 0x294
	// Line 2257, Address: 0x294af8, Func Offset: 0x2b8
	// Line 2258, Address: 0x294b00, Func Offset: 0x2c0
	// Line 2259, Address: 0x294b08, Func Offset: 0x2c8
	// Line 2261, Address: 0x294b0c, Func Offset: 0x2cc
	// Line 2262, Address: 0x294b14, Func Offset: 0x2d4
	// Line 2263, Address: 0x294b1c, Func Offset: 0x2dc
	// Line 2264, Address: 0x294b24, Func Offset: 0x2e4
	// Line 2265, Address: 0x294b2c, Func Offset: 0x2ec
	// Line 2268, Address: 0x294b34, Func Offset: 0x2f4
	// Line 2269, Address: 0x294b58, Func Offset: 0x318
	// Line 2272, Address: 0x294b74, Func Offset: 0x334
	// Line 2273, Address: 0x294b80, Func Offset: 0x340
	// Func End, Address: 0x294b9c, Func Offset: 0x35c
}

// 
// Start address: 0x294ba0
void CallPlayerFootStepSe(int FloorType, int Type, int Flag)
{
	// Line 2292, Address: 0x294ba0, Func Offset: 0
	// Func End, Address: 0x294bb0, Func Offset: 0x10
}

// 
// Start address: 0x294bb0
void CallPlayerActionSe(int SeNo, int Flag)
{
	// Line 2304, Address: 0x294bb4, Func Offset: 0x4
	// Func End, Address: 0x294bc8, Func Offset: 0x18
}

// 
// Start address: 0x294bd0
void CallPlayerWeaponSeEx(NJS_POINT3* pPos, int SeNo, int SlotNo)
{
	int NeoSlotNo;
	int SlotDef[2];
	// Line 2315, Address: 0x294bd0, Func Offset: 0
	// Line 2316, Address: 0x294bd4, Func Offset: 0x4
	// Line 2315, Address: 0x294bd8, Func Offset: 0x8
	// Line 2316, Address: 0x294bdc, Func Offset: 0xc
	// Line 2315, Address: 0x294be0, Func Offset: 0x10
	// Line 2316, Address: 0x294be8, Func Offset: 0x18
	// Line 2319, Address: 0x294bf0, Func Offset: 0x20
	// Line 2316, Address: 0x294bf4, Func Offset: 0x24
	// Line 2319, Address: 0x294bf8, Func Offset: 0x28
	// Line 2323, Address: 0x294c08, Func Offset: 0x38
	// Line 2325, Address: 0x294c14, Func Offset: 0x44
	// Line 2326, Address: 0x294c1c, Func Offset: 0x4c
	// Line 2327, Address: 0x294c30, Func Offset: 0x60
	// Line 2328, Address: 0x294c3c, Func Offset: 0x6c
	// Line 2329, Address: 0x294c44, Func Offset: 0x74
	// Line 2331, Address: 0x294c48, Func Offset: 0x78
	// Line 2332, Address: 0x294c64, Func Offset: 0x94
	// Line 2334, Address: 0x294c6c, Func Offset: 0x9c
	// Line 2336, Address: 0x294c78, Func Offset: 0xa8
	// Line 2337, Address: 0x294c88, Func Offset: 0xb8
	// Line 2340, Address: 0x294ca4, Func Offset: 0xd4
	// Line 2341, Address: 0x294cb0, Func Offset: 0xe0
	// Func End, Address: 0x294cc0, Func Offset: 0xf0
}

// 
// Start address: 0x294cc0
void CallYakkyouSe(NJS_POINT3* pPos, int SeNo)
{
	// Line 2361, Address: 0x294cc0, Func Offset: 0
	// Line 2362, Address: 0x294ccc, Func Offset: 0xc
	// Line 2368, Address: 0x294ce0, Func Offset: 0x20
	// Line 2366, Address: 0x294ce8, Func Offset: 0x28
	// Line 2368, Address: 0x294cf4, Func Offset: 0x34
	// Line 2369, Address: 0x294d04, Func Offset: 0x44
	// Line 2371, Address: 0x294d2c, Func Offset: 0x6c
	// Line 2369, Address: 0x294d34, Func Offset: 0x74
	// Line 2371, Address: 0x294d48, Func Offset: 0x88
	// Line 2369, Address: 0x294d4c, Func Offset: 0x8c
	// Line 2371, Address: 0x294d54, Func Offset: 0x94
	// Line 2372, Address: 0x294d5c, Func Offset: 0x9c
	// Line 2375, Address: 0x294d78, Func Offset: 0xb8
	// Line 2376, Address: 0x294d84, Func Offset: 0xc4
	// Func End, Address: 0x294d90, Func Offset: 0xd0
}

// 
// Start address: 0x294d90
void CallBackGroundSeEx(unsigned int SlotNo, int SeNo, short Timer)
{
	int SlotDef[3];
	// Line 2386, Address: 0x294d90, Func Offset: 0
	// Line 2387, Address: 0x294da0, Func Offset: 0x10
	// Line 2386, Address: 0x294da4, Func Offset: 0x14
	// Line 2387, Address: 0x294da8, Func Offset: 0x18
	// Line 2391, Address: 0x294dc0, Func Offset: 0x30
	// Line 2389, Address: 0x294dc4, Func Offset: 0x34
	// Line 2387, Address: 0x294dd0, Func Offset: 0x40
	// Line 2389, Address: 0x294dd4, Func Offset: 0x44
	// Line 2387, Address: 0x294dd8, Func Offset: 0x48
	// Line 2391, Address: 0x294ddc, Func Offset: 0x4c
	// Line 2392, Address: 0x294de8, Func Offset: 0x58
	// Line 2393, Address: 0x294dfc, Func Offset: 0x6c
	// Line 2394, Address: 0x294e0c, Func Offset: 0x7c
	// Line 2396, Address: 0x294e1c, Func Offset: 0x8c
	// Line 2399, Address: 0x294e24, Func Offset: 0x94
	// Line 2400, Address: 0x294e34, Func Offset: 0xa4
	// Line 2404, Address: 0x294e48, Func Offset: 0xb8
	// Line 2405, Address: 0x294e54, Func Offset: 0xc4
	// Line 2410, Address: 0x294e70, Func Offset: 0xe0
	// Line 2411, Address: 0x294e78, Func Offset: 0xe8
	// Line 2414, Address: 0x294e84, Func Offset: 0xf4
	// Line 2418, Address: 0x294e94, Func Offset: 0x104
	// Line 2415, Address: 0x294e98, Func Offset: 0x108
	// Line 2414, Address: 0x294e9c, Func Offset: 0x10c
	// Line 2415, Address: 0x294ea0, Func Offset: 0x110
	// Line 2416, Address: 0x294eac, Func Offset: 0x11c
	// Line 2417, Address: 0x294eb4, Func Offset: 0x124
	// Line 2418, Address: 0x294ebc, Func Offset: 0x12c
	// Line 2419, Address: 0x294ec4, Func Offset: 0x134
	// Line 2420, Address: 0x294ecc, Func Offset: 0x13c
	// Line 2421, Address: 0x294ed8, Func Offset: 0x148
	// Line 2422, Address: 0x294ee0, Func Offset: 0x150
	// Line 2424, Address: 0x294eec, Func Offset: 0x15c
	// Line 2425, Address: 0x294efc, Func Offset: 0x16c
	// Func End, Address: 0x294f14, Func Offset: 0x184
}

// 
// Start address: 0x294f20
void CallBackGroundSe(unsigned int SlotNo, int SeNo)
{
	// Line 2435, Address: 0x294f20, Func Offset: 0
	// Func End, Address: 0x294f28, Func Offset: 0x8
}

// 
// Start address: 0x294f30
void CallBackGroundSe2(unsigned int SlotNo, int SeNo)
{
	// Line 2447, Address: 0x294f30, Func Offset: 0
	// Line 2448, Address: 0x294f4c, Func Offset: 0x1c
	// Line 2449, Address: 0x294f64, Func Offset: 0x34
	// Line 2451, Address: 0x294f68, Func Offset: 0x38
	// Func End, Address: 0x294f70, Func Offset: 0x40
}

// 
// Start address: 0x294f70
void StopBackGroundSeEx(unsigned int SlotNo, short Timer)
{
	int SlotDef[3];
	// Line 2460, Address: 0x294f70, Func Offset: 0
	// Line 2463, Address: 0x294f74, Func Offset: 0x4
	// Line 2460, Address: 0x294f78, Func Offset: 0x8
	// Line 2461, Address: 0x294f84, Func Offset: 0x14
	// Line 2463, Address: 0x294f9c, Func Offset: 0x2c
	// Line 2461, Address: 0x294fa0, Func Offset: 0x30
	// Line 2463, Address: 0x294fa4, Func Offset: 0x34
	// Line 2464, Address: 0x294fac, Func Offset: 0x3c
	// Line 2465, Address: 0x294fc0, Func Offset: 0x50
	// Line 2466, Address: 0x294fc8, Func Offset: 0x58
	// Line 2468, Address: 0x294fd8, Func Offset: 0x68
	// Line 2469, Address: 0x294ff0, Func Offset: 0x80
	// Func End, Address: 0x295000, Func Offset: 0x90
}

// 
// Start address: 0x295000
void StopBackGroundSe2(unsigned int SlotNo)
{
	// Line 2489, Address: 0x295000, Func Offset: 0
	// Line 2490, Address: 0x295018, Func Offset: 0x18
	// Line 2491, Address: 0x295028, Func Offset: 0x28
	// Func End, Address: 0x295030, Func Offset: 0x30
}

// 
// Start address: 0x295030
void CallDoorSe(unsigned int No)
{
	unsigned char DoorFxDef[40];
	// Line 2502, Address: 0x295030, Func Offset: 0
	// Line 2503, Address: 0x295034, Func Offset: 0x4
	// Line 2502, Address: 0x29503c, Func Offset: 0xc
	// Line 2503, Address: 0x295040, Func Offset: 0x10
	// Line 2511, Address: 0x295050, Func Offset: 0x20
	// Line 2503, Address: 0x295058, Func Offset: 0x28
	// Line 2511, Address: 0x295064, Func Offset: 0x34
	// Line 2512, Address: 0x295068, Func Offset: 0x38
	// Line 2513, Address: 0x295074, Func Offset: 0x44
	// Line 2514, Address: 0x29507c, Func Offset: 0x4c
	// Line 2515, Address: 0x295084, Func Offset: 0x54
	// Line 2516, Address: 0x295090, Func Offset: 0x60
	// Line 2517, Address: 0x295098, Func Offset: 0x68
	// Line 2522, Address: 0x2950a0, Func Offset: 0x70
	// Line 2518, Address: 0x2950a8, Func Offset: 0x78
	// Line 2526, Address: 0x2950b4, Func Offset: 0x84
	// Line 2522, Address: 0x2950bc, Func Offset: 0x8c
	// Line 2521, Address: 0x2950c4, Func Offset: 0x94
	// Line 2522, Address: 0x2950cc, Func Offset: 0x9c
	// Line 2526, Address: 0x2950d4, Func Offset: 0xa4
	// Line 2531, Address: 0x2950d8, Func Offset: 0xa8
	// Line 2526, Address: 0x2950dc, Func Offset: 0xac
	// Line 2531, Address: 0x2950e0, Func Offset: 0xb0
	// Line 2526, Address: 0x2950e4, Func Offset: 0xb4
	// Line 2531, Address: 0x2950f4, Func Offset: 0xc4
	// Line 2532, Address: 0x2950fc, Func Offset: 0xcc
	// Func End, Address: 0x295108, Func Offset: 0xd8
}

// 
// Start address: 0x295110
void RequestEnemySeBasic(int EnemyNo, NJS_POINT3* pPos, int SeNo, int Flag, int FadeRate)
{
	char VolDownTbl[8];
	SND_ENEMY_INFO* eip;
	// Line 2550, Address: 0x295110, Func Offset: 0
	// Line 2552, Address: 0x295124, Func Offset: 0x14
	// Line 2550, Address: 0x29512c, Func Offset: 0x1c
	// Line 2552, Address: 0x295130, Func Offset: 0x20
	// Line 2554, Address: 0x295148, Func Offset: 0x38
	// Line 2557, Address: 0x295150, Func Offset: 0x40
	// Line 2555, Address: 0x295154, Func Offset: 0x44
	// Line 2557, Address: 0x29515c, Func Offset: 0x4c
	// Line 2555, Address: 0x295160, Func Offset: 0x50
	// Line 2557, Address: 0x295168, Func Offset: 0x58
	// Line 2558, Address: 0x29516c, Func Offset: 0x5c
	// Line 2557, Address: 0x295178, Func Offset: 0x68
	// Line 2558, Address: 0x295180, Func Offset: 0x70
	// Line 2557, Address: 0x295188, Func Offset: 0x78
	// Line 2558, Address: 0x29518c, Func Offset: 0x7c
	// Line 2560, Address: 0x295194, Func Offset: 0x84
	// Line 2561, Address: 0x2951a0, Func Offset: 0x90
	// Line 2560, Address: 0x2951b0, Func Offset: 0xa0
	// Line 2561, Address: 0x2951b8, Func Offset: 0xa8
	// Line 2564, Address: 0x2951c0, Func Offset: 0xb0
	// Line 2561, Address: 0x2951cc, Func Offset: 0xbc
	// Line 2562, Address: 0x2951d4, Func Offset: 0xc4
	// Line 2564, Address: 0x2951d8, Func Offset: 0xc8
	// Line 2565, Address: 0x2951e8, Func Offset: 0xd8
	// Line 2568, Address: 0x2951ec, Func Offset: 0xdc
	// Line 2570, Address: 0x2951fc, Func Offset: 0xec
	// Line 2569, Address: 0x295200, Func Offset: 0xf0
	// Line 2570, Address: 0x295204, Func Offset: 0xf4
	// Line 2572, Address: 0x295208, Func Offset: 0xf8
	// Line 2574, Address: 0x295210, Func Offset: 0x100
	// Line 2573, Address: 0x295214, Func Offset: 0x104
	// Line 2574, Address: 0x295218, Func Offset: 0x108
	// Line 2575, Address: 0x29521c, Func Offset: 0x10c
	// Line 2577, Address: 0x295220, Func Offset: 0x110
	// Func End, Address: 0x29523c, Func Offset: 0x12c
}

// 
// Start address: 0x295240
void RequestEnemySe(int EnemyNo, NJS_POINT3* pPos, int SeNo)
{
	// Line 2588, Address: 0x295240, Func Offset: 0
	// Func End, Address: 0x29524c, Func Offset: 0xc
}

// 
// Start address: 0x295250
void RequestEnemySeEx(int EnemyNo, NJS_POINT3* pPos, int SeNo, int FadeRate)
{
	// Line 2618, Address: 0x295254, Func Offset: 0x4
	// Func End, Address: 0x29525c, Func Offset: 0xc
}

// 
// Start address: 0x295260
int ChechPlayEnemySe(int EnemyNo, int SeNo)
{
	SND_ENEMY_SLOT* esp;
	int i;
	// Line 2634, Address: 0x295260, Func Offset: 0
	// Line 2635, Address: 0x29526c, Func Offset: 0xc
	// Line 2636, Address: 0x295278, Func Offset: 0x18
	// Line 2637, Address: 0x295284, Func Offset: 0x24
	// Line 2638, Address: 0x29528c, Func Offset: 0x2c
	// Line 2640, Address: 0x295294, Func Offset: 0x34
	// Line 2641, Address: 0x2952a0, Func Offset: 0x40
	// Line 2646, Address: 0x2952a8, Func Offset: 0x48
	// Line 2648, Address: 0x2952b8, Func Offset: 0x58
	// Line 2649, Address: 0x2952bc, Func Offset: 0x5c
	// Func End, Address: 0x2952c4, Func Offset: 0x64
}

// 
// Start address: 0x2952d0
void AllStopEnemySe()
{
	SND_ENEMY_SLOT* esp;
	int i;
	// Line 2658, Address: 0x2952d0, Func Offset: 0
	// Line 2662, Address: 0x2952e0, Func Offset: 0x10
	// Line 2658, Address: 0x2952ec, Func Offset: 0x1c
	// Line 2662, Address: 0x2952f4, Func Offset: 0x24
	// Line 2663, Address: 0x2952f8, Func Offset: 0x28
	// Line 2664, Address: 0x295304, Func Offset: 0x34
	// Line 2665, Address: 0x295314, Func Offset: 0x44
	// Line 2666, Address: 0x29531c, Func Offset: 0x4c
	// Line 2668, Address: 0x295328, Func Offset: 0x58
	// Line 2671, Address: 0x29532c, Func Offset: 0x5c
	// Line 2669, Address: 0x295330, Func Offset: 0x60
	// Line 2670, Address: 0x295334, Func Offset: 0x64
	// Line 2671, Address: 0x295338, Func Offset: 0x68
	// Line 2670, Address: 0x29533c, Func Offset: 0x6c
	// Line 2671, Address: 0x295340, Func Offset: 0x70
	// Line 2672, Address: 0x295348, Func Offset: 0x78
	// Line 2673, Address: 0x295350, Func Offset: 0x80
	// Func End, Address: 0x295368, Func Offset: 0x98
}

// 
// Start address: 0x295370
void CallEnemySe(int SlotNo, NJS_POINT3* pPos, int SeNo)
{
	int SlotDef[6];
	// Line 2686, Address: 0x295370, Func Offset: 0
	// Line 2687, Address: 0x295374, Func Offset: 0x4
	// Line 2686, Address: 0x295378, Func Offset: 0x8
	// Line 2687, Address: 0x29537c, Func Offset: 0xc
	// Line 2686, Address: 0x295380, Func Offset: 0x10
	// Line 2687, Address: 0x295388, Func Offset: 0x18
	// Line 2689, Address: 0x295394, Func Offset: 0x24
	// Line 2687, Address: 0x2953a4, Func Offset: 0x34
	// Line 2691, Address: 0x2953a8, Func Offset: 0x38
	// Line 2687, Address: 0x2953ac, Func Offset: 0x3c
	// Line 2691, Address: 0x2953b0, Func Offset: 0x40
	// Line 2693, Address: 0x2953d8, Func Offset: 0x68
	// Line 2694, Address: 0x2953e8, Func Offset: 0x78
	// Line 2697, Address: 0x295404, Func Offset: 0x94
	// Line 2698, Address: 0x295410, Func Offset: 0xa0
	// Func End, Address: 0x295420, Func Offset: 0xb0
}

// 
// Start address: 0x295420
void StopEnemySe(int SlotNo)
{
	// Line 2709, Address: 0x295420, Func Offset: 0
	// Func End, Address: 0x295438, Func Offset: 0x18
}

// 
// Start address: 0x295440
int CallNativeEventSe(int SlotNo, NJS_POINT3* pPos, int SeNo, int Mode)
{
	int SlotDef[5];
	float Distance;
	// Line 2781, Address: 0x295440, Func Offset: 0
	// Line 2783, Address: 0x295444, Func Offset: 0x4
	// Line 2781, Address: 0x29544c, Func Offset: 0xc
	// Line 2783, Address: 0x295450, Func Offset: 0x10
	// Line 2785, Address: 0x295458, Func Offset: 0x18
	// Line 2783, Address: 0x29545c, Func Offset: 0x1c
	// Line 2785, Address: 0x295468, Func Offset: 0x28
	// Line 2786, Address: 0x295478, Func Offset: 0x38
	// Line 2791, Address: 0x295480, Func Offset: 0x40
	// Line 2789, Address: 0x295490, Func Offset: 0x50
	// Line 2791, Address: 0x2954a0, Func Offset: 0x60
	// Line 2792, Address: 0x2954a4, Func Offset: 0x64
	// Line 2791, Address: 0x2954a8, Func Offset: 0x68
	// Line 2792, Address: 0x2954ac, Func Offset: 0x6c
	// Line 2793, Address: 0x2954b8, Func Offset: 0x78
	// Line 2794, Address: 0x2954c0, Func Offset: 0x80
	// Line 2795, Address: 0x2954c8, Func Offset: 0x88
	// Line 2796, Address: 0x2954d4, Func Offset: 0x94
	// Line 2797, Address: 0x2954e0, Func Offset: 0xa0
	// Line 2799, Address: 0x2954e4, Func Offset: 0xa4
	// Line 2801, Address: 0x295500, Func Offset: 0xc0
	// Line 2802, Address: 0x295524, Func Offset: 0xe4
	// Line 2803, Address: 0x29552c, Func Offset: 0xec
	// Line 2804, Address: 0x295530, Func Offset: 0xf0
	// Line 2806, Address: 0x295538, Func Offset: 0xf8
	// Line 2807, Address: 0x295540, Func Offset: 0x100
	// Line 2808, Address: 0x295560, Func Offset: 0x120
	// Line 2809, Address: 0x295564, Func Offset: 0x124
	// Line 2810, Address: 0x29556c, Func Offset: 0x12c
	// Line 2815, Address: 0x295574, Func Offset: 0x134
	// Line 2817, Address: 0x295580, Func Offset: 0x140
	// Line 2818, Address: 0x295584, Func Offset: 0x144
	// Func End, Address: 0x295590, Func Offset: 0x150
}

// 
// Start address: 0x295590
int StopNativeEventSe(int SlotNo)
{
	int SlotDef[5];
	// Line 2827, Address: 0x295590, Func Offset: 0
	// Line 2828, Address: 0x295594, Func Offset: 0x4
	// Line 2827, Address: 0x29559c, Func Offset: 0xc
	// Line 2828, Address: 0x2955a0, Func Offset: 0x10
	// Line 2830, Address: 0x2955a8, Func Offset: 0x18
	// Line 2828, Address: 0x2955ac, Func Offset: 0x1c
	// Line 2830, Address: 0x2955b8, Func Offset: 0x28
	// Line 2831, Address: 0x2955c8, Func Offset: 0x38
	// Line 2834, Address: 0x2955d0, Func Offset: 0x40
	// Line 2836, Address: 0x2955e0, Func Offset: 0x50
	// Line 2837, Address: 0x2955e4, Func Offset: 0x54
	// Func End, Address: 0x2955f0, Func Offset: 0x60
}

// 
// Start address: 0x2955f0
void RequestObjectSeEx(int ObjectNo, NJS_POINT3* pPos, int Type)
{
	SOUND_OBJECT* oip;
	// Line 2851, Address: 0x2955f0, Func Offset: 0
	// Line 2854, Address: 0x295600, Func Offset: 0x10
	// Line 2855, Address: 0x295608, Func Offset: 0x18
	// Line 2859, Address: 0x295618, Func Offset: 0x28
	// Line 2860, Address: 0x295620, Func Offset: 0x30
	// Line 2861, Address: 0x29563c, Func Offset: 0x4c
	// Line 2862, Address: 0x295644, Func Offset: 0x54
	// Line 2865, Address: 0x295660, Func Offset: 0x70
	// Line 2866, Address: 0x295668, Func Offset: 0x78
	// Line 2871, Address: 0x29567c, Func Offset: 0x8c
	// Line 2873, Address: 0x295684, Func Offset: 0x94
	// Line 2874, Address: 0x29568c, Func Offset: 0x9c
	// Func End, Address: 0x2956a0, Func Offset: 0xb0
}

// 
// Start address: 0x2956a0
void RegistObjectSe(int ObjectNo, NJS_POINT3* pPos, int SeNo, int Prio)
{
	SOUND_OBJECT* oip;
	int i;
	// Line 2904, Address: 0x2956a0, Func Offset: 0
	// Line 2909, Address: 0x2956a8, Func Offset: 0x8
	// Line 2905, Address: 0x2956ac, Func Offset: 0xc
	// Line 2909, Address: 0x2956bc, Func Offset: 0x1c
	// Line 2910, Address: 0x2956c0, Func Offset: 0x20
	// Line 2907, Address: 0x2956c4, Func Offset: 0x24
	// Line 2914, Address: 0x2956d4, Func Offset: 0x34
	// Line 2910, Address: 0x2956d8, Func Offset: 0x38
	// Line 2911, Address: 0x2956dc, Func Offset: 0x3c
	// Line 2916, Address: 0x2956e4, Func Offset: 0x44
	// Line 2919, Address: 0x2956e8, Func Offset: 0x48
	// Line 2911, Address: 0x2956f0, Func Offset: 0x50
	// Line 2912, Address: 0x2956f4, Func Offset: 0x54
	// Line 2913, Address: 0x2956f8, Func Offset: 0x58
	// Line 2914, Address: 0x2956fc, Func Offset: 0x5c
	// Line 2915, Address: 0x295700, Func Offset: 0x60
	// Line 2916, Address: 0x295704, Func Offset: 0x64
	// Line 2919, Address: 0x295708, Func Offset: 0x68
	// Line 2920, Address: 0x295714, Func Offset: 0x74
	// Line 2923, Address: 0x295724, Func Offset: 0x84
	// Line 2926, Address: 0x295734, Func Offset: 0x94
	// Line 2927, Address: 0x295744, Func Offset: 0xa4
	// Line 2928, Address: 0x295758, Func Offset: 0xb8
	// Func End, Address: 0x295760, Func Offset: 0xc0
}

// 
// Start address: 0x295760
void FreeObjectSe(int ObjectNo)
{
	SOUND_OBJECT* oip;
	int Flag;
	int i;
	// Line 2941, Address: 0x295760, Func Offset: 0
	// Line 2942, Address: 0x295768, Func Offset: 0x8
	// Line 2936, Address: 0x295778, Func Offset: 0x18
	// Line 2944, Address: 0x29577c, Func Offset: 0x1c
	// Line 2936, Address: 0x295780, Func Offset: 0x20
	// Line 2944, Address: 0x295784, Func Offset: 0x24
	// Line 2945, Address: 0x295788, Func Offset: 0x28
	// Line 2948, Address: 0x29578c, Func Offset: 0x2c
	// Line 2938, Address: 0x29579c, Func Offset: 0x3c
	// Line 2948, Address: 0x2957a0, Func Offset: 0x40
	// Line 2949, Address: 0x2957a8, Func Offset: 0x48
	// Line 2950, Address: 0x2957b4, Func Offset: 0x54
	// Line 2952, Address: 0x2957b8, Func Offset: 0x58
	// Line 2953, Address: 0x2957c0, Func Offset: 0x60
	// Line 2955, Address: 0x2957cc, Func Offset: 0x6c
	// Line 2956, Address: 0x2957dc, Func Offset: 0x7c
	// Line 2957, Address: 0x2957e4, Func Offset: 0x84
	// Line 2960, Address: 0x2957f8, Func Offset: 0x98
	// Line 2961, Address: 0x29580c, Func Offset: 0xac
	// Line 2963, Address: 0x295824, Func Offset: 0xc4
	// Func End, Address: 0x295830, Func Offset: 0xd0
}

// 
// Start address: 0x295830
void PlayBgmEx2(unsigned int PatId, int BgmNo, int FadeInRate, int Volume)
{
	// Line 2976, Address: 0x295830, Func Offset: 0
	// Line 2977, Address: 0x29584c, Func Offset: 0x1c
	// Line 2983, Address: 0x295870, Func Offset: 0x40
	// Line 2984, Address: 0x295884, Func Offset: 0x54
	// Line 2985, Address: 0x29588c, Func Offset: 0x5c
	// Line 2987, Address: 0x295894, Func Offset: 0x64
	// Line 2988, Address: 0x2958a0, Func Offset: 0x70
	// Line 2989, Address: 0x2958b8, Func Offset: 0x88
	// Line 2991, Address: 0x2958c8, Func Offset: 0x98
	// Line 2993, Address: 0x2958d8, Func Offset: 0xa8
	// Line 2994, Address: 0x2958e0, Func Offset: 0xb0
	// Line 2992, Address: 0x2958e8, Func Offset: 0xb8
	// Line 2995, Address: 0x2958f4, Func Offset: 0xc4
	// Func End, Address: 0x295910, Func Offset: 0xe0
}

// 
// Start address: 0x295910
void PlayBgmEx(int BgmNo, int FadeInRate, int Volume)
{
	// Line 3008, Address: 0x295914, Func Offset: 0x4
	// Func End, Address: 0x29592c, Func Offset: 0x1c
}

// 
// Start address: 0x295930
void PlayBgm(int BgmNo, int FadeInRate)
{
	// Line 3021, Address: 0x295930, Func Offset: 0
	// Func End, Address: 0x295938, Func Offset: 0x8
}

// 
// Start address: 0x295940
void PlayBgm2(int BgmNo, int Volume)
{
	// Line 3033, Address: 0x295940, Func Offset: 0
	// Line 3034, Address: 0x295950, Func Offset: 0x10
	// Line 3035, Address: 0x295958, Func Offset: 0x18
	// Line 3036, Address: 0x295960, Func Offset: 0x20
	// Line 3037, Address: 0x295968, Func Offset: 0x28
	// Line 3038, Address: 0x295978, Func Offset: 0x38
	// Line 3041, Address: 0x295984, Func Offset: 0x44
	// Line 3042, Address: 0x295988, Func Offset: 0x48
	// Func End, Address: 0x295990, Func Offset: 0x50
}

// 
// Start address: 0x295990
void StopBgm(int FadeOutRate)
{
	// Line 3051, Address: 0x295990, Func Offset: 0
	// Line 3052, Address: 0x295998, Func Offset: 0x8
	// Line 3053, Address: 0x2959a0, Func Offset: 0x10
	// Line 3054, Address: 0x2959ac, Func Offset: 0x1c
	// Line 3055, Address: 0x2959b4, Func Offset: 0x24
	// Line 3056, Address: 0x2959bc, Func Offset: 0x2c
	// Line 3058, Address: 0x2959c4, Func Offset: 0x34
	// Line 3059, Address: 0x2959d0, Func Offset: 0x40
	// Line 3060, Address: 0x2959dc, Func Offset: 0x4c
	// Line 3061, Address: 0x2959e4, Func Offset: 0x54
	// Func End, Address: 0x2959f0, Func Offset: 0x60
}

// 
// Start address: 0x2959f0
void StopBgm2()
{
	// Line 3071, Address: 0x2959f0, Func Offset: 0
	// Line 3072, Address: 0x2959fc, Func Offset: 0xc
	// Line 3073, Address: 0x295a08, Func Offset: 0x18
	// Line 3074, Address: 0x295a14, Func Offset: 0x24
	// Line 3075, Address: 0x295a18, Func Offset: 0x28
	// Func End, Address: 0x295a20, Func Offset: 0x30
}

// 
// Start address: 0x295a20
void PlayVoiceEx2(int PatId, int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate, int PauseFlag)
{
	float Dist;
	char Vol;
	char Pan;
	// Line 3093, Address: 0x295a20, Func Offset: 0
	// Line 3098, Address: 0x295a44, Func Offset: 0x24
	// Line 3094, Address: 0x295a5c, Func Offset: 0x3c
	// Line 3098, Address: 0x295a60, Func Offset: 0x40
	// Line 3099, Address: 0x295a74, Func Offset: 0x54
	// Line 3100, Address: 0x295a7c, Func Offset: 0x5c
	// Line 3103, Address: 0x295a84, Func Offset: 0x64
	// Line 3105, Address: 0x295aac, Func Offset: 0x8c
	// Line 3106, Address: 0x295ac8, Func Offset: 0xa8
	// Line 3107, Address: 0x295ad8, Func Offset: 0xb8
	// Line 3108, Address: 0x295ae4, Func Offset: 0xc4
	// Line 3109, Address: 0x295af8, Func Offset: 0xd8
	// Line 3111, Address: 0x295b00, Func Offset: 0xe0
	// Line 3112, Address: 0x295b08, Func Offset: 0xe8
	// Line 3113, Address: 0x295b18, Func Offset: 0xf8
	// Line 3114, Address: 0x295b20, Func Offset: 0x100
	// Line 3116, Address: 0x295b2c, Func Offset: 0x10c
	// Line 3117, Address: 0x295b3c, Func Offset: 0x11c
	// Line 3118, Address: 0x295b50, Func Offset: 0x130
	// Line 3120, Address: 0x295b58, Func Offset: 0x138
	// Line 3121, Address: 0x295b78, Func Offset: 0x158
	// Line 3122, Address: 0x295b88, Func Offset: 0x168
	// Line 3125, Address: 0x295b94, Func Offset: 0x174
	// Line 3126, Address: 0x295ba0, Func Offset: 0x180
	// Func End, Address: 0x295bc4, Func Offset: 0x1a4
}

// 
// Start address: 0x295bd0
void PlayVoiceEx(int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate, int PauseFlag)
{
	// Line 3144, Address: 0x295bd4, Func Offset: 0x4
	// Func End, Address: 0x295bfc, Func Offset: 0x2c
}

// 
// Start address: 0x295c00
void PlayVoice(int VoiceNo, NJS_POINT3* pPos, int Mode, int FadeInRate)
{
	// Line 3160, Address: 0x295c00, Func Offset: 0
	// Func End, Address: 0x295c08, Func Offset: 0x8
}

// 
// Start address: 0x295c10
void ContinuePlayVoice()
{
	// Line 3170, Address: 0x295c10, Func Offset: 0
	// Func End, Address: 0x295c18, Func Offset: 0x8
}

// 
// Start address: 0x295c20
void StopVoice(int FadeOutRate)
{
	// Line 3180, Address: 0x295c20, Func Offset: 0
	// Line 3181, Address: 0x295c28, Func Offset: 0x8
	// Line 3182, Address: 0x295c30, Func Offset: 0x10
	// Line 3183, Address: 0x295c3c, Func Offset: 0x1c
	// Line 3184, Address: 0x295c44, Func Offset: 0x24
	// Line 3185, Address: 0x295c4c, Func Offset: 0x2c
	// Line 3187, Address: 0x295c54, Func Offset: 0x34
	// Func End, Address: 0x295c60, Func Offset: 0x40
}

// 
// Start address: 0x295c60
int CheckPlayEndAdx(int SlotNo)
{
	// Line 3199, Address: 0x295c60, Func Offset: 0
	// Line 3200, Address: 0x295c70, Func Offset: 0x10
	// Func End, Address: 0x295c78, Func Offset: 0x18
}

// 
// Start address: 0x295c80
int GetTimeAdx(int SlotNo)
{
	// Line 3211, Address: 0x295c80, Func Offset: 0
	// Func End, Address: 0x295c88, Func Offset: 0x8
}

// 
// Start address: 0x295c90
void SetRoomSoundFxLevel(char FxProgNo, char FxLevel)
{
	// Line 3221, Address: 0x295c90, Func Offset: 0
	// Line 3222, Address: 0x295ca8, Func Offset: 0x18
	// Line 3223, Address: 0x295cb0, Func Offset: 0x20
	// Line 3224, Address: 0x295cbc, Func Offset: 0x2c
	// Line 3225, Address: 0x295cc8, Func Offset: 0x38
	// Line 3226, Address: 0x295cd4, Func Offset: 0x44
	// Line 3227, Address: 0x295ce0, Func Offset: 0x50
	// Line 3228, Address: 0x295cec, Func Offset: 0x5c
	// Line 3229, Address: 0x295cf8, Func Offset: 0x68
	// Line 3231, Address: 0x295d04, Func Offset: 0x74
	// Line 3232, Address: 0x295d10, Func Offset: 0x80
	// Line 3233, Address: 0x295d1c, Func Offset: 0x8c
	// Line 3234, Address: 0x295d28, Func Offset: 0x98
	// Line 3235, Address: 0x295d34, Func Offset: 0xa4
	// Line 3236, Address: 0x295d40, Func Offset: 0xb0
	// Line 3237, Address: 0x295d4c, Func Offset: 0xbc
	// Line 3238, Address: 0x295d58, Func Offset: 0xc8
	// Line 3239, Address: 0x295d64, Func Offset: 0xd4
	// Line 3243, Address: 0x295d70, Func Offset: 0xe0
	// Line 3244, Address: 0x295d7c, Func Offset: 0xec
	// Line 3245, Address: 0x295d88, Func Offset: 0xf8
	// Line 3246, Address: 0x295d94, Func Offset: 0x104
	// Line 3247, Address: 0x295da0, Func Offset: 0x110
	// Line 3249, Address: 0x295dac, Func Offset: 0x11c
	// Line 3250, Address: 0x295db4, Func Offset: 0x124
	// Line 3251, Address: 0x295dbc, Func Offset: 0x12c
	// Func End, Address: 0x295dd0, Func Offset: 0x140
}

// 
// Start address: 0x295dd0
void SetRoomSoundFxLevelEx()
{
	// Line 3255, Address: 0x295dd0, Func Offset: 0
	// Func End, Address: 0x295de0, Func Offset: 0x10
}

// 
// Start address: 0x295de0
int SearchPlayingEnemySe(int EnemyNo, int Attrib)
{
	SND_ENEMY_SLOT* esp;
	int i;
	// Line 3267, Address: 0x295de0, Func Offset: 0
	// Line 3268, Address: 0x295dec, Func Offset: 0xc
	// Line 3269, Address: 0x295df8, Func Offset: 0x18
	// Line 3270, Address: 0x295e04, Func Offset: 0x24
	// Line 3271, Address: 0x295e10, Func Offset: 0x30
	// Line 3275, Address: 0x295e18, Func Offset: 0x38
	// Line 3277, Address: 0x295e28, Func Offset: 0x48
	// Line 3278, Address: 0x295e2c, Func Offset: 0x4c
	// Func End, Address: 0x295e34, Func Offset: 0x54
}

// 
// Start address: 0x295e40
int SearchFreeEnemySeSlot()
{
	SND_ENEMY_SLOT* esp;
	int i;
	// Line 3285, Address: 0x295e40, Func Offset: 0
	// Line 3286, Address: 0x295e4c, Func Offset: 0xc
	// Line 3287, Address: 0x295e58, Func Offset: 0x18
	// Line 3289, Address: 0x295e60, Func Offset: 0x20
	// Line 3291, Address: 0x295e70, Func Offset: 0x30
	// Line 3292, Address: 0x295e74, Func Offset: 0x34
	// Func End, Address: 0x295e7c, Func Offset: 0x3c
}

// 
// Start address: 0x295e80
int CheckPlaySameSe(int EnemyNo, int SeNo, int Flag)
{
	int c;
	SND_ENEMY_SLOT* esp;
	int i;
	// Line 3301, Address: 0x295e80, Func Offset: 0
	// Line 3302, Address: 0x295e90, Func Offset: 0x10
	// Line 3303, Address: 0x295e9c, Func Offset: 0x1c
	// Line 3304, Address: 0x295ea8, Func Offset: 0x28
	// Line 3305, Address: 0x295ebc, Func Offset: 0x3c
	// Line 3309, Address: 0x295ec0, Func Offset: 0x40
	// Line 3311, Address: 0x295ed0, Func Offset: 0x50
	// Line 3312, Address: 0x295ed4, Func Offset: 0x54
	// Line 3313, Address: 0x295edc, Func Offset: 0x5c
	// Line 3315, Address: 0x295ee4, Func Offset: 0x64
	// Line 3317, Address: 0x295ef0, Func Offset: 0x70
	// Func End, Address: 0x295ef8, Func Offset: 0x78
}

// 
// Start address: 0x295f00
void CallEnemySeMain(unsigned int SlotNo, int SeNo, char Pan, char Vol, int Flag, int FadeRate)
{
	// Line 3320, Address: 0x295f00, Func Offset: 0
	// Line 3321, Address: 0x295f24, Func Offset: 0x24
	// Line 3322, Address: 0x295f2c, Func Offset: 0x2c
	// Line 3323, Address: 0x295f44, Func Offset: 0x44
	// Line 3324, Address: 0x295f4c, Func Offset: 0x4c
	// Line 3325, Address: 0x295f54, Func Offset: 0x54
	// Line 3326, Address: 0x295f64, Func Offset: 0x64
	// Line 3327, Address: 0x295f6c, Func Offset: 0x6c
	// Line 3328, Address: 0x295f70, Func Offset: 0x70
	// Line 3329, Address: 0x295f78, Func Offset: 0x78
	// Line 3331, Address: 0x295f80, Func Offset: 0x80
	// Line 3332, Address: 0x295f88, Func Offset: 0x88
	// Line 3333, Address: 0x295f90, Func Offset: 0x90
	// Line 3334, Address: 0x295fa0, Func Offset: 0xa0
	// Line 3335, Address: 0x295fa4, Func Offset: 0xa4
	// Line 3336, Address: 0x295fac, Func Offset: 0xac
	// Line 3337, Address: 0x295fb4, Func Offset: 0xb4
	// Line 3338, Address: 0x295fbc, Func Offset: 0xbc
	// Line 3339, Address: 0x295fc0, Func Offset: 0xc0
	// Line 3340, Address: 0x295fc8, Func Offset: 0xc8
	// Line 3343, Address: 0x295fd4, Func Offset: 0xd4
	// Line 3344, Address: 0x295fdc, Func Offset: 0xdc
	// Line 3345, Address: 0x295fe4, Func Offset: 0xe4
	// Line 3346, Address: 0x295ff0, Func Offset: 0xf0
	// Line 3347, Address: 0x295ff8, Func Offset: 0xf8
	// Line 3349, Address: 0x296004, Func Offset: 0x104
	// Line 3350, Address: 0x296014, Func Offset: 0x114
	// Line 3352, Address: 0x29602c, Func Offset: 0x12c
	// Func End, Address: 0x296050, Func Offset: 0x150
}

// 
// Start address: 0x296050
void RegistEnemySlot(int SlotNo, int EnemyNo, int SeNo)
{
	SND_ENEMY_SLOT* esp;
	// Line 3358, Address: 0x296050, Func Offset: 0
	// Line 3359, Address: 0x296058, Func Offset: 0x8
	// Line 3363, Address: 0x296068, Func Offset: 0x18
	// Line 3361, Address: 0x29606c, Func Offset: 0x1c
	// Line 3363, Address: 0x296070, Func Offset: 0x20
	// Line 3362, Address: 0x296074, Func Offset: 0x24
	// Line 3363, Address: 0x296078, Func Offset: 0x28
	// Line 3364, Address: 0x296080, Func Offset: 0x30
	// Line 3365, Address: 0x296090, Func Offset: 0x40
	// Line 3366, Address: 0x296094, Func Offset: 0x44
	// Func End, Address: 0x29609c, Func Offset: 0x4c
}

// 
// Start address: 0x2960a0
void ResetEnemySeInfo()
{
	// Line 3373, Address: 0x2960a0, Func Offset: 0
	// Func End, Address: 0x2960a8, Func Offset: 0x8
}

// 
// Start address: 0x2960b0
void ExecEnemySeManager()
{
	int FreeEnemySlotCnt;
	int SlotNo;
	unsigned char b;
	unsigned char a;
	unsigned char* rlp2;
	unsigned char* rlp1;
	SND_ENEMY_INFO* eip2;
	SND_ENEMY_INFO* eip;
	SND_ENEMY_SLOT* esp;
	int j;
	int i;
	// Line 3382, Address: 0x2960b0, Func Offset: 0
	// Line 3392, Address: 0x2960cc, Func Offset: 0x1c
	// Line 3395, Address: 0x2960dc, Func Offset: 0x2c
	// Line 3396, Address: 0x2960e8, Func Offset: 0x38
	// Line 3397, Address: 0x2960f8, Func Offset: 0x48
	// Line 3398, Address: 0x2960fc, Func Offset: 0x4c
	// Line 3399, Address: 0x296100, Func Offset: 0x50
	// Line 3400, Address: 0x296104, Func Offset: 0x54
	// Line 3402, Address: 0x296108, Func Offset: 0x58
	// Line 3401, Address: 0x29610c, Func Offset: 0x5c
	// Line 3404, Address: 0x296110, Func Offset: 0x60
	// Line 3409, Address: 0x296120, Func Offset: 0x70
	// Line 3406, Address: 0x29612c, Func Offset: 0x7c
	// Line 3409, Address: 0x296130, Func Offset: 0x80
	// Line 3406, Address: 0x296134, Func Offset: 0x84
	// Line 3409, Address: 0x296138, Func Offset: 0x88
	// Line 3410, Address: 0x29613c, Func Offset: 0x8c
	// Line 3411, Address: 0x296158, Func Offset: 0xa8
	// Line 3413, Address: 0x29615c, Func Offset: 0xac
	// Line 3412, Address: 0x296164, Func Offset: 0xb4
	// Line 3413, Address: 0x296168, Func Offset: 0xb8
	// Line 3414, Address: 0x296174, Func Offset: 0xc4
	// Line 3415, Address: 0x296178, Func Offset: 0xc8
	// Line 3418, Address: 0x296188, Func Offset: 0xd8
	// Line 3419, Address: 0x29619c, Func Offset: 0xec
	// Line 3420, Address: 0x2961b4, Func Offset: 0x104
	// Line 3421, Address: 0x2961bc, Func Offset: 0x10c
	// Line 3422, Address: 0x2961c0, Func Offset: 0x110
	// Line 3425, Address: 0x2961c4, Func Offset: 0x114
	// Line 3423, Address: 0x2961c8, Func Offset: 0x118
	// Line 3424, Address: 0x2961cc, Func Offset: 0x11c
	// Line 3426, Address: 0x2961d0, Func Offset: 0x120
	// Line 3428, Address: 0x2961d4, Func Offset: 0x124
	// Line 3427, Address: 0x2961dc, Func Offset: 0x12c
	// Line 3428, Address: 0x2961e0, Func Offset: 0x130
	// Line 3430, Address: 0x2961e8, Func Offset: 0x138
	// Line 3431, Address: 0x2961f0, Func Offset: 0x140
	// Line 3429, Address: 0x2961f4, Func Offset: 0x144
	// Line 3430, Address: 0x2961f8, Func Offset: 0x148
	// Line 3431, Address: 0x296200, Func Offset: 0x150
	// Line 3432, Address: 0x296210, Func Offset: 0x160
	// Line 3434, Address: 0x296214, Func Offset: 0x164
	// Line 3435, Address: 0x29621c, Func Offset: 0x16c
	// Line 3436, Address: 0x296234, Func Offset: 0x184
	// Line 3437, Address: 0x296238, Func Offset: 0x188
	// Line 3439, Address: 0x29623c, Func Offset: 0x18c
	// Line 3440, Address: 0x296240, Func Offset: 0x190
	// Line 3441, Address: 0x29625c, Func Offset: 0x1ac
	// Line 3470, Address: 0x296280, Func Offset: 0x1d0
	// Line 3471, Address: 0x296288, Func Offset: 0x1d8
	// Line 3472, Address: 0x29628c, Func Offset: 0x1dc
	// Line 3473, Address: 0x296294, Func Offset: 0x1e4
	// Line 3474, Address: 0x2962a4, Func Offset: 0x1f4
	// Line 3475, Address: 0x2962c0, Func Offset: 0x210
	// Line 3477, Address: 0x2962cc, Func Offset: 0x21c
	// Line 3479, Address: 0x2962e4, Func Offset: 0x234
	// Line 3481, Address: 0x2962f8, Func Offset: 0x248
	// Line 3483, Address: 0x296308, Func Offset: 0x258
	// Line 3484, Address: 0x296318, Func Offset: 0x268
	// Line 3486, Address: 0x296334, Func Offset: 0x284
	// Line 3488, Address: 0x29633c, Func Offset: 0x28c
	// Line 3489, Address: 0x29634c, Func Offset: 0x29c
	// Line 3492, Address: 0x296368, Func Offset: 0x2b8
	// Line 3493, Address: 0x29636c, Func Offset: 0x2bc
	// Line 3494, Address: 0x296370, Func Offset: 0x2c0
	// Line 3496, Address: 0x29637c, Func Offset: 0x2cc
	// Line 3498, Address: 0x296394, Func Offset: 0x2e4
	// Line 3500, Address: 0x2963a8, Func Offset: 0x2f8
	// Line 3502, Address: 0x2963b8, Func Offset: 0x308
	// Line 3503, Address: 0x2963c8, Func Offset: 0x318
	// Line 3505, Address: 0x2963e4, Func Offset: 0x334
	// Line 3507, Address: 0x2963ec, Func Offset: 0x33c
	// Line 3508, Address: 0x2963fc, Func Offset: 0x34c
	// Line 3511, Address: 0x296418, Func Offset: 0x368
	// Line 3512, Address: 0x29641c, Func Offset: 0x36c
	// Line 3513, Address: 0x296420, Func Offset: 0x370
	// Line 3514, Address: 0x296428, Func Offset: 0x378
	// Line 3513, Address: 0x29642c, Func Offset: 0x37c
	// Line 3514, Address: 0x296430, Func Offset: 0x380
	// Line 3515, Address: 0x296444, Func Offset: 0x394
	// Func End, Address: 0x296464, Func Offset: 0x3b4
}

// 
// Start address: 0x296470
int SearchPlayingObjectSeEx(int ObjectNo, int Mode)
{
	SND_OBJECT_SLOT* osp;
	int i;
	// Line 3526, Address: 0x296470, Func Offset: 0
	// Line 3527, Address: 0x296488, Func Offset: 0x18
	// Line 3528, Address: 0x296494, Func Offset: 0x24
	// Line 3529, Address: 0x2964a0, Func Offset: 0x30
	// Line 3532, Address: 0x2964a8, Func Offset: 0x38
	// Line 3535, Address: 0x2964b0, Func Offset: 0x40
	// Line 3537, Address: 0x2964c4, Func Offset: 0x54
	// Line 3538, Address: 0x2964c8, Func Offset: 0x58
	// Func End, Address: 0x2964d0, Func Offset: 0x60
}

// 
// Start address: 0x2964d0
int SearchPlayingObjectSe(int ObjectNo)
{
	// Line 3542, Address: 0x2964d0, Func Offset: 0
	// Func End, Address: 0x2964d8, Func Offset: 0x8
}

// 
// Start address: 0x2964e0
int SearchFreeObjectSeSlot()
{
	SND_OBJECT_SLOT* osp;
	int i;
	// Line 3550, Address: 0x2964e0, Func Offset: 0
	// Line 3551, Address: 0x2964f8, Func Offset: 0x18
	// Line 3552, Address: 0x296504, Func Offset: 0x24
	// Line 3554, Address: 0x29650c, Func Offset: 0x2c
	// Line 3556, Address: 0x296524, Func Offset: 0x44
	// Line 3557, Address: 0x296528, Func Offset: 0x48
	// Func End, Address: 0x296530, Func Offset: 0x50
}

// 
// Start address: 0x296530
void CallObjectSe2(unsigned int SlotNo, SOUND_OBJECT* oip, int Flag)
{
	// Line 3560, Address: 0x296530, Func Offset: 0
	// Line 3561, Address: 0x296544, Func Offset: 0x14
	// Line 3562, Address: 0x296554, Func Offset: 0x24
	// Line 3563, Address: 0x29656c, Func Offset: 0x3c
	// Line 3564, Address: 0x296574, Func Offset: 0x44
	// Line 3565, Address: 0x29657c, Func Offset: 0x4c
	// Line 3566, Address: 0x296584, Func Offset: 0x54
	// Line 3567, Address: 0x296598, Func Offset: 0x68
	// Line 3569, Address: 0x2965a4, Func Offset: 0x74
	// Line 3570, Address: 0x2965ac, Func Offset: 0x7c
	// Line 3571, Address: 0x2965bc, Func Offset: 0x8c
	// Line 3572, Address: 0x2965c8, Func Offset: 0x98
	// Line 3573, Address: 0x2965d8, Func Offset: 0xa8
	// Line 3574, Address: 0x2965f0, Func Offset: 0xc0
	// Line 3576, Address: 0x2965fc, Func Offset: 0xcc
	// Line 3577, Address: 0x296604, Func Offset: 0xd4
	// Line 3578, Address: 0x29660c, Func Offset: 0xdc
	// Line 3579, Address: 0x296634, Func Offset: 0x104
	// Line 3581, Address: 0x29663c, Func Offset: 0x10c
	// Line 3582, Address: 0x29664c, Func Offset: 0x11c
	// Line 3583, Address: 0x296658, Func Offset: 0x128
	// Line 3584, Address: 0x296668, Func Offset: 0x138
	// Line 3585, Address: 0x29667c, Func Offset: 0x14c
	// Line 3587, Address: 0x296688, Func Offset: 0x158
	// Line 3588, Address: 0x296690, Func Offset: 0x160
	// Line 3589, Address: 0x29669c, Func Offset: 0x16c
	// Line 3591, Address: 0x2966a4, Func Offset: 0x174
	// Line 3592, Address: 0x2966b0, Func Offset: 0x180
	// Line 3593, Address: 0x2966b8, Func Offset: 0x188
	// Line 3594, Address: 0x2966c0, Func Offset: 0x190
	// Line 3595, Address: 0x2966cc, Func Offset: 0x19c
	// Line 3596, Address: 0x2966d4, Func Offset: 0x1a4
	// Line 3597, Address: 0x2966e4, Func Offset: 0x1b4
	// Line 3598, Address: 0x2966f0, Func Offset: 0x1c0
	// Line 3599, Address: 0x2966f8, Func Offset: 0x1c8
	// Line 3602, Address: 0x29670c, Func Offset: 0x1dc
	// Func End, Address: 0x296724, Func Offset: 0x1f4
}

// 
// Start address: 0x296730
void RegistObjectSlot(int SlotNo, int ObjectNo, int SeNo)
{
	SND_OBJECT_SLOT* osp;
	// Line 3608, Address: 0x296730, Func Offset: 0
	// Line 3609, Address: 0x296738, Func Offset: 0x8
	// Line 3611, Address: 0x296748, Func Offset: 0x18
	// Line 3612, Address: 0x29674c, Func Offset: 0x1c
	// Line 3614, Address: 0x296750, Func Offset: 0x20
	// Line 3613, Address: 0x296754, Func Offset: 0x24
	// Line 3615, Address: 0x296758, Func Offset: 0x28
	// Func End, Address: 0x296760, Func Offset: 0x30
}

// 
// Start address: 0x296760
void ResetObjectSeInfo()
{
	// Line 3618, Address: 0x296760, Func Offset: 0
	// Line 3619, Address: 0x296764, Func Offset: 0x4
	// Line 3618, Address: 0x296770, Func Offset: 0x10
	// Line 3619, Address: 0x296774, Func Offset: 0x14
	// Line 3620, Address: 0x29677c, Func Offset: 0x1c
	// Line 3621, Address: 0x296790, Func Offset: 0x30
	// Line 3622, Address: 0x296798, Func Offset: 0x38
	// Func End, Address: 0x2967a4, Func Offset: 0x44
}

// 
// Start address: 0x2967b0
void ExecObjectSeManager()
{
	int SlotNo;
	SND_OBJECT_SLOT* osp;
	SOUND_OBJECT* oip;
	int j;
	int i;
	// Line 3630, Address: 0x2967b0, Func Offset: 0
	// Line 3638, Address: 0x2967cc, Func Offset: 0x1c
	// Line 3641, Address: 0x2967e4, Func Offset: 0x34
	// Line 3643, Address: 0x2967ec, Func Offset: 0x3c
	// Line 3642, Address: 0x2967f0, Func Offset: 0x40
	// Line 3643, Address: 0x2967f8, Func Offset: 0x48
	// Line 3644, Address: 0x296808, Func Offset: 0x58
	// Line 3645, Address: 0x29681c, Func Offset: 0x6c
	// Line 3685, Address: 0x29683c, Func Offset: 0x8c
	// Line 3686, Address: 0x296844, Func Offset: 0x94
	// Line 3687, Address: 0x296848, Func Offset: 0x98
	// Line 3688, Address: 0x296850, Func Offset: 0xa0
	// Line 3689, Address: 0x296860, Func Offset: 0xb0
	// Line 3690, Address: 0x29686c, Func Offset: 0xbc
	// Line 3691, Address: 0x29687c, Func Offset: 0xcc
	// Line 3694, Address: 0x296884, Func Offset: 0xd4
	// Line 3705, Address: 0x2968a4, Func Offset: 0xf4
	// Line 3706, Address: 0x2968ac, Func Offset: 0xfc
	// Line 3707, Address: 0x2968b0, Func Offset: 0x100
	// Line 3708, Address: 0x2968b8, Func Offset: 0x108
	// Line 3709, Address: 0x2968c8, Func Offset: 0x118
	// Line 3710, Address: 0x2968d4, Func Offset: 0x124
	// Line 3711, Address: 0x2968e0, Func Offset: 0x130
	// Line 3713, Address: 0x2968f0, Func Offset: 0x140
	// Line 3714, Address: 0x296900, Func Offset: 0x150
	// Line 3716, Address: 0x296910, Func Offset: 0x160
	// Line 3718, Address: 0x296918, Func Offset: 0x168
	// Line 3719, Address: 0x29692c, Func Offset: 0x17c
	// Line 3720, Address: 0x29693c, Func Offset: 0x18c
	// Line 3721, Address: 0x296940, Func Offset: 0x190
	// Line 3722, Address: 0x296944, Func Offset: 0x194
	// Line 3721, Address: 0x296948, Func Offset: 0x198
	// Line 3723, Address: 0x29694c, Func Offset: 0x19c
	// Line 3726, Address: 0x296964, Func Offset: 0x1b4
	// Line 3727, Address: 0x296974, Func Offset: 0x1c4
	// Line 3728, Address: 0x296978, Func Offset: 0x1c8
	// Line 3741, Address: 0x296994, Func Offset: 0x1e4
	// Func End, Address: 0x2969b4, Func Offset: 0x204
}

// 
// Start address: 0x2969c0
void RequestSoundFade(int Func, int Attr, short Timer)
{
	int i;
	// Line 3763, Address: 0x2969c0, Func Offset: 0
	// Line 3766, Address: 0x2969dc, Func Offset: 0x1c
	// Line 3763, Address: 0x2969e0, Func Offset: 0x20
	// Line 3766, Address: 0x2969ec, Func Offset: 0x2c
	// Line 3767, Address: 0x2969f4, Func Offset: 0x34
	// Line 3768, Address: 0x296a00, Func Offset: 0x40
	// Line 3770, Address: 0x296a10, Func Offset: 0x50
	// Line 3771, Address: 0x296a1c, Func Offset: 0x5c
	// Line 3772, Address: 0x296a2c, Func Offset: 0x6c
	// Line 3773, Address: 0x296a3c, Func Offset: 0x7c
	// Line 3774, Address: 0x296a4c, Func Offset: 0x8c
	// Line 3775, Address: 0x296a5c, Func Offset: 0x9c
	// Line 3776, Address: 0x296a6c, Func Offset: 0xac
	// Line 3782, Address: 0x296a7c, Func Offset: 0xbc
	// Line 3783, Address: 0x296a88, Func Offset: 0xc8
	// Line 3785, Address: 0x296a98, Func Offset: 0xd8
	// Line 3786, Address: 0x296aa4, Func Offset: 0xe4
	// Line 3791, Address: 0x296ab4, Func Offset: 0xf4
	// Line 3792, Address: 0x296adc, Func Offset: 0x11c
	// Line 3793, Address: 0x296b38, Func Offset: 0x178
	// Line 3794, Address: 0x296b44, Func Offset: 0x184
	// Line 3795, Address: 0x296b58, Func Offset: 0x198
	// Line 3796, Address: 0x296b60, Func Offset: 0x1a0
	// Line 3798, Address: 0x296b74, Func Offset: 0x1b4
	// Line 3799, Address: 0x296b94, Func Offset: 0x1d4
	// Line 3800, Address: 0x296b9c, Func Offset: 0x1dc
	// Line 3801, Address: 0x296bb0, Func Offset: 0x1f0
	// Line 3807, Address: 0x296bcc, Func Offset: 0x20c
	// Line 3808, Address: 0x296bd0, Func Offset: 0x210
	// Line 3809, Address: 0x296bdc, Func Offset: 0x21c
	// Line 3811, Address: 0x296bf0, Func Offset: 0x230
	// Line 3812, Address: 0x296bfc, Func Offset: 0x23c
	// Line 3814, Address: 0x296c10, Func Offset: 0x250
	// Func End, Address: 0x296c34, Func Offset: 0x274
}

// 
// Start address: 0x296c40
void RequestAllStopSoundEx(int AdxFlag, int InSoundFlag, int FadeCount)
{
	int i;
	// Line 3830, Address: 0x296c40, Func Offset: 0
	// Line 3833, Address: 0x296c58, Func Offset: 0x18
	// Line 3834, Address: 0x296c6c, Func Offset: 0x2c
	// Line 3835, Address: 0x296c7c, Func Offset: 0x3c
	// Line 3836, Address: 0x296c80, Func Offset: 0x40
	// Line 3837, Address: 0x296c88, Func Offset: 0x48
	// Line 3838, Address: 0x296c90, Func Offset: 0x50
	// Line 3839, Address: 0x296c98, Func Offset: 0x58
	// Line 3840, Address: 0x296cac, Func Offset: 0x6c
	// Line 3842, Address: 0x296cb0, Func Offset: 0x70
	// Line 3841, Address: 0x296cb4, Func Offset: 0x74
	// Line 3842, Address: 0x296cb8, Func Offset: 0x78
	// Line 3847, Address: 0x296cc4, Func Offset: 0x84
	// Line 3844, Address: 0x296ccc, Func Offset: 0x8c
	// Line 3845, Address: 0x296cd8, Func Offset: 0x98
	// Line 3846, Address: 0x296ce4, Func Offset: 0xa4
	// Line 3851, Address: 0x296cec, Func Offset: 0xac
	// Line 3852, Address: 0x296cf4, Func Offset: 0xb4
	// Line 3854, Address: 0x296cfc, Func Offset: 0xbc
	// Line 3855, Address: 0x296d00, Func Offset: 0xc0
	// Line 3856, Address: 0x296d08, Func Offset: 0xc8
	// Line 3857, Address: 0x296d10, Func Offset: 0xd0
	// Line 3858, Address: 0x296d18, Func Offset: 0xd8
	// Line 3859, Address: 0x296d20, Func Offset: 0xe0
	// Line 3860, Address: 0x296d34, Func Offset: 0xf4
	// Line 3861, Address: 0x296d38, Func Offset: 0xf8
	// Line 3862, Address: 0x296d48, Func Offset: 0x108
	// Line 3863, Address: 0x296d4c, Func Offset: 0x10c
	// Line 3864, Address: 0x296d54, Func Offset: 0x114
	// Line 3865, Address: 0x296d5c, Func Offset: 0x11c
	// Line 3866, Address: 0x296d64, Func Offset: 0x124
	// Line 3867, Address: 0x296d6c, Func Offset: 0x12c
	// Line 3869, Address: 0x296d80, Func Offset: 0x140
	// Line 3872, Address: 0x296da0, Func Offset: 0x160
	// Line 3873, Address: 0x296da4, Func Offset: 0x164
	// Line 3875, Address: 0x296da8, Func Offset: 0x168
	// Line 3873, Address: 0x296dac, Func Offset: 0x16c
	// Line 3874, Address: 0x296db0, Func Offset: 0x170
	// Line 3875, Address: 0x296db4, Func Offset: 0x174
	// Line 3874, Address: 0x296db8, Func Offset: 0x178
	// Line 3875, Address: 0x296dbc, Func Offset: 0x17c
	// Line 3876, Address: 0x296dc4, Func Offset: 0x184
	// Line 3877, Address: 0x296dc8, Func Offset: 0x188
	// Func End, Address: 0x296de4, Func Offset: 0x1a4
}

// 
// Start address: 0x296df0
void ResetSoundComInfo()
{
	// Line 3939, Address: 0x296df0, Func Offset: 0
	// Func End, Address: 0x296df8, Func Offset: 0x8
}

// 
// Start address: 0x296e00
void Com_ExecRoomFadeIn()
{
	int i;
	// Line 3948, Address: 0x296e00, Func Offset: 0
	// Line 3953, Address: 0x296e18, Func Offset: 0x18
	// Line 3981, Address: 0x296e20, Func Offset: 0x20
	// Line 3982, Address: 0x296e34, Func Offset: 0x34
	// Line 3983, Address: 0x296e4c, Func Offset: 0x4c
	// Line 3984, Address: 0x296e54, Func Offset: 0x54
	// Line 3985, Address: 0x296e60, Func Offset: 0x60
	// Line 3988, Address: 0x296e8c, Func Offset: 0x8c
	// Line 3990, Address: 0x296e98, Func Offset: 0x98
	// Line 3991, Address: 0x296e9c, Func Offset: 0x9c
	// Line 3992, Address: 0x296eac, Func Offset: 0xac
	// Line 3993, Address: 0x296ebc, Func Offset: 0xbc
	// Line 3994, Address: 0x296ec4, Func Offset: 0xc4
	// Line 3995, Address: 0x296ed0, Func Offset: 0xd0
	// Line 4000, Address: 0x296ee0, Func Offset: 0xe0
	// Line 3998, Address: 0x296ee4, Func Offset: 0xe4
	// Line 3999, Address: 0x296ee8, Func Offset: 0xe8
	// Line 4000, Address: 0x296eec, Func Offset: 0xec
	// Line 3999, Address: 0x296ef0, Func Offset: 0xf0
	// Line 4000, Address: 0x296ef8, Func Offset: 0xf8
	// Line 4002, Address: 0x296f00, Func Offset: 0x100
	// Line 4004, Address: 0x296f10, Func Offset: 0x110
	// Line 4007, Address: 0x296f18, Func Offset: 0x118
	// Line 4008, Address: 0x296f28, Func Offset: 0x128
	// Func End, Address: 0x296f44, Func Offset: 0x144
}

// 
// Start address: 0x296f50
void Com_ExecRoomFadeOut()
{
	int AttrTbl[2];
	int FadeAttr;
	int i;
	// Line 4017, Address: 0x296f50, Func Offset: 0
	// Line 4020, Address: 0x296f54, Func Offset: 0x4
	// Line 4017, Address: 0x296f5c, Func Offset: 0xc
	// Line 4020, Address: 0x296f60, Func Offset: 0x10
	// Line 4036, Address: 0x296f68, Func Offset: 0x18
	// Line 4020, Address: 0x296f6c, Func Offset: 0x1c
	// Line 4036, Address: 0x296f70, Func Offset: 0x20
	// Line 4037, Address: 0x296f7c, Func Offset: 0x2c
	// Line 4039, Address: 0x296f84, Func Offset: 0x34
	// Line 4040, Address: 0x296f8c, Func Offset: 0x3c
	// Line 4039, Address: 0x296f90, Func Offset: 0x40
	// Line 4040, Address: 0x296f94, Func Offset: 0x44
	// Line 4041, Address: 0x296f98, Func Offset: 0x48
	// Line 4042, Address: 0x296fa8, Func Offset: 0x58
	// Line 4044, Address: 0x296fb0, Func Offset: 0x60
	// Line 4042, Address: 0x296fb8, Func Offset: 0x68
	// Line 4044, Address: 0x296fbc, Func Offset: 0x6c
	// Line 4046, Address: 0x296fc4, Func Offset: 0x74
	// Line 4048, Address: 0x296fd0, Func Offset: 0x80
	// Line 4049, Address: 0x296fd8, Func Offset: 0x88
	// Func End, Address: 0x296fe4, Func Offset: 0x94
}

// 
// Start address: 0x296ff0
void Com_ExecCallBgm_And_BgSe()
{
	// Line 4099, Address: 0x296ff0, Func Offset: 0
	// Func End, Address: 0x296ff8, Func Offset: 0x8
}

// 
// Start address: 0x297000
void Com_StartInitScript()
{
	// Line 4108, Address: 0x297000, Func Offset: 0
	// Line 4109, Address: 0x297004, Func Offset: 0x4
	// Line 4108, Address: 0x297008, Func Offset: 0x8
	// Line 4109, Address: 0x29700c, Func Offset: 0xc
	// Line 4111, Address: 0x297010, Func Offset: 0x10
	// Line 4114, Address: 0x297018, Func Offset: 0x18
	// Line 4115, Address: 0x297020, Func Offset: 0x20
	// Line 4116, Address: 0x297028, Func Offset: 0x28
	// Line 4117, Address: 0x297030, Func Offset: 0x30
	// Line 4118, Address: 0x297038, Func Offset: 0x38
	// Line 4119, Address: 0x297040, Func Offset: 0x40
	// Line 4121, Address: 0x297048, Func Offset: 0x48
	// Line 4122, Address: 0x29705c, Func Offset: 0x5c
	// Line 4123, Address: 0x297070, Func Offset: 0x70
	// Line 4125, Address: 0x297084, Func Offset: 0x84
	// Line 4126, Address: 0x297090, Func Offset: 0x90
	// Func End, Address: 0x29709c, Func Offset: 0x9c
}

// 
// Start address: 0x2970a0
void Com_FinishInitScript()
{
	// Line 4136, Address: 0x2970a0, Func Offset: 0
	// Func End, Address: 0x2970a8, Func Offset: 0x8
}

// 
// Start address: 0x2970b0
void ExecuteSoundCommand()
{
	int i;
	// Line 4163, Address: 0x2970b0, Func Offset: 0
	// Line 4166, Address: 0x2970c8, Func Offset: 0x18
	// Line 4167, Address: 0x2970d0, Func Offset: 0x20
	// Line 4168, Address: 0x2970f0, Func Offset: 0x40
	// Line 4170, Address: 0x2970f8, Func Offset: 0x48
	// Line 4171, Address: 0x297100, Func Offset: 0x50
	// Line 4173, Address: 0x29711c, Func Offset: 0x6c
	// Line 4174, Address: 0x297124, Func Offset: 0x74
	// Func End, Address: 0x297138, Func Offset: 0x88
}

// 
// Start address: 0x297140
void SendSoundCommand(unsigned int CommandNo)
{
	// Line 4183, Address: 0x297140, Func Offset: 0
	// Line 4184, Address: 0x297148, Func Offset: 0x8
	// Line 4187, Address: 0x29715c, Func Offset: 0x1c
	// Line 4188, Address: 0x29716c, Func Offset: 0x2c
	// Line 4190, Address: 0x29717c, Func Offset: 0x3c
	// Line 4191, Address: 0x297184, Func Offset: 0x44
	// Func End, Address: 0x297190, Func Offset: 0x50
}

// 
// Start address: 0x297190
void ExecSoundSystemMonitor()
{
	int i;
	// Line 4199, Address: 0x297190, Func Offset: 0
	// Line 4204, Address: 0x2971a0, Func Offset: 0x10
	// Line 4217, Address: 0x2971b0, Func Offset: 0x20
	// Line 4205, Address: 0x2971b4, Func Offset: 0x24
	// Line 4206, Address: 0x2971bc, Func Offset: 0x2c
	// Line 4207, Address: 0x2971c4, Func Offset: 0x34
	// Line 4204, Address: 0x2971cc, Func Offset: 0x3c
	// Line 4205, Address: 0x2971d4, Func Offset: 0x44
	// Line 4206, Address: 0x2971dc, Func Offset: 0x4c
	// Line 4207, Address: 0x2971e4, Func Offset: 0x54
	// Line 4208, Address: 0x2971f0, Func Offset: 0x60
	// Line 4209, Address: 0x2971fc, Func Offset: 0x6c
	// Line 4218, Address: 0x297208, Func Offset: 0x78
	// Line 4220, Address: 0x297214, Func Offset: 0x84
	// Line 4221, Address: 0x297238, Func Offset: 0xa8
	// Line 4222, Address: 0x297244, Func Offset: 0xb4
	// Line 4225, Address: 0x297248, Func Offset: 0xb8
	// Line 4228, Address: 0x297258, Func Offset: 0xc8
	// Line 4231, Address: 0x297260, Func Offset: 0xd0
	// Line 4240, Address: 0x297268, Func Offset: 0xd8
	// Func End, Address: 0x29727c, Func Offset: 0xec
}

// 
// Start address: 0x297280
int RequestReadIsoFile(char* FileName, void* DestPtr)
{
	// Line 4253, Address: 0x297280, Func Offset: 0
	// Line 4254, Address: 0x29728c, Func Offset: 0xc
	// Line 4255, Address: 0x29729c, Func Offset: 0x1c
	// Line 4257, Address: 0x2972a4, Func Offset: 0x24
	// Line 4258, Address: 0x2972b8, Func Offset: 0x38
	// Line 4261, Address: 0x2972c0, Func Offset: 0x40
	// Line 4262, Address: 0x2972d0, Func Offset: 0x50
	// Line 4263, Address: 0x2972d8, Func Offset: 0x58
	// Line 4264, Address: 0x2972e4, Func Offset: 0x64
	// Line 4266, Address: 0x2972ec, Func Offset: 0x6c
	// Line 4267, Address: 0x2972f0, Func Offset: 0x70
	// Func End, Address: 0x297300, Func Offset: 0x80
}

// 
// Start address: 0x297300
int RequestReadInsideFile(unsigned int PartitionId, unsigned int FileId, void* DestPtr)
{
	// Line 4278, Address: 0x297300, Func Offset: 0
	// Line 4279, Address: 0x29730c, Func Offset: 0xc
	// Line 4280, Address: 0x29731c, Func Offset: 0x1c
	// Line 4282, Address: 0x297324, Func Offset: 0x24
	// Line 4283, Address: 0x297338, Func Offset: 0x38
	// Line 4286, Address: 0x297340, Func Offset: 0x40
	// Line 4287, Address: 0x297350, Func Offset: 0x50
	// Line 4288, Address: 0x297358, Func Offset: 0x58
	// Line 4289, Address: 0x297364, Func Offset: 0x64
	// Line 4291, Address: 0x29736c, Func Offset: 0x6c
	// Line 4292, Address: 0x297370, Func Offset: 0x70
	// Func End, Address: 0x297380, Func Offset: 0x80
}

// 
// Start address: 0x297380
int GetIsoFileSize(char* FileName)
{
	// Line 4382, Address: 0x297380, Func Offset: 0
	// Func End, Address: 0x297388, Func Offset: 0x8
}

// 
// Start address: 0x297390
int GetInsideFileSize(unsigned int PartitionId, unsigned int FileId)
{
	int FileSize;
	int SlotNo;
	// Line 4393, Address: 0x297390, Func Offset: 0
	// Line 4397, Address: 0x29739c, Func Offset: 0xc
	// Line 4398, Address: 0x2973ac, Func Offset: 0x1c
	// Line 4400, Address: 0x2973b4, Func Offset: 0x24
	// Line 4401, Address: 0x2973c0, Func Offset: 0x30
	// Line 4403, Address: 0x2973c8, Func Offset: 0x38
	// Line 4404, Address: 0x2973cc, Func Offset: 0x3c
	// Func End, Address: 0x2973e0, Func Offset: 0x50
}

/* 100% match */
int GetReadFileStatus() { // Line 4415, Address: 0x2973e0, Func Offset: 0
    return FileReadStatus; // Line 4416, Address: 0x2973e4, Func Offset: 0x4
}

// 
// Start address: 0x2973f0
void ExecFileManager()
{
	// Line 4424, Address: 0x2973f0, Func Offset: 0
	// Line 4425, Address: 0x2973f8, Func Offset: 0x8
	// Line 4427, Address: 0x297408, Func Offset: 0x18
	// Line 4428, Address: 0x297418, Func Offset: 0x28
	// Line 4429, Address: 0x297438, Func Offset: 0x48
	// Line 4430, Address: 0x297444, Func Offset: 0x54
	// Line 4431, Address: 0x29744c, Func Offset: 0x5c
	// Line 4432, Address: 0x297454, Func Offset: 0x64
	// Line 4433, Address: 0x29745c, Func Offset: 0x6c
	// Line 4434, Address: 0x297470, Func Offset: 0x80
	// Line 4435, Address: 0x297484, Func Offset: 0x94
	// Line 4436, Address: 0x29748c, Func Offset: 0x9c
	// Line 4441, Address: 0x297494, Func Offset: 0xa4
	// Func End, Address: 0x2974a0, Func Offset: 0xb0
}

// 
// Start address: 0x2974a0
int PlayStartMovieEx(int MovieNo, int MovieType, int PauseFlag)
{
	unsigned int Type;
	char FileName[16];
	MWS_PLY_CPRM_SFD CprmSfd;
	// Line 4527, Address: 0x2974a0, Func Offset: 0
	// Line 4532, Address: 0x2974bc, Func Offset: 0x1c
	// Line 4533, Address: 0x2974d4, Func Offset: 0x34
	// Line 4534, Address: 0x2974dc, Func Offset: 0x3c
	// Line 4537, Address: 0x2974e4, Func Offset: 0x44
	// Line 4539, Address: 0x2974f4, Func Offset: 0x54
	// Line 4540, Address: 0x2974f8, Func Offset: 0x58
	// Line 4539, Address: 0x297500, Func Offset: 0x60
	// Line 4537, Address: 0x297504, Func Offset: 0x64
	// Line 4540, Address: 0x297508, Func Offset: 0x68
	// Line 4541, Address: 0x29751c, Func Offset: 0x7c
	// Line 4542, Address: 0x297520, Func Offset: 0x80
	// Line 4543, Address: 0x297524, Func Offset: 0x84
	// Line 4541, Address: 0x297528, Func Offset: 0x88
	// Line 4542, Address: 0x297530, Func Offset: 0x90
	// Line 4540, Address: 0x297534, Func Offset: 0x94
	// Line 4542, Address: 0x297538, Func Offset: 0x98
	// Line 4541, Address: 0x297540, Func Offset: 0xa0
	// Line 4542, Address: 0x297544, Func Offset: 0xa4
	// Line 4544, Address: 0x297548, Func Offset: 0xa8
	// Line 4543, Address: 0x29754c, Func Offset: 0xac
	// Line 4542, Address: 0x297558, Func Offset: 0xb8
	// Line 4543, Address: 0x29755c, Func Offset: 0xbc
	// Line 4544, Address: 0x297560, Func Offset: 0xc0
	// Line 4543, Address: 0x297564, Func Offset: 0xc4
	// Line 4544, Address: 0x297568, Func Offset: 0xc8
	// Line 4545, Address: 0x29756c, Func Offset: 0xcc
	// Line 4550, Address: 0x29758c, Func Offset: 0xec
	// Line 4551, Address: 0x2975a4, Func Offset: 0x104
	// Line 4552, Address: 0x2975ac, Func Offset: 0x10c
	// Line 4555, Address: 0x2975b4, Func Offset: 0x114
	// Line 4556, Address: 0x2975bc, Func Offset: 0x11c
	// Line 4557, Address: 0x2975c4, Func Offset: 0x124
	// Line 4561, Address: 0x2975cc, Func Offset: 0x12c
	// Line 4565, Address: 0x2975e0, Func Offset: 0x140
	// Line 4566, Address: 0x2975fc, Func Offset: 0x15c
	// Line 4567, Address: 0x297614, Func Offset: 0x174
	// Line 4573, Address: 0x29770c, Func Offset: 0x26c
	// Line 4574, Address: 0x297730, Func Offset: 0x290
	// Line 4575, Address: 0x29773c, Func Offset: 0x29c
	// Line 4577, Address: 0x297748, Func Offset: 0x2a8
	// Line 4578, Address: 0x297768, Func Offset: 0x2c8
	// Line 4579, Address: 0x297774, Func Offset: 0x2d4
	// Line 4581, Address: 0x297780, Func Offset: 0x2e0
	// Line 4583, Address: 0x297788, Func Offset: 0x2e8
	// Line 4584, Address: 0x297794, Func Offset: 0x2f4
	// Line 4585, Address: 0x2977b0, Func Offset: 0x310
	// Line 4584, Address: 0x2977b4, Func Offset: 0x314
	// Line 4585, Address: 0x2977b8, Func Offset: 0x318
	// Line 4584, Address: 0x2977bc, Func Offset: 0x31c
	// Line 4585, Address: 0x2977c0, Func Offset: 0x320
	// Line 4586, Address: 0x2977e8, Func Offset: 0x348
	// Line 4593, Address: 0x2977fc, Func Offset: 0x35c
	// Line 4595, Address: 0x297800, Func Offset: 0x360
	// Line 4586, Address: 0x297804, Func Offset: 0x364
	// Line 4587, Address: 0x297808, Func Offset: 0x368
	// Line 4592, Address: 0x29782c, Func Offset: 0x38c
	// Line 4593, Address: 0x297834, Func Offset: 0x394
	// Line 4596, Address: 0x29783c, Func Offset: 0x39c
	// Func End, Address: 0x29785c, Func Offset: 0x3bc
}

// 
// Start address: 0x297860
void PlayStopMovieEx(int Mode)
{
	// Line 4617, Address: 0x297860, Func Offset: 0
	// Line 4618, Address: 0x297868, Func Offset: 0x8
	// Line 4619, Address: 0x297878, Func Offset: 0x18
	// Line 4620, Address: 0x297880, Func Offset: 0x20
	// Line 4621, Address: 0x297888, Func Offset: 0x28
	// Line 4622, Address: 0x297894, Func Offset: 0x34
	// Line 4624, Address: 0x2978a0, Func Offset: 0x40
	// Line 4627, Address: 0x2978a8, Func Offset: 0x48
	// Line 4628, Address: 0x2978c4, Func Offset: 0x64
	// Line 4631, Address: 0x2978d4, Func Offset: 0x74
	// Func End, Address: 0x2978e0, Func Offset: 0x80
}

/* 100% match */
void PlayStopMovie() { // Line 4640, Address: 0x2978e0, Func Offset: 0
    PlayStopMovieEx(0);
}

// 
// Start address: 0x2978f0
int CheckPlayEndMovie()
{
	// Line 4651, Address: 0x2978f0, Func Offset: 0
	// Line 4652, Address: 0x2978f4, Func Offset: 0x4
	// Func End, Address: 0x2978fc, Func Offset: 0xc
}

// 
// Start address: 0x297900
int GetTimeMoive()
{
	// Line 4661, Address: 0x297900, Func Offset: 0
	// Line 4663, Address: 0x297908, Func Offset: 0x8
	// Line 4667, Address: 0x29792c, Func Offset: 0x2c
	// Func End, Address: 0x297938, Func Offset: 0x38
}

// 
// Start address: 0x297940
int WaitPrePlayMovie(int parameter /* UNUSED */)
{
	// Line 4678, Address: 0x297940, Func Offset: 0
	// Line 4679, Address: 0x297948, Func Offset: 0x8
	// Line 4680, Address: 0x297958, Func Offset: 0x18
	// Line 4681, Address: 0x297968, Func Offset: 0x28
	// Line 4682, Address: 0x297970, Func Offset: 0x30
	// Line 4684, Address: 0x297978, Func Offset: 0x38
	// Line 4685, Address: 0x29798c, Func Offset: 0x4c
	// Line 4686, Address: 0x297994, Func Offset: 0x54
	// Line 4688, Address: 0x29799c, Func Offset: 0x5c
	// Line 4691, Address: 0x2979ac, Func Offset: 0x6c
	// Line 4693, Address: 0x2979e4, Func Offset: 0xa4
	// Line 4694, Address: 0x2979ec, Func Offset: 0xac
	// Line 4703, Address: 0x2979f4, Func Offset: 0xb4
	// Line 4704, Address: 0x2979fc, Func Offset: 0xbc
	// Line 4708, Address: 0x297a10, Func Offset: 0xd0
	// Line 4709, Address: 0x297a18, Func Offset: 0xd8
	// Line 4712, Address: 0x297a20, Func Offset: 0xe0
	// Line 4715, Address: 0x297a2c, Func Offset: 0xec
	// Line 4716, Address: 0x297a30, Func Offset: 0xf0
	// Func End, Address: 0x297a3c, Func Offset: 0xfc
}

// 
// Start address: 0x297a40
int PlayMovieMain(int parameter /* UNUSED */)
{
	// Line 4727, Address: 0x297a40, Func Offset: 0
	// Line 4728, Address: 0x297a48, Func Offset: 0x8
	// Line 4729, Address: 0x297a58, Func Offset: 0x18
	// Line 4730, Address: 0x297a68, Func Offset: 0x28
	// Line 4731, Address: 0x297a70, Func Offset: 0x30
	// Line 4733, Address: 0x297a78, Func Offset: 0x38
	// Line 4734, Address: 0x297a8c, Func Offset: 0x4c
	// Line 4735, Address: 0x297a94, Func Offset: 0x54
	// Line 4737, Address: 0x297a9c, Func Offset: 0x5c
	// Line 4738, Address: 0x297aa4, Func Offset: 0x64
	// Line 4741, Address: 0x297ab4, Func Offset: 0x74
	// Line 4743, Address: 0x297aec, Func Offset: 0xac
	// Line 4744, Address: 0x297afc, Func Offset: 0xbc
	// Line 4745, Address: 0x297b04, Func Offset: 0xc4
	// Line 4748, Address: 0x297b0c, Func Offset: 0xcc
	// Line 4750, Address: 0x297b20, Func Offset: 0xe0
	// Line 4753, Address: 0x297b28, Func Offset: 0xe8
	// Line 4761, Address: 0x297b40, Func Offset: 0x100
	// Line 4762, Address: 0x297b50, Func Offset: 0x110
	// Line 4763, Address: 0x297b68, Func Offset: 0x128
	// Line 4764, Address: 0x297b70, Func Offset: 0x130
	// Line 4766, Address: 0x297b78, Func Offset: 0x138
	// Line 4767, Address: 0x297b80, Func Offset: 0x140
	// Line 4768, Address: 0x297bb0, Func Offset: 0x170
	// Line 4769, Address: 0x297bc8, Func Offset: 0x188
	// Line 4785, Address: 0x297bd8, Func Offset: 0x198
	// Line 4786, Address: 0x297be8, Func Offset: 0x1a8
	// Line 4787, Address: 0x297bf0, Func Offset: 0x1b0
	// Line 4790, Address: 0x297bf8, Func Offset: 0x1b8
	// Line 4791, Address: 0x297bfc, Func Offset: 0x1bc
	// Func End, Address: 0x297c08, Func Offset: 0x1c8
}

/* 100% match */
void SetEventVibrationMode(int Mode) { // Line 4840, Address: 0x297c10, Func Offset: 0
    EventVibrationMode = Mode; // Line 4841, Address: 0x297c14, Func Offset: 0x4
}

// 
// Start address: 0x297c20
void StartVibrationBasic(int PortNo, int AtrbId, int VibNo)
{
	PDS_VIBPARAM VibPrm;
	// Line 4855, Address: 0x297c20, Func Offset: 0
	// Line 4858, Address: 0x297c28, Func Offset: 0x8
	// Line 4862, Address: 0x297c44, Func Offset: 0x24
	// Line 4863, Address: 0x297c54, Func Offset: 0x34
	// Line 4868, Address: 0x297c60, Func Offset: 0x40
	// Line 4869, Address: 0x297c84, Func Offset: 0x64
	// Line 4870, Address: 0x297c90, Func Offset: 0x70
	// Line 4868, Address: 0x297c94, Func Offset: 0x74
	// Line 4870, Address: 0x297c98, Func Offset: 0x78
	// Line 4869, Address: 0x297c9c, Func Offset: 0x7c
	// Line 4870, Address: 0x297ca0, Func Offset: 0x80
	// Line 4871, Address: 0x297ca4, Func Offset: 0x84
	// Line 4869, Address: 0x297cac, Func Offset: 0x8c
	// Line 4871, Address: 0x297cb0, Func Offset: 0x90
	// Line 4870, Address: 0x297cb4, Func Offset: 0x94
	// Line 4872, Address: 0x297cb8, Func Offset: 0x98
	// Line 4870, Address: 0x297cc8, Func Offset: 0xa8
	// Line 4871, Address: 0x297ccc, Func Offset: 0xac
	// Line 4872, Address: 0x297cd0, Func Offset: 0xb0
	// Line 4873, Address: 0x297cdc, Func Offset: 0xbc
	// Func End, Address: 0x297ce8, Func Offset: 0xc8
}

/* 100% match */
void StartVibrationEx(int AtrbId, int VibNo) { // Line 4886, Address: 0x297cf4, Func Offset: 0x4
    StartVibrationBasic(CurrentPortId, AtrbId, VibNo);
}

/* 100% match */
void StopVibrationBasic(int PortNo) { // Line 4897, Address: 0x297d10, Func Offset: 0
    StopVibration((PortNo * 6) + 2);
}

/* 100% match */
void StopVibrationEx() { // Line 4907, Address: 0x297d30, Func Offset: 0
    StopVibrationBasic(CurrentPortId);
}

/* 100% match */
void SetAdjustDisplay() { // Line 4918, Address: 0x297d40, Func Offset: 0
    SystemAdjustFlag = 1; // Line 4919, Address: 0x297d48, Func Offset: 0x8
}

/* 100% match */
void RequestAdjustDisplay(int AdjustX, int AdjustY) { // Line 4923, Address: 0x297d50, Func Offset: 0
    sys->adjust_x = AdjustX; sys->adjust_y = AdjustY; // Line 4924, Address: 0x297d5c, Func Offset: 0xc
    SetAdjustDisplay(); // Line 4925, Address: 0x297d64, Func Offset: 0x14
}

/* 100% match */
void ExecAdjustDisplay() { // Line 4929, Address: 0x297d70, Func Offset: 0
    if (SystemAdjustFlag != 0) { // Line 4930, Address: 0x297d78, Func Offset: 0x8
        njAdjustDisplay(sys->adjust_x, sys->adjust_y + 1); // Line 4931, Address: 0x297d88, Func Offset: 0x18
        SystemAdjustFlag = 0; // Line 4932, Address: 0x297da0, Func Offset: 0x30
    }
} // Line 4934, Address: 0x297da8, Func Offset: 0x38

/* empty */
void InitPlayLogSystem() { } // Line 4958, Address: 0x297dc0, Func Offset: 0

/* empty */
void ExitPlayLogSystem() { } // Line 4970, Address: 0x297dd0, Func Offset: 0

/* empty */
void ReadPlayLog() { } // Line 4987, Address: 0x297de0, Func Offset: 0

/* empty */
void WritePlayLog() { } // Line 5008, Address: 0x297df0, Func Offset: 0
