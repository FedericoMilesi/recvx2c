












typedef struct _anon12;


































typedef void(*type_83)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_2[32];

typedef Unknown1* type_4[512];


typedef char type_7[8];
typedef Unknown1* type_8[32];
typedef Unknown1* type_9[512];

typedef unsigned int type_11[64];
typedef Unknown1* type_12[32];
typedef float type_13[32];
typedef Unknown1* type_14[512];

typedef char type_16[32];
typedef Unknown1* type_17[128];
typedef unsigned int type_18[1];
typedef short type_19[32];


typedef int* type_22[16];
typedef Unknown1* type_23[128];


typedef Unknown1* type_26[128];


typedef BH_PWORK type_29[0];
typedef float type_30[4];
typedef MODEL_DATA type_31[16];
typedef Unknown1* type_32[512];

typedef float type_34[4];
typedef int type_35[4];
typedef void* type_36[256];
typedef unsigned int type_37[4];
typedef unsigned int type_38[0];
typedef float type_39[4];
typedef char type_40[256];


typedef float type_43[4];
typedef float type_44[4];
typedef unsigned char type_45[64];
typedef float type_46[4];

typedef char type_48[8];
typedef char type_49[128];
typedef void* type_50[2];

typedef unsigned char* type_52[256];
typedef short type_53[256];
typedef char type_54[0];
typedef unsigned int type_55[2];
typedef int type_56[4];
typedef short type_57[256];
typedef int type_58[8];

typedef float type_60[3];

typedef _anon12 type_62[2];
typedef int type_63[3];
typedef float type_64[3];
typedef TEXTURE_BUFFER type_65[256];

typedef short type_67[256];

typedef int type_69[64];
typedef MODEL_DATA type_70[450];
typedef unsigned int type_71[16];
typedef char type_72[4];
typedef unsigned int type_73[8];
typedef char type_74[3];


typedef int type_77[450];
typedef unsigned int type_78[8];
typedef unsigned char type_79[450];
typedef float type_80[128];
typedef char type_81[16];
typedef char type_82[4];
typedef CAMERA type_84[2];
typedef unsigned int type_85[32];
typedef unsigned char type_86[256];
typedef unsigned int type_87[16];
typedef unsigned int type_88[16];
typedef unsigned int type_89[32];
typedef BOUNDARY type_90[64];
typedef unsigned int type_91[16];
typedef BOUNDARY type_92[64];
typedef BH_PWORK* type_93[16];
typedef unsigned int type_94[8];
typedef unsigned int type_95[3];
typedef BOUNDARY type_96[64];
typedef unsigned int type_97[1];
typedef unsigned int type_98[384];
typedef unsigned int type_99[2];
typedef int* type_100[16];
typedef unsigned int type_101[4];

typedef unsigned char type_103[2];

typedef char type_105[32];
typedef char type_106[4];
typedef MODEL_DATA type_107[16];
typedef char type_108[64];
typedef short type_109[4];
typedef unsigned char type_110[4];
typedef unsigned int type_111[8];

typedef unsigned int type_113[4];
typedef unsigned int type_114[32];
typedef Unknown1* type_115[512];

typedef Unknown1* type_117[128];
typedef Unknown1* type_118[512];
typedef unsigned char type_119[64];
typedef Unknown1* type_120[512];

















































































































































































































































































































































































































































































































struct _anon12
{
	unsigned int num;
	NJS_TEXMEMLIST tmem[256];
	void* addr[256];
};


































































































































































































































char fname[128];
NJS_TEXINFO info;
NJS_TEXLIST tlist;
extern SYS* sys;
char BIO_CURRENT[0];
extern unsigned int palbuf[4096];
extern NJS_TEXMEMLIST tbuf[256];
extern ROOM* rom;
BH_PWORK ene[0];
_anon12 Ps2_tex_save[2];
NJS_TEXMEMLIST* Ps2_tex_info;

void ClutCopy(void* data, void* org_data);
void ClutCopy256(void* data, void* org_data);
int isVQ(unsigned char type);
int bhSetMemPvpTexture(NJS_TEXLIST* tlp, unsigned char* datp, int offset);
void bhReleaseMainTexture();
void Init_PS2_SAVE_TEX();
char* bhCopyTexmem2Mainmem(NJS_TEXLIST* tlp, char* adr);
char* bhCopyTexmem2MainmemSub(NJS_TEXLIST* tlp, char* adr);
void bhCopyMainmem2Texmem(NJS_TEXLIST* tlp);
void bhPushAllTexture();
void bhPopAllTexture();
void bhGarbageTexture(NJS_TEXMEMLIST* addr, unsigned int n);

