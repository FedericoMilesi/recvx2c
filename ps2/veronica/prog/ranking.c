






typedef struct RANKING;
























typedef struct _anon23;














typedef void(*type_44)();
typedef void(*type_97)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef char type_2[50];
typedef Unknown1* type_3[32];

typedef Unknown1* type_5[32];
typedef Unknown1* type_6[512];


typedef char type_9[8];
typedef char type_10[32];
typedef Unknown1* type_11[32];
typedef Unknown1* type_12[512];

typedef char type_14[32];
typedef Unknown1* type_15[512];

typedef short type_17[32];

typedef int type_19[8];
typedef Unknown1* type_20[128];

typedef unsigned int type_22[1];


typedef int* type_25[16];
typedef Unknown1* type_26[128];

typedef Unknown1* type_28[128];
typedef int type_29[4];

typedef unsigned int type_31[4];
typedef MODEL_DATA type_32[16];
typedef Unknown1* type_33[512];
typedef char type_34[256];
typedef float type_35[4];
typedef float type_36[4];
typedef float type_37[4];
typedef int type_38[4];

typedef unsigned char type_40[64];
typedef float type_41[4];

typedef unsigned char type_43[4];
typedef void(*type_45)()[6];
typedef char type_46[8];
typedef void* type_47[2];
typedef int type_48[4][4];
typedef float type_49[4][3];

typedef float type_51[4][3];
typedef int type_52[4];
typedef unsigned char* type_53[256];
typedef unsigned char type_54[68];
typedef unsigned int type_55[2];
typedef short type_56[256];
typedef unsigned int type_57[32];
typedef unsigned char type_58[64];
typedef unsigned int type_59[16];

typedef unsigned char type_61[64];
typedef unsigned int type_62[16];
typedef float type_63[3];
typedef unsigned int type_64[32];
typedef short type_65[256];
typedef int type_66[3];
typedef unsigned char type_67[64];
typedef int type_68[8];
typedef unsigned int type_69[16];
typedef float type_70[3];
typedef unsigned char type_71[512];
typedef unsigned int type_72[8];

typedef unsigned int type_74[384];
typedef TEXTURE_BUFFER type_75[256];
typedef unsigned int type_76[4];

typedef char type_78[4];

typedef short type_80[4];
typedef unsigned char type_81[4];

typedef short type_83[256];
typedef char type_84[3];
typedef int type_85[64];
typedef MODEL_DATA type_86[450];


typedef int type_89[450];
typedef unsigned int type_90[8];
typedef unsigned char type_91[450];
typedef _anon23 type_92[4];
typedef unsigned int type_93[4];
typedef char type_94[16];

typedef char type_96[4];
typedef unsigned int type_98[32];
typedef unsigned int type_99[16];
typedef unsigned short type_100[0];
typedef BOUNDARY type_101[64];
typedef unsigned int type_102[16];
typedef BOUNDARY type_103[64];
typedef unsigned int type_104[32];
typedef BOUNDARY type_105[64];
typedef unsigned int type_106[16];
typedef unsigned int type_107[3];
typedef BH_PWORK* type_108[16];
typedef unsigned int type_109[8];
typedef unsigned int type_110[1];
typedef unsigned int type_111[384];
typedef unsigned int type_112[2];
typedef int type_113[2];
typedef unsigned char type_114[2];
typedef int type_115[2][48];
typedef int* type_116[16];
typedef unsigned int type_117[4];
typedef char type_118[32];

typedef char type_120[64];

typedef char type_122[4];
typedef MODEL_DATA type_123[16];
typedef short type_124[4];
typedef unsigned char type_125[4];

typedef int type_127[8];
typedef int type_128[8][2];
typedef unsigned int type_129[32];

typedef Unknown1* type_131[512];
typedef int type_132[4];
typedef int type_133[4][5];
typedef Unknown1* type_134[128];
typedef Unknown1* type_135[512];
typedef unsigned char type_136[64];
typedef Unknown1* type_137[512];






















































struct RANKING
{
	NJS_TEXNAME rktx[2];
	NJS_TEXLIST rktx_list;
	int hour;
	int min;
	int sec;
	int allscore;
	int ranking;
	int mode_00;
	int mode_01;
	int mode_02;
	int mode_03;
	int alcount00;
	int errret;
	unsigned int cnt00;
	unsigned int cnt01;
	int tmbk;
	unsigned int col;
	int filebak;
	int mesalpha;
	int mescol;
	unsigned int mesnum[4];
	NJS_POINT2 mespos[4];
	unsigned short mesloop;
	unsigned char alpha;
	unsigned char gameest00;
	unsigned char gamecarry00;
	unsigned char gameest01;
	unsigned char gamecarry01;
	unsigned char dummy;
};








































































































































































































































































































































































































































































































































































struct _anon23
{
	float x1;
	float y1;
	float x2;
	float y2;
	float u1;
	float v1;
	float u2;
	float v2;
};
























































































































void(*RankingMode)()[6];
extern SYS* sys;
GFX_FADE fade;
RANKING rkw;
SYSSAVE_SCREEN* pRankingSys;
extern Sint8* vwbmemp;
SYSSAVE_SCREEN RankingSys;
unsigned short mesdeftbl[0];

void ControlRanking();
void RankingInit();
void RankingVmsWait();
void RankingSave();
void RankingErrorMessage();
void RankingMain();
void RankingExit();
void RankingTextureInit();
void WallPaperDisp();
void DispRank(NJS_POINT2* pos, unsigned int color, int rank);
void DispRankingData00();
void DispRankingData01();
void DispNumber(NJS_POINT2* pos, int num, unsigned int col);
void DispTime(NJS_POINT2* pos, int time, unsigned int col, unsigned int mode);
int AllRanking(int score, unsigned int mode);
int GameClearScore(int time);
int RodorigoEventScore();
int SteveEventScore();
int MapScore();
int HealItemUseScore();
int SaveCountScore();
int RetryCountScore();
void GetMessage(unsigned int mesnum, NJS_POINT2* pos);
void RankingBgmSet();

// 
// Start address: 0x2bb210
void ControlRanking()
{
	// Line 146, Address: 0x2bb210, Func Offset: 0
	// Func End, Address: 0x2bb238, Func Offset: 0x28
}

