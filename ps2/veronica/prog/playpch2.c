




























typedef struct _anon27;


typedef struct Camera;






typedef void(*type_74)(void*);


typedef unsigned int type_1[4];
typedef Unknown1* type_2[512];
typedef Unknown1* type_3[32];

typedef Unknown1* type_5[32];
typedef Unknown1* type_6[512];


typedef char type_9[8];
typedef Unknown1* type_10[32];
typedef Unknown1* type_11[512];

typedef char type_13[32];
typedef Unknown1* type_14[512];

typedef short type_16[32];

typedef Unknown1* type_18[128];
typedef unsigned int type_19[1];


typedef int* type_22[16];
typedef Unknown1* type_23[128];

typedef Unknown1* type_25[128];
typedef int type_26[4];

typedef unsigned int type_28[4];
typedef MODEL_DATA type_29[16];
typedef Unknown1* type_30[512];
typedef char type_31[256];
typedef float type_32[4];
typedef float type_33[4];
typedef float type_34[4];

typedef float type_36[3];
typedef unsigned char type_37[64];
typedef float type_38[3][20];
typedef float type_39[3];
typedef float type_40[3][20];
typedef float type_41[3];
typedef float type_42[3][20];
typedef char type_43[8];
typedef float type_44[3];
typedef float type_45[3][20];
typedef void* type_46[2];

typedef int type_48[4];
typedef unsigned char* type_49[256];
typedef unsigned int type_50[2];
typedef short type_51[256];

typedef float type_53[3];
typedef short type_54[256];
typedef int type_55[3];
typedef int type_56[8];
typedef float type_57[3];

typedef TEXTURE_BUFFER type_59[256];


typedef short type_62[256];
typedef char type_63[3];
typedef int type_64[64];
typedef MODEL_DATA type_65[450];


typedef int type_68[450];
typedef unsigned int type_69[8];
typedef unsigned char type_70[450];
typedef unsigned short type_71[5];
typedef char type_72[16];
typedef char type_73[4];

typedef unsigned int type_76[32];
typedef unsigned int type_77[16];
typedef BOUNDARY type_78[64];
typedef unsigned int type_79[16];
typedef BOUNDARY type_80[64];
typedef unsigned int type_81[32];
typedef BOUNDARY type_82[64];
typedef unsigned int type_83[16];
typedef unsigned int type_84[3];
typedef BH_PWORK* type_85[16];
typedef unsigned int type_86[8];
typedef Unknown8 type_87[4];
typedef unsigned int type_88[1];
typedef Unknown8 type_89[4][0];
typedef unsigned int type_90[384];
typedef unsigned int type_91[2];
typedef unsigned char type_92[2];
typedef unsigned int type_93[4];
typedef int* type_94[16];
typedef char type_95[32];

typedef char type_97[64];

typedef char type_99[4];
typedef MODEL_DATA type_100[16];
typedef short type_101[4];
typedef unsigned char type_102[4];

typedef unsigned int type_104[32];

typedef Unknown1* type_106[512];
typedef Unknown1* type_107[128];
typedef Unknown1* type_108[512];
typedef unsigned char type_109[64];
typedef Unknown1* type_110[512];



























































































































































































































































































































































































































































































































































































































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






























































extern BH_PWORK* plp;
extern SYS* sys;
extern Camera cam;
unsigned short PlMtnWpn[5];
Unknown8 WpnEffTab[4][0];
extern WEAPON WpnTab[23];

void bhCPM2_act_scp();