// 
// Start address: 0x2e5f50
void ClutCopy(void* data, void* org_data)
{
	unsigned int i;
	// Line 136, Address: 0x2e5f50, Func Offset: 0
	// Line 137, Address: 0x2e5f5c, Func Offset: 0xc
	// Line 138, Address: 0x2e5f60, Func Offset: 0x10
	// Line 137, Address: 0x2e5f68, Func Offset: 0x18
	// Line 138, Address: 0x2e5f70, Func Offset: 0x20
	// Line 139, Address: 0x2e5f80, Func Offset: 0x30
	// Line 140, Address: 0x2e5f84, Func Offset: 0x34
	// Line 141, Address: 0x2e5f88, Func Offset: 0x38
	// Line 140, Address: 0x2e5f90, Func Offset: 0x40
	// Line 141, Address: 0x2e5f98, Func Offset: 0x48
	// Line 142, Address: 0x2e5fa0, Func Offset: 0x50
	// Func End, Address: 0x2e5fa8, Func Offset: 0x58
}

// 
// Start address: 0x2e5fb0
void ClutCopy256(void* data, void* org_data)
{
	unsigned int loop;
	unsigned int i;
	unsigned int* op;
	unsigned int* dp;
	// Line 153, Address: 0x2e5fb0, Func Offset: 0
	// Line 154, Address: 0x2e5fb4, Func Offset: 0x4
	// Line 155, Address: 0x2e5fc0, Func Offset: 0x10
	// Line 156, Address: 0x2e5fc4, Func Offset: 0x14
	// Line 155, Address: 0x2e5fcc, Func Offset: 0x1c
	// Line 156, Address: 0x2e5fd4, Func Offset: 0x24
	// Line 157, Address: 0x2e5fdc, Func Offset: 0x2c
	// Line 158, Address: 0x2e5fe8, Func Offset: 0x38
	// Line 159, Address: 0x2e5fec, Func Offset: 0x3c
	// Line 158, Address: 0x2e5ff4, Func Offset: 0x44
	// Line 159, Address: 0x2e5ffc, Func Offset: 0x4c
	// Line 160, Address: 0x2e6004, Func Offset: 0x54
	// Line 161, Address: 0x2e6010, Func Offset: 0x60
	// Line 162, Address: 0x2e6014, Func Offset: 0x64
	// Line 161, Address: 0x2e601c, Func Offset: 0x6c
	// Line 162, Address: 0x2e6024, Func Offset: 0x74
	// Line 163, Address: 0x2e602c, Func Offset: 0x7c
	// Line 164, Address: 0x2e6038, Func Offset: 0x88
	// Line 165, Address: 0x2e603c, Func Offset: 0x8c
	// Line 164, Address: 0x2e6044, Func Offset: 0x94
	// Line 165, Address: 0x2e604c, Func Offset: 0x9c
	// Line 168, Address: 0x2e6054, Func Offset: 0xa4
	// Line 166, Address: 0x2e6058, Func Offset: 0xa8
	// Line 168, Address: 0x2e605c, Func Offset: 0xac
	// Line 169, Address: 0x2e6068, Func Offset: 0xb8
	// Func End, Address: 0x2e6070, Func Offset: 0xc0
}

// 
// Start address: 0x2e6070
int isVQ(unsigned char type)
{
	// Line 205, Address: 0x2e6070, Func Offset: 0
	// Line 206, Address: 0x2e6098, Func Offset: 0x28
	// Func End, Address: 0x2e60a0, Func Offset: 0x30
}

