


































typedef struct _anon33;

typedef void(*type_2)(BH_PWORK*);
typedef void(*type_36)(BH_PWORK*);
typedef void(*type_69)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_3[32];
typedef void(*type_4)(BH_PWORK*)[4];

typedef Unknown1* type_6[32];
typedef Unknown1* type_7[512];


typedef char type_10[8];
typedef Unknown1* type_11[32];
typedef Unknown1* type_12[512];

typedef char type_14[32];
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

typedef void(*type_38)(BH_PWORK*)[6];
typedef unsigned char type_39[64];

typedef char type_41[8];
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


typedef short type_58[256];
typedef char type_59[3];
typedef int type_60[64];
typedef MODEL_DATA type_61[450];


typedef int type_64[450];
typedef unsigned int type_65[8];
typedef unsigned char type_66[450];
typedef char type_67[16];
typedef char type_68[4];
typedef unsigned int type_70[32];
typedef unsigned int type_71[16];
typedef BOUNDARY type_72[64];
typedef unsigned int type_73[16];
typedef BOUNDARY type_74[64];
typedef unsigned int type_75[32];
typedef BOUNDARY type_76[64];
typedef unsigned int type_77[16];
typedef unsigned int type_78[3];
typedef BH_PWORK* type_79[16];
typedef unsigned int type_80[8];
typedef unsigned int type_81[1];
typedef unsigned int type_82[384];
typedef unsigned int type_83[2];
typedef unsigned char type_84[2];
typedef unsigned int type_85[4];
typedef int* type_86[16];
typedef char type_87[32];

typedef char type_89[64];

typedef char type_91[4];
typedef MODEL_DATA type_92[16];
typedef short type_93[4];
typedef unsigned char type_94[4];

typedef unsigned int type_96[32];
typedef float type_97[5];

typedef int type_99[5];
typedef Unknown1* type_100[512];
typedef Unknown1* type_101[128];
typedef Unknown1* type_102[512];
typedef unsigned char type_103[64];
typedef Unknown1* type_104[512];






















































































































































































































































































































































































































































































































































































































































































struct _anon33
{
	NJS_POINT3 off_pos;
	int srd_dir;
	float srd_pos;
	float bld_spd;
	float srt_spd[5];
	int srt_dir[5];
};

_anon33 BloodParam;
void(*bhEne25_Mode0)(BH_PWORK*)[6];
void(*bhEne25_MoveMode2)(BH_PWORK*)[4];
extern SYS* sys;
extern BH_PWORK* plp;

void bhEne25(BH_PWORK* epw);
void bhEne25_Init(BH_PWORK* epw);
void bhEne25_Brain();
void bhEne25_Move(BH_PWORK* epw);
void bhEne25_MV00(BH_PWORK* epw);
void bhEne25_MV01(BH_PWORK* epw);
void bhEne25_MV02(BH_PWORK* epw);
void bhEne25_MV03(BH_PWORK* epw);
void bhEne25_Nage();
void bhEne25_Damage();
void bhEne25_Die();
void bhEne25_SetEffect(BH_PWORK* epw);
void bhEne25_PlayerControl(BH_PWORK* epw);

// 
// Start address: 0x208950
void bhEne25(BH_PWORK* epw)
{
	// Line 137, Address: 0x208950, Func Offset: 0
	// Line 139, Address: 0x208960, Func Offset: 0x10
	// Line 142, Address: 0x208980, Func Offset: 0x30
	// Line 145, Address: 0x208994, Func Offset: 0x44
	// Line 148, Address: 0x20899c, Func Offset: 0x4c
	// Line 149, Address: 0x2089b0, Func Offset: 0x60
	// Line 150, Address: 0x2089b8, Func Offset: 0x68
	// Func End, Address: 0x2089c8, Func Offset: 0x78
}

