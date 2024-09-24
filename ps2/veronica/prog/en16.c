




























typedef struct _anon27;








typedef void(*type_12)(BH_PWORK*);
typedef void(*type_40)(BH_PWORK*);
typedef void(*type_58)(BH_PWORK*);
typedef void(*type_72)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_2[32];

typedef Unknown1* type_4[32];
typedef Unknown1* type_5[512];


typedef char type_8[8];
typedef Unknown1* type_9[32];
typedef Unknown1* type_10[512];

typedef char type_13[32];
typedef void(*type_14)(BH_PWORK*)[1];
typedef Unknown1* type_15[512];

typedef short type_17[32];

typedef Unknown1* type_19[128];
typedef unsigned int type_20[1];


typedef int* type_23[16];
typedef Unknown1* type_24[128];

typedef Unknown1* type_26[128];
typedef int type_27[4];

typedef unsigned int type_29[4];
typedef MODEL_DATA type_30[16];
typedef Unknown1* type_31[512];
typedef char type_32[256];
typedef float type_33[4];
typedef float type_34[4];
typedef float type_35[4];

typedef unsigned char type_37[64];

typedef char type_39[8];
typedef void(*type_41)(BH_PWORK*)[6];
typedef void* type_42[2];

typedef int type_44[4];
typedef unsigned char* type_45[256];
typedef unsigned int type_46[2];
typedef short type_47[256];

typedef float type_49[3];
typedef short type_50[256];
typedef int type_51[3];
typedef int type_52[8];
typedef float type_53[3];

typedef TEXTURE_BUFFER type_55[256];


typedef void(*type_59)(BH_PWORK*)[3];
typedef short type_60[256];
typedef char type_61[3];
typedef int type_62[64];
typedef MODEL_DATA type_63[450];


typedef int type_66[450];
typedef unsigned int type_67[8];
typedef unsigned char type_68[450];

typedef char type_70[16];
typedef char type_71[4];
typedef unsigned int type_73[32];
typedef unsigned int type_74[16];
typedef BOUNDARY type_75[64];
typedef unsigned int type_76[16];
typedef BOUNDARY type_77[64];
typedef unsigned int type_78[32];
typedef Unknown1 type_79[0];
typedef BOUNDARY type_80[64];
typedef unsigned int type_81[16];
typedef unsigned int type_82[3];
typedef BH_PWORK* type_83[16];
typedef unsigned int type_84[8];
typedef unsigned int type_85[1];
typedef unsigned int type_86[384];
typedef unsigned int type_87[2];
typedef unsigned char type_88[2];
typedef unsigned int type_89[4];
typedef int* type_90[16];
typedef char type_91[32];

typedef char type_93[64];

typedef char type_95[4];
typedef MODEL_DATA type_96[16];
typedef short type_97[4];
typedef unsigned char type_98[4];

typedef unsigned int type_100[32];

typedef Unknown1* type_102[512];
typedef Unknown1* type_103[128];
typedef Unknown1* type_104[512];
typedef unsigned char type_105[64];
typedef Unknown1* type_106[512];



























































































































































































































































































































































































































































































































































































































struct _anon27
{
	float px;
	float py;
	float pz;
	float vx;
	float vy;
	float vz;
	float gx;
	float gy;
	float gz;
	unsigned int at_flg;
	int wpn_no;
	float r;
	float l;
	float rn;
	float rmax;
	int ax;
	int ay;
};





























































void(*bhEne16_Mode0)(BH_PWORK*)[6];
void(*bhEne16_BrainType)(BH_PWORK*)[1];
void(*bhEne16_MoveMode2)(BH_PWORK*)[3];
extern Unknown1 eff[512];
extern SYS* sys;
extern BH_PWORK* plp;
extern WEAPON WpnTab[23];

void bhEne16(BH_PWORK* epw);
void bhEne16_Init(BH_PWORK* epw);
void bhEne16_Brain(BH_PWORK* epw);
void bhEne16_BR00(BH_PWORK* epw);
void bhEne16_Move(BH_PWORK* epw);
void bhEne16_MV00(BH_PWORK* epw);
void bhEne16_MV01(BH_PWORK* epw);
void bhEne16_MV02(BH_PWORK* epw);
int bhEne16_GetEffNum(BH_PWORK* epw);
NJS_POINT3* bhEne16_GetEffPos(BH_PWORK* epw);
void bhEne16_AddEffPos(BH_PWORK* epw, NJS_POINT3* pos);