// 
// Start address: 0x2bb240
void RankingInit()
{
	unsigned int ply_id;
	int j;
	GFX_FADE* sfe;
	RANKING* rk;
	// Line 151, Address: 0x2bb240, Func Offset: 0
	// Line 152, Address: 0x2bb254, Func Offset: 0x14
	// Line 153, Address: 0x2bb25c, Func Offset: 0x1c
	// Line 161, Address: 0x2bb264, Func Offset: 0x24
	// Line 162, Address: 0x2bb26c, Func Offset: 0x2c
	// Line 163, Address: 0x2bb284, Func Offset: 0x44
	// Line 165, Address: 0x2bb28c, Func Offset: 0x4c
	// Line 163, Address: 0x2bb294, Func Offset: 0x54
	// Line 165, Address: 0x2bb29c, Func Offset: 0x5c
	// Line 166, Address: 0x2bb2a4, Func Offset: 0x64
	// Line 167, Address: 0x2bb2ac, Func Offset: 0x6c
	// Line 169, Address: 0x2bb2b0, Func Offset: 0x70
	// Line 166, Address: 0x2bb2b4, Func Offset: 0x74
	// Line 167, Address: 0x2bb2b8, Func Offset: 0x78
	// Line 166, Address: 0x2bb2bc, Func Offset: 0x7c
	// Line 167, Address: 0x2bb2c8, Func Offset: 0x88
	// Line 169, Address: 0x2bb2d0, Func Offset: 0x90
	// Line 170, Address: 0x2bb2e4, Func Offset: 0xa4
	// Line 172, Address: 0x2bb2ec, Func Offset: 0xac
	// Line 173, Address: 0x2bb2f4, Func Offset: 0xb4
	// Line 174, Address: 0x2bb2f8, Func Offset: 0xb8
	// Line 176, Address: 0x2bb300, Func Offset: 0xc0
	// Line 177, Address: 0x2bb304, Func Offset: 0xc4
	// Line 178, Address: 0x2bb308, Func Offset: 0xc8
	// Line 179, Address: 0x2bb30c, Func Offset: 0xcc
	// Line 180, Address: 0x2bb324, Func Offset: 0xe4
	// Line 181, Address: 0x2bb334, Func Offset: 0xf4
	// Line 182, Address: 0x2bb344, Func Offset: 0x104
	// Line 183, Address: 0x2bb354, Func Offset: 0x114
	// Line 184, Address: 0x2bb364, Func Offset: 0x124
	// Line 185, Address: 0x2bb374, Func Offset: 0x134
	// Line 186, Address: 0x2bb388, Func Offset: 0x148
	// Line 187, Address: 0x2bb398, Func Offset: 0x158
	// Line 188, Address: 0x2bb3ac, Func Offset: 0x16c
	// Line 189, Address: 0x2bb3bc, Func Offset: 0x17c
	// Line 190, Address: 0x2bb3cc, Func Offset: 0x18c
	// Line 191, Address: 0x2bb3d0, Func Offset: 0x190
	// Line 192, Address: 0x2bb3d4, Func Offset: 0x194
	// Line 193, Address: 0x2bb3d8, Func Offset: 0x198
	// Line 194, Address: 0x2bb3dc, Func Offset: 0x19c
	// Line 190, Address: 0x2bb3e0, Func Offset: 0x1a0
	// Line 191, Address: 0x2bb3e8, Func Offset: 0x1a8
	// Line 192, Address: 0x2bb3ec, Func Offset: 0x1ac
	// Line 193, Address: 0x2bb3f0, Func Offset: 0x1b0
	// Line 199, Address: 0x2bb3f4, Func Offset: 0x1b4
	// Line 200, Address: 0x2bb410, Func Offset: 0x1d0
	// Line 201, Address: 0x2bb414, Func Offset: 0x1d4
	// Line 200, Address: 0x2bb420, Func Offset: 0x1e0
	// Line 201, Address: 0x2bb428, Func Offset: 0x1e8
	// Line 202, Address: 0x2bb42c, Func Offset: 0x1ec
	// Line 203, Address: 0x2bb43c, Func Offset: 0x1fc
	// Line 204, Address: 0x2bb440, Func Offset: 0x200
	// Line 203, Address: 0x2bb444, Func Offset: 0x204
	// Line 206, Address: 0x2bb448, Func Offset: 0x208
	// Line 207, Address: 0x2bb464, Func Offset: 0x224
	// Line 208, Address: 0x2bb480, Func Offset: 0x240
	// Line 213, Address: 0x2bb48c, Func Offset: 0x24c
	// Line 212, Address: 0x2bb490, Func Offset: 0x250
	// Line 215, Address: 0x2bb494, Func Offset: 0x254
	// Line 216, Address: 0x2bb4a4, Func Offset: 0x264
	// Line 218, Address: 0x2bb4ac, Func Offset: 0x26c
	// Line 219, Address: 0x2bb4b4, Func Offset: 0x274
	// Line 220, Address: 0x2bb4b8, Func Offset: 0x278
	// Line 223, Address: 0x2bb4c0, Func Offset: 0x280
	// Line 226, Address: 0x2bb4ec, Func Offset: 0x2ac
	// Line 230, Address: 0x2bb4f0, Func Offset: 0x2b0
	// Line 226, Address: 0x2bb4f4, Func Offset: 0x2b4
	// Line 227, Address: 0x2bb4fc, Func Offset: 0x2bc
	// Line 228, Address: 0x2bb500, Func Offset: 0x2c0
	// Line 229, Address: 0x2bb504, Func Offset: 0x2c4
	// Line 230, Address: 0x2bb508, Func Offset: 0x2c8
	// Line 231, Address: 0x2bb520, Func Offset: 0x2e0
	// Line 233, Address: 0x2bb530, Func Offset: 0x2f0
	// Line 234, Address: 0x2bb54c, Func Offset: 0x30c
	// Line 235, Address: 0x2bb568, Func Offset: 0x328
	// Line 238, Address: 0x2bb574, Func Offset: 0x334
	// Line 239, Address: 0x2bb57c, Func Offset: 0x33c
	// Line 242, Address: 0x2bb580, Func Offset: 0x340
	// Line 259, Address: 0x2bb588, Func Offset: 0x348
	// Line 260, Address: 0x2bb5a8, Func Offset: 0x368
	// Line 261, Address: 0x2bb5ac, Func Offset: 0x36c
	// Line 260, Address: 0x2bb5b0, Func Offset: 0x370
	// Line 262, Address: 0x2bb5b8, Func Offset: 0x378
	// Line 263, Address: 0x2bb5d0, Func Offset: 0x390
	// Line 264, Address: 0x2bb5d4, Func Offset: 0x394
	// Line 263, Address: 0x2bb5d8, Func Offset: 0x398
	// Line 265, Address: 0x2bb5dc, Func Offset: 0x39c
	// Line 266, Address: 0x2bb5e4, Func Offset: 0x3a4
	// Line 267, Address: 0x2bb5e8, Func Offset: 0x3a8
	// Line 289, Address: 0x2bb5ec, Func Offset: 0x3ac
	// Line 290, Address: 0x2bb5fc, Func Offset: 0x3bc
	// Line 292, Address: 0x2bb638, Func Offset: 0x3f8
	// Line 293, Address: 0x2bb648, Func Offset: 0x408
	// Line 295, Address: 0x2bb650, Func Offset: 0x410
	// Line 296, Address: 0x2bb660, Func Offset: 0x420
	// Line 298, Address: 0x2bb668, Func Offset: 0x428
	// Line 299, Address: 0x2bb678, Func Offset: 0x438
	// Line 301, Address: 0x2bb680, Func Offset: 0x440
	// Line 302, Address: 0x2bb690, Func Offset: 0x450
	// Line 304, Address: 0x2bb698, Func Offset: 0x458
	// Line 316, Address: 0x2bb6ac, Func Offset: 0x46c
	// Line 317, Address: 0x2bb6cc, Func Offset: 0x48c
	// Line 318, Address: 0x2bb6e0, Func Offset: 0x4a0
	// Line 319, Address: 0x2bb6e8, Func Offset: 0x4a8
	// Line 320, Address: 0x2bb6f0, Func Offset: 0x4b0
	// Line 321, Address: 0x2bb6f8, Func Offset: 0x4b8
	// Line 322, Address: 0x2bb6fc, Func Offset: 0x4bc
	// Line 321, Address: 0x2bb700, Func Offset: 0x4c0
	// Line 327, Address: 0x2bb704, Func Offset: 0x4c4
	// Line 329, Address: 0x2bb720, Func Offset: 0x4e0
	// Line 330, Address: 0x2bb73c, Func Offset: 0x4fc
	// Line 331, Address: 0x2bb740, Func Offset: 0x500
	// Line 330, Address: 0x2bb74c, Func Offset: 0x50c
	// Line 331, Address: 0x2bb754, Func Offset: 0x514
	// Line 332, Address: 0x2bb758, Func Offset: 0x518
	// Line 333, Address: 0x2bb768, Func Offset: 0x528
	// Line 334, Address: 0x2bb76c, Func Offset: 0x52c
	// Line 336, Address: 0x2bb770, Func Offset: 0x530
	// Line 338, Address: 0x2bb778, Func Offset: 0x538
	// Line 339, Address: 0x2bb794, Func Offset: 0x554
	// Line 340, Address: 0x2bb798, Func Offset: 0x558
	// Line 339, Address: 0x2bb7a4, Func Offset: 0x564
	// Line 340, Address: 0x2bb7ac, Func Offset: 0x56c
	// Line 341, Address: 0x2bb7b0, Func Offset: 0x570
	// Line 342, Address: 0x2bb7c0, Func Offset: 0x580
	// Line 343, Address: 0x2bb7c4, Func Offset: 0x584
	// Line 342, Address: 0x2bb7c8, Func Offset: 0x588
	// Line 348, Address: 0x2bb7cc, Func Offset: 0x58c
	// Line 347, Address: 0x2bb7d0, Func Offset: 0x590
	// Line 348, Address: 0x2bb7d4, Func Offset: 0x594
	// Line 351, Address: 0x2bb7d8, Func Offset: 0x598
	// Func End, Address: 0x2bb7f0, Func Offset: 0x5b0
}