// 
// Start address: 0x2089d0
void bhEne25_Init(BH_PWORK* epw)
{
	// Line 161, Address: 0x2089d0, Func Offset: 0
	// Line 163, Address: 0x2089dc, Func Offset: 0xc
	// Line 164, Address: 0x2089e8, Func Offset: 0x18
	// Line 167, Address: 0x2089f8, Func Offset: 0x28
	// Line 171, Address: 0x208a00, Func Offset: 0x30
	// Line 167, Address: 0x208a04, Func Offset: 0x34
	// Line 168, Address: 0x208a4c, Func Offset: 0x7c
	// Line 169, Address: 0x208a60, Func Offset: 0x90
	// Line 170, Address: 0x208a6c, Func Offset: 0x9c
	// Line 171, Address: 0x208a78, Func Offset: 0xa8
	// Line 172, Address: 0x208a84, Func Offset: 0xb4
	// Line 176, Address: 0x208ab4, Func Offset: 0xe4
	// Line 177, Address: 0x208ab8, Func Offset: 0xe8
	// Line 176, Address: 0x208ac0, Func Offset: 0xf0
	// Line 181, Address: 0x208ac4, Func Offset: 0xf4
	// Line 176, Address: 0x208acc, Func Offset: 0xfc
	// Line 179, Address: 0x208ad0, Func Offset: 0x100
	// Line 193, Address: 0x208ad4, Func Offset: 0x104
	// Line 176, Address: 0x208ad8, Func Offset: 0x108
	// Line 177, Address: 0x208adc, Func Offset: 0x10c
	// Line 187, Address: 0x208ae4, Func Offset: 0x114
	// Line 177, Address: 0x208ae8, Func Offset: 0x118
	// Line 179, Address: 0x208af4, Func Offset: 0x124
	// Line 180, Address: 0x208b00, Func Offset: 0x130
	// Line 181, Address: 0x208b0c, Func Offset: 0x13c
	// Line 182, Address: 0x208b20, Func Offset: 0x150
	// Line 185, Address: 0x208b34, Func Offset: 0x164
	// Line 186, Address: 0x208b40, Func Offset: 0x170
	// Line 187, Address: 0x208b4c, Func Offset: 0x17c
	// Line 189, Address: 0x208b58, Func Offset: 0x188
	// Line 190, Address: 0x208b5c, Func Offset: 0x18c
	// Line 191, Address: 0x208b60, Func Offset: 0x190
	// Line 192, Address: 0x208b64, Func Offset: 0x194
	// Line 193, Address: 0x208b68, Func Offset: 0x198
	// Line 196, Address: 0x208b6c, Func Offset: 0x19c
	// Line 197, Address: 0x208b74, Func Offset: 0x1a4
	// Line 198, Address: 0x208b7c, Func Offset: 0x1ac
	// Line 201, Address: 0x208b84, Func Offset: 0x1b4
	// Line 202, Address: 0x208b88, Func Offset: 0x1b8
	// Line 203, Address: 0x208b8c, Func Offset: 0x1bc
	// Line 204, Address: 0x208b90, Func Offset: 0x1c0
	// Line 205, Address: 0x208b94, Func Offset: 0x1c4
	// Line 208, Address: 0x208b98, Func Offset: 0x1c8
	// Line 209, Address: 0x208ba4, Func Offset: 0x1d4
	// Line 210, Address: 0x208bac, Func Offset: 0x1dc
	// Line 211, Address: 0x208bb0, Func Offset: 0x1e0
	// Line 213, Address: 0x208bb4, Func Offset: 0x1e4
	// Line 214, Address: 0x208bc8, Func Offset: 0x1f8
	// Line 215, Address: 0x208bd0, Func Offset: 0x200
	// Line 216, Address: 0x208bd4, Func Offset: 0x204
	// Line 217, Address: 0x208bd8, Func Offset: 0x208
	// Line 221, Address: 0x208bdc, Func Offset: 0x20c
	// Line 222, Address: 0x208be8, Func Offset: 0x218
	// Func End, Address: 0x208bf8, Func Offset: 0x228
}

// 
// Start address: 0x208c00
void bhEne25_Brain()
{
	// Line 234, Address: 0x208c00, Func Offset: 0
	// Func End, Address: 0x208c08, Func Offset: 0x8
}