// 
// Start address: 0x1e9cc0
void bhEne16(BH_PWORK* epw)
{
	// Line 126, Address: 0x1e9cc0, Func Offset: 0
	// Line 128, Address: 0x1e9cd0, Func Offset: 0x10
	// Line 130, Address: 0x1e9cf0, Func Offset: 0x30
	// Line 132, Address: 0x1e9cfc, Func Offset: 0x3c
	// Line 136, Address: 0x1e9d10, Func Offset: 0x50
	// Line 137, Address: 0x1e9d20, Func Offset: 0x60
	// Line 142, Address: 0x1e9d28, Func Offset: 0x68
	// Line 143, Address: 0x1e9d34, Func Offset: 0x74
	// Func End, Address: 0x1e9d44, Func Offset: 0x84
}

// 
// Start address: 0x1e9d50
void bhEne16_Init(BH_PWORK* epw)
{
	int eff_id;
	// Line 153, Address: 0x1e9d50, Func Offset: 0
	// Line 157, Address: 0x1e9d5c, Func Offset: 0xc
	// Line 158, Address: 0x1e9d68, Func Offset: 0x18
	// Line 159, Address: 0x1e9d70, Func Offset: 0x20
	// Line 160, Address: 0x1e9d74, Func Offset: 0x24
	// Line 162, Address: 0x1e9d78, Func Offset: 0x28
	// Line 163, Address: 0x1e9d80, Func Offset: 0x30
	// Line 164, Address: 0x1e9d88, Func Offset: 0x38
	// Line 165, Address: 0x1e9d8c, Func Offset: 0x3c
	// Line 166, Address: 0x1e9d94, Func Offset: 0x44
	// Line 170, Address: 0x1e9d98, Func Offset: 0x48
	// Line 171, Address: 0x1e9da4, Func Offset: 0x54
	// Line 174, Address: 0x1e9db4, Func Offset: 0x64
	// Line 175, Address: 0x1e9dc0, Func Offset: 0x70
	// Line 186, Address: 0x1e9dc4, Func Offset: 0x74
	// Line 174, Address: 0x1e9dc8, Func Offset: 0x78
	// Line 175, Address: 0x1e9dd4, Func Offset: 0x84
	// Line 186, Address: 0x1e9ddc, Func Offset: 0x8c
	// Line 175, Address: 0x1e9de4, Func Offset: 0x94
	// Line 176, Address: 0x1e9df0, Func Offset: 0xa0
	// Line 177, Address: 0x1e9e04, Func Offset: 0xb4
	// Line 178, Address: 0x1e9e18, Func Offset: 0xc8
	// Line 179, Address: 0x1e9e2c, Func Offset: 0xdc
	// Line 180, Address: 0x1e9e40, Func Offset: 0xf0
	// Line 181, Address: 0x1e9e54, Func Offset: 0x104
	// Line 182, Address: 0x1e9e68, Func Offset: 0x118
	// Line 183, Address: 0x1e9e7c, Func Offset: 0x12c
	// Line 184, Address: 0x1e9e90, Func Offset: 0x140
	// Line 186, Address: 0x1e9ea4, Func Offset: 0x154
	// Line 187, Address: 0x1e9ebc, Func Offset: 0x16c
	// Line 188, Address: 0x1e9ec4, Func Offset: 0x174
	// Line 189, Address: 0x1e9eec, Func Offset: 0x19c
	// Line 191, Address: 0x1e9ef8, Func Offset: 0x1a8
	// Line 196, Address: 0x1e9f04, Func Offset: 0x1b4
	// Line 200, Address: 0x1e9f08, Func Offset: 0x1b8
	// Line 196, Address: 0x1e9f0c, Func Offset: 0x1bc
	// Line 198, Address: 0x1e9f14, Func Offset: 0x1c4
	// Line 200, Address: 0x1e9f20, Func Offset: 0x1d0
	// Line 201, Address: 0x1e9f24, Func Offset: 0x1d4
	// Func End, Address: 0x1e9f34, Func Offset: 0x1e4
}

// 
// Start address: 0x1e9f40
void bhEne16_Brain(BH_PWORK* epw)
{
	// Line 212, Address: 0x1e9f40, Func Offset: 0
	// Func End, Address: 0x1e9f50, Func Offset: 0x10
}