// 
// Start address: 0x2bb7f0
void RankingVmsWait()
{
	// Line 364, Address: 0x2bb7f0, Func Offset: 0
	// Line 363, Address: 0x2bb7f8, Func Offset: 0x8
	// Line 364, Address: 0x2bb804, Func Offset: 0x14
	// Line 365, Address: 0x2bb80c, Func Offset: 0x1c
	// Line 377, Address: 0x2bb814, Func Offset: 0x24
	// Func End, Address: 0x2bb81c, Func Offset: 0x2c
}

// 
// Start address: 0x2bb820
void RankingSave()
{
	// Line 386, Address: 0x2bb820, Func Offset: 0
	// Func End, Address: 0x2bb828, Func Offset: 0x8
}

// 
// Start address: 0x2bb830
void RankingErrorMessage()
{
	GFX_FADE* sfe;
	RANKING* rk;
	unsigned int ulState;
	unsigned int SaveCheck;
	// Line 390, Address: 0x2bb830, Func Offset: 0
	// Line 393, Address: 0x2bb840, Func Offset: 0x10
	// Line 399, Address: 0x2bb848, Func Offset: 0x18
	// Line 394, Address: 0x2bb850, Func Offset: 0x20
	// Line 399, Address: 0x2bb854, Func Offset: 0x24
	// Line 402, Address: 0x2bb870, Func Offset: 0x40
	// Line 404, Address: 0x2bb890, Func Offset: 0x60
	// Line 403, Address: 0x2bb898, Func Offset: 0x68
	// Line 405, Address: 0x2bb8a0, Func Offset: 0x70
	// Line 408, Address: 0x2bb8a8, Func Offset: 0x78
	// Line 409, Address: 0x2bb8bc, Func Offset: 0x8c
	// Line 411, Address: 0x2bb8d0, Func Offset: 0xa0
	// Line 412, Address: 0x2bb8d8, Func Offset: 0xa8
	// Line 413, Address: 0x2bb8e8, Func Offset: 0xb8
	// Line 415, Address: 0x2bb8f4, Func Offset: 0xc4
	// Line 417, Address: 0x2bb8fc, Func Offset: 0xcc
	// Line 418, Address: 0x2bb904, Func Offset: 0xd4
	// Line 420, Address: 0x2bb910, Func Offset: 0xe0
	// Line 421, Address: 0x2bb918, Func Offset: 0xe8
	// Line 422, Address: 0x2bb928, Func Offset: 0xf8
	// Line 424, Address: 0x2bb934, Func Offset: 0x104
	// Line 513, Address: 0x2bb93c, Func Offset: 0x10c
	// Func End, Address: 0x2bb950, Func Offset: 0x120
}