// 
// Start address: 0x208c10
void bhEne25_Move(BH_PWORK* epw)
{
	float bz;
	float bx;
	float tz;
	float tx;
	// Line 245, Address: 0x208c10, Func Offset: 0
	// Line 250, Address: 0x208c1c, Func Offset: 0xc
	// Line 255, Address: 0x208c2c, Func Offset: 0x1c
	// Line 251, Address: 0x208c34, Func Offset: 0x24
	// Line 250, Address: 0x208c3c, Func Offset: 0x2c
	// Line 255, Address: 0x208c40, Func Offset: 0x30
	// Line 252, Address: 0x208c44, Func Offset: 0x34
	// Line 251, Address: 0x208c48, Func Offset: 0x38
	// Line 255, Address: 0x208c4c, Func Offset: 0x3c
	// Line 257, Address: 0x208c90, Func Offset: 0x80
	// Line 258, Address: 0x208c98, Func Offset: 0x88
	// Line 259, Address: 0x208ca0, Func Offset: 0x90
	// Line 263, Address: 0x208ca8, Func Offset: 0x98
	// Line 268, Address: 0x208cb8, Func Offset: 0xa8
	// Line 264, Address: 0x208cbc, Func Offset: 0xac
	// Line 268, Address: 0x208cc0, Func Offset: 0xb0
	// Line 263, Address: 0x208cc4, Func Offset: 0xb4
	// Line 265, Address: 0x208cc8, Func Offset: 0xb8
	// Line 268, Address: 0x208ccc, Func Offset: 0xbc
	// Line 264, Address: 0x208cd0, Func Offset: 0xc0
	// Line 268, Address: 0x208cd4, Func Offset: 0xc4
	// Line 270, Address: 0x208d18, Func Offset: 0x108
	// Line 271, Address: 0x208d20, Func Offset: 0x110
	// Line 272, Address: 0x208d28, Func Offset: 0x118
	// Line 276, Address: 0x208d30, Func Offset: 0x120
	// Line 277, Address: 0x208d40, Func Offset: 0x130
	// Line 280, Address: 0x208d48, Func Offset: 0x138
	// Line 281, Address: 0x208d58, Func Offset: 0x148
	// Line 282, Address: 0x208d78, Func Offset: 0x168
	// Func End, Address: 0x208d88, Func Offset: 0x178
}

// 
// Start address: 0x208d90
void bhEne25_MV00(BH_PWORK* epw)
{
	// Line 294, Address: 0x208d90, Func Offset: 0
	// Line 297, Address: 0x208db0, Func Offset: 0x20
	// Line 298, Address: 0x208db4, Func Offset: 0x24
	// Line 300, Address: 0x208db8, Func Offset: 0x28
	// Func End, Address: 0x208dc0, Func Offset: 0x30
}