// 
// Start address: 0x14d250
void bhCPM2_act_scp()
{
	NJS_POINT3 fpsb;
	NJS_POINT3 fps;
	Unknown8* eft;
	NJS_POINT3 pos;
	short bn;
	_anon27 gap;
	NJS_POINT3 ps;
	// Line 44, Address: 0x14d250, Func Offset: 0
	// Line 50, Address: 0x14d264, Func Offset: 0x14
	// Line 52, Address: 0x14d2a4, Func Offset: 0x54
	// Line 53, Address: 0x14d2ac, Func Offset: 0x5c
	// Line 54, Address: 0x14d2b0, Func Offset: 0x60
	// Line 58, Address: 0x14d2b4, Func Offset: 0x64
	// Line 52, Address: 0x14d2b8, Func Offset: 0x68
	// Line 53, Address: 0x14d2c0, Func Offset: 0x70
	// Line 54, Address: 0x14d2d0, Func Offset: 0x80
	// Line 55, Address: 0x14d2dc, Func Offset: 0x8c
	// Line 56, Address: 0x14d2e8, Func Offset: 0x98
	// Line 57, Address: 0x14d2f4, Func Offset: 0xa4
	// Line 58, Address: 0x14d300, Func Offset: 0xb0
	// Line 59, Address: 0x14d30c, Func Offset: 0xbc
	// Line 58, Address: 0x14d310, Func Offset: 0xc0
	// Line 59, Address: 0x14d314, Func Offset: 0xc4
	// Line 60, Address: 0x14d31c, Func Offset: 0xcc
	// Line 62, Address: 0x14d330, Func Offset: 0xe0
	// Line 63, Address: 0x14d33c, Func Offset: 0xec
	// Line 64, Address: 0x14d340, Func Offset: 0xf0
	// Line 62, Address: 0x14d344, Func Offset: 0xf4
	// Line 63, Address: 0x14d348, Func Offset: 0xf8
	// Line 62, Address: 0x14d34c, Func Offset: 0xfc
	// Line 63, Address: 0x14d354, Func Offset: 0x104
	// Line 64, Address: 0x14d35c, Func Offset: 0x10c
	// Line 63, Address: 0x14d360, Func Offset: 0x110
	// Line 64, Address: 0x14d368, Func Offset: 0x118
	// Line 65, Address: 0x14d370, Func Offset: 0x120
	// Line 64, Address: 0x14d374, Func Offset: 0x124
	// Line 65, Address: 0x14d37c, Func Offset: 0x12c
	// Line 66, Address: 0x14d398, Func Offset: 0x148
	// Line 68, Address: 0x14d3b0, Func Offset: 0x160
	// Line 70, Address: 0x14d3e8, Func Offset: 0x198
	// Line 71, Address: 0x14d400, Func Offset: 0x1b0
	// Line 72, Address: 0x14d410, Func Offset: 0x1c0
	// Line 73, Address: 0x14d418, Func Offset: 0x1c8
	// Line 74, Address: 0x14d424, Func Offset: 0x1d4
	// Line 73, Address: 0x14d428, Func Offset: 0x1d8
	// Line 74, Address: 0x14d430, Func Offset: 0x1e0
	// Line 76, Address: 0x14d444, Func Offset: 0x1f4
	// Line 77, Address: 0x14d44c, Func Offset: 0x1fc
	// Line 76, Address: 0x14d450, Func Offset: 0x200
	// Line 77, Address: 0x14d454, Func Offset: 0x204
	// Line 76, Address: 0x14d458, Func Offset: 0x208
	// Line 77, Address: 0x14d460, Func Offset: 0x210
	// Line 78, Address: 0x14d468, Func Offset: 0x218
	// Line 79, Address: 0x14d474, Func Offset: 0x224
	// Line 80, Address: 0x14d47c, Func Offset: 0x22c
	// Line 83, Address: 0x14d484, Func Offset: 0x234
	// Line 84, Address: 0x14d4ac, Func Offset: 0x25c
	// Line 91, Address: 0x14d4b8, Func Offset: 0x268
	// Line 92, Address: 0x14d4c0, Func Offset: 0x270
	// Line 91, Address: 0x14d4c8, Func Offset: 0x278
	// Line 92, Address: 0x14d4cc, Func Offset: 0x27c
	// Line 101, Address: 0x14d56c, Func Offset: 0x31c
	// Line 104, Address: 0x14d574, Func Offset: 0x324
	// Line 105, Address: 0x14d5a4, Func Offset: 0x354
	// Line 106, Address: 0x14d5b0, Func Offset: 0x360
	// Line 105, Address: 0x14d5b8, Func Offset: 0x368
	// Line 106, Address: 0x14d5c0, Func Offset: 0x370
	// Line 107, Address: 0x14d5c8, Func Offset: 0x378
	// Line 108, Address: 0x14d5d0, Func Offset: 0x380
	// Line 111, Address: 0x14d5d8, Func Offset: 0x388
	// Line 114, Address: 0x14d61c, Func Offset: 0x3cc
	// Line 115, Address: 0x14d62c, Func Offset: 0x3dc
	// Line 117, Address: 0x14d634, Func Offset: 0x3e4
	// Line 119, Address: 0x14d640, Func Offset: 0x3f0
	// Line 117, Address: 0x14d648, Func Offset: 0x3f8
	// Line 119, Address: 0x14d650, Func Offset: 0x400
	// Line 120, Address: 0x14d654, Func Offset: 0x404
	// Line 119, Address: 0x14d658, Func Offset: 0x408
	// Line 120, Address: 0x14d65c, Func Offset: 0x40c
	// Line 121, Address: 0x14d668, Func Offset: 0x418
	// Line 120, Address: 0x14d66c, Func Offset: 0x41c
	// Line 121, Address: 0x14d674, Func Offset: 0x424
	// Line 122, Address: 0x14d67c, Func Offset: 0x42c
	// Line 121, Address: 0x14d680, Func Offset: 0x430
	// Line 122, Address: 0x14d688, Func Offset: 0x438
	// Line 123, Address: 0x14d690, Func Offset: 0x440
	// Line 127, Address: 0x14d698, Func Offset: 0x448
	// Line 131, Address: 0x14d6a0, Func Offset: 0x450
	// Line 128, Address: 0x14d6a8, Func Offset: 0x458
	// Line 127, Address: 0x14d6ac, Func Offset: 0x45c
	// Line 128, Address: 0x14d6b4, Func Offset: 0x464
	// Line 131, Address: 0x14d6b8, Func Offset: 0x468
	// Line 128, Address: 0x14d6bc, Func Offset: 0x46c
	// Line 129, Address: 0x14d6c0, Func Offset: 0x470
	// Line 128, Address: 0x14d6c4, Func Offset: 0x474
	// Line 129, Address: 0x14d6c8, Func Offset: 0x478
	// Line 131, Address: 0x14d6d0, Func Offset: 0x480
	// Line 129, Address: 0x14d6d4, Func Offset: 0x484
	// Line 131, Address: 0x14d6dc, Func Offset: 0x48c
	// Line 135, Address: 0x14d730, Func Offset: 0x4e0
	// Line 137, Address: 0x14d734, Func Offset: 0x4e4
	// Line 136, Address: 0x14d73c, Func Offset: 0x4ec
	// Line 138, Address: 0x14d740, Func Offset: 0x4f0
	// Line 135, Address: 0x14d744, Func Offset: 0x4f4
	// Line 136, Address: 0x14d748, Func Offset: 0x4f8
	// Line 137, Address: 0x14d750, Func Offset: 0x500
	// Line 138, Address: 0x14d76c, Func Offset: 0x51c
	// Line 140, Address: 0x14d77c, Func Offset: 0x52c
	// Line 144, Address: 0x14d784, Func Offset: 0x534
	// Line 140, Address: 0x14d788, Func Offset: 0x538
	// Line 141, Address: 0x14d78c, Func Offset: 0x53c
	// Line 140, Address: 0x14d790, Func Offset: 0x540
	// Line 141, Address: 0x14d798, Func Offset: 0x548
	// Line 142, Address: 0x14d7a0, Func Offset: 0x550
	// Line 141, Address: 0x14d7a4, Func Offset: 0x554
	// Line 142, Address: 0x14d7b0, Func Offset: 0x560
	// Line 143, Address: 0x14d7b8, Func Offset: 0x568
	// Line 142, Address: 0x14d7bc, Func Offset: 0x56c
	// Line 143, Address: 0x14d7c8, Func Offset: 0x578
	// Line 144, Address: 0x14d7d8, Func Offset: 0x588
	// Line 145, Address: 0x14d7e0, Func Offset: 0x590
	// Line 153, Address: 0x14d7fc, Func Offset: 0x5ac
	// Line 154, Address: 0x14d800, Func Offset: 0x5b0
	// Line 155, Address: 0x14d804, Func Offset: 0x5b4
	// Line 156, Address: 0x14d80c, Func Offset: 0x5bc
	// Line 158, Address: 0x14d814, Func Offset: 0x5c4
	// Line 156, Address: 0x14d820, Func Offset: 0x5d0
	// Line 157, Address: 0x14d824, Func Offset: 0x5d4
	// Line 156, Address: 0x14d828, Func Offset: 0x5d8
	// Line 157, Address: 0x14d82c, Func Offset: 0x5dc
	// Line 158, Address: 0x14d834, Func Offset: 0x5e4
	// Line 159, Address: 0x14d83c, Func Offset: 0x5ec
	// Line 162, Address: 0x14d844, Func Offset: 0x5f4
	// Line 159, Address: 0x14d854, Func Offset: 0x604
	// Line 160, Address: 0x14d85c, Func Offset: 0x60c
	// Line 161, Address: 0x14d86c, Func Offset: 0x61c
	// Line 162, Address: 0x14d878, Func Offset: 0x628
	// Line 163, Address: 0x14d880, Func Offset: 0x630
	// Line 164, Address: 0x14d898, Func Offset: 0x648
	// Line 169, Address: 0x14d8a4, Func Offset: 0x654
	// Line 170, Address: 0x14d8e4, Func Offset: 0x694
	// Line 172, Address: 0x14d8e8, Func Offset: 0x698
	// Line 173, Address: 0x14d8f0, Func Offset: 0x6a0
	// Line 170, Address: 0x14d8f8, Func Offset: 0x6a8
	// Line 171, Address: 0x14d8fc, Func Offset: 0x6ac
	// Line 174, Address: 0x14d900, Func Offset: 0x6b0
	// Line 175, Address: 0x14d908, Func Offset: 0x6b8
	// Line 173, Address: 0x14d90c, Func Offset: 0x6bc
	// Line 171, Address: 0x14d910, Func Offset: 0x6c0
	// Line 172, Address: 0x14d914, Func Offset: 0x6c4
	// Line 175, Address: 0x14d918, Func Offset: 0x6c8
	// Line 179, Address: 0x14d91c, Func Offset: 0x6cc
	// Line 180, Address: 0x14d920, Func Offset: 0x6d0
	// Line 172, Address: 0x14d924, Func Offset: 0x6d4
	// Line 173, Address: 0x14d944, Func Offset: 0x6f4
	// Line 174, Address: 0x14d968, Func Offset: 0x718
	// Line 175, Address: 0x14d98c, Func Offset: 0x73c
	// Line 176, Address: 0x14d9b0, Func Offset: 0x760
	// Line 177, Address: 0x14d9b8, Func Offset: 0x768
	// Line 178, Address: 0x14d9c0, Func Offset: 0x770
	// Line 179, Address: 0x14d9c8, Func Offset: 0x778
	// Line 180, Address: 0x14d9d0, Func Offset: 0x780
	// Line 182, Address: 0x14d9e8, Func Offset: 0x798
	// Line 181, Address: 0x14d9ec, Func Offset: 0x79c
	// Line 182, Address: 0x14d9f0, Func Offset: 0x7a0
	// Line 183, Address: 0x14d9f8, Func Offset: 0x7a8
	// Line 184, Address: 0x14da04, Func Offset: 0x7b4
	// Line 185, Address: 0x14da24, Func Offset: 0x7d4
	// Line 191, Address: 0x14da28, Func Offset: 0x7d8
	// Line 185, Address: 0x14da2c, Func Offset: 0x7dc
	// Line 186, Address: 0x14da30, Func Offset: 0x7e0
	// Line 187, Address: 0x14da38, Func Offset: 0x7e8
	// Line 191, Address: 0x14da3c, Func Offset: 0x7ec
	// Line 192, Address: 0x14da44, Func Offset: 0x7f4
	// Line 193, Address: 0x14da60, Func Offset: 0x810
	// Line 194, Address: 0x14da64, Func Offset: 0x814
	// Line 195, Address: 0x14da68, Func Offset: 0x818
	// Line 196, Address: 0x14da6c, Func Offset: 0x81c
	// Line 195, Address: 0x14da78, Func Offset: 0x828
	// Line 196, Address: 0x14da7c, Func Offset: 0x82c
	// Line 197, Address: 0x14da84, Func Offset: 0x834
	// Line 198, Address: 0x14da8c, Func Offset: 0x83c
	// Line 201, Address: 0x14da94, Func Offset: 0x844
	// Line 202, Address: 0x14dacc, Func Offset: 0x87c
	// Line 205, Address: 0x14dad4, Func Offset: 0x884
	// Line 206, Address: 0x14db0c, Func Offset: 0x8bc
	// Line 208, Address: 0x14db24, Func Offset: 0x8d4
	// Line 211, Address: 0x14db38, Func Offset: 0x8e8
	// Line 214, Address: 0x14dba4, Func Offset: 0x954
	// Line 216, Address: 0x14dbb4, Func Offset: 0x964
	// Line 217, Address: 0x14dbd0, Func Offset: 0x980
	// Line 218, Address: 0x14dbd4, Func Offset: 0x984
	// Line 220, Address: 0x14dbd8, Func Offset: 0x988
	// Line 225, Address: 0x14dbdc, Func Offset: 0x98c
	// Line 217, Address: 0x14dbe0, Func Offset: 0x990
	// Line 218, Address: 0x14dbe8, Func Offset: 0x998
	// Line 219, Address: 0x14dbf0, Func Offset: 0x9a0
	// Line 218, Address: 0x14dbf4, Func Offset: 0x9a4
	// Line 219, Address: 0x14dbf8, Func Offset: 0x9a8
	// Line 220, Address: 0x14dc08, Func Offset: 0x9b8
	// Line 221, Address: 0x14dc14, Func Offset: 0x9c4
	// Line 222, Address: 0x14dc20, Func Offset: 0x9d0
	// Line 223, Address: 0x14dc2c, Func Offset: 0x9dc
	// Line 224, Address: 0x14dc38, Func Offset: 0x9e8
	// Line 225, Address: 0x14dc44, Func Offset: 0x9f4
	// Line 226, Address: 0x14dc4c, Func Offset: 0x9fc
	// Line 228, Address: 0x14dc54, Func Offset: 0xa04
	// Line 229, Address: 0x14dc74, Func Offset: 0xa24
	// Line 232, Address: 0x14dc84, Func Offset: 0xa34
	// Line 234, Address: 0x14dce4, Func Offset: 0xa94
	// Line 238, Address: 0x14dcfc, Func Offset: 0xaac
	// Line 243, Address: 0x14dd14, Func Offset: 0xac4
	// Line 245, Address: 0x14dd38, Func Offset: 0xae8
	// Line 246, Address: 0x14dd40, Func Offset: 0xaf0
	// Line 247, Address: 0x14dd48, Func Offset: 0xaf8
	// Line 249, Address: 0x14dd54, Func Offset: 0xb04
	// Line 251, Address: 0x14dd64, Func Offset: 0xb14
	// Line 256, Address: 0x14dda0, Func Offset: 0xb50
	// Line 258, Address: 0x14ddc0, Func Offset: 0xb70
	// Line 259, Address: 0x14ddf4, Func Offset: 0xba4
	// Line 261, Address: 0x14de08, Func Offset: 0xbb8
	// Line 264, Address: 0x14de40, Func Offset: 0xbf0
	// Line 266, Address: 0x14de60, Func Offset: 0xc10
	// Line 271, Address: 0x14de98, Func Offset: 0xc48
	// Line 273, Address: 0x14deb8, Func Offset: 0xc68
	// Line 274, Address: 0x14deec, Func Offset: 0xc9c
	// Line 276, Address: 0x14df00, Func Offset: 0xcb0
	// Line 279, Address: 0x14df38, Func Offset: 0xce8
	// Line 280, Address: 0x14df5c, Func Offset: 0xd0c
	// Line 282, Address: 0x14df80, Func Offset: 0xd30
	// Line 283, Address: 0x14df90, Func Offset: 0xd40
	// Func End, Address: 0x14dfa8, Func Offset: 0xd58
}