// 
// Start address: 0x2bb950
void RankingMain()
{
	int num;
	GFX_FADE* sfe;
	RANKING* rk;
	unsigned int flg;
	// Line 517, Address: 0x2bb950, Func Offset: 0
	// Line 518, Address: 0x2bb960, Func Offset: 0x10
	// Line 524, Address: 0x2bb968, Func Offset: 0x18
	// Line 519, Address: 0x2bb970, Func Offset: 0x20
	// Line 524, Address: 0x2bb978, Func Offset: 0x28
	// Line 525, Address: 0x2bb994, Func Offset: 0x44
	// Line 526, Address: 0x2bb9a8, Func Offset: 0x58
	// Line 527, Address: 0x2bb9b0, Func Offset: 0x60
	// Line 529, Address: 0x2bb9b8, Func Offset: 0x68
	// Line 531, Address: 0x2bb9f0, Func Offset: 0xa0
	// Line 533, Address: 0x2bba00, Func Offset: 0xb0
	// Line 532, Address: 0x2bba04, Func Offset: 0xb4
	// Line 533, Address: 0x2bba08, Func Offset: 0xb8
	// Line 534, Address: 0x2bba0c, Func Offset: 0xbc
	// Line 535, Address: 0x2bba14, Func Offset: 0xc4
	// Line 536, Address: 0x2bba18, Func Offset: 0xc8
	// Line 537, Address: 0x2bba1c, Func Offset: 0xcc
	// Line 539, Address: 0x2bba24, Func Offset: 0xd4
	// Line 540, Address: 0x2bba30, Func Offset: 0xe0
	// Line 541, Address: 0x2bba50, Func Offset: 0x100
	// Line 542, Address: 0x2bba5c, Func Offset: 0x10c
	// Line 543, Address: 0x2bba64, Func Offset: 0x114
	// Line 544, Address: 0x2bba68, Func Offset: 0x118
	// Line 545, Address: 0x2bba6c, Func Offset: 0x11c
	// Line 547, Address: 0x2bba70, Func Offset: 0x120
	// Line 548, Address: 0x2bba74, Func Offset: 0x124
	// Line 544, Address: 0x2bba78, Func Offset: 0x128
	// Line 545, Address: 0x2bba80, Func Offset: 0x130
	// Line 546, Address: 0x2bba84, Func Offset: 0x134
	// Line 548, Address: 0x2bba88, Func Offset: 0x138
	// Line 549, Address: 0x2bba90, Func Offset: 0x140
	// Line 550, Address: 0x2bba98, Func Offset: 0x148
	// Line 553, Address: 0x2bbaa0, Func Offset: 0x150
	// Line 554, Address: 0x2bbab0, Func Offset: 0x160
	// Line 555, Address: 0x2bbabc, Func Offset: 0x16c
	// Line 556, Address: 0x2bbac4, Func Offset: 0x174
	// Line 559, Address: 0x2bbacc, Func Offset: 0x17c
	// Line 560, Address: 0x2bbad4, Func Offset: 0x184
	// Line 562, Address: 0x2bbae0, Func Offset: 0x190
	// Line 564, Address: 0x2bbae8, Func Offset: 0x198
	// Line 565, Address: 0x2bbaf8, Func Offset: 0x1a8
	// Line 566, Address: 0x2bbb04, Func Offset: 0x1b4
	// Line 567, Address: 0x2bbb0c, Func Offset: 0x1bc
	// Line 569, Address: 0x2bbb28, Func Offset: 0x1d8
	// Line 570, Address: 0x2bbb34, Func Offset: 0x1e4
	// Line 571, Address: 0x2bbb40, Func Offset: 0x1f0
	// Line 572, Address: 0x2bbb50, Func Offset: 0x200
	// Line 573, Address: 0x2bbb58, Func Offset: 0x208
	// Line 575, Address: 0x2bbb5c, Func Offset: 0x20c
	// Line 576, Address: 0x2bbb68, Func Offset: 0x218
	// Line 577, Address: 0x2bbb6c, Func Offset: 0x21c
	// Line 578, Address: 0x2bbb70, Func Offset: 0x220
	// Line 577, Address: 0x2bbb74, Func Offset: 0x224
	// Line 580, Address: 0x2bbb7c, Func Offset: 0x22c
	// Line 581, Address: 0x2bbb84, Func Offset: 0x234
	// Line 582, Address: 0x2bbb9c, Func Offset: 0x24c
	// Line 583, Address: 0x2bbba0, Func Offset: 0x250
	// Line 584, Address: 0x2bbbac, Func Offset: 0x25c
	// Line 585, Address: 0x2bbbb0, Func Offset: 0x260
	// Line 584, Address: 0x2bbbb4, Func Offset: 0x264
	// Line 585, Address: 0x2bbbbc, Func Offset: 0x26c
	// Line 589, Address: 0x2bbbc0, Func Offset: 0x270
	// Line 590, Address: 0x2bbbec, Func Offset: 0x29c
	// Line 592, Address: 0x2bbbf0, Func Offset: 0x2a0
	// Line 595, Address: 0x2bbbf8, Func Offset: 0x2a8
	// Line 597, Address: 0x2bbc00, Func Offset: 0x2b0
	// Line 598, Address: 0x2bbc10, Func Offset: 0x2c0
	// Line 607, Address: 0x2bbc20, Func Offset: 0x2d0
	// Func End, Address: 0x2bbc34, Func Offset: 0x2e4
}

// 
// Start address: 0x2bbc40
void RankingExit()
{
	RANKING* rk;
	// Line 612, Address: 0x2bbc40, Func Offset: 0
	// Line 613, Address: 0x2bbc44, Func Offset: 0x4
	// Line 612, Address: 0x2bbc4c, Func Offset: 0xc
	// Line 615, Address: 0x2bbc50, Func Offset: 0x10
	// Line 616, Address: 0x2bbc64, Func Offset: 0x24
	// Line 617, Address: 0x2bbc70, Func Offset: 0x30
	// Line 618, Address: 0x2bbc74, Func Offset: 0x34
	// Line 616, Address: 0x2bbc78, Func Offset: 0x38
	// Line 617, Address: 0x2bbc9c, Func Offset: 0x5c
	// Line 618, Address: 0x2bbca0, Func Offset: 0x60
	// Line 619, Address: 0x2bbcb0, Func Offset: 0x70
	// Line 620, Address: 0x2bbcc4, Func Offset: 0x84
	// Line 621, Address: 0x2bbccc, Func Offset: 0x8c
	// Line 622, Address: 0x2bbcd4, Func Offset: 0x94
	// Line 624, Address: 0x2bbce0, Func Offset: 0xa0
	// Line 625, Address: 0x2bbcf4, Func Offset: 0xb4
	// Line 626, Address: 0x2bbd00, Func Offset: 0xc0
	// Line 627, Address: 0x2bbd08, Func Offset: 0xc8
	// Line 629, Address: 0x2bbd14, Func Offset: 0xd4
	// Line 630, Address: 0x2bbd3c, Func Offset: 0xfc
	// Line 631, Address: 0x2bbd44, Func Offset: 0x104
	// Line 632, Address: 0x2bbd50, Func Offset: 0x110
	// Line 634, Address: 0x2bbd5c, Func Offset: 0x11c
	// Func End, Address: 0x2bbd68, Func Offset: 0x128
}