// 
// Start address: 0x1e9f50
void bhEne16_BR00(BH_PWORK* epw)
{
	BOUNDARY* hp;
	// Line 223, Address: 0x1e9f50, Func Offset: 0
	// Line 227, Address: 0x1e9f5c, Func Offset: 0xc
	// Line 228, Address: 0x1e9f78, Func Offset: 0x28
	// Line 229, Address: 0x1e9f90, Func Offset: 0x40
	// Line 230, Address: 0x1e9f94, Func Offset: 0x44
	// Line 232, Address: 0x1e9f98, Func Offset: 0x48
	// Line 233, Address: 0x1e9fa0, Func Offset: 0x50
	// Line 236, Address: 0x1e9fa4, Func Offset: 0x54
	// Func End, Address: 0x1e9fb4, Func Offset: 0x64
}

// 
// Start address: 0x1e9fc0
void bhEne16_Move(BH_PWORK* epw)
{
	// Line 246, Address: 0x1e9fc0, Func Offset: 0
	// Line 248, Address: 0x1e9fcc, Func Offset: 0xc
	// Line 249, Address: 0x1e9fdc, Func Offset: 0x1c
	// Line 252, Address: 0x1e9fe4, Func Offset: 0x24
	// Line 253, Address: 0x1ea004, Func Offset: 0x44
	// Func End, Address: 0x1ea014, Func Offset: 0x54
}

// 
// Start address: 0x1ea020
void bhEne16_MV00(BH_PWORK* epw)
{
	// Line 264, Address: 0x1ea020, Func Offset: 0
	// Line 265, Address: 0x1ea030, Func Offset: 0x10
	// Line 267, Address: 0x1ea038, Func Offset: 0x18
	// Func End, Address: 0x1ea040, Func Offset: 0x20
}

// 
// Start address: 0x1ea040
void bhEne16_MV01(BH_PWORK* epw)
{
	// Line 278, Address: 0x1ea040, Func Offset: 0
	// Line 279, Address: 0x1ea050, Func Offset: 0x10
	// Line 281, Address: 0x1ea058, Func Offset: 0x18
	// Func End, Address: 0x1ea060, Func Offset: 0x20
}

