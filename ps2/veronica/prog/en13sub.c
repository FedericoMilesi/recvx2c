



































typedef void(*type_38)(BH_PWORK*);
typedef void(*type_54)(BH_PWORK*);
typedef void(*type_69)(void*);
typedef void(*type_76)(BH_PWORK*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_2[32];

typedef Unknown1* type_4[32];
typedef Unknown1* type_5[512];


typedef char type_8[8];
typedef Unknown1* type_9[32];
typedef Unknown1* type_10[512];

typedef char type_12[32];
typedef Unknown1* type_13[512];

typedef short type_15[32];

typedef Unknown1* type_17[128];
typedef unsigned int type_18[1];


typedef int* type_21[16];
typedef Unknown1* type_22[128];

typedef Unknown1* type_24[128];
typedef int type_25[4];

typedef unsigned int type_27[4];
typedef MODEL_DATA type_28[16];
typedef Unknown1* type_29[512];
typedef char type_30[256];
typedef float type_31[4];
typedef float type_32[4];
typedef float type_33[4];

typedef unsigned char type_35[64];

typedef char type_37[8];
typedef void* type_39[2];
typedef void(*type_40)(BH_PWORK*)[1];

typedef int type_42[4];
typedef unsigned char* type_43[256];
typedef unsigned int type_44[2];
typedef short type_45[256];

typedef float type_47[3];
typedef short type_48[256];
typedef int type_49[3];
typedef int type_50[8];
typedef float type_51[3];

typedef TEXTURE_BUFFER type_53[256];
typedef void(*type_55)(BH_PWORK*)[6];


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
typedef BOUNDARY type_77[64];
typedef void(*type_78)(BH_PWORK*)[2];
typedef unsigned int type_79[16];
typedef unsigned int type_80[3];
typedef BH_PWORK* type_81[16];
typedef unsigned int type_82[8];
typedef unsigned int type_83[1];
typedef unsigned int type_84[384];
typedef unsigned int type_85[2];
typedef unsigned char type_86[2];
typedef unsigned int type_87[4];
typedef int* type_88[16];
typedef char type_89[32];

typedef char type_91[64];

typedef char type_93[4];
typedef MODEL_DATA type_94[16];
typedef short type_95[4];
typedef unsigned char type_96[4];

typedef unsigned int type_98[32];

typedef Unknown1* type_100[512];
typedef Unknown1* type_101[128];
typedef Unknown1* type_102[512];
typedef unsigned char type_103[64];
typedef int type_104[6];
typedef Unknown1* type_105[512];






















































































































































































































































































































































































































































































































































































































































































void(*bhEne13B_Mode0)(BH_PWORK*)[6];
void(*bhEne13B_BrainType)(BH_PWORK*)[1];
void(*bhEne13B_MoveMode2)(BH_PWORK*)[2];
extern SYS* sys;
extern BH_PWORK* plp;

void bhEne13B(BH_PWORK* epw);
void bhEne13B_Init(BH_PWORK* epw);
void bhEne13B_Move(BH_PWORK* epw);
void bhEne13B_MV00();
void bhEne13B_MV01(BH_PWORK* epw);
void bhEne13B_Nage();
void bhEne13B_Damage();
void bhEne13B_Die(BH_PWORK* epw);
void bhEne13B_SetHittab(BH_PWORK* epw);

// 
// Start address: 0x1dcd00
void bhEne13B(BH_PWORK* epw)
{
	OBJECT_WORK* owk;
	int i;
	int i;
	// Line 136, Address: 0x1dcd00, Func Offset: 0
	// Line 138, Address: 0x1dcd10, Func Offset: 0x10
	// Line 141, Address: 0x1dcd30, Func Offset: 0x30
	// Line 143, Address: 0x1dcd48, Func Offset: 0x48
	// Line 145, Address: 0x1dcd4c, Func Offset: 0x4c
	// Line 143, Address: 0x1dcd54, Func Offset: 0x54
	// Line 145, Address: 0x1dcd58, Func Offset: 0x58
	// Line 146, Address: 0x1dcd60, Func Offset: 0x60
	// Line 147, Address: 0x1dcd64, Func Offset: 0x64
	// Line 146, Address: 0x1dcd68, Func Offset: 0x68
	// Line 147, Address: 0x1dcd78, Func Offset: 0x78
	// Line 148, Address: 0x1dcd8c, Func Offset: 0x8c
	// Line 155, Address: 0x1dcd90, Func Offset: 0x90
	// Line 156, Address: 0x1dcd94, Func Offset: 0x94
	// Line 155, Address: 0x1dcd98, Func Offset: 0x98
	// Line 156, Address: 0x1dcd9c, Func Offset: 0x9c
	// Line 157, Address: 0x1dcda4, Func Offset: 0xa4
	// Line 158, Address: 0x1dcdb4, Func Offset: 0xb4
	// Line 157, Address: 0x1dcdb8, Func Offset: 0xb8
	// Line 158, Address: 0x1dcdc8, Func Offset: 0xc8
	// Line 157, Address: 0x1dcdcc, Func Offset: 0xcc
	// Line 158, Address: 0x1dcdd0, Func Offset: 0xd0
	// Line 162, Address: 0x1dcde4, Func Offset: 0xe4
	// Line 165, Address: 0x1dcdf8, Func Offset: 0xf8
	// Line 168, Address: 0x1dce00, Func Offset: 0x100
	// Line 169, Address: 0x1dce08, Func Offset: 0x108
	// Func End, Address: 0x1dce18, Func Offset: 0x118
}

// 
// Start address: 0x1dce20
void bhEne13B_Init(BH_PWORK* epw)
{
	int i;
	// Line 179, Address: 0x1dce20, Func Offset: 0
	// Line 183, Address: 0x1dce2c, Func Offset: 0xc
	// Line 184, Address: 0x1dce30, Func Offset: 0x10
	// Line 188, Address: 0x1dce34, Func Offset: 0x14
	// Line 189, Address: 0x1dce38, Func Offset: 0x18
	// Line 190, Address: 0x1dce3c, Func Offset: 0x1c
	// Line 183, Address: 0x1dce40, Func Offset: 0x20
	// Line 184, Address: 0x1dce48, Func Offset: 0x28
	// Line 193, Address: 0x1dce4c, Func Offset: 0x2c
	// Line 199, Address: 0x1dce50, Func Offset: 0x30
	// Line 201, Address: 0x1dce54, Func Offset: 0x34
	// Line 184, Address: 0x1dce58, Func Offset: 0x38
	// Line 185, Address: 0x1dce60, Func Offset: 0x40
	// Line 186, Address: 0x1dce70, Func Offset: 0x50
	// Line 187, Address: 0x1dce7c, Func Offset: 0x5c
	// Line 188, Address: 0x1dce88, Func Offset: 0x68
	// Line 189, Address: 0x1dce8c, Func Offset: 0x6c
	// Line 190, Address: 0x1dce90, Func Offset: 0x70
	// Line 193, Address: 0x1dce94, Func Offset: 0x74
	// Line 194, Address: 0x1dce98, Func Offset: 0x78
	// Line 195, Address: 0x1dce9c, Func Offset: 0x7c
	// Line 196, Address: 0x1dcea0, Func Offset: 0x80
	// Line 199, Address: 0x1dcea4, Func Offset: 0x84
	// Line 200, Address: 0x1dcea8, Func Offset: 0x88
	// Line 201, Address: 0x1dceac, Func Offset: 0x8c
	// Line 202, Address: 0x1dceb0, Func Offset: 0x90
	// Line 203, Address: 0x1dceb4, Func Offset: 0x94
	// Line 204, Address: 0x1dceb8, Func Offset: 0x98
	// Line 207, Address: 0x1dcebc, Func Offset: 0x9c
	// Line 210, Address: 0x1dcecc, Func Offset: 0xac
	// Line 213, Address: 0x1dced4, Func Offset: 0xb4
	// Line 214, Address: 0x1dcee0, Func Offset: 0xc0
	// Line 217, Address: 0x1dceec, Func Offset: 0xcc
	// Line 214, Address: 0x1dcef0, Func Offset: 0xd0
	// Line 217, Address: 0x1dcef4, Func Offset: 0xd4
	// Line 218, Address: 0x1dcf08, Func Offset: 0xe8
	// Line 230, Address: 0x1dcf14, Func Offset: 0xf4
	// Line 218, Address: 0x1dcf18, Func Offset: 0xf8
	// Line 219, Address: 0x1dcf48, Func Offset: 0x128
	// Line 220, Address: 0x1dcf6c, Func Offset: 0x14c
	// Line 221, Address: 0x1dcf7c, Func Offset: 0x15c
	// Line 222, Address: 0x1dcf8c, Func Offset: 0x16c
	// Line 223, Address: 0x1dcf9c, Func Offset: 0x17c
	// Line 224, Address: 0x1dcfac, Func Offset: 0x18c
	// Line 225, Address: 0x1dcfbc, Func Offset: 0x19c
	// Line 227, Address: 0x1dcfcc, Func Offset: 0x1ac
	// Line 228, Address: 0x1dcfe8, Func Offset: 0x1c8
	// Line 229, Address: 0x1dd004, Func Offset: 0x1e4
	// Line 230, Address: 0x1dd024, Func Offset: 0x204
	// Line 231, Address: 0x1dd03c, Func Offset: 0x21c
	// Line 232, Address: 0x1dd040, Func Offset: 0x220
	// Func End, Address: 0x1dd050, Func Offset: 0x230
}

// 
// Start address: 0x1dd050
void bhEne13B_Move(BH_PWORK* epw)
{
	// Line 267, Address: 0x1dd050, Func Offset: 0
	// Func End, Address: 0x1dd070, Func Offset: 0x20
}

// 
// Start address: 0x1dd070
void bhEne13B_MV00()
{
	// Line 279, Address: 0x1dd070, Func Offset: 0
	// Func End, Address: 0x1dd078, Func Offset: 0x8
}

// 
// Start address: 0x1dd080
void bhEne13B_MV01(BH_PWORK* epw)
{
	NJS_POINT3 p1;
	BH_PWORK** ep;
	int num;
	int j;
	int i;
	OBJECT_WORK* owk;
	int mtn_no[6];
	// Line 289, Address: 0x1dd080, Func Offset: 0
	// Line 290, Address: 0x1dd09c, Func Offset: 0x1c
	// Line 289, Address: 0x1dd0a0, Func Offset: 0x20
	// Line 290, Address: 0x1dd0a8, Func Offset: 0x28
	// Line 298, Address: 0x1dd0b4, Func Offset: 0x34
	// Line 290, Address: 0x1dd0b8, Func Offset: 0x38
	// Line 298, Address: 0x1dd0c4, Func Offset: 0x44
	// Line 300, Address: 0x1dd0e0, Func Offset: 0x60
	// Line 305, Address: 0x1dd0e4, Func Offset: 0x64
	// Line 302, Address: 0x1dd0e8, Func Offset: 0x68
	// Line 305, Address: 0x1dd0ec, Func Offset: 0x6c
	// Line 308, Address: 0x1dd0f0, Func Offset: 0x70
	// Line 300, Address: 0x1dd0f4, Func Offset: 0x74
	// Line 301, Address: 0x1dd104, Func Offset: 0x84
	// Line 302, Address: 0x1dd108, Func Offset: 0x88
	// Line 303, Address: 0x1dd10c, Func Offset: 0x8c
	// Line 308, Address: 0x1dd110, Func Offset: 0x90
	// Line 304, Address: 0x1dd114, Func Offset: 0x94
	// Line 305, Address: 0x1dd118, Func Offset: 0x98
	// Line 308, Address: 0x1dd120, Func Offset: 0xa0
	// Line 310, Address: 0x1dd128, Func Offset: 0xa8
	// Line 311, Address: 0x1dd130, Func Offset: 0xb0
	// Line 314, Address: 0x1dd138, Func Offset: 0xb8
	// Line 317, Address: 0x1dd190, Func Offset: 0x110
	// Line 321, Address: 0x1dd1a4, Func Offset: 0x124
	// Line 323, Address: 0x1dd1c0, Func Offset: 0x140
	// Line 328, Address: 0x1dd218, Func Offset: 0x198
	// Line 331, Address: 0x1dd234, Func Offset: 0x1b4
	// Line 333, Address: 0x1dd264, Func Offset: 0x1e4
	// Line 334, Address: 0x1dd278, Func Offset: 0x1f8
	// Line 337, Address: 0x1dd288, Func Offset: 0x208
	// Line 339, Address: 0x1dd290, Func Offset: 0x210
	// Line 340, Address: 0x1dd2a4, Func Offset: 0x224
	// Line 343, Address: 0x1dd2b4, Func Offset: 0x234
	// Line 345, Address: 0x1dd2bc, Func Offset: 0x23c
	// Line 346, Address: 0x1dd2d0, Func Offset: 0x250
	// Line 349, Address: 0x1dd2e0, Func Offset: 0x260
	// Line 351, Address: 0x1dd2e8, Func Offset: 0x268
	// Line 352, Address: 0x1dd2f8, Func Offset: 0x278
	// Line 353, Address: 0x1dd308, Func Offset: 0x288
	// Line 355, Address: 0x1dd30c, Func Offset: 0x28c
	// Line 356, Address: 0x1dd31c, Func Offset: 0x29c
	// Line 357, Address: 0x1dd328, Func Offset: 0x2a8
	// Line 356, Address: 0x1dd32c, Func Offset: 0x2ac
	// Line 357, Address: 0x1dd334, Func Offset: 0x2b4
	// Line 359, Address: 0x1dd338, Func Offset: 0x2b8
	// Line 360, Address: 0x1dd348, Func Offset: 0x2c8
	// Line 363, Address: 0x1dd358, Func Offset: 0x2d8
	// Line 365, Address: 0x1dd360, Func Offset: 0x2e0
	// Line 366, Address: 0x1dd370, Func Offset: 0x2f0
	// Line 367, Address: 0x1dd380, Func Offset: 0x300
	// Line 369, Address: 0x1dd384, Func Offset: 0x304
	// Line 370, Address: 0x1dd394, Func Offset: 0x314
	// Line 371, Address: 0x1dd3a0, Func Offset: 0x320
	// Line 370, Address: 0x1dd3a4, Func Offset: 0x324
	// Line 371, Address: 0x1dd3ac, Func Offset: 0x32c
	// Line 373, Address: 0x1dd3b0, Func Offset: 0x330
	// Line 374, Address: 0x1dd3c0, Func Offset: 0x340
	// Line 377, Address: 0x1dd3d0, Func Offset: 0x350
	// Line 379, Address: 0x1dd3d8, Func Offset: 0x358
	// Line 380, Address: 0x1dd3e8, Func Offset: 0x368
	// Line 381, Address: 0x1dd3f8, Func Offset: 0x378
	// Line 383, Address: 0x1dd3fc, Func Offset: 0x37c
	// Line 384, Address: 0x1dd40c, Func Offset: 0x38c
	// Line 385, Address: 0x1dd418, Func Offset: 0x398
	// Line 384, Address: 0x1dd41c, Func Offset: 0x39c
	// Line 385, Address: 0x1dd424, Func Offset: 0x3a4
	// Line 387, Address: 0x1dd428, Func Offset: 0x3a8
	// Line 388, Address: 0x1dd438, Func Offset: 0x3b8
	// Line 389, Address: 0x1dd448, Func Offset: 0x3c8
	// Line 395, Address: 0x1dd44c, Func Offset: 0x3cc
	// Line 396, Address: 0x1dd458, Func Offset: 0x3d8
	// Line 397, Address: 0x1dd470, Func Offset: 0x3f0
	// Line 396, Address: 0x1dd474, Func Offset: 0x3f4
	// Line 397, Address: 0x1dd478, Func Offset: 0x3f8
	// Line 402, Address: 0x1dd498, Func Offset: 0x418
	// Line 403, Address: 0x1dd4d4, Func Offset: 0x454
	// Line 409, Address: 0x1dd4ec, Func Offset: 0x46c
	// Line 410, Address: 0x1dd4f0, Func Offset: 0x470
	// Line 411, Address: 0x1dd4f4, Func Offset: 0x474
	// Line 417, Address: 0x1dd4f8, Func Offset: 0x478
	// Line 409, Address: 0x1dd4fc, Func Offset: 0x47c
	// Line 422, Address: 0x1dd500, Func Offset: 0x480
	// Line 409, Address: 0x1dd504, Func Offset: 0x484
	// Line 410, Address: 0x1dd50c, Func Offset: 0x48c
	// Line 411, Address: 0x1dd51c, Func Offset: 0x49c
	// Line 417, Address: 0x1dd52c, Func Offset: 0x4ac
	// Line 414, Address: 0x1dd530, Func Offset: 0x4b0
	// Line 417, Address: 0x1dd534, Func Offset: 0x4b4
	// Line 414, Address: 0x1dd53c, Func Offset: 0x4bc
	// Line 417, Address: 0x1dd540, Func Offset: 0x4c0
	// Line 418, Address: 0x1dd544, Func Offset: 0x4c4
	// Line 414, Address: 0x1dd548, Func Offset: 0x4c8
	// Line 417, Address: 0x1dd54c, Func Offset: 0x4cc
	// Line 414, Address: 0x1dd550, Func Offset: 0x4d0
	// Line 415, Address: 0x1dd554, Func Offset: 0x4d4
	// Line 417, Address: 0x1dd558, Func Offset: 0x4d8
	// Line 418, Address: 0x1dd560, Func Offset: 0x4e0
	// Line 419, Address: 0x1dd570, Func Offset: 0x4f0
	// Line 418, Address: 0x1dd574, Func Offset: 0x4f4
	// Line 419, Address: 0x1dd57c, Func Offset: 0x4fc
	// Line 422, Address: 0x1dd58c, Func Offset: 0x50c
	// Line 419, Address: 0x1dd590, Func Offset: 0x510
	// Line 422, Address: 0x1dd598, Func Offset: 0x518
	// Line 424, Address: 0x1dd5f0, Func Offset: 0x570
	// Line 425, Address: 0x1dd600, Func Offset: 0x580
	// Line 424, Address: 0x1dd604, Func Offset: 0x584
	// Line 425, Address: 0x1dd60c, Func Offset: 0x58c
	// Line 426, Address: 0x1dd618, Func Offset: 0x598
	// Line 425, Address: 0x1dd61c, Func Offset: 0x59c
	// Line 426, Address: 0x1dd624, Func Offset: 0x5a4
	// Line 431, Address: 0x1dd638, Func Offset: 0x5b8
	// Line 432, Address: 0x1dd648, Func Offset: 0x5c8
	// Line 433, Address: 0x1dd658, Func Offset: 0x5d8
	// Line 434, Address: 0x1dd660, Func Offset: 0x5e0
	// Line 435, Address: 0x1dd674, Func Offset: 0x5f4
	// Line 438, Address: 0x1dd678, Func Offset: 0x5f8
	// Line 440, Address: 0x1dd68c, Func Offset: 0x60c
	// Line 441, Address: 0x1dd698, Func Offset: 0x618
	// Line 443, Address: 0x1dd6a0, Func Offset: 0x620
	// Line 440, Address: 0x1dd6a4, Func Offset: 0x624
	// Line 441, Address: 0x1dd6ac, Func Offset: 0x62c
	// Line 443, Address: 0x1dd6b4, Func Offset: 0x634
	// Line 441, Address: 0x1dd6b8, Func Offset: 0x638
	// Line 443, Address: 0x1dd6c0, Func Offset: 0x640
	// Line 444, Address: 0x1dd6c8, Func Offset: 0x648
	// Line 445, Address: 0x1dd6d4, Func Offset: 0x654
	// Line 446, Address: 0x1dd6e8, Func Offset: 0x668
	// Line 447, Address: 0x1dd70c, Func Offset: 0x68c
	// Line 446, Address: 0x1dd710, Func Offset: 0x690
	// Line 447, Address: 0x1dd714, Func Offset: 0x694
	// Line 448, Address: 0x1dd71c, Func Offset: 0x69c
	// Line 449, Address: 0x1dd724, Func Offset: 0x6a4
	// Line 450, Address: 0x1dd744, Func Offset: 0x6c4
	// Line 452, Address: 0x1dd750, Func Offset: 0x6d0
	// Line 453, Address: 0x1dd758, Func Offset: 0x6d8
	// Line 455, Address: 0x1dd760, Func Offset: 0x6e0
	// Line 456, Address: 0x1dd76c, Func Offset: 0x6ec
	// Line 458, Address: 0x1dd770, Func Offset: 0x6f0
	// Line 455, Address: 0x1dd774, Func Offset: 0x6f4
	// Line 456, Address: 0x1dd77c, Func Offset: 0x6fc
	// Line 458, Address: 0x1dd784, Func Offset: 0x704
	// Line 456, Address: 0x1dd788, Func Offset: 0x708
	// Line 458, Address: 0x1dd790, Func Offset: 0x710
	// Line 459, Address: 0x1dd798, Func Offset: 0x718
	// Line 460, Address: 0x1dd7a4, Func Offset: 0x724
	// Line 461, Address: 0x1dd7b8, Func Offset: 0x738
	// Line 462, Address: 0x1dd7dc, Func Offset: 0x75c
	// Line 461, Address: 0x1dd7e0, Func Offset: 0x760
	// Line 462, Address: 0x1dd7e4, Func Offset: 0x764
	// Line 463, Address: 0x1dd7ec, Func Offset: 0x76c
	// Line 464, Address: 0x1dd7f4, Func Offset: 0x774
	// Line 465, Address: 0x1dd814, Func Offset: 0x794
	// Line 467, Address: 0x1dd820, Func Offset: 0x7a0
	// Line 468, Address: 0x1dd82c, Func Offset: 0x7ac
	// Line 471, Address: 0x1dd830, Func Offset: 0x7b0
	// Line 474, Address: 0x1dd838, Func Offset: 0x7b8
	// Line 476, Address: 0x1dd83c, Func Offset: 0x7bc
	// Line 479, Address: 0x1dd840, Func Offset: 0x7c0
	// Line 480, Address: 0x1dd850, Func Offset: 0x7d0
	// Line 481, Address: 0x1dd858, Func Offset: 0x7d8
	// Line 482, Address: 0x1dd86c, Func Offset: 0x7ec
	// Line 483, Address: 0x1dd884, Func Offset: 0x804
	// Line 484, Address: 0x1dd888, Func Offset: 0x808
	// Line 483, Address: 0x1dd88c, Func Offset: 0x80c
	// Line 484, Address: 0x1dd898, Func Offset: 0x818
	// Line 487, Address: 0x1dd8a0, Func Offset: 0x820
	// Line 488, Address: 0x1dd8b8, Func Offset: 0x838
	// Line 487, Address: 0x1dd8bc, Func Offset: 0x83c
	// Line 488, Address: 0x1dd8c4, Func Offset: 0x844
	// Line 489, Address: 0x1dd8cc, Func Offset: 0x84c
	// Line 491, Address: 0x1dd8d0, Func Offset: 0x850
	// Line 492, Address: 0x1dd8dc, Func Offset: 0x85c
	// Line 493, Address: 0x1dd8e0, Func Offset: 0x860
	// Line 494, Address: 0x1dd8e4, Func Offset: 0x864
	// Line 495, Address: 0x1dd8e8, Func Offset: 0x868
	// Line 498, Address: 0x1dd8ec, Func Offset: 0x86c
	// Func End, Address: 0x1dd914, Func Offset: 0x894
}

// 
// Start address: 0x1dd920
void bhEne13B_Nage()
{
	// Line 509, Address: 0x1dd920, Func Offset: 0
	// Func End, Address: 0x1dd928, Func Offset: 0x8
}

// 
// Start address: 0x1dd930
void bhEne13B_Damage()
{
	// Line 520, Address: 0x1dd930, Func Offset: 0
	// Func End, Address: 0x1dd938, Func Offset: 0x8
}

// 
// Start address: 0x1dd940
void bhEne13B_Die(BH_PWORK* epw)
{
	int i;
	// Line 533, Address: 0x1dd940, Func Offset: 0
	// Line 537, Address: 0x1dd948, Func Offset: 0x8
	// Line 533, Address: 0x1dd950, Func Offset: 0x10
	// Line 534, Address: 0x1dd958, Func Offset: 0x18
	// Line 537, Address: 0x1dd960, Func Offset: 0x20
	// Line 538, Address: 0x1dd968, Func Offset: 0x28
	// Line 539, Address: 0x1dd96c, Func Offset: 0x2c
	// Line 538, Address: 0x1dd970, Func Offset: 0x30
	// Line 539, Address: 0x1dd980, Func Offset: 0x40
	// Line 540, Address: 0x1dd994, Func Offset: 0x54
	// Line 541, Address: 0x1dd9a4, Func Offset: 0x64
	// Func End, Address: 0x1dd9ac, Func Offset: 0x6c
}

// 
// Start address: 0x1dd9b0
void bhEne13B_SetHittab(BH_PWORK* epw)
{
	OBJECT_WORK* owk;
	int i;
	// Line 555, Address: 0x1dd9b0, Func Offset: 0
	// Line 557, Address: 0x1dd9c4, Func Offset: 0x14
	// Line 558, Address: 0x1dd9d4, Func Offset: 0x24
	// Line 559, Address: 0x1dd9ec, Func Offset: 0x3c
	// Line 563, Address: 0x1dd9f4, Func Offset: 0x44
	// Line 564, Address: 0x1dda0c, Func Offset: 0x5c
	// Line 568, Address: 0x1dda14, Func Offset: 0x64
	// Line 564, Address: 0x1dda18, Func Offset: 0x68
	// Line 565, Address: 0x1dda1c, Func Offset: 0x6c
	// Line 566, Address: 0x1dda30, Func Offset: 0x80
	// Line 567, Address: 0x1dda44, Func Offset: 0x94
	// Line 568, Address: 0x1dda54, Func Offset: 0xa4
	// Line 567, Address: 0x1dda58, Func Offset: 0xa8
	// Line 568, Address: 0x1dda60, Func Offset: 0xb0
	// Line 569, Address: 0x1dda74, Func Offset: 0xc4
	// Line 571, Address: 0x1dda7c, Func Offset: 0xcc
	// Line 572, Address: 0x1dda88, Func Offset: 0xd8
	// Line 573, Address: 0x1dda8c, Func Offset: 0xdc
	// Line 572, Address: 0x1dda90, Func Offset: 0xe0
	// Line 573, Address: 0x1ddaa0, Func Offset: 0xf0
	// Line 574, Address: 0x1ddab4, Func Offset: 0x104
	// Line 576, Address: 0x1ddabc, Func Offset: 0x10c
	// Func End, Address: 0x1ddac4, Func Offset: 0x114
}