// 
// Start address: 0x2e60a0
int bhSetMemPvpTexture(NJS_TEXLIST* tlp, unsigned char* datp, int offset)
{
	unsigned char* palp;
	unsigned char* dp;
	unsigned char* ap;
	unsigned short et_ct;
	unsigned short et_of;
	unsigned short bk_id;
	unsigned short h;
	unsigned short w;
	unsigned int attr;
	unsigned int gidx;
	unsigned int code;
	int lop;
	int palno;
	int nbTex;
	int end;
	int sz;
	NJS_TEXNAME* tnp;
	unsigned int* clutp;
	unsigned int TEXflag;
	unsigned int VQflag;
	unsigned int palnum;
	unsigned int pal[64];
	// Line 209, Address: 0x2e60a0, Func Offset: 0
	// Line 210, Address: 0x2e60cc, Func Offset: 0x2c
	// Line 220, Address: 0x2e60d0, Func Offset: 0x30
	// Line 222, Address: 0x2e60d4, Func Offset: 0x34
	// Line 220, Address: 0x2e60d8, Func Offset: 0x38
	// Line 222, Address: 0x2e60dc, Func Offset: 0x3c
	// Line 221, Address: 0x2e60ec, Func Offset: 0x4c
	// Line 218, Address: 0x2e60f0, Func Offset: 0x50
	// Line 224, Address: 0x2e60f4, Func Offset: 0x54
	// Line 226, Address: 0x2e60fc, Func Offset: 0x5c
	// Line 230, Address: 0x2e6100, Func Offset: 0x60
	// Line 227, Address: 0x2e6108, Func Offset: 0x68
	// Line 228, Address: 0x2e6114, Func Offset: 0x74
	// Line 229, Address: 0x2e6118, Func Offset: 0x78
	// Line 230, Address: 0x2e6120, Func Offset: 0x80
	// Line 233, Address: 0x2e614c, Func Offset: 0xac
	// Line 235, Address: 0x2e6154, Func Offset: 0xb4
	// Line 236, Address: 0x2e615c, Func Offset: 0xbc
	// Line 239, Address: 0x2e6160, Func Offset: 0xc0
	// Line 236, Address: 0x2e6168, Func Offset: 0xc8
	// Line 239, Address: 0x2e616c, Func Offset: 0xcc
	// Line 243, Address: 0x2e6178, Func Offset: 0xd8
	// Line 245, Address: 0x2e617c, Func Offset: 0xdc
	// Line 243, Address: 0x2e6180, Func Offset: 0xe0
	// Line 245, Address: 0x2e6188, Func Offset: 0xe8
	// Line 248, Address: 0x2e619c, Func Offset: 0xfc
	// Line 250, Address: 0x2e61a4, Func Offset: 0x104
	// Line 254, Address: 0x2e61c0, Func Offset: 0x120
	// Line 257, Address: 0x2e61c8, Func Offset: 0x128
	// Line 259, Address: 0x2e61d0, Func Offset: 0x130
	// Line 261, Address: 0x2e61d8, Func Offset: 0x138
	// Line 262, Address: 0x2e61e0, Func Offset: 0x140
	// Line 264, Address: 0x2e61e4, Func Offset: 0x144
	// Line 262, Address: 0x2e61e8, Func Offset: 0x148
	// Line 264, Address: 0x2e61ec, Func Offset: 0x14c
	// Line 267, Address: 0x2e620c, Func Offset: 0x16c
	// Line 266, Address: 0x2e6210, Func Offset: 0x170
	// Line 268, Address: 0x2e6214, Func Offset: 0x174
	// Line 271, Address: 0x2e621c, Func Offset: 0x17c
	// Line 270, Address: 0x2e6220, Func Offset: 0x180
	// Line 272, Address: 0x2e6224, Func Offset: 0x184
	// Line 275, Address: 0x2e622c, Func Offset: 0x18c
	// Line 277, Address: 0x2e6238, Func Offset: 0x198
	// Line 278, Address: 0x2e623c, Func Offset: 0x19c
	// Line 280, Address: 0x2e6240, Func Offset: 0x1a0
	// Line 281, Address: 0x2e6254, Func Offset: 0x1b4
	// Line 283, Address: 0x2e626c, Func Offset: 0x1cc
	// Line 284, Address: 0x2e6274, Func Offset: 0x1d4
	// Line 285, Address: 0x2e6280, Func Offset: 0x1e0
	// Line 286, Address: 0x2e628c, Func Offset: 0x1ec
	// Line 287, Address: 0x2e6290, Func Offset: 0x1f0
	// Line 286, Address: 0x2e6294, Func Offset: 0x1f4
	// Line 288, Address: 0x2e6298, Func Offset: 0x1f8
	// Line 292, Address: 0x2e62a0, Func Offset: 0x200
	// Line 295, Address: 0x2e62c4, Func Offset: 0x224
	// Line 294, Address: 0x2e62c8, Func Offset: 0x228
	// Line 296, Address: 0x2e62cc, Func Offset: 0x22c
	// Line 299, Address: 0x2e62d4, Func Offset: 0x234
	// Line 298, Address: 0x2e62d8, Func Offset: 0x238
	// Line 300, Address: 0x2e62dc, Func Offset: 0x23c
	// Line 303, Address: 0x2e62e4, Func Offset: 0x244
	// Line 306, Address: 0x2e62f0, Func Offset: 0x250
	// Line 305, Address: 0x2e62f4, Func Offset: 0x254
	// Line 312, Address: 0x2e62f8, Func Offset: 0x258
	// Line 306, Address: 0x2e6300, Func Offset: 0x260
	// Line 308, Address: 0x2e6304, Func Offset: 0x264
	// Line 312, Address: 0x2e6308, Func Offset: 0x268
	// Line 308, Address: 0x2e630c, Func Offset: 0x26c
	// Line 310, Address: 0x2e6328, Func Offset: 0x288
	// Line 312, Address: 0x2e6350, Func Offset: 0x2b0
	// Line 313, Address: 0x2e6358, Func Offset: 0x2b8
	// Line 317, Address: 0x2e635c, Func Offset: 0x2bc
	// Line 313, Address: 0x2e6360, Func Offset: 0x2c0
	// Line 314, Address: 0x2e6364, Func Offset: 0x2c4
	// Line 315, Address: 0x2e6368, Func Offset: 0x2c8
	// Line 316, Address: 0x2e636c, Func Offset: 0x2cc
	// Line 317, Address: 0x2e6370, Func Offset: 0x2d0
	// Line 319, Address: 0x2e6378, Func Offset: 0x2d8
	// Line 320, Address: 0x2e638c, Func Offset: 0x2ec
	// Line 319, Address: 0x2e6394, Func Offset: 0x2f4
	// Line 321, Address: 0x2e6398, Func Offset: 0x2f8
	// Line 320, Address: 0x2e639c, Func Offset: 0x2fc
	// Line 321, Address: 0x2e63a4, Func Offset: 0x304
	// Line 322, Address: 0x2e63cc, Func Offset: 0x32c
	// Line 325, Address: 0x2e63d0, Func Offset: 0x330
	// Line 324, Address: 0x2e63d4, Func Offset: 0x334
	// Line 325, Address: 0x2e63dc, Func Offset: 0x33c
	// Line 333, Address: 0x2e63e4, Func Offset: 0x344
	// Line 334, Address: 0x2e63f4, Func Offset: 0x354
	// Line 335, Address: 0x2e6408, Func Offset: 0x368
	// Line 339, Address: 0x2e6410, Func Offset: 0x370
	// Line 340, Address: 0x2e6420, Func Offset: 0x380
	// Line 341, Address: 0x2e6428, Func Offset: 0x388
	// Line 342, Address: 0x2e642c, Func Offset: 0x38c
	// Line 343, Address: 0x2e6434, Func Offset: 0x394
	// Line 344, Address: 0x2e6440, Func Offset: 0x3a0
	// Line 353, Address: 0x2e6448, Func Offset: 0x3a8
	// Line 354, Address: 0x2e645c, Func Offset: 0x3bc
	// Line 357, Address: 0x2e6468, Func Offset: 0x3c8
	// Line 358, Address: 0x2e6470, Func Offset: 0x3d0
	// Line 359, Address: 0x2e648c, Func Offset: 0x3ec
	// Line 362, Address: 0x2e64a4, Func Offset: 0x404
	// Line 363, Address: 0x2e64ac, Func Offset: 0x40c
	// Line 364, Address: 0x2e64c8, Func Offset: 0x428
	// Line 369, Address: 0x2e64e0, Func Offset: 0x440
	// Line 370, Address: 0x2e64e8, Func Offset: 0x448
	// Line 371, Address: 0x2e64f4, Func Offset: 0x454
	// Line 372, Address: 0x2e6500, Func Offset: 0x460
	// Line 373, Address: 0x2e6504, Func Offset: 0x464
	// Line 372, Address: 0x2e6508, Func Offset: 0x468
	// Line 373, Address: 0x2e6510, Func Offset: 0x470
	// Line 374, Address: 0x2e6518, Func Offset: 0x478
	// Line 376, Address: 0x2e6530, Func Offset: 0x490
	// Line 378, Address: 0x2e6538, Func Offset: 0x498
	// Line 380, Address: 0x2e653c, Func Offset: 0x49c
	// Line 381, Address: 0x2e6540, Func Offset: 0x4a0
	// Line 382, Address: 0x2e654c, Func Offset: 0x4ac
	// Line 383, Address: 0x2e6550, Func Offset: 0x4b0
	// Func End, Address: 0x2e6580, Func Offset: 0x4e0
}