// 
// Start address: 0x2bbd70
void RankingTextureInit()
{
	unsigned char* datp;
	unsigned int dt;
	int no;
	int sz;
	RANKING* rk;
	// Line 638, Address: 0x2bbd70, Func Offset: 0
	// Line 639, Address: 0x2bbd80, Func Offset: 0x10
	// Line 646, Address: 0x2bbd88, Func Offset: 0x18
	// Line 647, Address: 0x2bbda4, Func Offset: 0x34
	// Line 648, Address: 0x2bbda8, Func Offset: 0x38
	// Line 651, Address: 0x2bbdbc, Func Offset: 0x4c
	// Line 652, Address: 0x2bbdd4, Func Offset: 0x64
	// Line 654, Address: 0x2bbde8, Func Offset: 0x78
	// Line 657, Address: 0x2bbdf0, Func Offset: 0x80
	// Line 658, Address: 0x2bbdf8, Func Offset: 0x88
	// Line 701, Address: 0x2bbdfc, Func Offset: 0x8c
	// Line 704, Address: 0x2bbe28, Func Offset: 0xb8
	// Line 705, Address: 0x2bbe38, Func Offset: 0xc8
	// Line 710, Address: 0x2bbe40, Func Offset: 0xd0
	// Line 713, Address: 0x2bbe48, Func Offset: 0xd8
	// Line 710, Address: 0x2bbe50, Func Offset: 0xe0
	// Line 713, Address: 0x2bbe64, Func Offset: 0xf4
	// Line 710, Address: 0x2bbe68, Func Offset: 0xf8
	// Line 713, Address: 0x2bbe74, Func Offset: 0x104
	// Line 714, Address: 0x2bbe88, Func Offset: 0x118
	// Line 716, Address: 0x2bbe90, Func Offset: 0x120
	// Line 714, Address: 0x2bbe9c, Func Offset: 0x12c
	// Line 715, Address: 0x2bbeb4, Func Offset: 0x144
	// Line 716, Address: 0x2bbed4, Func Offset: 0x164
	// Line 717, Address: 0x2bbee4, Func Offset: 0x174
	// Line 716, Address: 0x2bbee8, Func Offset: 0x178
	// Line 730, Address: 0x2bbef4, Func Offset: 0x184
	// Line 733, Address: 0x2bbefc, Func Offset: 0x18c
	// Line 734, Address: 0x2bbf0c, Func Offset: 0x19c
	// Line 742, Address: 0x2bbf14, Func Offset: 0x1a4
	// Line 734, Address: 0x2bbf18, Func Offset: 0x1a8
	// Line 741, Address: 0x2bbf28, Func Offset: 0x1b8
	// Line 735, Address: 0x2bbf2c, Func Offset: 0x1bc
	// Line 736, Address: 0x2bbf30, Func Offset: 0x1c0
	// Line 737, Address: 0x2bbf34, Func Offset: 0x1c4
	// Line 738, Address: 0x2bbf38, Func Offset: 0x1c8
	// Line 741, Address: 0x2bbf3c, Func Offset: 0x1cc
	// Line 743, Address: 0x2bbf50, Func Offset: 0x1e0
	// Line 747, Address: 0x2bbf58, Func Offset: 0x1e8
	// Line 748, Address: 0x2bbf68, Func Offset: 0x1f8
	// Line 749, Address: 0x2bbf7c, Func Offset: 0x20c
	// Line 754, Address: 0x2bbf84, Func Offset: 0x214
	// Line 757, Address: 0x2bbfa0, Func Offset: 0x230
	// Line 754, Address: 0x2bbfa4, Func Offset: 0x234
	// Line 757, Address: 0x2bbfb0, Func Offset: 0x240
	// Line 758, Address: 0x2bbfcc, Func Offset: 0x25c
	// Line 760, Address: 0x2bbfd0, Func Offset: 0x260
	// Line 763, Address: 0x2bbfd8, Func Offset: 0x268
	// Line 764, Address: 0x2bbfe8, Func Offset: 0x278
	// Line 765, Address: 0x2bc000, Func Offset: 0x290
	// Line 766, Address: 0x2bc004, Func Offset: 0x294
	// Line 768, Address: 0x2bc00c, Func Offset: 0x29c
	// Line 769, Address: 0x2bc020, Func Offset: 0x2b0
	// Line 774, Address: 0x2bc028, Func Offset: 0x2b8
	// Line 777, Address: 0x2bc02c, Func Offset: 0x2bc
	// Line 769, Address: 0x2bc030, Func Offset: 0x2c0
	// Line 774, Address: 0x2bc048, Func Offset: 0x2d8
	// Line 778, Address: 0x2bc06c, Func Offset: 0x2fc
	// Line 780, Address: 0x2bc074, Func Offset: 0x304
	// Line 781, Address: 0x2bc084, Func Offset: 0x314
	// Line 782, Address: 0x2bc098, Func Offset: 0x328
	// Line 787, Address: 0x2bc0a0, Func Offset: 0x330
	// Line 790, Address: 0x2bc0bc, Func Offset: 0x34c
	// Line 787, Address: 0x2bc0c0, Func Offset: 0x350
	// Line 790, Address: 0x2bc0cc, Func Offset: 0x35c
	// Line 791, Address: 0x2bc0e8, Func Offset: 0x378
	// Line 792, Address: 0x2bc0f0, Func Offset: 0x380
	// Line 791, Address: 0x2bc0f4, Func Offset: 0x384
	// Line 794, Address: 0x2bc10c, Func Offset: 0x39c
	// Line 796, Address: 0x2bc114, Func Offset: 0x3a4
	// Line 797, Address: 0x2bc124, Func Offset: 0x3b4
	// Line 798, Address: 0x2bc128, Func Offset: 0x3b8
	// Line 797, Address: 0x2bc134, Func Offset: 0x3c4
	// Line 798, Address: 0x2bc138, Func Offset: 0x3c8
	// Line 800, Address: 0x2bc140, Func Offset: 0x3d0
	// Line 801, Address: 0x2bc150, Func Offset: 0x3e0
	// Line 802, Address: 0x2bc154, Func Offset: 0x3e4
	// Line 804, Address: 0x2bc15c, Func Offset: 0x3ec
	// Line 805, Address: 0x2bc160, Func Offset: 0x3f0
	// Line 807, Address: 0x2bc180, Func Offset: 0x410
	// Line 805, Address: 0x2bc184, Func Offset: 0x414
	// Line 808, Address: 0x2bc188, Func Offset: 0x418
	// Line 810, Address: 0x2bc190, Func Offset: 0x420
	// Line 811, Address: 0x2bc198, Func Offset: 0x428
	// Line 815, Address: 0x2bc19c, Func Offset: 0x42c
	// Func End, Address: 0x2bc1b0, Func Offset: 0x440
}

