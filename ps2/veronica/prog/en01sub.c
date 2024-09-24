



















typedef struct _anon18;


























typedef void(*type_33)(BH_PWORK*);
typedef void(*type_36)(BH_PWORK*);
typedef void(*type_43)(BH_PWORK*);
typedef void(*type_48)(BH_PWORK*);
typedef void(*type_53)(BH_PWORK*);
typedef void(*type_58)(BH_PWORK*);
typedef void(*type_65)(BH_PWORK*);
typedef void(*type_95)(void*);
typedef void(*type_98)(BH_PWORK*);
typedef void(*type_103)(BH_PWORK*);
typedef void(*type_110)(BH_PWORK*);
typedef void(*type_122)(BH_PWORK*);
typedef void(*type_132)(BH_PWORK*);
typedef void(*type_136)(BH_PWORK*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_2[32];

typedef Unknown1* type_4[32];
typedef Unknown1* type_5[512];


typedef char type_8[8];
typedef Unknown1* type_9[32];
typedef Unknown1* type_10[512];

typedef char type_12[32];
typedef float type_13[32];
typedef Unknown1* type_14[512];

typedef short type_16[32];

typedef Unknown1* type_18[128];
typedef unsigned int type_19[1];


typedef int* type_22[16];
typedef Unknown1* type_23[128];


typedef Unknown1* type_26[128];
typedef int type_27[4];

typedef unsigned int type_29[4];
typedef float type_30[4];
typedef MODEL_DATA type_31[16];
typedef Unknown1* type_32[512];
typedef float type_34[4];
typedef void(*type_35)(BH_PWORK*)[2];
typedef char type_37[256];
typedef float type_38[4];
typedef void(*type_39)(BH_PWORK*)[2];
typedef float type_40[4];
typedef float type_41[4];
typedef float type_42[4];

typedef void(*type_45)(BH_PWORK*)[3];
typedef unsigned char type_46[64];

typedef void(*type_49)(BH_PWORK*)[2];
typedef char type_50[8];
typedef _anon18 type_51[2];
typedef void* type_52[2];
typedef Unknown18 type_54[3];
typedef void(*type_55)(BH_PWORK*)[1];

typedef BH_PWORK type_57[0];
typedef int type_59[4];
typedef unsigned char* type_60[256];
typedef void(*type_61)(BH_PWORK*)[1];
typedef Unknown1 type_62[0];
typedef unsigned int type_63[2];
typedef short type_64[256];
typedef BH_PWORK* type_66[10];
typedef void(*type_67)(BH_PWORK*)[2];

typedef float type_69[3];
typedef short type_70[256];
typedef int type_71[3];
typedef int type_72[8];
typedef float type_73[3];

typedef TEXTURE_BUFFER type_75[256];



typedef short type_79[256];
typedef char type_80[3];
typedef int type_81[64];
typedef MODEL_DATA type_82[450];
typedef unsigned int type_83[16];
typedef char type_84[4];
typedef unsigned int type_85[8];


typedef int type_88[450];
typedef unsigned int type_89[8];
typedef unsigned char type_90[450];
typedef float type_91[128];
typedef char type_92[16];
typedef char type_93[4];

typedef CAMERA type_96[2];
typedef unsigned int type_97[32];
typedef void(*type_99)(BH_PWORK*)[2];
typedef unsigned char type_100[256];
typedef unsigned int type_101[16];
typedef BOUNDARY type_102[64];
typedef unsigned int type_104[16];
typedef void(*type_105)(BH_PWORK*)[4];
typedef int type_106[0];
typedef BOUNDARY type_107[64];
typedef unsigned int type_108[32];
typedef BOUNDARY type_109[64];
typedef unsigned int type_111[16];
typedef unsigned int type_112[3];
typedef void(*type_113)(BH_PWORK*)[4];
typedef BH_PWORK* type_114[16];
typedef unsigned int type_115[8];
typedef unsigned int type_116[1];
typedef unsigned int type_117[384];
typedef unsigned int type_118[2];
typedef unsigned char type_119[2];
typedef unsigned int type_120[4];
typedef int* type_121[16];
typedef void(*type_123)(BH_PWORK*)[4];
typedef char type_124[32];

typedef char type_126[64];

typedef char type_128[4];

typedef MODEL_DATA type_130[16];
typedef short type_131[4];
typedef void(*type_133)(BH_PWORK*)[4];
typedef unsigned char type_134[4];

typedef void(*type_137)(BH_PWORK*)[4];
typedef unsigned int type_138[8];
typedef unsigned int type_139[32];
typedef unsigned int type_140[4];


typedef Unknown1* type_143[512];
typedef Unknown1* type_144[128];
typedef Unknown1* type_145[512];
typedef unsigned char type_146[64];
typedef Unknown1* type_147[512];
































































































































































































































































































































































































































































































































struct _anon18
{
	char stg_no;
	char rom_no;
	char flr_no;
	char ene_max;
};







































































































































































































void(*bhEne01Parent_Mode0)(BH_PWORK*)[2];
void(*bhEne01Arm_Mode0)(BH_PWORK*)[4];
void(*bhEne01Arm_DamageMode)(BH_PWORK*)[2];
void(*bhEne01Leg_Mode0)(BH_PWORK*)[4];
void(*bhEne01Leg_DamageMode)(BH_PWORK*)[1];
void(*bhEne01Head_Mode0)(BH_PWORK*)[4];
void(*bhEne01Head_DamageMode)(BH_PWORK*)[1];
void(*bhEne01Cap_Mode0)(BH_PWORK*)[4];
void(*bhEne01Cap_DamageMode)(BH_PWORK*)[2];
void(*bhEne01Worm_Mode0)(BH_PWORK*)[4];
void(*bhEne01Worm_MoveMode)(BH_PWORK*)[3];
void(*bhEne01Bom_Mode0)(BH_PWORK*)[2];
void(*bhEne01Scope_Mode0)(BH_PWORK*)[2];
extern SYS* sys;
BH_PWORK ene[0];
extern ROOM* rom;
extern NJS_MATRIX lcmat[12];
extern BH_PWORK* plp;
int En01_PlyMtn_OffsetTbl[0];
Unknown18 Ene01BomCapColTab[3];
extern Unknown1 eff[512];

void bhEne01Parent(BH_PWORK* epw);
void bhEne01Parent_Init(BH_PWORK* epw);
void bhEne01Parent_Move();
void bhEne01Parent_NearestCheck();
void bhEne01Parent_NoKaidanCheck();
void bhEne01Arm(BH_PWORK* epw);
void bhEne01Arm_Init(BH_PWORK* epw);
void bhEne01Arm_Move(BH_PWORK* epw);
void bhEne01Arm_MV00();
void bhEne01Arm_Damage(BH_PWORK* epw);
void bhEne01Arm_DG00(BH_PWORK* epw);
void bhEne01Arm_DG01(BH_PWORK* epw);
void bhEne01Leg(BH_PWORK* epw);
void bhEne01Leg_Init(BH_PWORK* epw);
void bhEne01Leg_Move(BH_PWORK* epw);
void bhEne01Leg_MV00();
void bhEne01Leg_Damage(BH_PWORK* epw);
void bhEne01Leg_DG00(BH_PWORK* epw);
void bhEne01Head(BH_PWORK* epw);
void bhEne01Head_Init(BH_PWORK* epw);
void bhEne01Head_Move(BH_PWORK* epw);
void bhEne01Head_MV00();
void bhEne01Head_Damage(BH_PWORK* epw);
void bhEne01Head_DG00(BH_PWORK* epw);
void bhEne01Cap(BH_PWORK* epw);
void bhEne01Cap_Init(BH_PWORK* epw);
void bhEne01Cap_Move(BH_PWORK* epw);
void bhEne01Cap_MV00();
void bhEne01Cap_Damage(BH_PWORK* epw);
void bhEne01Cap_DG00(BH_PWORK* epw);
void bhEne01Cap_DG01(BH_PWORK* epw);
void bhEne01Worm(BH_PWORK* epw);
void bhEne01Worm_Init(BH_PWORK* epw);
void bhEne01Worm_Move(BH_PWORK* epw);
void bhEne01Worm_MV00();
void bhEne01Worm_MV01(BH_PWORK* epw);
void bhEne01Worm_MV02(BH_PWORK* epw);
void bhEne01Bom(BH_PWORK* epw);
void bhEne01Bom_Init(BH_PWORK* epw);
void bhEne01Bom_Move(BH_PWORK* epw);
void bhEne01Scope(BH_PWORK* epw);
void bhEne01Scope_Init(BH_PWORK* epw);
void bhEne01Scope_Move();
void bhEne01Scope_Effect(BH_PWORK* epw);

// 
// Start address: 0x18bc70
void bhEne01Parent(BH_PWORK* epw)
{
	// Line 225, Address: 0x18bc70, Func Offset: 0
	// Func End, Address: 0x18bc90, Func Offset: 0x20
}

// 
// Start address: 0x18bc90
void bhEne01Parent_Init(BH_PWORK* epw)
{
	// Line 243, Address: 0x18bc90, Func Offset: 0
	// Line 244, Address: 0x18bc94, Func Offset: 0x4
	// Line 245, Address: 0x18bc98, Func Offset: 0x8
	// Line 244, Address: 0x18bc9c, Func Offset: 0xc
	// Line 245, Address: 0x18bca4, Func Offset: 0x14
	// Line 246, Address: 0x18bca8, Func Offset: 0x18
	// Line 247, Address: 0x18bcac, Func Offset: 0x1c
	// Line 249, Address: 0x18bcb0, Func Offset: 0x20
	// Func End, Address: 0x18bcb8, Func Offset: 0x28
}

// 
// Start address: 0x18bcc0
void bhEne01Parent_Move()
{
	// Line 265, Address: 0x18bcc0, Func Offset: 0
	// Line 267, Address: 0x18bcc8, Func Offset: 0x8
	// Line 269, Address: 0x18bcd0, Func Offset: 0x10
	// Line 270, Address: 0x18bcd8, Func Offset: 0x18
	// Func End, Address: 0x18bce4, Func Offset: 0x24
}

// 
// Start address: 0x18bcf0
void bhEne01Parent_NearestCheck()
{
	int i;
	float dist;
	BH_PWORK* epp;
	BH_PWORK* ep;
	// Line 293, Address: 0x18bcf0, Func Offset: 0
	// Line 295, Address: 0x18bcf8, Func Offset: 0x8
	// Line 297, Address: 0x18bcfc, Func Offset: 0xc
	// Line 294, Address: 0x18bd08, Func Offset: 0x18
	// Line 297, Address: 0x18bd0c, Func Offset: 0x1c
	// Line 299, Address: 0x18bd18, Func Offset: 0x28
	// Line 307, Address: 0x18bd74, Func Offset: 0x84
	// Line 308, Address: 0x18bd80, Func Offset: 0x90
	// Line 310, Address: 0x18bda0, Func Offset: 0xb0
	// Line 311, Address: 0x18bda4, Func Offset: 0xb4
	// Line 314, Address: 0x18bda8, Func Offset: 0xb8
	// Line 316, Address: 0x18bdd0, Func Offset: 0xe0
	// Line 318, Address: 0x18bdd8, Func Offset: 0xe8
	// Line 320, Address: 0x18bde8, Func Offset: 0xf8
	// Func End, Address: 0x18bdf0, Func Offset: 0x100
}

// 
// Start address: 0x18bdf0
void bhEne01Parent_NoKaidanCheck()
{
	int no;
	int n;
	int i;
	BH_PWORK* ep;
	BH_PWORK* ep_p[10];
	_anon18* stg_p;
	_anon18 ene_stg_tbl[2];
	// Line 364, Address: 0x18bdf0, Func Offset: 0
	// Line 357, Address: 0x18bdf4, Func Offset: 0x4
	// Line 364, Address: 0x18bdfc, Func Offset: 0xc
	// Line 362, Address: 0x18be00, Func Offset: 0x10
	// Line 344, Address: 0x18be04, Func Offset: 0x14
	// Line 362, Address: 0x18be08, Func Offset: 0x18
	// Line 364, Address: 0x18be0c, Func Offset: 0x1c
	// Line 366, Address: 0x18be10, Func Offset: 0x20
	// Line 368, Address: 0x18be20, Func Offset: 0x30
	// Line 374, Address: 0x18be3c, Func Offset: 0x4c
	// Line 377, Address: 0x18be50, Func Offset: 0x60
	// Line 379, Address: 0x18be7c, Func Offset: 0x8c
	// Line 387, Address: 0x18bed8, Func Offset: 0xe8
	// Line 388, Address: 0x18bee0, Func Offset: 0xf0
	// Line 391, Address: 0x18bef0, Func Offset: 0x100
	// Line 394, Address: 0x18bef8, Func Offset: 0x108
	// Line 396, Address: 0x18bf04, Func Offset: 0x114
	// Line 397, Address: 0x18bf08, Func Offset: 0x118
	// Line 400, Address: 0x18bf30, Func Offset: 0x140
	// Line 402, Address: 0x18bf40, Func Offset: 0x150
	// Line 404, Address: 0x18bf4c, Func Offset: 0x15c
	// Line 405, Address: 0x18bf54, Func Offset: 0x164
	// Line 404, Address: 0x18bf5c, Func Offset: 0x16c
	// Line 405, Address: 0x18bf68, Func Offset: 0x178
	// Line 407, Address: 0x18bf70, Func Offset: 0x180
	// Func End, Address: 0x18bf7c, Func Offset: 0x18c
}

// 
// Start address: 0x18bf80
void bhEne01Arm(BH_PWORK* epw)
{
	// Line 426, Address: 0x18bf80, Func Offset: 0
	// Func End, Address: 0x18bfa0, Func Offset: 0x20
}

// 
// Start address: 0x18bfa0
void bhEne01Arm_Init(BH_PWORK* epw)
{
	// Line 445, Address: 0x18bfa0, Func Offset: 0
	// Line 446, Address: 0x18bfac, Func Offset: 0xc
	// Line 447, Address: 0x18bfb0, Func Offset: 0x10
	// Line 450, Address: 0x18bfbc, Func Offset: 0x1c
	// Line 452, Address: 0x18bfc8, Func Offset: 0x28
	// Line 455, Address: 0x18bfd8, Func Offset: 0x38
	// Line 457, Address: 0x18bfdc, Func Offset: 0x3c
	// Line 460, Address: 0x18bfe0, Func Offset: 0x40
	// Line 455, Address: 0x18bfe4, Func Offset: 0x44
	// Line 456, Address: 0x18bfe8, Func Offset: 0x48
	// Line 457, Address: 0x18bff0, Func Offset: 0x50
	// Line 458, Address: 0x18bff8, Func Offset: 0x58
	// Line 460, Address: 0x18c000, Func Offset: 0x60
	// Line 461, Address: 0x18c004, Func Offset: 0x64
	// Line 462, Address: 0x18c008, Func Offset: 0x68
	// Line 463, Address: 0x18c00c, Func Offset: 0x6c
	// Line 464, Address: 0x18c010, Func Offset: 0x70
	// Func End, Address: 0x18c020, Func Offset: 0x80
}

// 
// Start address: 0x18c020
void bhEne01Arm_Move(BH_PWORK* epw)
{
	// Line 481, Address: 0x18c020, Func Offset: 0
	// Func End, Address: 0x18c028, Func Offset: 0x8
}

// 
// Start address: 0x18c030
void bhEne01Arm_MV00()
{
	// Line 501, Address: 0x18c030, Func Offset: 0
	// Func End, Address: 0x18c038, Func Offset: 0x8
}

// 
// Start address: 0x18c040
void bhEne01Arm_Damage(BH_PWORK* epw)
{
	// Line 518, Address: 0x18c040, Func Offset: 0
	// Func End, Address: 0x18c060, Func Offset: 0x20
}

// 
// Start address: 0x18c060
void bhEne01Arm_DG00(BH_PWORK* epw)
{
	int i;
	NJS_POINT3 pd;
	NJS_POINT3 ps;
	BH_PWORK* epp;
	OBJECT_WORK* owk;
	NJS_OBJECT* obj;
	// Line 537, Address: 0x18c060, Func Offset: 0
	// Line 538, Address: 0x18c078, Func Offset: 0x18
	// Line 540, Address: 0x18c07c, Func Offset: 0x1c
	// Line 545, Address: 0x18c084, Func Offset: 0x24
	// Line 538, Address: 0x18c088, Func Offset: 0x28
	// Line 545, Address: 0x18c08c, Func Offset: 0x2c
	// Line 539, Address: 0x18c090, Func Offset: 0x30
	// Line 545, Address: 0x18c094, Func Offset: 0x34
	// Line 548, Address: 0x18c0d0, Func Offset: 0x70
	// Line 549, Address: 0x18c0d4, Func Offset: 0x74
	// Line 552, Address: 0x18c0e0, Func Offset: 0x80
	// Line 554, Address: 0x18c100, Func Offset: 0xa0
	// Line 555, Address: 0x18c104, Func Offset: 0xa4
	// Line 556, Address: 0x18c108, Func Offset: 0xa8
	// Line 557, Address: 0x18c10c, Func Offset: 0xac
	// Line 558, Address: 0x18c110, Func Offset: 0xb0
	// Line 557, Address: 0x18c11c, Func Offset: 0xbc
	// Line 558, Address: 0x18c120, Func Offset: 0xc0
	// Line 560, Address: 0x18c12c, Func Offset: 0xcc
	// Line 561, Address: 0x18c130, Func Offset: 0xd0
	// Line 560, Address: 0x18c13c, Func Offset: 0xdc
	// Line 561, Address: 0x18c140, Func Offset: 0xe0
	// Line 564, Address: 0x18c148, Func Offset: 0xe8
	// Line 565, Address: 0x18c158, Func Offset: 0xf8
	// Line 564, Address: 0x18c160, Func Offset: 0x100
	// Line 568, Address: 0x18c164, Func Offset: 0x104
	// Line 564, Address: 0x18c168, Func Offset: 0x108
	// Line 565, Address: 0x18c170, Func Offset: 0x110
	// Line 566, Address: 0x18c18c, Func Offset: 0x12c
	// Line 568, Address: 0x18c1a0, Func Offset: 0x140
	// Line 570, Address: 0x18c1a8, Func Offset: 0x148
	// Line 571, Address: 0x18c1b4, Func Offset: 0x154
	// Line 572, Address: 0x18c1c8, Func Offset: 0x168
	// Line 573, Address: 0x18c1dc, Func Offset: 0x17c
	// Line 574, Address: 0x18c1e0, Func Offset: 0x180
	// Line 575, Address: 0x18c1e4, Func Offset: 0x184
	// Line 576, Address: 0x18c200, Func Offset: 0x1a0
	// Line 583, Address: 0x18c204, Func Offset: 0x1a4
	// Line 576, Address: 0x18c20c, Func Offset: 0x1ac
	// Line 579, Address: 0x18c214, Func Offset: 0x1b4
	// Line 580, Address: 0x18c218, Func Offset: 0x1b8
	// Line 579, Address: 0x18c21c, Func Offset: 0x1bc
	// Line 580, Address: 0x18c238, Func Offset: 0x1d8
	// Line 581, Address: 0x18c23c, Func Offset: 0x1dc
	// Line 583, Address: 0x18c240, Func Offset: 0x1e0
	// Line 584, Address: 0x18c24c, Func Offset: 0x1ec
	// Line 586, Address: 0x18c278, Func Offset: 0x218
	// Line 587, Address: 0x18c288, Func Offset: 0x228
	// Line 588, Address: 0x18c2a0, Func Offset: 0x240
	// Line 589, Address: 0x18c2c0, Func Offset: 0x260
	// Line 590, Address: 0x18c2c4, Func Offset: 0x264
	// Line 592, Address: 0x18c2cc, Func Offset: 0x26c
	// Line 597, Address: 0x18c2d4, Func Offset: 0x274
	// Line 595, Address: 0x18c2e4, Func Offset: 0x284
	// Line 597, Address: 0x18c2e8, Func Offset: 0x288
	// Line 599, Address: 0x18c2f4, Func Offset: 0x294
	// Line 595, Address: 0x18c2f8, Func Offset: 0x298
	// Line 597, Address: 0x18c2fc, Func Offset: 0x29c
	// Line 595, Address: 0x18c300, Func Offset: 0x2a0
	// Line 597, Address: 0x18c308, Func Offset: 0x2a8
	// Line 595, Address: 0x18c30c, Func Offset: 0x2ac
	// Line 597, Address: 0x18c310, Func Offset: 0x2b0
	// Line 595, Address: 0x18c314, Func Offset: 0x2b4
	// Line 597, Address: 0x18c318, Func Offset: 0x2b8
	// Line 598, Address: 0x18c324, Func Offset: 0x2c4
	// Line 599, Address: 0x18c330, Func Offset: 0x2d0
	// Line 601, Address: 0x18c35c, Func Offset: 0x2fc
	// Line 604, Address: 0x18c360, Func Offset: 0x300
	// Line 605, Address: 0x18c370, Func Offset: 0x310
	// Line 606, Address: 0x18c37c, Func Offset: 0x31c
	// Line 611, Address: 0x18c384, Func Offset: 0x324
	// Line 606, Address: 0x18c38c, Func Offset: 0x32c
	// Line 608, Address: 0x18c394, Func Offset: 0x334
	// Line 609, Address: 0x18c3a0, Func Offset: 0x340
	// Line 610, Address: 0x18c3a4, Func Offset: 0x344
	// Line 611, Address: 0x18c3a8, Func Offset: 0x348
	// Line 612, Address: 0x18c3b4, Func Offset: 0x354
	// Line 617, Address: 0x18c3b8, Func Offset: 0x358
	// Line 612, Address: 0x18c3bc, Func Offset: 0x35c
	// Line 613, Address: 0x18c3c0, Func Offset: 0x360
	// Line 614, Address: 0x18c3c8, Func Offset: 0x368
	// Line 616, Address: 0x18c3d0, Func Offset: 0x370
	// Line 617, Address: 0x18c3f4, Func Offset: 0x394
	// Line 619, Address: 0x18c3fc, Func Offset: 0x39c
	// Line 620, Address: 0x18c408, Func Offset: 0x3a8
	// Line 621, Address: 0x18c428, Func Offset: 0x3c8
	// Line 622, Address: 0x18c448, Func Offset: 0x3e8
	// Line 623, Address: 0x18c44c, Func Offset: 0x3ec
	// Line 624, Address: 0x18c450, Func Offset: 0x3f0
	// Line 627, Address: 0x18c470, Func Offset: 0x410
	// Line 630, Address: 0x18c4ac, Func Offset: 0x44c
	// Line 631, Address: 0x18c4b0, Func Offset: 0x450
	// Line 633, Address: 0x18c4b8, Func Offset: 0x458
	// Line 637, Address: 0x18c4c0, Func Offset: 0x460
	// Line 640, Address: 0x18c4e0, Func Offset: 0x480
	// Line 644, Address: 0x18c4e8, Func Offset: 0x488
	// Line 640, Address: 0x18c4ec, Func Offset: 0x48c
	// Line 641, Address: 0x18c4f4, Func Offset: 0x494
	// Line 643, Address: 0x18c500, Func Offset: 0x4a0
	// Line 644, Address: 0x18c508, Func Offset: 0x4a8
	// Line 646, Address: 0x18c510, Func Offset: 0x4b0
	// Line 647, Address: 0x18c51c, Func Offset: 0x4bc
	// Line 648, Address: 0x18c530, Func Offset: 0x4d0
	// Line 649, Address: 0x18c544, Func Offset: 0x4e4
	// Line 650, Address: 0x18c548, Func Offset: 0x4e8
	// Line 651, Address: 0x18c54c, Func Offset: 0x4ec
	// Line 652, Address: 0x18c568, Func Offset: 0x508
	// Line 659, Address: 0x18c574, Func Offset: 0x514
	// Func End, Address: 0x18c590, Func Offset: 0x530
}

// 
// Start address: 0x18c590
void bhEne01Arm_DG01(BH_PWORK* epw)
{
	int i;
	NJS_POINT3 pd;
	OBJECT_WORK* owk;
	NJS_OBJECT* obj;
	BH_PWORK* epp;
	// Line 679, Address: 0x18c590, Func Offset: 0
	// Line 688, Address: 0x18c5b0, Func Offset: 0x20
	// Line 680, Address: 0x18c5b4, Func Offset: 0x24
	// Line 688, Address: 0x18c5b8, Func Offset: 0x28
	// Line 691, Address: 0x18c5e0, Func Offset: 0x50
	// Line 692, Address: 0x18c5e8, Func Offset: 0x58
	// Line 691, Address: 0x18c5f0, Func Offset: 0x60
	// Line 692, Address: 0x18c5fc, Func Offset: 0x6c
	// Line 693, Address: 0x18c604, Func Offset: 0x74
	// Line 695, Address: 0x18c610, Func Offset: 0x80
	// Line 696, Address: 0x18c628, Func Offset: 0x98
	// Line 697, Address: 0x18c63c, Func Offset: 0xac
	// Line 699, Address: 0x18c650, Func Offset: 0xc0
	// Line 700, Address: 0x18c658, Func Offset: 0xc8
	// Line 701, Address: 0x18c660, Func Offset: 0xd0
	// Line 702, Address: 0x18c668, Func Offset: 0xd8
	// Line 726, Address: 0x18c670, Func Offset: 0xe0
	// Line 727, Address: 0x18c698, Func Offset: 0x108
	// Line 728, Address: 0x18c6a4, Func Offset: 0x114
	// Line 729, Address: 0x18c6a8, Func Offset: 0x118
	// Line 730, Address: 0x18c6ac, Func Offset: 0x11c
	// Line 733, Address: 0x18c6b8, Func Offset: 0x128
	// Line 735, Address: 0x18c6d8, Func Offset: 0x148
	// Line 736, Address: 0x18c6dc, Func Offset: 0x14c
	// Line 737, Address: 0x18c6e0, Func Offset: 0x150
	// Line 738, Address: 0x18c6e4, Func Offset: 0x154
	// Line 739, Address: 0x18c6e8, Func Offset: 0x158
	// Line 738, Address: 0x18c6f4, Func Offset: 0x164
	// Line 739, Address: 0x18c6f8, Func Offset: 0x168
	// Line 741, Address: 0x18c704, Func Offset: 0x174
	// Line 742, Address: 0x18c708, Func Offset: 0x178
	// Line 741, Address: 0x18c710, Func Offset: 0x180
	// Line 742, Address: 0x18c714, Func Offset: 0x184
	// Line 745, Address: 0x18c720, Func Offset: 0x190
	// Line 746, Address: 0x18c728, Func Offset: 0x198
	// Line 745, Address: 0x18c730, Func Offset: 0x1a0
	// Line 746, Address: 0x18c73c, Func Offset: 0x1ac
	// Line 747, Address: 0x18c744, Func Offset: 0x1b4
	// Line 749, Address: 0x18c764, Func Offset: 0x1d4
	// Line 750, Address: 0x18c768, Func Offset: 0x1d8
	// Line 749, Address: 0x18c770, Func Offset: 0x1e0
	// Line 750, Address: 0x18c78c, Func Offset: 0x1fc
	// Line 751, Address: 0x18c794, Func Offset: 0x204
	// Line 754, Address: 0x18c798, Func Offset: 0x208
	// Line 751, Address: 0x18c79c, Func Offset: 0x20c
	// Line 753, Address: 0x18c7a4, Func Offset: 0x214
	// Line 754, Address: 0x18c7b0, Func Offset: 0x220
	// Line 756, Address: 0x18c7c0, Func Offset: 0x230
	// Line 757, Address: 0x18c7d0, Func Offset: 0x240
	// Line 760, Address: 0x18c7d8, Func Offset: 0x248
	// Line 761, Address: 0x18c7dc, Func Offset: 0x24c
	// Line 764, Address: 0x18c7e8, Func Offset: 0x258
	// Line 765, Address: 0x18c7ec, Func Offset: 0x25c
	// Line 764, Address: 0x18c7f0, Func Offset: 0x260
	// Line 765, Address: 0x18c810, Func Offset: 0x280
	// Line 767, Address: 0x18c818, Func Offset: 0x288
	// Line 768, Address: 0x18c824, Func Offset: 0x294
	// Line 769, Address: 0x18c844, Func Offset: 0x2b4
	// Line 770, Address: 0x18c864, Func Offset: 0x2d4
	// Line 771, Address: 0x18c868, Func Offset: 0x2d8
	// Line 772, Address: 0x18c86c, Func Offset: 0x2dc
	// Line 773, Address: 0x18c888, Func Offset: 0x2f8
	// Line 776, Address: 0x18c890, Func Offset: 0x300
	// Line 778, Address: 0x18c8b0, Func Offset: 0x320
	// Line 779, Address: 0x18c8b4, Func Offset: 0x324
	// Line 780, Address: 0x18c8b8, Func Offset: 0x328
	// Line 781, Address: 0x18c8bc, Func Offset: 0x32c
	// Line 782, Address: 0x18c8c0, Func Offset: 0x330
	// Line 781, Address: 0x18c8cc, Func Offset: 0x33c
	// Line 782, Address: 0x18c8d0, Func Offset: 0x340
	// Line 784, Address: 0x18c8dc, Func Offset: 0x34c
	// Line 785, Address: 0x18c8e0, Func Offset: 0x350
	// Line 784, Address: 0x18c8e8, Func Offset: 0x358
	// Line 785, Address: 0x18c8ec, Func Offset: 0x35c
	// Line 788, Address: 0x18c8f8, Func Offset: 0x368
	// Line 789, Address: 0x18c8fc, Func Offset: 0x36c
	// Line 792, Address: 0x18c90c, Func Offset: 0x37c
	// Line 788, Address: 0x18c910, Func Offset: 0x380
	// Line 789, Address: 0x18c914, Func Offset: 0x384
	// Line 792, Address: 0x18c918, Func Offset: 0x388
	// Line 789, Address: 0x18c91c, Func Offset: 0x38c
	// Line 792, Address: 0x18c92c, Func Offset: 0x39c
	// Line 794, Address: 0x18c95c, Func Offset: 0x3cc
	// Line 795, Address: 0x18c960, Func Offset: 0x3d0
	// Line 796, Address: 0x18c964, Func Offset: 0x3d4
	// Line 799, Address: 0x18c970, Func Offset: 0x3e0
	// Line 800, Address: 0x18c974, Func Offset: 0x3e4
	// Line 799, Address: 0x18c978, Func Offset: 0x3e8
	// Line 800, Address: 0x18c97c, Func Offset: 0x3ec
	// Line 802, Address: 0x18c984, Func Offset: 0x3f4
	// Line 803, Address: 0x18c990, Func Offset: 0x400
	// Line 804, Address: 0x18c9a4, Func Offset: 0x414
	// Line 805, Address: 0x18c9b8, Func Offset: 0x428
	// Line 806, Address: 0x18c9bc, Func Offset: 0x42c
	// Line 807, Address: 0x18c9c0, Func Offset: 0x430
	// Line 808, Address: 0x18c9e0, Func Offset: 0x450
	// Line 810, Address: 0x18c9e8, Func Offset: 0x458
	// Line 814, Address: 0x18c9f0, Func Offset: 0x460
	// Line 813, Address: 0x18c9f4, Func Offset: 0x464
	// Line 814, Address: 0x18c9f8, Func Offset: 0x468
	// Line 815, Address: 0x18ca04, Func Offset: 0x474
	// Line 814, Address: 0x18ca08, Func Offset: 0x478
	// Line 813, Address: 0x18ca0c, Func Offset: 0x47c
	// Line 814, Address: 0x18ca10, Func Offset: 0x480
	// Line 815, Address: 0x18ca1c, Func Offset: 0x48c
	// Line 814, Address: 0x18ca20, Func Offset: 0x490
	// Line 815, Address: 0x18ca28, Func Offset: 0x498
	// Line 814, Address: 0x18ca2c, Func Offset: 0x49c
	// Line 815, Address: 0x18ca38, Func Offset: 0x4a8
	// Line 817, Address: 0x18ca64, Func Offset: 0x4d4
	// Line 819, Address: 0x18ca68, Func Offset: 0x4d8
	// Line 821, Address: 0x18ca6c, Func Offset: 0x4dc
	// Line 819, Address: 0x18ca78, Func Offset: 0x4e8
	// Line 821, Address: 0x18ca7c, Func Offset: 0x4ec
	// Line 822, Address: 0x18ca84, Func Offset: 0x4f4
	// Line 825, Address: 0x18ca9c, Func Offset: 0x50c
	// Line 828, Address: 0x18caac, Func Offset: 0x51c
	// Line 825, Address: 0x18cab0, Func Offset: 0x520
	// Line 827, Address: 0x18cacc, Func Offset: 0x53c
	// Line 828, Address: 0x18cad4, Func Offset: 0x544
	// Line 830, Address: 0x18cadc, Func Offset: 0x54c
	// Line 831, Address: 0x18cafc, Func Offset: 0x56c
	// Line 832, Address: 0x18cb10, Func Offset: 0x580
	// Line 833, Address: 0x18cb24, Func Offset: 0x594
	// Line 834, Address: 0x18cb2c, Func Offset: 0x59c
	// Line 837, Address: 0x18cb48, Func Offset: 0x5b8
	// Line 840, Address: 0x18cb84, Func Offset: 0x5f4
	// Line 842, Address: 0x18cb88, Func Offset: 0x5f8
	// Line 840, Address: 0x18cb8c, Func Offset: 0x5fc
	// Line 841, Address: 0x18cba4, Func Offset: 0x614
	// Line 843, Address: 0x18cbb0, Func Offset: 0x620
	// Line 846, Address: 0x18cbb8, Func Offset: 0x628
	// Line 847, Address: 0x18cbc8, Func Offset: 0x638
	// Line 848, Address: 0x18cbd8, Func Offset: 0x648
	// Line 850, Address: 0x18cbe8, Func Offset: 0x658
	// Line 853, Address: 0x18cbf0, Func Offset: 0x660
	// Line 858, Address: 0x18cbf4, Func Offset: 0x664
	// Line 855, Address: 0x18cbf8, Func Offset: 0x668
	// Line 858, Address: 0x18cbfc, Func Offset: 0x66c
	// Line 854, Address: 0x18cc00, Func Offset: 0x670
	// Line 853, Address: 0x18cc04, Func Offset: 0x674
	// Line 855, Address: 0x18cc08, Func Offset: 0x678
	// Line 858, Address: 0x18cc10, Func Offset: 0x680
	// Line 854, Address: 0x18cc14, Func Offset: 0x684
	// Line 855, Address: 0x18cc18, Func Offset: 0x688
	// Line 856, Address: 0x18cc20, Func Offset: 0x690
	// Line 858, Address: 0x18cc28, Func Offset: 0x698
	// Line 859, Address: 0x18cc38, Func Offset: 0x6a8
	// Line 861, Address: 0x18cc40, Func Offset: 0x6b0
	// Line 862, Address: 0x18cc60, Func Offset: 0x6d0
	// Line 863, Address: 0x18cc74, Func Offset: 0x6e4
	// Line 864, Address: 0x18cc88, Func Offset: 0x6f8
	// Line 865, Address: 0x18cc90, Func Offset: 0x700
	// Line 867, Address: 0x18ccb0, Func Offset: 0x720
	// Line 870, Address: 0x18ccec, Func Offset: 0x75c
	// Line 871, Address: 0x18cd08, Func Offset: 0x778
	// Line 873, Address: 0x18cd14, Func Offset: 0x784
	// Line 876, Address: 0x18cd1c, Func Offset: 0x78c
	// Line 877, Address: 0x18cd2c, Func Offset: 0x79c
	// Line 878, Address: 0x18cd3c, Func Offset: 0x7ac
	// Line 880, Address: 0x18cd4c, Func Offset: 0x7bc
	// Line 884, Address: 0x18cd54, Func Offset: 0x7c4
	// Line 883, Address: 0x18cd58, Func Offset: 0x7c8
	// Line 884, Address: 0x18cd5c, Func Offset: 0x7cc
	// Line 883, Address: 0x18cd70, Func Offset: 0x7e0
	// Line 884, Address: 0x18cd74, Func Offset: 0x7e4
	// Line 885, Address: 0x18cd80, Func Offset: 0x7f0
	// Line 884, Address: 0x18cd84, Func Offset: 0x7f4
	// Line 885, Address: 0x18cd8c, Func Offset: 0x7fc
	// Line 884, Address: 0x18cd90, Func Offset: 0x800
	// Line 885, Address: 0x18cd98, Func Offset: 0x808
	// Line 887, Address: 0x18cda8, Func Offset: 0x818
	// Line 888, Address: 0x18cdc0, Func Offset: 0x830
	// Line 889, Address: 0x18cdcc, Func Offset: 0x83c
	// Line 891, Address: 0x18cdd8, Func Offset: 0x848
	// Line 894, Address: 0x18cddc, Func Offset: 0x84c
	// Line 891, Address: 0x18cde0, Func Offset: 0x850
	// Line 893, Address: 0x18cde8, Func Offset: 0x858
	// Line 894, Address: 0x18cdf0, Func Offset: 0x860
	// Line 896, Address: 0x18cdf8, Func Offset: 0x868
	// Line 897, Address: 0x18ce04, Func Offset: 0x874
	// Line 898, Address: 0x18ce18, Func Offset: 0x888
	// Line 899, Address: 0x18ce2c, Func Offset: 0x89c
	// Line 900, Address: 0x18ce30, Func Offset: 0x8a0
	// Line 901, Address: 0x18ce34, Func Offset: 0x8a4
	// Line 908, Address: 0x18ce50, Func Offset: 0x8c0
	// Line 909, Address: 0x18ce6c, Func Offset: 0x8dc
	// Func End, Address: 0x18ce90, Func Offset: 0x900
}

// 
// Start address: 0x18ce90
void bhEne01Leg(BH_PWORK* epw)
{
	// Line 927, Address: 0x18ce90, Func Offset: 0
	// Func End, Address: 0x18ceb0, Func Offset: 0x20
}

// 
// Start address: 0x18ceb0
void bhEne01Leg_Init(BH_PWORK* epw)
{
	// Line 945, Address: 0x18ceb0, Func Offset: 0
	// Line 946, Address: 0x18cebc, Func Offset: 0xc
	// Line 947, Address: 0x18cec0, Func Offset: 0x10
	// Line 950, Address: 0x18cecc, Func Offset: 0x1c
	// Line 952, Address: 0x18ced8, Func Offset: 0x28
	// Line 955, Address: 0x18cee8, Func Offset: 0x38
	// Line 957, Address: 0x18ceec, Func Offset: 0x3c
	// Line 960, Address: 0x18cef0, Func Offset: 0x40
	// Line 955, Address: 0x18cef4, Func Offset: 0x44
	// Line 956, Address: 0x18cef8, Func Offset: 0x48
	// Line 957, Address: 0x18cf00, Func Offset: 0x50
	// Line 958, Address: 0x18cf08, Func Offset: 0x58
	// Line 960, Address: 0x18cf10, Func Offset: 0x60
	// Line 961, Address: 0x18cf14, Func Offset: 0x64
	// Line 962, Address: 0x18cf18, Func Offset: 0x68
	// Line 963, Address: 0x18cf1c, Func Offset: 0x6c
	// Line 964, Address: 0x18cf20, Func Offset: 0x70
	// Func End, Address: 0x18cf30, Func Offset: 0x80
}

// 
// Start address: 0x18cf30
void bhEne01Leg_Move(BH_PWORK* epw)
{
	// Line 981, Address: 0x18cf30, Func Offset: 0
	// Func End, Address: 0x18cf38, Func Offset: 0x8
}

// 
// Start address: 0x18cf40
void bhEne01Leg_MV00()
{
	// Line 1014, Address: 0x18cf40, Func Offset: 0
	// Func End, Address: 0x18cf48, Func Offset: 0x8
}

// 
// Start address: 0x18cf50
void bhEne01Leg_Damage(BH_PWORK* epw)
{
	// Line 1031, Address: 0x18cf50, Func Offset: 0
	// Func End, Address: 0x18cf70, Func Offset: 0x20
}

// 
// Start address: 0x18cf70
void bhEne01Leg_DG00(BH_PWORK* epw)
{
	NJS_POINT3 pd;
	BH_PWORK* epp;
	OBJECT_WORK* owk;
	NJS_OBJECT* obj;
	BOUNDARY* hp;
	// Line 1050, Address: 0x18cf70, Func Offset: 0
	// Line 1054, Address: 0x18cf84, Func Offset: 0x14
	// Line 1059, Address: 0x18cf8c, Func Offset: 0x1c
	// Line 1062, Address: 0x18cfb8, Func Offset: 0x48
	// Line 1067, Address: 0x18cfbc, Func Offset: 0x4c
	// Line 1068, Address: 0x18cfc4, Func Offset: 0x54
	// Line 1070, Address: 0x18cfd0, Func Offset: 0x60
	// Line 1072, Address: 0x18cfdc, Func Offset: 0x6c
	// Line 1073, Address: 0x18cfe4, Func Offset: 0x74
	// Line 1072, Address: 0x18cfe8, Func Offset: 0x78
	// Line 1073, Address: 0x18cfec, Func Offset: 0x7c
	// Line 1074, Address: 0x18cff4, Func Offset: 0x84
	// Line 1075, Address: 0x18d018, Func Offset: 0xa8
	// Line 1078, Address: 0x18d024, Func Offset: 0xb4
	// Line 1080, Address: 0x18d044, Func Offset: 0xd4
	// Line 1081, Address: 0x18d048, Func Offset: 0xd8
	// Line 1082, Address: 0x18d04c, Func Offset: 0xdc
	// Line 1083, Address: 0x18d050, Func Offset: 0xe0
	// Line 1084, Address: 0x18d054, Func Offset: 0xe4
	// Line 1083, Address: 0x18d060, Func Offset: 0xf0
	// Line 1084, Address: 0x18d064, Func Offset: 0xf4
	// Line 1086, Address: 0x18d070, Func Offset: 0x100
	// Line 1090, Address: 0x18d074, Func Offset: 0x104
	// Line 1092, Address: 0x18d07c, Func Offset: 0x10c
	// Line 1086, Address: 0x18d080, Func Offset: 0x110
	// Line 1088, Address: 0x18d088, Func Offset: 0x118
	// Line 1089, Address: 0x18d090, Func Offset: 0x120
	// Line 1090, Address: 0x18d098, Func Offset: 0x128
	// Line 1091, Address: 0x18d0a4, Func Offset: 0x134
	// Line 1092, Address: 0x18d0ac, Func Offset: 0x13c
	// Line 1093, Address: 0x18d0bc, Func Offset: 0x14c
	// Line 1095, Address: 0x18d0dc, Func Offset: 0x16c
	// Line 1096, Address: 0x18d0e0, Func Offset: 0x170
	// Line 1095, Address: 0x18d0ec, Func Offset: 0x17c
	// Line 1096, Address: 0x18d0f0, Func Offset: 0x180
	// Line 1097, Address: 0x18d0fc, Func Offset: 0x18c
	// Line 1098, Address: 0x18d110, Func Offset: 0x1a0
	// Line 1101, Address: 0x18d120, Func Offset: 0x1b0
	// Line 1102, Address: 0x18d124, Func Offset: 0x1b4
	// Line 1104, Address: 0x18d154, Func Offset: 0x1e4
	// Line 1106, Address: 0x18d160, Func Offset: 0x1f0
	// Line 1104, Address: 0x18d168, Func Offset: 0x1f8
	// Line 1105, Address: 0x18d170, Func Offset: 0x200
	// Line 1106, Address: 0x18d178, Func Offset: 0x208
	// Line 1107, Address: 0x18d180, Func Offset: 0x210
	// Line 1108, Address: 0x18d194, Func Offset: 0x224
	// Line 1109, Address: 0x18d1a8, Func Offset: 0x238
	// Line 1110, Address: 0x18d1b0, Func Offset: 0x240
	// Line 1124, Address: 0x18d1b8, Func Offset: 0x248
	// Line 1112, Address: 0x18d1bc, Func Offset: 0x24c
	// Line 1125, Address: 0x18d1c0, Func Offset: 0x250
	// Line 1126, Address: 0x18d1d0, Func Offset: 0x260
	// Line 1127, Address: 0x18d1f0, Func Offset: 0x280
	// Line 1135, Address: 0x18d210, Func Offset: 0x2a0
	// Func End, Address: 0x18d228, Func Offset: 0x2b8
}

// 
// Start address: 0x18d230
void bhEne01Head(BH_PWORK* epw)
{
	// Line 1155, Address: 0x18d230, Func Offset: 0
	// Func End, Address: 0x18d250, Func Offset: 0x20
}

// 
// Start address: 0x18d250
void bhEne01Head_Init(BH_PWORK* epw)
{
	// Line 1172, Address: 0x18d250, Func Offset: 0
	// Line 1173, Address: 0x18d25c, Func Offset: 0xc
	// Line 1174, Address: 0x18d260, Func Offset: 0x10
	// Line 1177, Address: 0x18d26c, Func Offset: 0x1c
	// Line 1179, Address: 0x18d278, Func Offset: 0x28
	// Line 1182, Address: 0x18d288, Func Offset: 0x38
	// Line 1187, Address: 0x18d28c, Func Offset: 0x3c
	// Line 1182, Address: 0x18d290, Func Offset: 0x40
	// Line 1183, Address: 0x18d294, Func Offset: 0x44
	// Line 1184, Address: 0x18d29c, Func Offset: 0x4c
	// Line 1185, Address: 0x18d2a4, Func Offset: 0x54
	// Line 1187, Address: 0x18d2ac, Func Offset: 0x5c
	// Line 1188, Address: 0x18d2b0, Func Offset: 0x60
	// Line 1189, Address: 0x18d2b4, Func Offset: 0x64
	// Line 1190, Address: 0x18d2b8, Func Offset: 0x68
	// Line 1191, Address: 0x18d2bc, Func Offset: 0x6c
	// Func End, Address: 0x18d2cc, Func Offset: 0x7c
}

// 
// Start address: 0x18d2d0
void bhEne01Head_Move(BH_PWORK* epw)
{
	// Line 1208, Address: 0x18d2d0, Func Offset: 0
	// Func End, Address: 0x18d2d8, Func Offset: 0x8
}

// 
// Start address: 0x18d2e0
void bhEne01Head_MV00()
{
	// Line 1228, Address: 0x18d2e0, Func Offset: 0
	// Func End, Address: 0x18d2e8, Func Offset: 0x8
}

// 
// Start address: 0x18d2f0
void bhEne01Head_Damage(BH_PWORK* epw)
{
	// Line 1245, Address: 0x18d2f0, Func Offset: 0
	// Func End, Address: 0x18d310, Func Offset: 0x20
}

// 
// Start address: 0x18d310
void bhEne01Head_DG00(BH_PWORK* epw)
{
	int i;
	NJS_POINT3 dv2;
	NJS_POINT3 dv;
	NJS_POINT3 pd;
	NJS_POINT3 ps;
	OBJECT_WORK* owk;
	BH_PWORK* ep;
	BOUNDARY* hp;
	// Line 1264, Address: 0x18d310, Func Offset: 0
	// Line 1268, Address: 0x18d334, Func Offset: 0x24
	// Line 1266, Address: 0x18d338, Func Offset: 0x28
	// Line 1272, Address: 0x18d340, Func Offset: 0x30
	// Line 1275, Address: 0x18d36c, Func Offset: 0x5c
	// Line 1276, Address: 0x18d374, Func Offset: 0x64
	// Line 1277, Address: 0x18d378, Func Offset: 0x68
	// Line 1280, Address: 0x18d37c, Func Offset: 0x6c
	// Line 1278, Address: 0x18d380, Func Offset: 0x70
	// Line 1280, Address: 0x18d384, Func Offset: 0x74
	// Line 1281, Address: 0x18d388, Func Offset: 0x78
	// Line 1282, Address: 0x18d390, Func Offset: 0x80
	// Line 1285, Address: 0x18d39c, Func Offset: 0x8c
	// Line 1288, Address: 0x18d3c4, Func Offset: 0xb4
	// Line 1287, Address: 0x18d3c8, Func Offset: 0xb8
	// Line 1288, Address: 0x18d3cc, Func Offset: 0xbc
	// Line 1290, Address: 0x18d3d0, Func Offset: 0xc0
	// Line 1289, Address: 0x18d3d4, Func Offset: 0xc4
	// Line 1290, Address: 0x18d3d8, Func Offset: 0xc8
	// Line 1292, Address: 0x18d3dc, Func Offset: 0xcc
	// Line 1299, Address: 0x18d3e4, Func Offset: 0xd4
	// Line 1298, Address: 0x18d3e8, Func Offset: 0xd8
	// Line 1300, Address: 0x18d3ec, Func Offset: 0xdc
	// Line 1299, Address: 0x18d3f0, Func Offset: 0xe0
	// Line 1302, Address: 0x18d3f4, Func Offset: 0xe4
	// Line 1309, Address: 0x18d428, Func Offset: 0x118
	// Line 1310, Address: 0x18d430, Func Offset: 0x120
	// Line 1312, Address: 0x18d43c, Func Offset: 0x12c
	// Line 1313, Address: 0x18d440, Func Offset: 0x130
	// Line 1314, Address: 0x18d444, Func Offset: 0x134
	// Line 1315, Address: 0x18d448, Func Offset: 0x138
	// Line 1314, Address: 0x18d450, Func Offset: 0x140
	// Line 1315, Address: 0x18d454, Func Offset: 0x144
	// Line 1316, Address: 0x18d45c, Func Offset: 0x14c
	// Line 1317, Address: 0x18d464, Func Offset: 0x154
	// Line 1319, Address: 0x18d468, Func Offset: 0x158
	// Line 1320, Address: 0x18d478, Func Offset: 0x168
	// Line 1322, Address: 0x18d4a8, Func Offset: 0x198
	// Line 1323, Address: 0x18d4b4, Func Offset: 0x1a4
	// Line 1325, Address: 0x18d4c4, Func Offset: 0x1b4
	// Line 1326, Address: 0x18d4c8, Func Offset: 0x1b8
	// Line 1327, Address: 0x18d4dc, Func Offset: 0x1cc
	// Line 1328, Address: 0x18d50c, Func Offset: 0x1fc
	// Line 1329, Address: 0x18d518, Func Offset: 0x208
	// Line 1330, Address: 0x18d524, Func Offset: 0x214
	// Line 1331, Address: 0x18d540, Func Offset: 0x230
	// Line 1332, Address: 0x18d550, Func Offset: 0x240
	// Line 1334, Address: 0x18d56c, Func Offset: 0x25c
	// Line 1335, Address: 0x18d574, Func Offset: 0x264
	// Line 1336, Address: 0x18d59c, Func Offset: 0x28c
	// Line 1339, Address: 0x18d5a4, Func Offset: 0x294
	// Line 1336, Address: 0x18d5a8, Func Offset: 0x298
	// Line 1339, Address: 0x18d5ac, Func Offset: 0x29c
	// Line 1341, Address: 0x18d5d4, Func Offset: 0x2c4
	// Line 1344, Address: 0x18d5e4, Func Offset: 0x2d4
	// Line 1345, Address: 0x18d5ec, Func Offset: 0x2dc
	// Line 1344, Address: 0x18d5f4, Func Offset: 0x2e4
	// Line 1345, Address: 0x18d5f8, Func Offset: 0x2e8
	// Line 1346, Address: 0x18d604, Func Offset: 0x2f4
	// Line 1350, Address: 0x18d628, Func Offset: 0x318
	// Line 1352, Address: 0x18d650, Func Offset: 0x340
	// Line 1355, Address: 0x18d654, Func Offset: 0x344
	// Line 1352, Address: 0x18d660, Func Offset: 0x350
	// Line 1353, Address: 0x18d664, Func Offset: 0x354
	// Line 1355, Address: 0x18d668, Func Offset: 0x358
	// Line 1357, Address: 0x18d670, Func Offset: 0x360
	// Line 1359, Address: 0x18d680, Func Offset: 0x370
	// Line 1361, Address: 0x18d690, Func Offset: 0x380
	// Line 1362, Address: 0x18d6b4, Func Offset: 0x3a4
	// Line 1363, Address: 0x18d6f4, Func Offset: 0x3e4
	// Line 1364, Address: 0x18d734, Func Offset: 0x424
	// Line 1365, Address: 0x18d74c, Func Offset: 0x43c
	// Line 1366, Address: 0x18d780, Func Offset: 0x470
	// Line 1367, Address: 0x18d784, Func Offset: 0x474
	// Line 1369, Address: 0x18d790, Func Offset: 0x480
	// Line 1370, Address: 0x18d798, Func Offset: 0x488
	// Line 1373, Address: 0x18d7a0, Func Offset: 0x490
	// Line 1374, Address: 0x18d7b8, Func Offset: 0x4a8
	// Line 1375, Address: 0x18d7c4, Func Offset: 0x4b4
	// Line 1378, Address: 0x18d7d0, Func Offset: 0x4c0
	// Line 1380, Address: 0x18d7f0, Func Offset: 0x4e0
	// Line 1388, Address: 0x18d7fc, Func Offset: 0x4ec
	// Func End, Address: 0x18d824, Func Offset: 0x514
}

// 
// Start address: 0x18d830
void bhEne01Cap(BH_PWORK* epw)
{
	// Line 1406, Address: 0x18d830, Func Offset: 0
	// Line 1409, Address: 0x18d83c, Func Offset: 0xc
	// Line 1411, Address: 0x18d854, Func Offset: 0x24
	// Line 1412, Address: 0x18d85c, Func Offset: 0x2c
	// Line 1415, Address: 0x18d864, Func Offset: 0x34
	// Line 1418, Address: 0x18d878, Func Offset: 0x48
	// Line 1420, Address: 0x18d898, Func Offset: 0x68
	// Line 1421, Address: 0x18d8a0, Func Offset: 0x70
	// Func End, Address: 0x18d8b0, Func Offset: 0x80
}

// 
// Start address: 0x18d8b0
void bhEne01Cap_Init(BH_PWORK* epw)
{
	// Line 1437, Address: 0x18d8b0, Func Offset: 0
	// Line 1438, Address: 0x18d8bc, Func Offset: 0xc
	// Line 1439, Address: 0x18d8c0, Func Offset: 0x10
	// Line 1442, Address: 0x18d8cc, Func Offset: 0x1c
	// Line 1444, Address: 0x18d8d8, Func Offset: 0x28
	// Line 1448, Address: 0x18d8e8, Func Offset: 0x38
	// Line 1450, Address: 0x18d8f8, Func Offset: 0x48
	// Line 1451, Address: 0x18d900, Func Offset: 0x50
	// Line 1452, Address: 0x18d904, Func Offset: 0x54
	// Line 1453, Address: 0x18d908, Func Offset: 0x58
	// Line 1454, Address: 0x18d90c, Func Offset: 0x5c
	// Line 1455, Address: 0x18d910, Func Offset: 0x60
	// Line 1456, Address: 0x18d914, Func Offset: 0x64
	// Line 1460, Address: 0x18d918, Func Offset: 0x68
	// Line 1465, Address: 0x18d91c, Func Offset: 0x6c
	// Line 1460, Address: 0x18d920, Func Offset: 0x70
	// Line 1461, Address: 0x18d924, Func Offset: 0x74
	// Line 1462, Address: 0x18d92c, Func Offset: 0x7c
	// Line 1463, Address: 0x18d934, Func Offset: 0x84
	// Line 1465, Address: 0x18d93c, Func Offset: 0x8c
	// Line 1466, Address: 0x18d940, Func Offset: 0x90
	// Line 1467, Address: 0x18d944, Func Offset: 0x94
	// Line 1468, Address: 0x18d948, Func Offset: 0x98
	// Line 1469, Address: 0x18d94c, Func Offset: 0x9c
	// Func End, Address: 0x18d95c, Func Offset: 0xac
}

// 
// Start address: 0x18d960
void bhEne01Cap_Move(BH_PWORK* epw)
{
	// Line 1514, Address: 0x18d960, Func Offset: 0
	// Func End, Address: 0x18d968, Func Offset: 0x8
}

// 
// Start address: 0x18d970
void bhEne01Cap_MV00()
{
	// Line 1534, Address: 0x18d970, Func Offset: 0
	// Func End, Address: 0x18d978, Func Offset: 0x8
}

// 
// Start address: 0x18d980
void bhEne01Cap_Damage(BH_PWORK* epw)
{
	// Line 1551, Address: 0x18d980, Func Offset: 0
	// Func End, Address: 0x18d9a0, Func Offset: 0x20
}

// 
// Start address: 0x18d9a0
void bhEne01Cap_DG00(BH_PWORK* epw)
{
	int i;
	int ay;
	float wk1;
	float wk0;
	float heavy;
	OBJECT_WORK* owk;
	BOUNDARY* hp;
	NJS_POINT3 pp[3];
	NJS_POINT3 p[3];
	// Line 1577, Address: 0x18d9a0, Func Offset: 0
	// Line 1578, Address: 0x18d9bc, Func Offset: 0x1c
	// Line 1577, Address: 0x18d9c0, Func Offset: 0x20
	// Line 1578, Address: 0x18d9c4, Func Offset: 0x24
	// Line 1577, Address: 0x18d9c8, Func Offset: 0x28
	// Line 1578, Address: 0x18d9cc, Func Offset: 0x2c
	// Line 1588, Address: 0x18d9ec, Func Offset: 0x4c
	// Line 1593, Address: 0x18da18, Func Offset: 0x78
	// Line 1591, Address: 0x18da20, Func Offset: 0x80
	// Line 1593, Address: 0x18da24, Func Offset: 0x84
	// Line 1595, Address: 0x18da48, Func Offset: 0xa8
	// Line 1597, Address: 0x18da58, Func Offset: 0xb8
	// Line 1600, Address: 0x18da68, Func Offset: 0xc8
	// Line 1601, Address: 0x18da6c, Func Offset: 0xcc
	// Line 1602, Address: 0x18da70, Func Offset: 0xd0
	// Line 1605, Address: 0x18da7c, Func Offset: 0xdc
	// Line 1607, Address: 0x18da84, Func Offset: 0xe4
	// Line 1608, Address: 0x18da90, Func Offset: 0xf0
	// Line 1610, Address: 0x18daac, Func Offset: 0x10c
	// Line 1608, Address: 0x18dab0, Func Offset: 0x110
	// Line 1610, Address: 0x18dac0, Func Offset: 0x120
	// Line 1611, Address: 0x18dad8, Func Offset: 0x138
	// Line 1612, Address: 0x18dae4, Func Offset: 0x144
	// Line 1615, Address: 0x18daf0, Func Offset: 0x150
	// Line 1612, Address: 0x18daf8, Func Offset: 0x158
	// Line 1615, Address: 0x18dafc, Func Offset: 0x15c
	// Line 1612, Address: 0x18db00, Func Offset: 0x160
	// Line 1613, Address: 0x18db08, Func Offset: 0x168
	// Line 1617, Address: 0x18db14, Func Offset: 0x174
	// Line 1618, Address: 0x18db24, Func Offset: 0x184
	// Line 1617, Address: 0x18db2c, Func Offset: 0x18c
	// Line 1618, Address: 0x18db30, Func Offset: 0x190
	// Line 1619, Address: 0x18db38, Func Offset: 0x198
	// Line 1620, Address: 0x18db3c, Func Offset: 0x19c
	// Line 1619, Address: 0x18db44, Func Offset: 0x1a4
	// Line 1620, Address: 0x18db58, Func Offset: 0x1b8
	// Line 1621, Address: 0x18db90, Func Offset: 0x1f0
	// Line 1623, Address: 0x18db9c, Func Offset: 0x1fc
	// Line 1624, Address: 0x18dbb8, Func Offset: 0x218
	// Line 1625, Address: 0x18dbbc, Func Offset: 0x21c
	// Line 1626, Address: 0x18dbc8, Func Offset: 0x228
	// Line 1624, Address: 0x18dbcc, Func Offset: 0x22c
	// Line 1625, Address: 0x18dbd0, Func Offset: 0x230
	// Line 1628, Address: 0x18dbd4, Func Offset: 0x234
	// Line 1625, Address: 0x18dbe4, Func Offset: 0x244
	// Line 1628, Address: 0x18dbe8, Func Offset: 0x248
	// Line 1625, Address: 0x18dbf0, Func Offset: 0x250
	// Line 1626, Address: 0x18dbf4, Func Offset: 0x254
	// Line 1628, Address: 0x18dbf8, Func Offset: 0x258
	// Line 1626, Address: 0x18dc00, Func Offset: 0x260
	// Line 1627, Address: 0x18dc04, Func Offset: 0x264
	// Line 1628, Address: 0x18dc08, Func Offset: 0x268
	// Line 1630, Address: 0x18dc18, Func Offset: 0x278
	// Line 1632, Address: 0x18dc40, Func Offset: 0x2a0
	// Line 1634, Address: 0x18dc4c, Func Offset: 0x2ac
	// Line 1635, Address: 0x18dc8c, Func Offset: 0x2ec
	// Line 1636, Address: 0x18dccc, Func Offset: 0x32c
	// Line 1637, Address: 0x18dcdc, Func Offset: 0x33c
	// Line 1638, Address: 0x18dd0c, Func Offset: 0x36c
	// Line 1639, Address: 0x18dd10, Func Offset: 0x370
	// Line 1640, Address: 0x18dd18, Func Offset: 0x378
	// Line 1643, Address: 0x18dd20, Func Offset: 0x380
	// Line 1646, Address: 0x18dd2c, Func Offset: 0x38c
	// Line 1647, Address: 0x18dd30, Func Offset: 0x390
	// Line 1646, Address: 0x18dd40, Func Offset: 0x3a0
	// Line 1647, Address: 0x18dd44, Func Offset: 0x3a4
	// Line 1648, Address: 0x18dd50, Func Offset: 0x3b0
	// Line 1650, Address: 0x18dd58, Func Offset: 0x3b8
	// Line 1654, Address: 0x18dd74, Func Offset: 0x3d4
	// Line 1656, Address: 0x18dda0, Func Offset: 0x400
	// Line 1658, Address: 0x18ddb0, Func Offset: 0x410
	// Line 1660, Address: 0x18ddb4, Func Offset: 0x414
	// Line 1658, Address: 0x18ddc0, Func Offset: 0x420
	// Line 1660, Address: 0x18ddc4, Func Offset: 0x424
	// Line 1658, Address: 0x18ddcc, Func Offset: 0x42c
	// Line 1660, Address: 0x18ddd0, Func Offset: 0x430
	// Line 1668, Address: 0x18dde4, Func Offset: 0x444
	// Func End, Address: 0x18de0c, Func Offset: 0x46c
}

// 
// Start address: 0x18de10
void bhEne01Cap_DG01(BH_PWORK* epw)
{
	float grand_h;
	int ay;
	NJS_POINT3 pd;
	NJS_POINT3 ps;
	OBJECT_WORK* owk;
	BOUNDARY* hp;
	// Line 1688, Address: 0x18de10, Func Offset: 0
	// Line 1699, Address: 0x18de30, Func Offset: 0x20
	// Line 1702, Address: 0x18de68, Func Offset: 0x58
	// Line 1703, Address: 0x18de74, Func Offset: 0x64
	// Line 1704, Address: 0x18de78, Func Offset: 0x68
	// Line 1706, Address: 0x18de7c, Func Offset: 0x6c
	// Line 1705, Address: 0x18de80, Func Offset: 0x70
	// Line 1706, Address: 0x18de84, Func Offset: 0x74
	// Line 1707, Address: 0x18de88, Func Offset: 0x78
	// Line 1709, Address: 0x18de90, Func Offset: 0x80
	// Line 1713, Address: 0x18de98, Func Offset: 0x88
	// Line 1714, Address: 0x18deb0, Func Offset: 0xa0
	// Line 1715, Address: 0x18ded8, Func Offset: 0xc8
	// Line 1716, Address: 0x18dedc, Func Offset: 0xcc
	// Line 1719, Address: 0x18dee8, Func Offset: 0xd8
	// Line 1721, Address: 0x18deec, Func Offset: 0xdc
	// Line 1719, Address: 0x18def0, Func Offset: 0xe0
	// Line 1721, Address: 0x18def4, Func Offset: 0xe4
	// Line 1723, Address: 0x18df0c, Func Offset: 0xfc
	// Line 1724, Address: 0x18df18, Func Offset: 0x108
	// Line 1725, Address: 0x18df24, Func Offset: 0x114
	// Line 1728, Address: 0x18df2c, Func Offset: 0x11c
	// Line 1729, Address: 0x18df30, Func Offset: 0x120
	// Line 1730, Address: 0x18df38, Func Offset: 0x128
	// Line 1766, Address: 0x18df40, Func Offset: 0x130
	// Line 1767, Address: 0x18df44, Func Offset: 0x134
	// Line 1769, Address: 0x18df6c, Func Offset: 0x15c
	// Line 1771, Address: 0x18df90, Func Offset: 0x180
	// Line 1772, Address: 0x18df9c, Func Offset: 0x18c
	// Line 1773, Address: 0x18dfa4, Func Offset: 0x194
	// Line 1774, Address: 0x18dfac, Func Offset: 0x19c
	// Line 1776, Address: 0x18dfb8, Func Offset: 0x1a8
	// Line 1777, Address: 0x18dfc8, Func Offset: 0x1b8
	// Line 1787, Address: 0x18dfd4, Func Offset: 0x1c4
	// Line 1786, Address: 0x18dfd8, Func Offset: 0x1c8
	// Line 1787, Address: 0x18dfdc, Func Offset: 0x1cc
	// Line 1788, Address: 0x18dfe4, Func Offset: 0x1d4
	// Line 1789, Address: 0x18dff0, Func Offset: 0x1e0
	// Line 1790, Address: 0x18e004, Func Offset: 0x1f4
	// Line 1792, Address: 0x18e008, Func Offset: 0x1f8
	// Line 1790, Address: 0x18e00c, Func Offset: 0x1fc
	// Line 1791, Address: 0x18e010, Func Offset: 0x200
	// Line 1792, Address: 0x18e014, Func Offset: 0x204
	// Line 1793, Address: 0x18e01c, Func Offset: 0x20c
	// Line 1792, Address: 0x18e020, Func Offset: 0x210
	// Line 1795, Address: 0x18e024, Func Offset: 0x214
	// Line 1797, Address: 0x18e074, Func Offset: 0x264
	// Line 1798, Address: 0x18e0b0, Func Offset: 0x2a0
	// Line 1800, Address: 0x18e0b8, Func Offset: 0x2a8
	// Line 1803, Address: 0x18e0c0, Func Offset: 0x2b0
	// Line 1805, Address: 0x18e0d4, Func Offset: 0x2c4
	// Line 1807, Address: 0x18e0e0, Func Offset: 0x2d0
	// Line 1810, Address: 0x18e0e8, Func Offset: 0x2d8
	// Line 1816, Address: 0x18e0fc, Func Offset: 0x2ec
	// Func End, Address: 0x18e11c, Func Offset: 0x30c
}

// 
// Start address: 0x18e120
void bhEne01Worm(BH_PWORK* epw)
{
	NJS_OBJECT* obj;
	// Line 1833, Address: 0x18e120, Func Offset: 0
	// Line 1836, Address: 0x18e130, Func Offset: 0x10
	// Line 1840, Address: 0x18e150, Func Offset: 0x30
	// Line 1841, Address: 0x18e164, Func Offset: 0x44
	// Line 1844, Address: 0x18e174, Func Offset: 0x54
	// Line 1845, Address: 0x18e17c, Func Offset: 0x5c
	// Line 1847, Address: 0x18e180, Func Offset: 0x60
	// Line 1852, Address: 0x18e184, Func Offset: 0x64
	// Line 1853, Address: 0x18e194, Func Offset: 0x74
	// Line 1855, Address: 0x18e19c, Func Offset: 0x7c
	// Func End, Address: 0x18e1ac, Func Offset: 0x8c
}

// 
// Start address: 0x18e1b0
void bhEne01Worm_Init(BH_PWORK* epw)
{
	// Line 1871, Address: 0x18e1b0, Func Offset: 0
	// Line 1872, Address: 0x18e1bc, Func Offset: 0xc
	// Line 1873, Address: 0x18e1c0, Func Offset: 0x10
	// Line 1875, Address: 0x18e1c4, Func Offset: 0x14
	// Line 1880, Address: 0x18e1cc, Func Offset: 0x1c
	// Line 1881, Address: 0x18e1d0, Func Offset: 0x20
	// Line 1873, Address: 0x18e1d4, Func Offset: 0x24
	// Line 1875, Address: 0x18e1dc, Func Offset: 0x2c
	// Line 1877, Address: 0x18e1e8, Func Offset: 0x38
	// Line 1878, Address: 0x18e1ec, Func Offset: 0x3c
	// Line 1879, Address: 0x18e1f0, Func Offset: 0x40
	// Line 1880, Address: 0x18e1f4, Func Offset: 0x44
	// Line 1881, Address: 0x18e1f8, Func Offset: 0x48
	// Line 1882, Address: 0x18e1fc, Func Offset: 0x4c
	// Line 1883, Address: 0x18e200, Func Offset: 0x50
	// Line 1886, Address: 0x18e204, Func Offset: 0x54
	// Line 1888, Address: 0x18e210, Func Offset: 0x60
	// Line 1892, Address: 0x18e220, Func Offset: 0x70
	// Line 1894, Address: 0x18e230, Func Offset: 0x80
	// Line 1895, Address: 0x18e238, Func Offset: 0x88
	// Line 1896, Address: 0x18e244, Func Offset: 0x94
	// Line 1897, Address: 0x18e248, Func Offset: 0x98
	// Line 1898, Address: 0x18e24c, Func Offset: 0x9c
	// Line 1899, Address: 0x18e250, Func Offset: 0xa0
	// Line 1900, Address: 0x18e254, Func Offset: 0xa4
	// Line 1902, Address: 0x18e258, Func Offset: 0xa8
	// Line 1906, Address: 0x18e260, Func Offset: 0xb0
	// Line 1908, Address: 0x18e270, Func Offset: 0xc0
	// Line 1911, Address: 0x18e274, Func Offset: 0xc4
	// Line 1908, Address: 0x18e278, Func Offset: 0xc8
	// Line 1909, Address: 0x18e280, Func Offset: 0xd0
	// Line 1910, Address: 0x18e288, Func Offset: 0xd8
	// Line 1911, Address: 0x18e28c, Func Offset: 0xdc
	// Line 1912, Address: 0x18e290, Func Offset: 0xe0
	// Line 1915, Address: 0x18e294, Func Offset: 0xe4
	// Line 1917, Address: 0x18e29c, Func Offset: 0xec
	// Line 1915, Address: 0x18e2a0, Func Offset: 0xf0
	// Line 1917, Address: 0x18e2a8, Func Offset: 0xf8
	// Line 1918, Address: 0x18e2ac, Func Offset: 0xfc
	// Line 1919, Address: 0x18e2b0, Func Offset: 0x100
	// Line 1920, Address: 0x18e2b4, Func Offset: 0x104
	// Line 1921, Address: 0x18e2b8, Func Offset: 0x108
	// Func End, Address: 0x18e2c8, Func Offset: 0x118
}

// 
// Start address: 0x18e2d0
void bhEne01Worm_Move(BH_PWORK* epw)
{
	// Line 1938, Address: 0x18e2d0, Func Offset: 0
	// Func End, Address: 0x18e2f0, Func Offset: 0x20
}

// 
// Start address: 0x18e2f0
void bhEne01Worm_MV00()
{
	// Line 1958, Address: 0x18e2f0, Func Offset: 0
	// Func End, Address: 0x18e2f8, Func Offset: 0x8
}

// 
// Start address: 0x18e300
void bhEne01Worm_MV01(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	OBJECT_WORK* owk;
	NJS_OBJECT* obj;
	// Line 1976, Address: 0x18e300, Func Offset: 0
	// Line 1982, Address: 0x18e30c, Func Offset: 0xc
	// Line 1986, Address: 0x18e350, Func Offset: 0x50
	// Line 1987, Address: 0x18e358, Func Offset: 0x58
	// Line 1986, Address: 0x18e35c, Func Offset: 0x5c
	// Line 1987, Address: 0x18e364, Func Offset: 0x64
	// Line 1990, Address: 0x18e370, Func Offset: 0x70
	// Line 1991, Address: 0x18e37c, Func Offset: 0x7c
	// Line 1992, Address: 0x18e394, Func Offset: 0x94
	// Line 1993, Address: 0x18e39c, Func Offset: 0x9c
	// Line 1994, Address: 0x18e3b4, Func Offset: 0xb4
	// Line 1995, Address: 0x18e3bc, Func Offset: 0xbc
	// Line 1997, Address: 0x18e3d4, Func Offset: 0xd4
	// Line 1999, Address: 0x18e3e4, Func Offset: 0xe4
	// Line 2004, Address: 0x18e404, Func Offset: 0x104
	// Line 2006, Address: 0x18e420, Func Offset: 0x120
	// Line 2009, Address: 0x18e42c, Func Offset: 0x12c
	// Line 2010, Address: 0x18e444, Func Offset: 0x144
	// Line 2012, Address: 0x18e474, Func Offset: 0x174
	// Line 2016, Address: 0x18e478, Func Offset: 0x178
	// Line 2012, Address: 0x18e488, Func Offset: 0x188
	// Line 2013, Address: 0x18e48c, Func Offset: 0x18c
	// Line 2014, Address: 0x18e494, Func Offset: 0x194
	// Line 2015, Address: 0x18e49c, Func Offset: 0x19c
	// Line 2016, Address: 0x18e4a0, Func Offset: 0x1a0
	// Line 2018, Address: 0x18e4a8, Func Offset: 0x1a8
	// Line 2019, Address: 0x18e4b0, Func Offset: 0x1b0
	// Line 2020, Address: 0x18e4bc, Func Offset: 0x1bc
	// Line 2022, Address: 0x18e4c4, Func Offset: 0x1c4
	// Line 2025, Address: 0x18e4cc, Func Offset: 0x1cc
	// Line 2026, Address: 0x18e4d0, Func Offset: 0x1d0
	// Line 2028, Address: 0x18e4d8, Func Offset: 0x1d8
	// Line 2025, Address: 0x18e4dc, Func Offset: 0x1dc
	// Line 2026, Address: 0x18e4e0, Func Offset: 0x1e0
	// Line 2028, Address: 0x18e4e4, Func Offset: 0x1e4
	// Line 2026, Address: 0x18e4e8, Func Offset: 0x1e8
	// Line 2027, Address: 0x18e4ec, Func Offset: 0x1ec
	// Line 2028, Address: 0x18e4f0, Func Offset: 0x1f0
	// Line 2031, Address: 0x18e514, Func Offset: 0x214
	// Line 2033, Address: 0x18e528, Func Offset: 0x228
	// Line 2039, Address: 0x18e52c, Func Offset: 0x22c
	// Line 2035, Address: 0x18e534, Func Offset: 0x234
	// Line 2046, Address: 0x18e538, Func Offset: 0x238
	// Line 2033, Address: 0x18e53c, Func Offset: 0x23c
	// Line 2034, Address: 0x18e544, Func Offset: 0x244
	// Line 2053, Address: 0x18e548, Func Offset: 0x248
	// Line 2049, Address: 0x18e54c, Func Offset: 0x24c
	// Line 2050, Address: 0x18e550, Func Offset: 0x250
	// Line 2051, Address: 0x18e554, Func Offset: 0x254
	// Line 2034, Address: 0x18e558, Func Offset: 0x258
	// Line 2035, Address: 0x18e560, Func Offset: 0x260
	// Line 2053, Address: 0x18e564, Func Offset: 0x264
	// Line 2055, Address: 0x18e568, Func Offset: 0x268
	// Line 2035, Address: 0x18e56c, Func Offset: 0x26c
	// Line 2036, Address: 0x18e570, Func Offset: 0x270
	// Line 2037, Address: 0x18e574, Func Offset: 0x274
	// Line 2038, Address: 0x18e578, Func Offset: 0x278
	// Line 2039, Address: 0x18e57c, Func Offset: 0x27c
	// Line 2041, Address: 0x18e580, Func Offset: 0x280
	// Line 2042, Address: 0x18e584, Func Offset: 0x284
	// Line 2043, Address: 0x18e588, Func Offset: 0x288
	// Line 2044, Address: 0x18e58c, Func Offset: 0x28c
	// Line 2046, Address: 0x18e590, Func Offset: 0x290
	// Line 2044, Address: 0x18e594, Func Offset: 0x294
	// Line 2046, Address: 0x18e59c, Func Offset: 0x29c
	// Line 2048, Address: 0x18e5a4, Func Offset: 0x2a4
	// Line 2049, Address: 0x18e5b0, Func Offset: 0x2b0
	// Line 2050, Address: 0x18e5bc, Func Offset: 0x2bc
	// Line 2051, Address: 0x18e5c8, Func Offset: 0x2c8
	// Line 2052, Address: 0x18e5d4, Func Offset: 0x2d4
	// Line 2053, Address: 0x18e5e0, Func Offset: 0x2e0
	// Line 2055, Address: 0x18e5ec, Func Offset: 0x2ec
	// Line 2053, Address: 0x18e5f0, Func Offset: 0x2f0
	// Line 2055, Address: 0x18e5f8, Func Offset: 0x2f8
	// Line 2056, Address: 0x18e600, Func Offset: 0x300
	// Line 2057, Address: 0x18e60c, Func Offset: 0x30c
	// Line 2058, Address: 0x18e618, Func Offset: 0x318
	// Line 2059, Address: 0x18e620, Func Offset: 0x320
	// Line 2062, Address: 0x18e628, Func Offset: 0x328
	// Line 2063, Address: 0x18e640, Func Offset: 0x340
	// Line 2064, Address: 0x18e648, Func Offset: 0x348
	// Line 2066, Address: 0x18e654, Func Offset: 0x354
	// Line 2069, Address: 0x18e65c, Func Offset: 0x35c
	// Line 2074, Address: 0x18e68c, Func Offset: 0x38c
	// Line 2076, Address: 0x18e6a8, Func Offset: 0x3a8
	// Line 2081, Address: 0x18e6b0, Func Offset: 0x3b0
	// Line 2077, Address: 0x18e6b4, Func Offset: 0x3b4
	// Line 2076, Address: 0x18e6b8, Func Offset: 0x3b8
	// Line 2077, Address: 0x18e6c0, Func Offset: 0x3c0
	// Line 2081, Address: 0x18e6c4, Func Offset: 0x3c4
	// Line 2082, Address: 0x18e6c8, Func Offset: 0x3c8
	// Line 2077, Address: 0x18e6d0, Func Offset: 0x3d0
	// Line 2079, Address: 0x18e6d8, Func Offset: 0x3d8
	// Line 2080, Address: 0x18e6dc, Func Offset: 0x3dc
	// Line 2081, Address: 0x18e6e0, Func Offset: 0x3e0
	// Line 2082, Address: 0x18e6e4, Func Offset: 0x3e4
	// Line 2083, Address: 0x18e6f4, Func Offset: 0x3f4
	// Line 2085, Address: 0x18e6fc, Func Offset: 0x3fc
	// Line 2083, Address: 0x18e70c, Func Offset: 0x40c
	// Line 2085, Address: 0x18e710, Func Offset: 0x410
	// Line 2086, Address: 0x18e718, Func Offset: 0x418
	// Line 2095, Address: 0x18e71c, Func Offset: 0x41c
	// Line 2088, Address: 0x18e724, Func Offset: 0x424
	// Line 2092, Address: 0x18e728, Func Offset: 0x428
	// Line 2086, Address: 0x18e72c, Func Offset: 0x42c
	// Line 2088, Address: 0x18e734, Func Offset: 0x434
	// Line 2093, Address: 0x18e738, Func Offset: 0x438
	// Line 2097, Address: 0x18e73c, Func Offset: 0x43c
	// Line 2088, Address: 0x18e740, Func Offset: 0x440
	// Line 2089, Address: 0x18e744, Func Offset: 0x444
	// Line 2088, Address: 0x18e748, Func Offset: 0x448
	// Line 2089, Address: 0x18e750, Func Offset: 0x450
	// Line 2090, Address: 0x18e758, Func Offset: 0x458
	// Line 2089, Address: 0x18e75c, Func Offset: 0x45c
	// Line 2090, Address: 0x18e760, Func Offset: 0x460
	// Line 2091, Address: 0x18e768, Func Offset: 0x468
	// Line 2092, Address: 0x18e774, Func Offset: 0x474
	// Line 2093, Address: 0x18e780, Func Offset: 0x480
	// Line 2094, Address: 0x18e78c, Func Offset: 0x48c
	// Line 2095, Address: 0x18e798, Func Offset: 0x498
	// Line 2097, Address: 0x18e7b8, Func Offset: 0x4b8
	// Line 2095, Address: 0x18e7bc, Func Offset: 0x4bc
	// Line 2097, Address: 0x18e7c4, Func Offset: 0x4c4
	// Line 2098, Address: 0x18e7cc, Func Offset: 0x4cc
	// Line 2099, Address: 0x18e7d8, Func Offset: 0x4d8
	// Line 2100, Address: 0x18e7e4, Func Offset: 0x4e4
	// Line 2102, Address: 0x18e7ec, Func Offset: 0x4ec
	// Line 2106, Address: 0x18e7f4, Func Offset: 0x4f4
	// Line 2108, Address: 0x18e808, Func Offset: 0x508
	// Line 2109, Address: 0x18e818, Func Offset: 0x518
	// Line 2108, Address: 0x18e81c, Func Offset: 0x51c
	// Line 2109, Address: 0x18e820, Func Offset: 0x520
	// Line 2110, Address: 0x18e824, Func Offset: 0x524
	// Line 2115, Address: 0x18e84c, Func Offset: 0x54c
	// Line 2118, Address: 0x18e868, Func Offset: 0x568
	// Line 2120, Address: 0x18e898, Func Offset: 0x598
	// Line 2122, Address: 0x18e8ac, Func Offset: 0x5ac
	// Line 2126, Address: 0x18e8b0, Func Offset: 0x5b0
	// Line 2127, Address: 0x18e8b8, Func Offset: 0x5b8
	// Line 2124, Address: 0x18e8c0, Func Offset: 0x5c0
	// Line 2122, Address: 0x18e8c4, Func Offset: 0x5c4
	// Line 2123, Address: 0x18e8cc, Func Offset: 0x5cc
	// Line 2131, Address: 0x18e8d0, Func Offset: 0x5d0
	// Line 2133, Address: 0x18e8d8, Func Offset: 0x5d8
	// Line 2134, Address: 0x18e8e0, Func Offset: 0x5e0
	// Line 2123, Address: 0x18e8e4, Func Offset: 0x5e4
	// Line 2124, Address: 0x18e8ec, Func Offset: 0x5ec
	// Line 2125, Address: 0x18e8f0, Func Offset: 0x5f0
	// Line 2126, Address: 0x18e8f4, Func Offset: 0x5f4
	// Line 2127, Address: 0x18e8f8, Func Offset: 0x5f8
	// Line 2128, Address: 0x18e8fc, Func Offset: 0x5fc
	// Line 2131, Address: 0x18e900, Func Offset: 0x600
	// Line 2132, Address: 0x18e904, Func Offset: 0x604
	// Line 2133, Address: 0x18e908, Func Offset: 0x608
	// Line 2134, Address: 0x18e90c, Func Offset: 0x60c
	// Line 2135, Address: 0x18e920, Func Offset: 0x620
	// Line 2142, Address: 0x18e928, Func Offset: 0x628
	// Line 2141, Address: 0x18e930, Func Offset: 0x630
	// Line 2147, Address: 0x18e934, Func Offset: 0x634
	// Line 2135, Address: 0x18e938, Func Offset: 0x638
	// Line 2136, Address: 0x18e93c, Func Offset: 0x63c
	// Line 2148, Address: 0x18e940, Func Offset: 0x640
	// Line 2135, Address: 0x18e944, Func Offset: 0x644
	// Line 2136, Address: 0x18e94c, Func Offset: 0x64c
	// Line 2138, Address: 0x18e954, Func Offset: 0x654
	// Line 2136, Address: 0x18e958, Func Offset: 0x658
	// Line 2138, Address: 0x18e960, Func Offset: 0x660
	// Line 2141, Address: 0x18e968, Func Offset: 0x668
	// Line 2138, Address: 0x18e96c, Func Offset: 0x66c
	// Line 2139, Address: 0x18e970, Func Offset: 0x670
	// Line 2141, Address: 0x18e978, Func Offset: 0x678
	// Line 2142, Address: 0x18e998, Func Offset: 0x698
	// Line 2143, Address: 0x18e9a4, Func Offset: 0x6a4
	// Line 2142, Address: 0x18e9a8, Func Offset: 0x6a8
	// Line 2143, Address: 0x18e9b0, Func Offset: 0x6b0
	// Line 2144, Address: 0x18e9b8, Func Offset: 0x6b8
	// Line 2143, Address: 0x18e9bc, Func Offset: 0x6bc
	// Line 2144, Address: 0x18e9c4, Func Offset: 0x6c4
	// Line 2145, Address: 0x18e9cc, Func Offset: 0x6cc
	// Line 2144, Address: 0x18e9d0, Func Offset: 0x6d0
	// Line 2145, Address: 0x18e9d8, Func Offset: 0x6d8
	// Line 2146, Address: 0x18e9e0, Func Offset: 0x6e0
	// Line 2147, Address: 0x18e9ec, Func Offset: 0x6ec
	// Line 2146, Address: 0x18e9f0, Func Offset: 0x6f0
	// Line 2147, Address: 0x18e9f4, Func Offset: 0x6f4
	// Line 2148, Address: 0x18e9fc, Func Offset: 0x6fc
	// Line 2150, Address: 0x18ea08, Func Offset: 0x708
	// Line 2148, Address: 0x18ea0c, Func Offset: 0x70c
	// Line 2150, Address: 0x18ea14, Func Offset: 0x714
	// Line 2151, Address: 0x18ea1c, Func Offset: 0x71c
	// Line 2150, Address: 0x18ea20, Func Offset: 0x720
	// Line 2151, Address: 0x18ea28, Func Offset: 0x728
	// Line 2154, Address: 0x18ea40, Func Offset: 0x740
	// Line 2153, Address: 0x18ea44, Func Offset: 0x744
	// Line 2154, Address: 0x18ea48, Func Offset: 0x748
	// Line 2155, Address: 0x18ea4c, Func Offset: 0x74c
	// Line 2159, Address: 0x18ea50, Func Offset: 0x750
	// Func End, Address: 0x18ea60, Func Offset: 0x760
}

// 
// Start address: 0x18ea60
void bhEne01Worm_MV02(BH_PWORK* epw)
{
	int frm;
	NJS_POINT3 pos;
	// Line 2181, Address: 0x18ea60, Func Offset: 0
	// Line 2187, Address: 0x18ea70, Func Offset: 0x10
	// Line 2190, Address: 0x18eab4, Func Offset: 0x54
	// Line 2192, Address: 0x18eabc, Func Offset: 0x5c
	// Line 2191, Address: 0x18eac0, Func Offset: 0x60
	// Line 2192, Address: 0x18eac4, Func Offset: 0x64
	// Line 2193, Address: 0x18eac8, Func Offset: 0x68
	// Line 2197, Address: 0x18ead4, Func Offset: 0x74
	// Line 2200, Address: 0x18eae8, Func Offset: 0x88
	// Line 2202, Address: 0x18eb04, Func Offset: 0xa4
	// Line 2207, Address: 0x18eb48, Func Offset: 0xe8
	// Line 2208, Address: 0x18eb50, Func Offset: 0xf0
	// Line 2210, Address: 0x18eb54, Func Offset: 0xf4
	// Line 2207, Address: 0x18eb58, Func Offset: 0xf8
	// Line 2208, Address: 0x18eb60, Func Offset: 0x100
	// Line 2210, Address: 0x18eb64, Func Offset: 0x104
	// Line 2208, Address: 0x18eb70, Func Offset: 0x110
	// Line 2210, Address: 0x18eb74, Func Offset: 0x114
	// Line 2211, Address: 0x18eb7c, Func Offset: 0x11c
	// Line 2212, Address: 0x18eb80, Func Offset: 0x120
	// Line 2211, Address: 0x18eb84, Func Offset: 0x124
	// Line 2212, Address: 0x18eb88, Func Offset: 0x128
	// Line 2213, Address: 0x18eb90, Func Offset: 0x130
	// Line 2214, Address: 0x18eba8, Func Offset: 0x148
	// Line 2217, Address: 0x18ebb0, Func Offset: 0x150
	// Line 2224, Address: 0x18ebb8, Func Offset: 0x158
	// Line 2214, Address: 0x18ebc0, Func Offset: 0x160
	// Line 2216, Address: 0x18ebc4, Func Offset: 0x164
	// Line 2221, Address: 0x18ebc8, Func Offset: 0x168
	// Line 2222, Address: 0x18ebcc, Func Offset: 0x16c
	// Line 2225, Address: 0x18ebd0, Func Offset: 0x170
	// Line 2214, Address: 0x18ebd4, Func Offset: 0x174
	// Line 2216, Address: 0x18ebd8, Func Offset: 0x178
	// Line 2227, Address: 0x18ebdc, Func Offset: 0x17c
	// Line 2216, Address: 0x18ebe0, Func Offset: 0x180
	// Line 2217, Address: 0x18ebe4, Func Offset: 0x184
	// Line 2216, Address: 0x18ebe8, Func Offset: 0x188
	// Line 2217, Address: 0x18ebf0, Func Offset: 0x190
	// Line 2218, Address: 0x18ebf8, Func Offset: 0x198
	// Line 2217, Address: 0x18ebfc, Func Offset: 0x19c
	// Line 2218, Address: 0x18ec04, Func Offset: 0x1a4
	// Line 2219, Address: 0x18ec0c, Func Offset: 0x1ac
	// Line 2218, Address: 0x18ec10, Func Offset: 0x1b0
	// Line 2219, Address: 0x18ec14, Func Offset: 0x1b4
	// Line 2220, Address: 0x18ec1c, Func Offset: 0x1bc
	// Line 2221, Address: 0x18ec28, Func Offset: 0x1c8
	// Line 2222, Address: 0x18ec34, Func Offset: 0x1d4
	// Line 2223, Address: 0x18ec40, Func Offset: 0x1e0
	// Line 2224, Address: 0x18ec4c, Func Offset: 0x1ec
	// Line 2227, Address: 0x18ec6c, Func Offset: 0x20c
	// Line 2224, Address: 0x18ec70, Func Offset: 0x210
	// Line 2225, Address: 0x18ec78, Func Offset: 0x218
	// Line 2227, Address: 0x18ec7c, Func Offset: 0x21c
	// Line 2228, Address: 0x18ec84, Func Offset: 0x224
	// Line 2229, Address: 0x18ec90, Func Offset: 0x230
	// Line 2230, Address: 0x18ec9c, Func Offset: 0x23c
	// Line 2231, Address: 0x18eca4, Func Offset: 0x244
	// Line 2236, Address: 0x18ecac, Func Offset: 0x24c
	// Line 2238, Address: 0x18ecbc, Func Offset: 0x25c
	// Line 2243, Address: 0x18ed00, Func Offset: 0x2a0
	// Line 2244, Address: 0x18ed14, Func Offset: 0x2b4
	// Line 2248, Address: 0x18ed18, Func Offset: 0x2b8
	// Line 2249, Address: 0x18ed20, Func Offset: 0x2c0
	// Line 2246, Address: 0x18ed24, Func Offset: 0x2c4
	// Line 2244, Address: 0x18ed28, Func Offset: 0x2c8
	// Line 2245, Address: 0x18ed30, Func Offset: 0x2d0
	// Line 2249, Address: 0x18ed34, Func Offset: 0x2d4
	// Line 2255, Address: 0x18ed38, Func Offset: 0x2d8
	// Line 2254, Address: 0x18ed40, Func Offset: 0x2e0
	// Line 2258, Address: 0x18ed44, Func Offset: 0x2e4
	// Line 2245, Address: 0x18ed48, Func Offset: 0x2e8
	// Line 2246, Address: 0x18ed50, Func Offset: 0x2f0
	// Line 2247, Address: 0x18ed54, Func Offset: 0x2f4
	// Line 2248, Address: 0x18ed58, Func Offset: 0x2f8
	// Line 2249, Address: 0x18ed5c, Func Offset: 0x2fc
	// Line 2250, Address: 0x18ed60, Func Offset: 0x300
	// Line 2251, Address: 0x18ed64, Func Offset: 0x304
	// Line 2262, Address: 0x18ed68, Func Offset: 0x308
	// Line 2259, Address: 0x18ed70, Func Offset: 0x310
	// Line 2260, Address: 0x18ed74, Func Offset: 0x314
	// Line 2251, Address: 0x18ed78, Func Offset: 0x318
	// Line 2254, Address: 0x18ed80, Func Offset: 0x320
	// Line 2255, Address: 0x18ed88, Func Offset: 0x328
	// Line 2254, Address: 0x18ed8c, Func Offset: 0x32c
	// Line 2255, Address: 0x18ed94, Func Offset: 0x334
	// Line 2256, Address: 0x18ed9c, Func Offset: 0x33c
	// Line 2255, Address: 0x18eda0, Func Offset: 0x340
	// Line 2256, Address: 0x18eda8, Func Offset: 0x348
	// Line 2257, Address: 0x18edb0, Func Offset: 0x350
	// Line 2256, Address: 0x18edb4, Func Offset: 0x354
	// Line 2257, Address: 0x18edb8, Func Offset: 0x358
	// Line 2258, Address: 0x18edc0, Func Offset: 0x360
	// Line 2259, Address: 0x18edcc, Func Offset: 0x36c
	// Line 2260, Address: 0x18edd8, Func Offset: 0x378
	// Line 2261, Address: 0x18ede4, Func Offset: 0x384
	// Line 2262, Address: 0x18edf0, Func Offset: 0x390
	// Line 2264, Address: 0x18ee10, Func Offset: 0x3b0
	// Line 2262, Address: 0x18ee14, Func Offset: 0x3b4
	// Line 2264, Address: 0x18ee1c, Func Offset: 0x3bc
	// Line 2265, Address: 0x18ee24, Func Offset: 0x3c4
	// Line 2264, Address: 0x18ee28, Func Offset: 0x3c8
	// Line 2265, Address: 0x18ee30, Func Offset: 0x3d0
	// Line 2267, Address: 0x18ee4c, Func Offset: 0x3ec
	// Line 2268, Address: 0x18ee5c, Func Offset: 0x3fc
	// Line 2269, Address: 0x18ee68, Func Offset: 0x408
	// Line 2270, Address: 0x18ee74, Func Offset: 0x414
	// Line 2273, Address: 0x18ee7c, Func Offset: 0x41c
	// Line 2277, Address: 0x18ee84, Func Offset: 0x424
	// Line 2279, Address: 0x18ee98, Func Offset: 0x438
	// Line 2280, Address: 0x18eeac, Func Offset: 0x44c
	// Line 2281, Address: 0x18eeb0, Func Offset: 0x450
	// Line 2286, Address: 0x18eed8, Func Offset: 0x478
	// Line 2289, Address: 0x18eef4, Func Offset: 0x494
	// Line 2291, Address: 0x18ef24, Func Offset: 0x4c4
	// Line 2292, Address: 0x18ef38, Func Offset: 0x4d8
	// Line 2296, Address: 0x18ef3c, Func Offset: 0x4dc
	// Line 2297, Address: 0x18ef44, Func Offset: 0x4e4
	// Line 2294, Address: 0x18ef4c, Func Offset: 0x4ec
	// Line 2292, Address: 0x18ef50, Func Offset: 0x4f0
	// Line 2293, Address: 0x18ef58, Func Offset: 0x4f8
	// Line 2298, Address: 0x18ef5c, Func Offset: 0x4fc
	// Line 2299, Address: 0x18ef60, Func Offset: 0x500
	// Line 2302, Address: 0x18ef64, Func Offset: 0x504
	// Line 2293, Address: 0x18ef68, Func Offset: 0x508
	// Line 2294, Address: 0x18ef70, Func Offset: 0x510
	// Line 2295, Address: 0x18ef74, Func Offset: 0x514
	// Line 2296, Address: 0x18ef78, Func Offset: 0x518
	// Line 2297, Address: 0x18ef7c, Func Offset: 0x51c
	// Line 2298, Address: 0x18ef80, Func Offset: 0x520
	// Line 2299, Address: 0x18ef84, Func Offset: 0x524
	// Line 2300, Address: 0x18ef88, Func Offset: 0x528
	// Line 2302, Address: 0x18ef8c, Func Offset: 0x52c
	// Line 2303, Address: 0x18ef90, Func Offset: 0x530
	// Line 2302, Address: 0x18ef98, Func Offset: 0x538
	// Line 2309, Address: 0x18ef9c, Func Offset: 0x53c
	// Line 2302, Address: 0x18efa0, Func Offset: 0x540
	// Line 2303, Address: 0x18efbc, Func Offset: 0x55c
	// Line 2304, Address: 0x18efc8, Func Offset: 0x568
	// Line 2303, Address: 0x18efcc, Func Offset: 0x56c
	// Line 2304, Address: 0x18efd4, Func Offset: 0x574
	// Line 2305, Address: 0x18efdc, Func Offset: 0x57c
	// Line 2304, Address: 0x18efe0, Func Offset: 0x580
	// Line 2305, Address: 0x18efe8, Func Offset: 0x588
	// Line 2306, Address: 0x18eff0, Func Offset: 0x590
	// Line 2305, Address: 0x18eff4, Func Offset: 0x594
	// Line 2306, Address: 0x18effc, Func Offset: 0x59c
	// Line 2307, Address: 0x18f004, Func Offset: 0x5a4
	// Line 2308, Address: 0x18f010, Func Offset: 0x5b0
	// Line 2307, Address: 0x18f014, Func Offset: 0x5b4
	// Line 2308, Address: 0x18f018, Func Offset: 0x5b8
	// Line 2309, Address: 0x18f020, Func Offset: 0x5c0
	// Line 2311, Address: 0x18f034, Func Offset: 0x5d4
	// Line 2313, Address: 0x18f03c, Func Offset: 0x5dc
	// Line 2317, Address: 0x18f044, Func Offset: 0x5e4
	// Line 2318, Address: 0x18f048, Func Offset: 0x5e8
	// Line 2317, Address: 0x18f04c, Func Offset: 0x5ec
	// Line 2318, Address: 0x18f050, Func Offset: 0x5f0
	// Line 2320, Address: 0x18f058, Func Offset: 0x5f8
	// Line 2321, Address: 0x18f05c, Func Offset: 0x5fc
	// Line 2326, Address: 0x18f064, Func Offset: 0x604
	// Line 2330, Address: 0x18f07c, Func Offset: 0x61c
	// Line 2332, Address: 0x18f088, Func Offset: 0x628
	// Line 2335, Address: 0x18f094, Func Offset: 0x634
	// Line 2337, Address: 0x18f0d4, Func Offset: 0x674
	// Line 2338, Address: 0x18f0d8, Func Offset: 0x678
	// Line 2341, Address: 0x18f0dc, Func Offset: 0x67c
	// Line 2347, Address: 0x18f0e4, Func Offset: 0x684
	// Line 2346, Address: 0x18f0ec, Func Offset: 0x68c
	// Line 2338, Address: 0x18f0f0, Func Offset: 0x690
	// Line 2341, Address: 0x18f0f8, Func Offset: 0x698
	// Line 2346, Address: 0x18f0fc, Func Offset: 0x69c
	// Line 2352, Address: 0x18f100, Func Offset: 0x6a0
	// Line 2353, Address: 0x18f104, Func Offset: 0x6a4
	// Line 2341, Address: 0x18f108, Func Offset: 0x6a8
	// Line 2343, Address: 0x18f110, Func Offset: 0x6b0
	// Line 2346, Address: 0x18f11c, Func Offset: 0x6bc
	// Line 2347, Address: 0x18f13c, Func Offset: 0x6dc
	// Line 2348, Address: 0x18f148, Func Offset: 0x6e8
	// Line 2347, Address: 0x18f14c, Func Offset: 0x6ec
	// Line 2348, Address: 0x18f154, Func Offset: 0x6f4
	// Line 2349, Address: 0x18f15c, Func Offset: 0x6fc
	// Line 2348, Address: 0x18f160, Func Offset: 0x700
	// Line 2349, Address: 0x18f168, Func Offset: 0x708
	// Line 2350, Address: 0x18f170, Func Offset: 0x710
	// Line 2349, Address: 0x18f174, Func Offset: 0x714
	// Line 2350, Address: 0x18f17c, Func Offset: 0x71c
	// Line 2351, Address: 0x18f184, Func Offset: 0x724
	// Line 2352, Address: 0x18f190, Func Offset: 0x730
	// Line 2351, Address: 0x18f194, Func Offset: 0x734
	// Line 2352, Address: 0x18f198, Func Offset: 0x738
	// Line 2353, Address: 0x18f1a0, Func Offset: 0x740
	// Line 2360, Address: 0x18f1b4, Func Offset: 0x754
	// Func End, Address: 0x18f1c8, Func Offset: 0x768
}

// 
// Start address: 0x18f1d0
void bhEne01Bom(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	OBJECT_WORK* owk;
	BH_PWORK* ep;
	// Line 2378, Address: 0x18f1d0, Func Offset: 0
	// Line 2379, Address: 0x18f1e8, Func Offset: 0x18
	// Line 2383, Address: 0x18f1ec, Func Offset: 0x1c
	// Line 2385, Address: 0x18f200, Func Offset: 0x30
	// Line 2386, Address: 0x18f208, Func Offset: 0x38
	// Line 2389, Address: 0x18f210, Func Offset: 0x40
	// Line 2393, Address: 0x18f224, Func Offset: 0x54
	// Line 2395, Address: 0x18f234, Func Offset: 0x64
	// Line 2398, Address: 0x18f244, Func Offset: 0x74
	// Line 2402, Address: 0x18f264, Func Offset: 0x94
	// Line 2404, Address: 0x18f274, Func Offset: 0xa4
	// Line 2407, Address: 0x18f280, Func Offset: 0xb0
	// Line 2410, Address: 0x18f28c, Func Offset: 0xbc
	// Line 2412, Address: 0x18f290, Func Offset: 0xc0
	// Line 2414, Address: 0x18f298, Func Offset: 0xc8
	// Line 2410, Address: 0x18f29c, Func Offset: 0xcc
	// Line 2414, Address: 0x18f2a0, Func Offset: 0xd0
	// Line 2411, Address: 0x18f2a4, Func Offset: 0xd4
	// Line 2412, Address: 0x18f2a8, Func Offset: 0xd8
	// Line 2414, Address: 0x18f2ac, Func Offset: 0xdc
	// Line 2415, Address: 0x18f2b8, Func Offset: 0xe8
	// Line 2416, Address: 0x18f2bc, Func Offset: 0xec
	// Line 2417, Address: 0x18f2d0, Func Offset: 0x100
	// Line 2423, Address: 0x18f2d8, Func Offset: 0x108
	// Func End, Address: 0x18f2f0, Func Offset: 0x120
}

// 
// Start address: 0x18f2f0
void bhEne01Bom_Init(BH_PWORK* epw)
{
	int i;
	BH_PWORK* ep;
	// Line 2447, Address: 0x18f2f0, Func Offset: 0
	// Line 2450, Address: 0x18f2f4, Func Offset: 0x4
	// Line 2457, Address: 0x18f2f8, Func Offset: 0x8
	// Line 2458, Address: 0x18f2fc, Func Offset: 0xc
	// Line 2450, Address: 0x18f304, Func Offset: 0x14
	// Line 2451, Address: 0x18f308, Func Offset: 0x18
	// Line 2452, Address: 0x18f30c, Func Offset: 0x1c
	// Line 2453, Address: 0x18f310, Func Offset: 0x20
	// Line 2454, Address: 0x18f314, Func Offset: 0x24
	// Line 2455, Address: 0x18f318, Func Offset: 0x28
	// Line 2456, Address: 0x18f31c, Func Offset: 0x2c
	// Line 2457, Address: 0x18f320, Func Offset: 0x30
	// Line 2458, Address: 0x18f324, Func Offset: 0x34
	// Line 2460, Address: 0x18f340, Func Offset: 0x50
	// Line 2463, Address: 0x18f344, Func Offset: 0x54
	// Line 2465, Address: 0x18f34c, Func Offset: 0x5c
	// Line 2460, Address: 0x18f350, Func Offset: 0x60
	// Line 2463, Address: 0x18f358, Func Offset: 0x68
	// Line 2465, Address: 0x18f35c, Func Offset: 0x6c
	// Line 2466, Address: 0x18f360, Func Offset: 0x70
	// Line 2467, Address: 0x18f364, Func Offset: 0x74
	// Line 2468, Address: 0x18f368, Func Offset: 0x78
	// Line 2470, Address: 0x18f36c, Func Offset: 0x7c
	// Line 2472, Address: 0x18f37c, Func Offset: 0x8c
	// Line 2473, Address: 0x18f388, Func Offset: 0x98
	// Line 2476, Address: 0x18f390, Func Offset: 0xa0
	// Line 2477, Address: 0x18f394, Func Offset: 0xa4
	// Line 2476, Address: 0x18f398, Func Offset: 0xa8
	// Line 2477, Address: 0x18f3a0, Func Offset: 0xb0
	// Line 2479, Address: 0x18f3ac, Func Offset: 0xbc
	// Func End, Address: 0x18f3b4, Func Offset: 0xc4
}

// 
// Start address: 0x18f3c0
void bhEne01Bom_Move(BH_PWORK* epw)
{
	NJS_POINT3 pos2;
	NJS_POINT3 pos;
	BH_PWORK* ep;
	// Line 2495, Address: 0x18f3c0, Func Offset: 0
	// Line 2498, Address: 0x18f3cc, Func Offset: 0xc
	// Line 2495, Address: 0x18f3d0, Func Offset: 0x10
	// Line 2498, Address: 0x18f3d4, Func Offset: 0x14
	// Line 2496, Address: 0x18f3d8, Func Offset: 0x18
	// Line 2498, Address: 0x18f3dc, Func Offset: 0x1c
	// Line 2501, Address: 0x18f3f4, Func Offset: 0x34
	// Line 2505, Address: 0x18f414, Func Offset: 0x54
	// Line 2507, Address: 0x18f424, Func Offset: 0x64
	// Line 2516, Address: 0x18f45c, Func Offset: 0x9c
	// Line 2518, Address: 0x18f474, Func Offset: 0xb4
	// Line 2520, Address: 0x18f4a4, Func Offset: 0xe4
	// Line 2522, Address: 0x18f4b8, Func Offset: 0xf8
	// Line 2525, Address: 0x18f4c4, Func Offset: 0x104
	// Line 2527, Address: 0x18f4d4, Func Offset: 0x114
	// Line 2528, Address: 0x18f4d8, Func Offset: 0x118
	// Line 2527, Address: 0x18f4dc, Func Offset: 0x11c
	// Line 2528, Address: 0x18f4e4, Func Offset: 0x124
	// Line 2529, Address: 0x18f4f0, Func Offset: 0x130
	// Line 2537, Address: 0x18f4fc, Func Offset: 0x13c
	// Func End, Address: 0x18f510, Func Offset: 0x150
}

// 
// Start address: 0x18f510
void bhEne01Scope(BH_PWORK* epw)
{
	// Line 2555, Address: 0x18f510, Func Offset: 0
	// Line 2558, Address: 0x18f51c, Func Offset: 0xc
	// Line 2560, Address: 0x18f534, Func Offset: 0x24
	// Line 2561, Address: 0x18f53c, Func Offset: 0x2c
	// Line 2564, Address: 0x18f544, Func Offset: 0x34
	// Line 2567, Address: 0x18f558, Func Offset: 0x48
	// Line 2569, Address: 0x18f578, Func Offset: 0x68
	// Line 2572, Address: 0x18f580, Func Offset: 0x70
	// Line 2573, Address: 0x18f588, Func Offset: 0x78
	// Func End, Address: 0x18f598, Func Offset: 0x88
}

// 
// Start address: 0x18f5a0
void bhEne01Scope_Init(BH_PWORK* epw)
{
	// Line 2592, Address: 0x18f5a0, Func Offset: 0
	// Line 2594, Address: 0x18f5b4, Func Offset: 0x14
	// Line 2595, Address: 0x18f5c0, Func Offset: 0x20
	// Line 2598, Address: 0x18f5c8, Func Offset: 0x28
	// Line 2601, Address: 0x18f5d4, Func Offset: 0x34
	// Line 2602, Address: 0x18f5d8, Func Offset: 0x38
	// Line 2604, Address: 0x18f5dc, Func Offset: 0x3c
	// Line 2602, Address: 0x18f5e0, Func Offset: 0x40
	// Line 2604, Address: 0x18f5e8, Func Offset: 0x48
	// Line 2605, Address: 0x18f5ec, Func Offset: 0x4c
	// Line 2606, Address: 0x18f5f0, Func Offset: 0x50
	// Line 2608, Address: 0x18f5f4, Func Offset: 0x54
	// Func End, Address: 0x18f5fc, Func Offset: 0x5c
}

// 
// Start address: 0x18f600
void bhEne01Scope_Move()
{
	// Line 2625, Address: 0x18f600, Func Offset: 0
	// Func End, Address: 0x18f608, Func Offset: 0x8
}

// 
// Start address: 0x18f610
void bhEne01Scope_Effect(BH_PWORK* epw)
{
	int eno;
	int i;
	BH_PWORK* ep;
	NJS_POINT3 scope_ofs[2];
	// Line 2642, Address: 0x18f610, Func Offset: 0
	// Line 2652, Address: 0x18f62c, Func Offset: 0x1c
	// Line 2647, Address: 0x18f630, Func Offset: 0x20
	// Line 2652, Address: 0x18f634, Func Offset: 0x24
	// Line 2655, Address: 0x18f650, Func Offset: 0x40
	// Line 2659, Address: 0x18f658, Func Offset: 0x48
	// Line 2662, Address: 0x18f65c, Func Offset: 0x4c
	// Line 2659, Address: 0x18f668, Func Offset: 0x58
	// Line 2660, Address: 0x18f678, Func Offset: 0x68
	// Line 2661, Address: 0x18f684, Func Offset: 0x74
	// Line 2667, Address: 0x18f688, Func Offset: 0x78
	// Line 2660, Address: 0x18f68c, Func Offset: 0x7c
	// Line 2661, Address: 0x18f698, Func Offset: 0x88
	// Line 2662, Address: 0x18f6ac, Func Offset: 0x9c
	// Line 2663, Address: 0x18f6c0, Func Offset: 0xb0
	// Line 2664, Address: 0x18f6d4, Func Offset: 0xc4
	// Line 2665, Address: 0x18f6e8, Func Offset: 0xd8
	// Line 2669, Address: 0x18f6fc, Func Offset: 0xec
	// Line 2671, Address: 0x18f71c, Func Offset: 0x10c
	// Line 2672, Address: 0x18f740, Func Offset: 0x130
	// Line 2671, Address: 0x18f744, Func Offset: 0x134
	// Line 2672, Address: 0x18f748, Func Offset: 0x138
	// Line 2674, Address: 0x18f758, Func Offset: 0x148
	// Line 2675, Address: 0x18f7a0, Func Offset: 0x190
	// Line 2676, Address: 0x18f7c8, Func Offset: 0x1b8
	// Line 2677, Address: 0x18f7f0, Func Offset: 0x1e0
	// Line 2678, Address: 0x18f7f4, Func Offset: 0x1e4
	// Line 2680, Address: 0x18f7f8, Func Offset: 0x1e8
	// Line 2682, Address: 0x18f808, Func Offset: 0x1f8
	// Func End, Address: 0x18f828, Func Offset: 0x218
}