// 
// Start address: 0x208dc0
void bhEne25_MV01(BH_PWORK* epw)
{
	// Line 310, Address: 0x208dc0, Func Offset: 0
	// Line 314, Address: 0x208dd0, Func Offset: 0x10
	// Line 317, Address: 0x208e14, Func Offset: 0x54
	// Line 318, Address: 0x208e1c, Func Offset: 0x5c
	// Line 320, Address: 0x208e28, Func Offset: 0x68
	// Line 322, Address: 0x208e38, Func Offset: 0x78
	// Line 323, Address: 0x208e40, Func Offset: 0x80
	// Line 325, Address: 0x208e48, Func Offset: 0x88
	// Line 329, Address: 0x208e50, Func Offset: 0x90
	// Line 332, Address: 0x208e58, Func Offset: 0x98
	// Line 329, Address: 0x208e5c, Func Offset: 0x9c
	// Line 332, Address: 0x208e6c, Func Offset: 0xac
	// Line 334, Address: 0x208e90, Func Offset: 0xd0
	// Line 336, Address: 0x208e9c, Func Offset: 0xdc
	// Line 337, Address: 0x208ec8, Func Offset: 0x108
	// Line 338, Address: 0x208ed8, Func Offset: 0x118
	// Line 339, Address: 0x208ee0, Func Offset: 0x120
	// Line 338, Address: 0x208ee8, Func Offset: 0x128
	// Line 339, Address: 0x208ef0, Func Offset: 0x130
	// Line 340, Address: 0x208ef8, Func Offset: 0x138
	// Line 339, Address: 0x208efc, Func Offset: 0x13c
	// Line 340, Address: 0x208f04, Func Offset: 0x144
	// Line 342, Address: 0x208f14, Func Offset: 0x154
	// Line 343, Address: 0x208f24, Func Offset: 0x164
	// Line 342, Address: 0x208f2c, Func Offset: 0x16c
	// Line 343, Address: 0x208f30, Func Offset: 0x170
	// Line 342, Address: 0x208f34, Func Offset: 0x174
	// Line 343, Address: 0x208f3c, Func Offset: 0x17c
	// Line 344, Address: 0x208f44, Func Offset: 0x184
	// Line 343, Address: 0x208f48, Func Offset: 0x188
	// Line 344, Address: 0x208f50, Func Offset: 0x190
	// Line 347, Address: 0x208f60, Func Offset: 0x1a0
	// Line 350, Address: 0x208f64, Func Offset: 0x1a4
	// Line 351, Address: 0x208f6c, Func Offset: 0x1ac
	// Line 347, Address: 0x208f70, Func Offset: 0x1b0
	// Line 350, Address: 0x208f78, Func Offset: 0x1b8
	// Line 353, Address: 0x208f7c, Func Offset: 0x1bc
	// Line 354, Address: 0x208f80, Func Offset: 0x1c0
	// Line 356, Address: 0x208f84, Func Offset: 0x1c4
	// Line 350, Address: 0x208f88, Func Offset: 0x1c8
	// Line 351, Address: 0x208f8c, Func Offset: 0x1cc
	// Line 350, Address: 0x208f90, Func Offset: 0x1d0
	// Line 351, Address: 0x208f98, Func Offset: 0x1d8
	// Line 354, Address: 0x208fa0, Func Offset: 0x1e0
	// Line 351, Address: 0x208fa4, Func Offset: 0x1e4
	// Line 353, Address: 0x208fac, Func Offset: 0x1ec
	// Line 354, Address: 0x208fb4, Func Offset: 0x1f4
	// Line 355, Address: 0x208fbc, Func Offset: 0x1fc
	// Line 356, Address: 0x208fc8, Func Offset: 0x208
	// Line 359, Address: 0x208fd4, Func Offset: 0x214
	// Line 361, Address: 0x208fe8, Func Offset: 0x228
	// Line 363, Address: 0x208ff0, Func Offset: 0x230
	// Line 365, Address: 0x208ffc, Func Offset: 0x23c
	// Line 367, Address: 0x20900c, Func Offset: 0x24c
	// Line 370, Address: 0x20903c, Func Offset: 0x27c
	// Line 373, Address: 0x209048, Func Offset: 0x288
	// Line 374, Address: 0x209050, Func Offset: 0x290
	// Line 375, Address: 0x209054, Func Offset: 0x294
	// Line 377, Address: 0x20905c, Func Offset: 0x29c
	// Line 379, Address: 0x209064, Func Offset: 0x2a4
	// Line 384, Address: 0x209094, Func Offset: 0x2d4
	// Line 381, Address: 0x209098, Func Offset: 0x2d8
	// Line 384, Address: 0x20909c, Func Offset: 0x2dc
	// Line 385, Address: 0x2090a0, Func Offset: 0x2e0
	// Line 387, Address: 0x2090a8, Func Offset: 0x2e8
	// Line 389, Address: 0x2090b0, Func Offset: 0x2f0
	// Line 391, Address: 0x2090c0, Func Offset: 0x300
	// Line 392, Address: 0x2090c8, Func Offset: 0x308
	// Line 396, Address: 0x2090cc, Func Offset: 0x30c
	// Func End, Address: 0x2090dc, Func Offset: 0x31c
}

// 
// Start address: 0x2090e0
void bhEne25_MV02(BH_PWORK* epw)
{
	// Line 406, Address: 0x2090e0, Func Offset: 0
	// Line 407, Address: 0x2090f0, Func Offset: 0x10
	// Line 410, Address: 0x209110, Func Offset: 0x30
	// Line 411, Address: 0x209118, Func Offset: 0x38
	// Line 414, Address: 0x20911c, Func Offset: 0x3c
	// Line 417, Address: 0x209124, Func Offset: 0x44
	// Line 419, Address: 0x209134, Func Offset: 0x54
	// Line 423, Address: 0x209140, Func Offset: 0x60
	// Line 424, Address: 0x209158, Func Offset: 0x78
	// Line 426, Address: 0x209188, Func Offset: 0xa8
	// Line 429, Address: 0x209198, Func Offset: 0xb8
	// Line 426, Address: 0x20919c, Func Offset: 0xbc
	// Line 428, Address: 0x2091a8, Func Offset: 0xc8
	// Line 429, Address: 0x2091ac, Func Offset: 0xcc
	// Line 430, Address: 0x2091b0, Func Offset: 0xd0
	// Line 434, Address: 0x2091b4, Func Offset: 0xd4
	// Func End, Address: 0x2091c4, Func Offset: 0xe4
}