// 
// Start address: 0x2bc1b0
void WallPaperDisp()
{
	_anon23 twt[4];
	// Line 822, Address: 0x2bc1b0, Func Offset: 0
	// Line 826, Address: 0x2bc1b4, Func Offset: 0x4
	// Line 822, Address: 0x2bc1b8, Func Offset: 0x8
	// Line 826, Address: 0x2bc1bc, Func Offset: 0xc
	// Line 828, Address: 0x2bc1c8, Func Offset: 0x18
	// Line 829, Address: 0x2bc1d0, Func Offset: 0x20
	// Line 830, Address: 0x2bc1d4, Func Offset: 0x24
	// Line 831, Address: 0x2bc1d8, Func Offset: 0x28
	// Line 832, Address: 0x2bc1e0, Func Offset: 0x30
	// Line 834, Address: 0x2bc1e8, Func Offset: 0x38
	// Line 835, Address: 0x2bc1ec, Func Offset: 0x3c
	// Line 836, Address: 0x2bc1f0, Func Offset: 0x40
	// Line 837, Address: 0x2bc1f8, Func Offset: 0x48
	// Line 839, Address: 0x2bc204, Func Offset: 0x54
	// Line 840, Address: 0x2bc214, Func Offset: 0x64
	// Line 842, Address: 0x2bc228, Func Offset: 0x78
	// Line 843, Address: 0x2bc234, Func Offset: 0x84
	// Line 844, Address: 0x2bc238, Func Offset: 0x88
	// Line 845, Address: 0x2bc240, Func Offset: 0x90
	// Line 847, Address: 0x2bc248, Func Offset: 0x98
	// Line 848, Address: 0x2bc24c, Func Offset: 0x9c
	// Line 849, Address: 0x2bc250, Func Offset: 0xa0
	// Line 850, Address: 0x2bc258, Func Offset: 0xa8
	// Line 852, Address: 0x2bc264, Func Offset: 0xb4
	// Line 853, Address: 0x2bc274, Func Offset: 0xc4
	// Line 854, Address: 0x2bc288, Func Offset: 0xd8
	// Line 856, Address: 0x2bc290, Func Offset: 0xe0
	// Func End, Address: 0x2bc2a0, Func Offset: 0xf0
}

// 
// Start address: 0x2bc2a0
void DispRank(NJS_POINT2* pos, unsigned int color, int rank)
{
	int code;
	// Line 887, Address: 0x2bc2a0, Func Offset: 0
	// Line 889, Address: 0x2bc2f0, Func Offset: 0x50
	// Line 890, Address: 0x2bc2f4, Func Offset: 0x54
	// Line 892, Address: 0x2bc2fc, Func Offset: 0x5c
	// Line 893, Address: 0x2bc300, Func Offset: 0x60
	// Line 895, Address: 0x2bc308, Func Offset: 0x68
	// Line 896, Address: 0x2bc30c, Func Offset: 0x6c
	// Line 898, Address: 0x2bc314, Func Offset: 0x74
	// Line 899, Address: 0x2bc318, Func Offset: 0x78
	// Line 901, Address: 0x2bc320, Func Offset: 0x80
	// Line 902, Address: 0x2bc324, Func Offset: 0x84
	// Line 904, Address: 0x2bc32c, Func Offset: 0x8c
	// Line 909, Address: 0x2bc330, Func Offset: 0x90
	// Func End, Address: 0x2bc344, Func Offset: 0xa4
}

// 
// Start address: 0x2bc350
void DispRankingData00()
{
	unsigned int argb;
	NJS_POINT2 pos;
	// Line 914, Address: 0x2bc350, Func Offset: 0
	// Line 917, Address: 0x2bc360, Func Offset: 0x10
	// Line 919, Address: 0x2bc370, Func Offset: 0x20
	// Line 917, Address: 0x2bc380, Func Offset: 0x30
	// Line 919, Address: 0x2bc388, Func Offset: 0x38
	// Line 921, Address: 0x2bc3a0, Func Offset: 0x50
	// Line 923, Address: 0x2bc3cc, Func Offset: 0x7c
	// Line 925, Address: 0x2bc3f8, Func Offset: 0xa8
	// Line 927, Address: 0x2bc424, Func Offset: 0xd4
	// Line 931, Address: 0x2bc450, Func Offset: 0x100
	// Line 932, Address: 0x2bc458, Func Offset: 0x108
	// Line 934, Address: 0x2bc464, Func Offset: 0x114
	// Line 937, Address: 0x2bc478, Func Offset: 0x128
	// Line 938, Address: 0x2bc480, Func Offset: 0x130
	// Line 940, Address: 0x2bc488, Func Offset: 0x138
	// Line 943, Address: 0x2bc4a4, Func Offset: 0x154
	// Line 944, Address: 0x2bc4ac, Func Offset: 0x15c
	// Line 945, Address: 0x2bc4b4, Func Offset: 0x164
	// Line 948, Address: 0x2bc4cc, Func Offset: 0x17c
	// Line 949, Address: 0x2bc4d4, Func Offset: 0x184
	// Line 950, Address: 0x2bc4dc, Func Offset: 0x18c
	// Line 953, Address: 0x2bc4f4, Func Offset: 0x1a4
	// Func End, Address: 0x2bc508, Func Offset: 0x1b8
}

// 
// Start address: 0x2bc510
void DispRankingData01()
{
	unsigned int argb;
	int ranking;
	int score;
	NJS_POINT2 pos;
	RANKING* rk;
	// Line 957, Address: 0x2bc510, Func Offset: 0
	// Line 958, Address: 0x2bc524, Func Offset: 0x14
	// Line 967, Address: 0x2bc52c, Func Offset: 0x1c
	// Line 969, Address: 0x2bc53c, Func Offset: 0x2c
	// Line 967, Address: 0x2bc550, Func Offset: 0x40
	// Line 969, Address: 0x2bc558, Func Offset: 0x48
	// Line 971, Address: 0x2bc570, Func Offset: 0x60
	// Line 973, Address: 0x2bc59c, Func Offset: 0x8c
	// Line 975, Address: 0x2bc5c8, Func Offset: 0xb8
	// Line 977, Address: 0x2bc5f4, Func Offset: 0xe4
	// Line 979, Address: 0x2bc604, Func Offset: 0xf4
	// Line 977, Address: 0x2bc618, Func Offset: 0x108
	// Line 979, Address: 0x2bc620, Func Offset: 0x110
	// Line 981, Address: 0x2bc638, Func Offset: 0x128
	// Line 983, Address: 0x2bc668, Func Offset: 0x158
	// Line 985, Address: 0x2bc694, Func Offset: 0x184
	// Line 986, Address: 0x2bc69c, Func Offset: 0x18c
	// Line 992, Address: 0x2bc6a8, Func Offset: 0x198
	// Line 994, Address: 0x2bc6fc, Func Offset: 0x1ec
	// Line 995, Address: 0x2bc704, Func Offset: 0x1f4
	// Line 997, Address: 0x2bc70c, Func Offset: 0x1fc
	// Line 998, Address: 0x2bc734, Func Offset: 0x224
	// Line 999, Address: 0x2bc748, Func Offset: 0x238
	// Line 1003, Address: 0x2bc758, Func Offset: 0x248
	// Line 1004, Address: 0x2bc760, Func Offset: 0x250
	// Line 1006, Address: 0x2bc768, Func Offset: 0x258
	// Line 1010, Address: 0x2bc774, Func Offset: 0x264
	// Line 1006, Address: 0x2bc780, Func Offset: 0x270
	// Line 1010, Address: 0x2bc788, Func Offset: 0x278
	// Line 1011, Address: 0x2bc798, Func Offset: 0x288
	// Line 1014, Address: 0x2bc7a8, Func Offset: 0x298
	// Line 1015, Address: 0x2bc7b4, Func Offset: 0x2a4
	// Line 1017, Address: 0x2bc7bc, Func Offset: 0x2ac
	// Line 1019, Address: 0x2bc7c0, Func Offset: 0x2b0
	// Line 1017, Address: 0x2bc7c4, Func Offset: 0x2b4
	// Line 1019, Address: 0x2bc7d0, Func Offset: 0x2c0
	// Line 1020, Address: 0x2bc7d8, Func Offset: 0x2c8
	// Line 1027, Address: 0x2bc7e4, Func Offset: 0x2d4
	// Line 1020, Address: 0x2bc7e8, Func Offset: 0x2d8
	// Line 1027, Address: 0x2bc7ec, Func Offset: 0x2dc
	// Line 1028, Address: 0x2bc7f4, Func Offset: 0x2e4
	// Line 1034, Address: 0x2bc800, Func Offset: 0x2f0
	// Func End, Address: 0x2bc818, Func Offset: 0x308
}