// 
// Start address: 0x2e6580
void bhReleaseMainTexture()
{
	int j;
	int i;
	Unknown1* op;
	BH_PWORK* pp;
	// Line 392, Address: 0x2e6580, Func Offset: 0
	// Line 397, Address: 0x2e659c, Func Offset: 0x1c
	// Line 399, Address: 0x2e65b8, Func Offset: 0x38
	// Line 400, Address: 0x2e65c4, Func Offset: 0x44
	// Line 401, Address: 0x2e65f0, Func Offset: 0x70
	// Line 402, Address: 0x2e6600, Func Offset: 0x80
	// Line 403, Address: 0x2e660c, Func Offset: 0x8c
	// Line 404, Address: 0x2e6628, Func Offset: 0xa8
	// Line 405, Address: 0x2e6634, Func Offset: 0xb4
	// Line 407, Address: 0x2e664c, Func Offset: 0xcc
	// Line 409, Address: 0x2e6668, Func Offset: 0xe8
	// Line 410, Address: 0x2e6670, Func Offset: 0xf0
	// Line 409, Address: 0x2e6674, Func Offset: 0xf4
	// Line 410, Address: 0x2e6680, Func Offset: 0x100
	// Line 411, Address: 0x2e6688, Func Offset: 0x108
	// Line 412, Address: 0x2e6698, Func Offset: 0x118
	// Line 413, Address: 0x2e66b4, Func Offset: 0x134
	// Line 414, Address: 0x2e66bc, Func Offset: 0x13c
	// Line 415, Address: 0x2e66c0, Func Offset: 0x140
	// Line 417, Address: 0x2e66e0, Func Offset: 0x160
	// Line 418, Address: 0x2e66f4, Func Offset: 0x174
	// Line 419, Address: 0x2e66fc, Func Offset: 0x17c
	// Line 420, Address: 0x2e670c, Func Offset: 0x18c
	// Line 421, Address: 0x2e6728, Func Offset: 0x1a8
	// Line 423, Address: 0x2e6730, Func Offset: 0x1b0
	// Line 425, Address: 0x2e6750, Func Offset: 0x1d0
	// Line 426, Address: 0x2e676c, Func Offset: 0x1ec
	// Line 427, Address: 0x2e67a0, Func Offset: 0x220
	// Line 428, Address: 0x2e67c0, Func Offset: 0x240
	// Line 429, Address: 0x2e67d8, Func Offset: 0x258
	// Line 430, Address: 0x2e67f8, Func Offset: 0x278
	// Line 432, Address: 0x2e6818, Func Offset: 0x298
	// Line 433, Address: 0x2e6834, Func Offset: 0x2b4
	// Line 434, Address: 0x2e6844, Func Offset: 0x2c4
	// Line 437, Address: 0x2e6858, Func Offset: 0x2d8
	// Line 438, Address: 0x2e6868, Func Offset: 0x2e8
	// Func End, Address: 0x2e6888, Func Offset: 0x308
}