// 
// Start address: 0x2091d0
void bhEne25_MV03(BH_PWORK* epw)
{
	// Line 445, Address: 0x2091d0, Func Offset: 0
	// Line 448, Address: 0x2091f0, Func Offset: 0x20
	// Line 449, Address: 0x2091f4, Func Offset: 0x24
	// Line 450, Address: 0x2091f8, Func Offset: 0x28
	// Line 451, Address: 0x2091fc, Func Offset: 0x2c
	// Line 454, Address: 0x209200, Func Offset: 0x30
	// Line 452, Address: 0x209204, Func Offset: 0x34
	// Line 454, Address: 0x209208, Func Offset: 0x38
	// Line 455, Address: 0x20920c, Func Offset: 0x3c
	// Line 457, Address: 0x209218, Func Offset: 0x48
	// Line 459, Address: 0x209228, Func Offset: 0x58
	// Line 460, Address: 0x20922c, Func Offset: 0x5c
	// Line 464, Address: 0x209230, Func Offset: 0x60
	// Func End, Address: 0x209238, Func Offset: 0x68
}

// 
// Start address: 0x209240
void bhEne25_Nage()
{
	// Line 476, Address: 0x209240, Func Offset: 0
	// Func End, Address: 0x209248, Func Offset: 0x8
}

// 
// Start address: 0x209250
void bhEne25_Damage()
{
	// Line 488, Address: 0x209250, Func Offset: 0
	// Func End, Address: 0x209258, Func Offset: 0x8
}

// 
// Start address: 0x209260
void bhEne25_Die()
{
	// Line 500, Address: 0x209260, Func Offset: 0
	// Func End, Address: 0x209268, Func Offset: 0x8
}