// 
// Start address: 0x1ea060
void bhEne16_MV02(BH_PWORK* epw)
{
	_anon27 gap;
	BOUNDARY* hp;
	NJS_POINT3 pos;
	NJS_POINT3 v;
	float spd_now;
	float spd;
	float mov;
	int ay;
	int ax;
	OBJECT_WORK* owp;
	// Line 291, Address: 0x1ea060, Func Offset: 0
	// Line 298, Address: 0x1ea080, Func Offset: 0x20
	// Line 301, Address: 0x1ea0ac, Func Offset: 0x4c
	// Line 302, Address: 0x1ea0bc, Func Offset: 0x5c
	// Line 304, Address: 0x1ea0c4, Func Offset: 0x64
	// Line 305, Address: 0x1ea0cc, Func Offset: 0x6c
	// Line 308, Address: 0x1ea0d4, Func Offset: 0x74
	// Line 311, Address: 0x1ea0d8, Func Offset: 0x78
	// Line 308, Address: 0x1ea0e0, Func Offset: 0x80
	// Line 310, Address: 0x1ea0e4, Func Offset: 0x84
	// Line 308, Address: 0x1ea0e8, Func Offset: 0x88
	// Line 310, Address: 0x1ea0f0, Func Offset: 0x90
	// Line 311, Address: 0x1ea0fc, Func Offset: 0x9c
	// Line 312, Address: 0x1ea110, Func Offset: 0xb0
	// Line 313, Address: 0x1ea124, Func Offset: 0xc4
	// Line 314, Address: 0x1ea138, Func Offset: 0xd8
	// Line 315, Address: 0x1ea13c, Func Offset: 0xdc
	// Line 316, Address: 0x1ea140, Func Offset: 0xe0
	// Line 325, Address: 0x1ea144, Func Offset: 0xe4
	// Line 327, Address: 0x1ea14c, Func Offset: 0xec
	// Line 328, Address: 0x1ea154, Func Offset: 0xf4
	// Line 331, Address: 0x1ea15c, Func Offset: 0xfc
	// Line 333, Address: 0x1ea16c, Func Offset: 0x10c
	// Line 335, Address: 0x1ea174, Func Offset: 0x114
	// Line 338, Address: 0x1ea17c, Func Offset: 0x11c
	// Line 340, Address: 0x1ea184, Func Offset: 0x124
	// Line 342, Address: 0x1ea1bc, Func Offset: 0x15c
	// Line 343, Address: 0x1ea1c4, Func Offset: 0x164
	// Line 345, Address: 0x1ea1cc, Func Offset: 0x16c
	// Line 348, Address: 0x1ea1d4, Func Offset: 0x174
	// Line 349, Address: 0x1ea1e4, Func Offset: 0x184
	// Line 351, Address: 0x1ea1ec, Func Offset: 0x18c
	// Line 353, Address: 0x1ea1f4, Func Offset: 0x194
	// Line 354, Address: 0x1ea200, Func Offset: 0x1a0
	// Line 357, Address: 0x1ea208, Func Offset: 0x1a8
	// Line 359, Address: 0x1ea218, Func Offset: 0x1b8
	// Line 363, Address: 0x1ea24c, Func Offset: 0x1ec
	// Line 364, Address: 0x1ea254, Func Offset: 0x1f4
	// Line 366, Address: 0x1ea258, Func Offset: 0x1f8
	// Line 363, Address: 0x1ea260, Func Offset: 0x200
	// Line 364, Address: 0x1ea268, Func Offset: 0x208
	// Line 365, Address: 0x1ea278, Func Offset: 0x218
	// Line 364, Address: 0x1ea27c, Func Offset: 0x21c
	// Line 365, Address: 0x1ea280, Func Offset: 0x220
	// Line 366, Address: 0x1ea290, Func Offset: 0x230
	// Line 365, Address: 0x1ea294, Func Offset: 0x234
	// Line 366, Address: 0x1ea298, Func Offset: 0x238
	// Line 369, Address: 0x1ea2b0, Func Offset: 0x250
	// Line 370, Address: 0x1ea2dc, Func Offset: 0x27c
	// Line 371, Address: 0x1ea310, Func Offset: 0x2b0
	// Line 373, Address: 0x1ea318, Func Offset: 0x2b8
	// Line 374, Address: 0x1ea32c, Func Offset: 0x2cc
	// Line 375, Address: 0x1ea330, Func Offset: 0x2d0
	// Line 374, Address: 0x1ea338, Func Offset: 0x2d8
	// Line 375, Address: 0x1ea340, Func Offset: 0x2e0
	// Line 376, Address: 0x1ea348, Func Offset: 0x2e8
	// Line 377, Address: 0x1ea35c, Func Offset: 0x2fc
	// Line 376, Address: 0x1ea360, Func Offset: 0x300
	// Line 377, Address: 0x1ea364, Func Offset: 0x304
	// Line 378, Address: 0x1ea370, Func Offset: 0x310
	// Line 379, Address: 0x1ea378, Func Offset: 0x318
	// Line 383, Address: 0x1ea380, Func Offset: 0x320
	// Line 387, Address: 0x1ea388, Func Offset: 0x328
	// Line 390, Address: 0x1ea38c, Func Offset: 0x32c
	// Line 391, Address: 0x1ea3a4, Func Offset: 0x344
	// Line 398, Address: 0x1ea3ac, Func Offset: 0x34c
	// Line 393, Address: 0x1ea3b8, Func Offset: 0x358
	// Line 391, Address: 0x1ea3bc, Func Offset: 0x35c
	// Line 398, Address: 0x1ea3c0, Func Offset: 0x360
	// Line 391, Address: 0x1ea3cc, Func Offset: 0x36c
	// Line 392, Address: 0x1ea3d0, Func Offset: 0x370
	// Line 398, Address: 0x1ea3d8, Func Offset: 0x378
	// Line 392, Address: 0x1ea3dc, Func Offset: 0x37c
	// Line 393, Address: 0x1ea3e4, Func Offset: 0x384
	// Line 394, Address: 0x1ea3f4, Func Offset: 0x394
	// Line 398, Address: 0x1ea3f8, Func Offset: 0x398
	// Line 394, Address: 0x1ea3fc, Func Offset: 0x39c
	// Line 398, Address: 0x1ea400, Func Offset: 0x3a0
	// Line 394, Address: 0x1ea404, Func Offset: 0x3a4
	// Line 395, Address: 0x1ea40c, Func Offset: 0x3ac
	// Line 396, Address: 0x1ea41c, Func Offset: 0x3bc
	// Line 398, Address: 0x1ea428, Func Offset: 0x3c8
	// Line 400, Address: 0x1ea430, Func Offset: 0x3d0
	// Line 401, Address: 0x1ea438, Func Offset: 0x3d8
	// Line 402, Address: 0x1ea448, Func Offset: 0x3e8
	// Line 417, Address: 0x1ea458, Func Offset: 0x3f8
	// Line 426, Address: 0x1ea468, Func Offset: 0x408
	// Line 417, Address: 0x1ea470, Func Offset: 0x410
	// Line 418, Address: 0x1ea484, Func Offset: 0x424
	// Line 419, Address: 0x1ea4a0, Func Offset: 0x440
	// Line 422, Address: 0x1ea4bc, Func Offset: 0x45c
	// Line 423, Address: 0x1ea4c4, Func Offset: 0x464
	// Line 424, Address: 0x1ea4cc, Func Offset: 0x46c
	// Line 426, Address: 0x1ea4d4, Func Offset: 0x474
	// Line 428, Address: 0x1ea4e0, Func Offset: 0x480
	// Line 431, Address: 0x1ea4ec, Func Offset: 0x48c
	// Line 434, Address: 0x1ea4f4, Func Offset: 0x494
	// Line 435, Address: 0x1ea500, Func Offset: 0x4a0
	// Line 437, Address: 0x1ea510, Func Offset: 0x4b0
	// Line 438, Address: 0x1ea52c, Func Offset: 0x4cc
	// Line 439, Address: 0x1ea538, Func Offset: 0x4d8
	// Line 440, Address: 0x1ea540, Func Offset: 0x4e0
	// Line 442, Address: 0x1ea554, Func Offset: 0x4f4
	// Line 443, Address: 0x1ea578, Func Offset: 0x518
	// Line 444, Address: 0x1ea594, Func Offset: 0x534
	// Line 445, Address: 0x1ea5ac, Func Offset: 0x54c
	// Line 447, Address: 0x1ea5c0, Func Offset: 0x560
	// Line 453, Address: 0x1ea5d4, Func Offset: 0x574
	// Line 447, Address: 0x1ea5d8, Func Offset: 0x578
	// Line 448, Address: 0x1ea5e8, Func Offset: 0x588
	// Line 449, Address: 0x1ea604, Func Offset: 0x5a4
	// Line 453, Address: 0x1ea620, Func Offset: 0x5c0
	// Line 454, Address: 0x1ea628, Func Offset: 0x5c8
	// Line 455, Address: 0x1ea634, Func Offset: 0x5d4
	// Line 454, Address: 0x1ea638, Func Offset: 0x5d8
	// Line 455, Address: 0x1ea650, Func Offset: 0x5f0
	// Line 456, Address: 0x1ea658, Func Offset: 0x5f8
	// Line 457, Address: 0x1ea664, Func Offset: 0x604
	// Line 458, Address: 0x1ea670, Func Offset: 0x610
	// Line 459, Address: 0x1ea678, Func Offset: 0x618
	// Line 460, Address: 0x1ea680, Func Offset: 0x620
	// Line 462, Address: 0x1ea68c, Func Offset: 0x62c
	// Line 463, Address: 0x1ea694, Func Offset: 0x634
	// Line 462, Address: 0x1ea698, Func Offset: 0x638
	// Line 464, Address: 0x1ea6a0, Func Offset: 0x640
	// Line 466, Address: 0x1ea6a8, Func Offset: 0x648
	// Line 467, Address: 0x1ea6b8, Func Offset: 0x658
	// Line 469, Address: 0x1ea6c0, Func Offset: 0x660
	// Line 470, Address: 0x1ea6c8, Func Offset: 0x668
	// Line 473, Address: 0x1ea6d0, Func Offset: 0x670
	// Line 476, Address: 0x1ea6e4, Func Offset: 0x684
	// Line 478, Address: 0x1ea6ec, Func Offset: 0x68c
	// Line 479, Address: 0x1ea6fc, Func Offset: 0x69c
	// Line 480, Address: 0x1ea704, Func Offset: 0x6a4
	// Line 485, Address: 0x1ea708, Func Offset: 0x6a8
	// Line 488, Address: 0x1ea71c, Func Offset: 0x6bc
	// Line 489, Address: 0x1ea724, Func Offset: 0x6c4
	// Line 490, Address: 0x1ea730, Func Offset: 0x6d0
	// Line 488, Address: 0x1ea738, Func Offset: 0x6d8
	// Line 489, Address: 0x1ea73c, Func Offset: 0x6dc
	// Line 488, Address: 0x1ea740, Func Offset: 0x6e0
	// Line 489, Address: 0x1ea744, Func Offset: 0x6e4
	// Line 490, Address: 0x1ea758, Func Offset: 0x6f8
	// Line 491, Address: 0x1ea778, Func Offset: 0x718
	// Line 493, Address: 0x1ea794, Func Offset: 0x734
	// Line 496, Address: 0x1ea7b8, Func Offset: 0x758
	// Line 499, Address: 0x1ea7d4, Func Offset: 0x774
	// Line 500, Address: 0x1ea800, Func Offset: 0x7a0
	// Line 501, Address: 0x1ea820, Func Offset: 0x7c0
	// Line 504, Address: 0x1ea82c, Func Offset: 0x7cc
	// Line 507, Address: 0x1ea83c, Func Offset: 0x7dc
	// Line 508, Address: 0x1ea84c, Func Offset: 0x7ec
	// Line 509, Address: 0x1ea858, Func Offset: 0x7f8
	// Line 508, Address: 0x1ea85c, Func Offset: 0x7fc
	// Line 509, Address: 0x1ea868, Func Offset: 0x808
	// Line 510, Address: 0x1ea870, Func Offset: 0x810
	// Line 511, Address: 0x1ea87c, Func Offset: 0x81c
	// Line 512, Address: 0x1ea888, Func Offset: 0x828
	// Line 517, Address: 0x1ea894, Func Offset: 0x834
	// Line 518, Address: 0x1ea8b0, Func Offset: 0x850
	// Line 519, Address: 0x1ea8cc, Func Offset: 0x86c
	// Line 520, Address: 0x1ea8d8, Func Offset: 0x878
	// Line 525, Address: 0x1ea8e4, Func Offset: 0x884
	// Line 526, Address: 0x1ea93c, Func Offset: 0x8dc
	// Line 527, Address: 0x1ea994, Func Offset: 0x934
	// Line 530, Address: 0x1ea9f0, Func Offset: 0x990
	// Line 532, Address: 0x1ea9f8, Func Offset: 0x998
	// Line 531, Address: 0x1eaa00, Func Offset: 0x9a0
	// Line 530, Address: 0x1eaa08, Func Offset: 0x9a8
	// Line 532, Address: 0x1eaa0c, Func Offset: 0x9ac
	// Line 531, Address: 0x1eaa10, Func Offset: 0x9b0
	// Line 533, Address: 0x1eaa14, Func Offset: 0x9b4
	// Line 534, Address: 0x1eaa20, Func Offset: 0x9c0
	// Line 535, Address: 0x1eaa3c, Func Offset: 0x9dc
	// Line 536, Address: 0x1eaa48, Func Offset: 0x9e8
	// Line 537, Address: 0x1eaa54, Func Offset: 0x9f4
	// Func End, Address: 0x1eaa78, Func Offset: 0xa18
}