// 
// Start address: 0x2e6890
void Init_PS2_SAVE_TEX()
{
	unsigned int i;
	// Line 446, Address: 0x2e6898, Func Offset: 0x8
	// Line 448, Address: 0x2e689c, Func Offset: 0xc
	// Line 447, Address: 0x2e68a0, Func Offset: 0x10
	// Line 448, Address: 0x2e68a8, Func Offset: 0x18
	// Line 449, Address: 0x2e68b8, Func Offset: 0x28
	// Func End, Address: 0x2e68c0, Func Offset: 0x30
}

// 
// Start address: 0x2e68c0
char* bhCopyTexmem2Mainmem(NJS_TEXLIST* tlp, char* adr)
{
	// Line 464, Address: 0x2e68c0, Func Offset: 0
	// Line 465, Address: 0x2e68d0, Func Offset: 0x10
	// Line 466, Address: 0x2e68dc, Func Offset: 0x1c
	// Line 467, Address: 0x2e68e4, Func Offset: 0x24
	// Line 468, Address: 0x2e68e8, Func Offset: 0x28
	// Func End, Address: 0x2e68fc, Func Offset: 0x3c
}

// 
// Start address: 0x2e6900
char* bhCopyTexmem2MainmemSub(NJS_TEXLIST* tlp, char* adr)
{
	NJS_TEXMEMLIST* tmp;
	unsigned int num;
	unsigned int i;
	// Line 474, Address: 0x2e6900, Func Offset: 0
	// Line 483, Address: 0x2e6924, Func Offset: 0x24
	// Line 489, Address: 0x2e6930, Func Offset: 0x30
	// Line 490, Address: 0x2e6948, Func Offset: 0x48
	// Line 492, Address: 0x2e6954, Func Offset: 0x54
	// Line 493, Address: 0x2e6958, Func Offset: 0x58
	// Line 492, Address: 0x2e6960, Func Offset: 0x60
	// Line 493, Address: 0x2e6968, Func Offset: 0x68
	// Line 499, Address: 0x2e698c, Func Offset: 0x8c
	// Line 500, Address: 0x2e6994, Func Offset: 0x94
	// Line 503, Address: 0x2e69a4, Func Offset: 0xa4
	// Line 502, Address: 0x2e69a8, Func Offset: 0xa8
	// Line 503, Address: 0x2e69b8, Func Offset: 0xb8
	// Line 502, Address: 0x2e69bc, Func Offset: 0xbc
	// Line 503, Address: 0x2e69c8, Func Offset: 0xc8
	// Line 504, Address: 0x2e69e0, Func Offset: 0xe0
	// Line 505, Address: 0x2e69e4, Func Offset: 0xe4
	// Func End, Address: 0x2e6a08, Func Offset: 0x108
}