// 
// Start address: 0x2bc820
void DispNumber(NJS_POINT2* pos, int num, unsigned int col)
{
	// Line 1039, Address: 0x2bc820, Func Offset: 0
	// Line 1045, Address: 0x2bc824, Func Offset: 0x4
	// Line 1039, Address: 0x2bc828, Func Offset: 0x8
	// Line 1045, Address: 0x2bc834, Func Offset: 0x14
	// Line 1039, Address: 0x2bc848, Func Offset: 0x28
	// Line 1045, Address: 0x2bc84c, Func Offset: 0x2c
	// Line 1046, Address: 0x2bc87c, Func Offset: 0x5c
	// Line 1047, Address: 0x2bc888, Func Offset: 0x68
	// Line 1046, Address: 0x2bc89c, Func Offset: 0x7c
	// Line 1047, Address: 0x2bc8a4, Func Offset: 0x84
	// Line 1049, Address: 0x2bc8c4, Func Offset: 0xa4
	// Func End, Address: 0x2bc8dc, Func Offset: 0xbc
}

// 
// Start address: 0x2bc8e0
void DispTime(NJS_POINT2* pos, int time, unsigned int col, unsigned int mode)
{
	// Line 1057, Address: 0x2bc8e4, Func Offset: 0x4
	// Func End, Address: 0x2bc900, Func Offset: 0x20
}

// 
// Start address: 0x2bc900
int AllRanking(int score, unsigned int mode)
{
	int rankscore[4][5];
	int ret;
	int i;
	unsigned int ply_id;
	// Line 1073, Address: 0x2bc900, Func Offset: 0
	// Line 1078, Address: 0x2bc90c, Func Offset: 0xc
	// Line 1073, Address: 0x2bc914, Func Offset: 0x14
	// Line 1078, Address: 0x2bc91c, Func Offset: 0x1c
	// Line 1089, Address: 0x2bc930, Func Offset: 0x30
	// Line 1078, Address: 0x2bc934, Func Offset: 0x34
	// Line 1089, Address: 0x2bc94c, Func Offset: 0x4c
	// Line 1091, Address: 0x2bc95c, Func Offset: 0x5c
	// Line 1092, Address: 0x2bc970, Func Offset: 0x70
	// Line 1095, Address: 0x2bc974, Func Offset: 0x74
	// Line 1097, Address: 0x2bc98c, Func Offset: 0x8c
	// Line 1100, Address: 0x2bc9b4, Func Offset: 0xb4
	// Line 1103, Address: 0x2bc9e0, Func Offset: 0xe0
	// Line 1106, Address: 0x2bca0c, Func Offset: 0x10c
	// Line 1109, Address: 0x2bca38, Func Offset: 0x138
	// Line 1110, Address: 0x2bca40, Func Offset: 0x140
	// Line 1115, Address: 0x2bca44, Func Offset: 0x144
	// Line 1116, Address: 0x2bca4c, Func Offset: 0x14c
	// Line 1117, Address: 0x2bca68, Func Offset: 0x168
	// Line 1121, Address: 0x2bca74, Func Offset: 0x174
	// Line 1125, Address: 0x2bca7c, Func Offset: 0x17c
	// Line 1126, Address: 0x2bcaa0, Func Offset: 0x1a0
	// Line 1127, Address: 0x2bcab4, Func Offset: 0x1b4
	// Line 1128, Address: 0x2bcad0, Func Offset: 0x1d0
	// Line 1133, Address: 0x2bcad4, Func Offset: 0x1d4
	// Line 1134, Address: 0x2bcad8, Func Offset: 0x1d8
	// Func End, Address: 0x2bcaec, Func Offset: 0x1ec
}

// 
// Start address: 0x2bcaf0
int GameClearScore(int time)
{
	int timescore[8][2];
	int cleartime[2][48];
	int gm_mode;
	int i;
	int ret;
	// Line 1140, Address: 0x2bcaf0, Func Offset: 0
	// Line 1145, Address: 0x2bcaf4, Func Offset: 0x4
	// Line 1142, Address: 0x2bcb04, Func Offset: 0x14
	// Line 1145, Address: 0x2bcb08, Func Offset: 0x18
	// Line 1203, Address: 0x2bcb28, Func Offset: 0x38
	// Line 1210, Address: 0x2bcb44, Func Offset: 0x54
	// Line 1203, Address: 0x2bcb48, Func Offset: 0x58
	// Line 1210, Address: 0x2bcb58, Func Offset: 0x68
	// Line 1212, Address: 0x2bcb64, Func Offset: 0x74
	// Line 1214, Address: 0x2bcb6c, Func Offset: 0x7c
	// Line 1215, Address: 0x2bcb80, Func Offset: 0x90
	// Line 1217, Address: 0x2bcb94, Func Offset: 0xa4
	// Line 1218, Address: 0x2bcb9c, Func Offset: 0xac
	// Line 1222, Address: 0x2bcba4, Func Offset: 0xb4
	// Line 1224, Address: 0x2bcbcc, Func Offset: 0xdc
	// Line 1225, Address: 0x2bcbd4, Func Offset: 0xe4
	// Line 1227, Address: 0x2bcc00, Func Offset: 0x110
	// Line 1228, Address: 0x2bcc08, Func Offset: 0x118
	// Line 1230, Address: 0x2bcc34, Func Offset: 0x144
	// Line 1231, Address: 0x2bcc3c, Func Offset: 0x14c
	// Line 1233, Address: 0x2bcc68, Func Offset: 0x178
	// Line 1234, Address: 0x2bcc70, Func Offset: 0x180
	// Line 1236, Address: 0x2bcc9c, Func Offset: 0x1ac
	// Line 1237, Address: 0x2bcca4, Func Offset: 0x1b4
	// Line 1239, Address: 0x2bccd0, Func Offset: 0x1e0
	// Line 1240, Address: 0x2bccd8, Func Offset: 0x1e8
	// Line 1242, Address: 0x2bcd04, Func Offset: 0x214
	// Line 1243, Address: 0x2bcd0c, Func Offset: 0x21c
	// Line 1244, Address: 0x2bcd28, Func Offset: 0x238
	// Line 1248, Address: 0x2bcd38, Func Offset: 0x248
	// Func End, Address: 0x2bcd44, Func Offset: 0x254
}