// 
// Start address: 0x1eaa80
int bhEne16_GetEffNum(BH_PWORK* epw)
{
	// Line 548, Address: 0x1eaa80, Func Offset: 0
	// Line 549, Address: 0x1eaa84, Func Offset: 0x4
	// Func End, Address: 0x1eaa8c, Func Offset: 0xc
}

// 
// Start address: 0x1eaa90
NJS_POINT3* bhEne16_GetEffPos(BH_PWORK* epw)
{
	// Line 560, Address: 0x1eaa90, Func Offset: 0
	// Line 561, Address: 0x1eaa94, Func Offset: 0x4
	// Func End, Address: 0x1eaa9c, Func Offset: 0xc
}

// 
// Start address: 0x1eaaa0
void bhEne16_AddEffPos(BH_PWORK* epw, NJS_POINT3* pos)
{
	int i;
	// Line 574, Address: 0x1eaaa0, Func Offset: 0
	// Line 575, Address: 0x1eaabc, Func Offset: 0x1c
	// Line 576, Address: 0x1eaac0, Func Offset: 0x20
	// Line 575, Address: 0x1eaac4, Func Offset: 0x24
	// Line 576, Address: 0x1eaae0, Func Offset: 0x40
	// Line 577, Address: 0x1eaae8, Func Offset: 0x48
	// Line 578, Address: 0x1eab04, Func Offset: 0x64
	// Line 579, Address: 0x1eab28, Func Offset: 0x88
	// Func End, Address: 0x1eab30, Func Offset: 0x90
}