// 
// Start address: 0x209270
void bhEne25_SetEffect(BH_PWORK* epw)
{
	int i;
	// Line 511, Address: 0x209270, Func Offset: 0
	// Line 514, Address: 0x209288, Func Offset: 0x18
	// Line 516, Address: 0x20928c, Func Offset: 0x1c
	// Line 517, Address: 0x209294, Func Offset: 0x24
	// Line 526, Address: 0x20929c, Func Offset: 0x2c
	// Line 516, Address: 0x2092a4, Func Offset: 0x34
	// Line 526, Address: 0x2092a8, Func Offset: 0x38
	// Line 516, Address: 0x2092ac, Func Offset: 0x3c
	// Line 526, Address: 0x2092b4, Func Offset: 0x44
	// Line 516, Address: 0x2092b8, Func Offset: 0x48
	// Line 517, Address: 0x2092bc, Func Offset: 0x4c
	// Line 526, Address: 0x2092c4, Func Offset: 0x54
	// Line 518, Address: 0x2092c8, Func Offset: 0x58
	// Line 526, Address: 0x2092cc, Func Offset: 0x5c
	// Line 522, Address: 0x2092d0, Func Offset: 0x60
	// Line 527, Address: 0x2092d4, Func Offset: 0x64
	// Line 517, Address: 0x2092d8, Func Offset: 0x68
	// Line 526, Address: 0x2092e0, Func Offset: 0x70
	// Line 517, Address: 0x2092e4, Func Offset: 0x74
	// Line 518, Address: 0x2092e8, Func Offset: 0x78
	// Line 529, Address: 0x2092f0, Func Offset: 0x80
	// Line 518, Address: 0x2092fc, Func Offset: 0x8c
	// Line 519, Address: 0x209308, Func Offset: 0x98
	// Line 520, Address: 0x20931c, Func Offset: 0xac
	// Line 521, Address: 0x209330, Func Offset: 0xc0
	// Line 522, Address: 0x209358, Func Offset: 0xe8
	// Line 523, Address: 0x20936c, Func Offset: 0xfc
	// Line 524, Address: 0x209380, Func Offset: 0x110
	// Line 526, Address: 0x209394, Func Offset: 0x124
	// Line 527, Address: 0x2093b4, Func Offset: 0x144
	// Line 528, Address: 0x2093c8, Func Offset: 0x158
	// Line 529, Address: 0x2093e4, Func Offset: 0x174
	// Line 531, Address: 0x2093fc, Func Offset: 0x18c
	// Line 532, Address: 0x209410, Func Offset: 0x1a0
	// Line 534, Address: 0x209414, Func Offset: 0x1a4
	// Line 531, Address: 0x20941c, Func Offset: 0x1ac
	// Line 534, Address: 0x209420, Func Offset: 0x1b0
	// Line 531, Address: 0x209424, Func Offset: 0x1b4
	// Line 532, Address: 0x209430, Func Offset: 0x1c0
	// Line 533, Address: 0x209444, Func Offset: 0x1d4
	// Line 534, Address: 0x209464, Func Offset: 0x1f4
	// Line 536, Address: 0x20947c, Func Offset: 0x20c
	// Line 537, Address: 0x209490, Func Offset: 0x220
	// Line 536, Address: 0x209494, Func Offset: 0x224
	// Line 539, Address: 0x209498, Func Offset: 0x228
	// Line 536, Address: 0x2094a4, Func Offset: 0x234
	// Line 537, Address: 0x2094b4, Func Offset: 0x244
	// Line 538, Address: 0x2094c8, Func Offset: 0x258
	// Line 539, Address: 0x2094e4, Func Offset: 0x274
	// Line 541, Address: 0x2094fc, Func Offset: 0x28c
	// Line 542, Address: 0x209510, Func Offset: 0x2a0
	// Line 544, Address: 0x209514, Func Offset: 0x2a4
	// Line 541, Address: 0x20951c, Func Offset: 0x2ac
	// Line 544, Address: 0x209520, Func Offset: 0x2b0
	// Line 541, Address: 0x209524, Func Offset: 0x2b4
	// Line 542, Address: 0x209530, Func Offset: 0x2c0
	// Line 543, Address: 0x209544, Func Offset: 0x2d4
	// Line 544, Address: 0x209564, Func Offset: 0x2f4
	// Line 545, Address: 0x20957c, Func Offset: 0x30c
	// Line 546, Address: 0x20958c, Func Offset: 0x31c
	// Func End, Address: 0x2095a4, Func Offset: 0x334
}

// 
// Start address: 0x2095b0
void bhEne25_PlayerControl(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	// Line 557, Address: 0x2095b0, Func Offset: 0
	// Line 560, Address: 0x2095b8, Func Offset: 0x8
	// Line 562, Address: 0x2095d0, Func Offset: 0x20
	// Line 564, Address: 0x2095fc, Func Offset: 0x4c
	// Line 565, Address: 0x209608, Func Offset: 0x58
	// Line 569, Address: 0x209610, Func Offset: 0x60
	// Line 564, Address: 0x209614, Func Offset: 0x64
	// Line 565, Address: 0x20961c, Func Offset: 0x6c
	// Line 569, Address: 0x209624, Func Offset: 0x74
	// Line 572, Address: 0x209628, Func Offset: 0x78
	// Line 565, Address: 0x209630, Func Offset: 0x80
	// Line 566, Address: 0x209634, Func Offset: 0x84
	// Line 565, Address: 0x209638, Func Offset: 0x88
	// Line 566, Address: 0x209640, Func Offset: 0x90
	// Line 570, Address: 0x209648, Func Offset: 0x98
	// Line 566, Address: 0x20964c, Func Offset: 0x9c
	// Line 569, Address: 0x209654, Func Offset: 0xa4
	// Line 570, Address: 0x209658, Func Offset: 0xa8
	// Line 569, Address: 0x20965c, Func Offset: 0xac
	// Line 570, Address: 0x209664, Func Offset: 0xb4
	// Line 571, Address: 0x20966c, Func Offset: 0xbc
	// Line 572, Address: 0x209674, Func Offset: 0xc4
	// Line 574, Address: 0x209680, Func Offset: 0xd0
	// Line 576, Address: 0x209694, Func Offset: 0xe4
	// Line 577, Address: 0x2096a4, Func Offset: 0xf4
	// Line 583, Address: 0x2096b8, Func Offset: 0x108
	// Func End, Address: 0x2096c4, Func Offset: 0x114
}