// 
// Start address: 0x2bcd50
int RodorigoEventScore()
{
	// Line 1254, Address: 0x2bcd50, Func Offset: 0
	// Line 1257, Address: 0x2bcd58, Func Offset: 0x8
	// Line 1259, Address: 0x2bcd6c, Func Offset: 0x1c
	// Line 1257, Address: 0x2bcd70, Func Offset: 0x20
	// Line 1259, Address: 0x2bcd7c, Func Offset: 0x2c
	// Func End, Address: 0x2bcd88, Func Offset: 0x38
}

// 
// Start address: 0x2bcd90
int SteveEventScore()
{
	// Line 1265, Address: 0x2bcd90, Func Offset: 0
	// Line 1272, Address: 0x2bcd98, Func Offset: 0x8
	// Line 1273, Address: 0x2bcdbc, Func Offset: 0x2c
	// Line 1285, Address: 0x2bcddc, Func Offset: 0x4c
	// Func End, Address: 0x2bcde8, Func Offset: 0x58
}

// 
// Start address: 0x2bcdf0
int MapScore()
{
	int ret;
	// Line 1291, Address: 0x2bcdf0, Func Offset: 0
	// Line 1294, Address: 0x2bcdfc, Func Offset: 0xc
	// Line 1295, Address: 0x2bce1c, Func Offset: 0x2c
	// Line 1296, Address: 0x2bce38, Func Offset: 0x48
	// Line 1297, Address: 0x2bce54, Func Offset: 0x64
	// Line 1298, Address: 0x2bce70, Func Offset: 0x80
	// Line 1299, Address: 0x2bce8c, Func Offset: 0x9c
	// Line 1300, Address: 0x2bcea0, Func Offset: 0xb0
	// Line 1301, Address: 0x2bcea4, Func Offset: 0xb4
	// Func End, Address: 0x2bceb4, Func Offset: 0xc4
}

// 
// Start address: 0x2bcec0
int HealItemUseScore()
{
	// Line 1309, Address: 0x2bcec0, Func Offset: 0
	// Line 1311, Address: 0x2bced4, Func Offset: 0x14
	// Func End, Address: 0x2bcedc, Func Offset: 0x1c
}

// 
// Start address: 0x2bcee0
int SaveCountScore()
{
	int save_ct;
	int ret;
	// Line 1320, Address: 0x2bcee0, Func Offset: 0
	// Line 1321, Address: 0x2bceec, Func Offset: 0xc
	// Line 1323, Address: 0x2bcef4, Func Offset: 0x14
	// Line 1322, Address: 0x2bcf08, Func Offset: 0x28
	// Line 1323, Address: 0x2bcf0c, Func Offset: 0x2c
	// Line 1326, Address: 0x2bcf14, Func Offset: 0x34
	// Func End, Address: 0x2bcf1c, Func Offset: 0x3c
}

// 
// Start address: 0x2bcf20
int RetryCountScore()
{
	int retry_ct;
	int ret;
	// Line 1335, Address: 0x2bcf20, Func Offset: 0
	// Line 1336, Address: 0x2bcf2c, Func Offset: 0xc
	// Line 1338, Address: 0x2bcf34, Func Offset: 0x14
	// Line 1337, Address: 0x2bcf48, Func Offset: 0x28
	// Line 1338, Address: 0x2bcf4c, Func Offset: 0x2c
	// Line 1341, Address: 0x2bcf54, Func Offset: 0x34
	// Func End, Address: 0x2bcf5c, Func Offset: 0x3c
}

// 
// Start address: 0x2bcf60
void GetMessage(unsigned int mesnum, NJS_POINT2* pos)
{
	// Line 1350, Address: 0x2bcf60, Func Offset: 0
	// Func End, Address: 0x2bcf9c, Func Offset: 0x3c
}

// 
// Start address: 0x2bcfa0
void RankingBgmSet()
{
	GFX_FADE* sfe;
	RANKING* rk;
	// Line 1354, Address: 0x2bcfa0, Func Offset: 0
	// Line 1355, Address: 0x2bcfa4, Func Offset: 0x4
	// Line 1354, Address: 0x2bcfac, Func Offset: 0xc
	// Line 1357, Address: 0x2bcfb0, Func Offset: 0x10
	// Line 1356, Address: 0x2bcfb4, Func Offset: 0x14
	// Line 1357, Address: 0x2bcfb8, Func Offset: 0x18
	// Line 1356, Address: 0x2bcfbc, Func Offset: 0x1c
	// Line 1357, Address: 0x2bcfc0, Func Offset: 0x20
	// Line 1358, Address: 0x2bcfd8, Func Offset: 0x38
	// Line 1359, Address: 0x2bcffc, Func Offset: 0x5c
	// Line 1360, Address: 0x2bd008, Func Offset: 0x68
	// Line 1361, Address: 0x2bd010, Func Offset: 0x70
	// Line 1362, Address: 0x2bd018, Func Offset: 0x78
	// Line 1363, Address: 0x2bd01c, Func Offset: 0x7c
	// Line 1361, Address: 0x2bd020, Func Offset: 0x80
	// Line 1362, Address: 0x2bd028, Func Offset: 0x88
	// Line 1363, Address: 0x2bd02c, Func Offset: 0x8c
	// Line 1364, Address: 0x2bd030, Func Offset: 0x90
	// Line 1366, Address: 0x2bd038, Func Offset: 0x98
	// Func End, Address: 0x2bd044, Func Offset: 0xa4
}