// 
// Start address: 0x2e6a10
void bhCopyMainmem2Texmem(NJS_TEXLIST* tlp)
{
	NJS_TEXMEMLIST* tmp;
	int no;
	NJS_TEXMEMLIST* addr;
	unsigned int num;
	unsigned int i;
	// Line 515, Address: 0x2e6a10, Func Offset: 0
	// Line 526, Address: 0x2e6a38, Func Offset: 0x28
	// Line 527, Address: 0x2e6a40, Func Offset: 0x30
	// Line 528, Address: 0x2e6a64, Func Offset: 0x54
	// Line 537, Address: 0x2e6a6c, Func Offset: 0x5c
	// Line 538, Address: 0x2e6a84, Func Offset: 0x74
	// Line 540, Address: 0x2e6aa0, Func Offset: 0x90
	// Line 542, Address: 0x2e6ab0, Func Offset: 0xa0
	// Line 543, Address: 0x2e6ab8, Func Offset: 0xa8
	// Line 544, Address: 0x2e6ac0, Func Offset: 0xb0
	// Line 545, Address: 0x2e6ad0, Func Offset: 0xc0
	// Line 546, Address: 0x2e6ae8, Func Offset: 0xd8
	// Line 547, Address: 0x2e6af0, Func Offset: 0xe0
	// Line 549, Address: 0x2e6af8, Func Offset: 0xe8
	// Line 550, Address: 0x2e6b2c, Func Offset: 0x11c
	// Line 551, Address: 0x2e6b34, Func Offset: 0x124
	// Line 553, Address: 0x2e6b38, Func Offset: 0x128
	// Line 554, Address: 0x2e6b48, Func Offset: 0x138
	// Line 558, Address: 0x2e6b50, Func Offset: 0x140
	// Line 554, Address: 0x2e6b54, Func Offset: 0x144
	// Line 558, Address: 0x2e6b60, Func Offset: 0x150
	// Line 559, Address: 0x2e6b78, Func Offset: 0x168
	// Line 560, Address: 0x2e6b80, Func Offset: 0x170
	// Func End, Address: 0x2e6bac, Func Offset: 0x19c
}

// 
// Start address: 0x2e6bb0
void bhPushAllTexture()
{
	// Line 627, Address: 0x2e6bb0, Func Offset: 0
	// Func End, Address: 0x2e6bb8, Func Offset: 0x8
}

// 
// Start address: 0x2e6bc0
void bhPopAllTexture()
{
	// Line 686, Address: 0x2e6bc0, Func Offset: 0
	// Func End, Address: 0x2e6bc8, Func Offset: 0x8
}

// 
// Start address: 0x2e6bd0
void bhGarbageTexture(NJS_TEXMEMLIST* addr, unsigned int n)
{
	// Line 717, Address: 0x2e6bd0, Func Offset: 0
	// Func End, Address: 0x2e6bd8, Func Offset: 0x8
}

