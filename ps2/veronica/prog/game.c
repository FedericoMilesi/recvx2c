






































typedef struct Camera;







typedef void(*type_82)(void*);


typedef unsigned int type_1[4];
typedef Unknown1* type_2[512];
typedef Unknown1* type_3[32];

typedef Unknown1* type_5[32];
typedef Unknown1* type_6[512];


typedef char type_9[8];
typedef Unknown1* type_10[32];
typedef Unknown1* type_11[512];

typedef char type_13[32];
typedef float type_14[32];
typedef Unknown1* type_15[512];

typedef short type_17[32];

typedef Unknown1* type_19[128];
typedef unsigned int type_20[1];


typedef int* type_23[16];
typedef Unknown1* type_24[128];


typedef Unknown1* type_27[128];
typedef int type_28[4];

typedef unsigned int type_30[4];
typedef float type_31[4];
typedef MODEL_DATA type_32[16];
typedef Unknown1* type_33[512];
typedef float type_34[4];
typedef char type_35[256];
typedef float type_36[4];
typedef float type_37[4];
typedef float type_38[4];
typedef float type_39[4];

typedef float type_41[3];
typedef unsigned char type_42[64];
typedef float type_43[3][20];
typedef float type_44[3];
typedef float type_45[3][20];
typedef float type_46[3];
typedef float type_47[3][20];
typedef char type_48[8];
typedef float type_49[3];
typedef float type_50[3][20];
typedef void* type_51[2];

typedef int type_53[4];
typedef unsigned char* type_54[256];
typedef unsigned int type_55[2];
typedef short type_56[256];

typedef float type_58[3];
typedef short type_59[256];
typedef int type_60[3];
typedef int type_61[8];
typedef float type_62[3];

typedef TEXTURE_BUFFER type_64[256];


typedef short type_67[256];
typedef char type_68[3];
typedef int type_69[64];
typedef MODEL_DATA type_70[450];
typedef unsigned int type_71[16];
typedef char type_72[4];
typedef unsigned int type_73[8];


typedef int type_76[450];
typedef unsigned int type_77[8];
typedef unsigned char type_78[450];
typedef float type_79[128];
typedef char type_80[16];
typedef char type_81[4];
typedef CAMERA type_83[2];
typedef unsigned int type_84[32];
typedef unsigned char type_85[256];
typedef unsigned int type_86[16];
typedef BOUNDARY type_87[64];
typedef unsigned int type_88[16];
typedef BOUNDARY type_89[64];
typedef unsigned int type_90[32];
typedef BOUNDARY type_91[64];
typedef unsigned int type_92[16];
typedef unsigned int type_93[3];
typedef BH_PWORK* type_94[16];
typedef unsigned int type_95[8];
typedef unsigned int type_96[1];
typedef unsigned int type_97[384];
typedef unsigned int type_98[2];
typedef unsigned char type_99[2];
typedef int* type_100[16];
typedef unsigned int type_101[4];
typedef char type_102[32];

typedef char type_104[64];

typedef char type_106[4];
typedef MODEL_DATA type_107[16];
typedef short type_108[4];
typedef unsigned char type_109[4];

typedef unsigned int type_111[8];
typedef unsigned int type_112[32];
typedef unsigned int type_113[4];

typedef Unknown1* type_115[512];
typedef Unknown1* type_116[128];
typedef Unknown1* type_117[512];
typedef unsigned char type_118[64];
typedef Unknown1* type_119[512];







































































































































































































































































































































































































































































































































































































































































































































extern SYS* sys;
extern ROOM* rom;
extern Camera cam;
extern BH_PWORK* plp;
unsigned char pl_sleep_cnt;
unsigned int Ps2_albinoid_flag;

void bhMainSequence();
void bhAllDrawModel();
void bhAllEasyDrawModel();
void bhEtcMirrorDrawModel();

// 
// Start address: 0x137600
void bhMainSequence()
{
	int i;
	// Line 120, Address: 0x137600, Func Offset: 0
	// Line 123, Address: 0x13760c, Func Offset: 0xc
	// Line 132, Address: 0x13762c, Func Offset: 0x2c
	// Line 134, Address: 0x137650, Func Offset: 0x50
	// Line 135, Address: 0x13765c, Func Offset: 0x5c
	// Line 137, Address: 0x137668, Func Offset: 0x68
	// Line 139, Address: 0x137688, Func Offset: 0x88
	// Line 155, Address: 0x1376c8, Func Offset: 0xc8
	// Line 156, Address: 0x1376d0, Func Offset: 0xd0
	// Line 157, Address: 0x1376d8, Func Offset: 0xd8
	// Line 158, Address: 0x1376e0, Func Offset: 0xe0
	// Line 170, Address: 0x1376e8, Func Offset: 0xe8
	// Line 173, Address: 0x137720, Func Offset: 0x120
	// Line 174, Address: 0x137728, Func Offset: 0x128
	// Line 175, Address: 0x137730, Func Offset: 0x130
	// Line 177, Address: 0x137738, Func Offset: 0x138
	// Line 191, Address: 0x137758, Func Offset: 0x158
	// Line 197, Address: 0x137770, Func Offset: 0x170
	// Line 203, Address: 0x137798, Func Offset: 0x198
	// Line 206, Address: 0x1377a0, Func Offset: 0x1a0
	// Line 207, Address: 0x1377b8, Func Offset: 0x1b8
	// Line 208, Address: 0x1377bc, Func Offset: 0x1bc
	// Line 207, Address: 0x1377c0, Func Offset: 0x1c0
	// Line 208, Address: 0x1377c8, Func Offset: 0x1c8
	// Line 209, Address: 0x1377d8, Func Offset: 0x1d8
	// Line 210, Address: 0x1377f8, Func Offset: 0x1f8
	// Line 211, Address: 0x137800, Func Offset: 0x200
	// Line 212, Address: 0x137808, Func Offset: 0x208
	// Line 213, Address: 0x13781c, Func Offset: 0x21c
	// Line 214, Address: 0x137834, Func Offset: 0x234
	// Line 216, Address: 0x137838, Func Offset: 0x238
	// Line 218, Address: 0x137868, Func Offset: 0x268
	// Line 220, Address: 0x137890, Func Offset: 0x290
	// Line 223, Address: 0x1378b8, Func Offset: 0x2b8
	// Line 233, Address: 0x1378e8, Func Offset: 0x2e8
	// Line 234, Address: 0x137914, Func Offset: 0x314
	// Line 235, Address: 0x137920, Func Offset: 0x320
	// Line 234, Address: 0x137928, Func Offset: 0x328
	// Line 235, Address: 0x137930, Func Offset: 0x330
	// Line 236, Address: 0x137948, Func Offset: 0x348
	// Line 237, Address: 0x13794c, Func Offset: 0x34c
	// Line 236, Address: 0x137958, Func Offset: 0x358
	// Line 237, Address: 0x137960, Func Offset: 0x360
	// Line 239, Address: 0x137970, Func Offset: 0x370
	// Line 240, Address: 0x137998, Func Offset: 0x398
	// Line 242, Address: 0x1379a4, Func Offset: 0x3a4
	// Line 240, Address: 0x1379a8, Func Offset: 0x3a8
	// Line 241, Address: 0x1379ac, Func Offset: 0x3ac
	// Line 242, Address: 0x1379b8, Func Offset: 0x3b8
	// Line 241, Address: 0x1379bc, Func Offset: 0x3bc
	// Line 242, Address: 0x1379c4, Func Offset: 0x3c4
	// Line 243, Address: 0x1379d8, Func Offset: 0x3d8
	// Line 244, Address: 0x1379e0, Func Offset: 0x3e0
	// Line 243, Address: 0x1379e4, Func Offset: 0x3e4
	// Line 244, Address: 0x1379ec, Func Offset: 0x3ec
	// Line 245, Address: 0x1379fc, Func Offset: 0x3fc
	// Line 246, Address: 0x137a00, Func Offset: 0x400
	// Line 247, Address: 0x137a20, Func Offset: 0x420
	// Line 248, Address: 0x137a40, Func Offset: 0x440
	// Line 251, Address: 0x137a60, Func Offset: 0x460
	// Line 252, Address: 0x137a8c, Func Offset: 0x48c
	// Line 253, Address: 0x137a9c, Func Offset: 0x49c
	// Line 254, Address: 0x137aa0, Func Offset: 0x4a0
	// Line 253, Address: 0x137aac, Func Offset: 0x4ac
	// Line 254, Address: 0x137ab4, Func Offset: 0x4b4
	// Line 255, Address: 0x137ac4, Func Offset: 0x4c4
	// Line 256, Address: 0x137ac8, Func Offset: 0x4c8
	// Line 257, Address: 0x137ae4, Func Offset: 0x4e4
	// Line 258, Address: 0x137af0, Func Offset: 0x4f0
	// Line 259, Address: 0x137af8, Func Offset: 0x4f8
	// Line 260, Address: 0x137b04, Func Offset: 0x504
	// Line 259, Address: 0x137b08, Func Offset: 0x508
	// Line 260, Address: 0x137b10, Func Offset: 0x510
	// Line 261, Address: 0x137b24, Func Offset: 0x524
	// Line 262, Address: 0x137b2c, Func Offset: 0x52c
	// Line 263, Address: 0x137b3c, Func Offset: 0x53c
	// Line 262, Address: 0x137b40, Func Offset: 0x540
	// Line 263, Address: 0x137b48, Func Offset: 0x548
	// Line 264, Address: 0x137b70, Func Offset: 0x570
	// Line 265, Address: 0x137b90, Func Offset: 0x590
	// Line 266, Address: 0x137bb0, Func Offset: 0x5b0
	// Line 268, Address: 0x137bd0, Func Offset: 0x5d0
	// Line 269, Address: 0x137bec, Func Offset: 0x5ec
	// Line 270, Address: 0x137bf4, Func Offset: 0x5f4
	// Line 271, Address: 0x137bf8, Func Offset: 0x5f8
	// Line 269, Address: 0x137bfc, Func Offset: 0x5fc
	// Line 270, Address: 0x137c04, Func Offset: 0x604
	// Line 271, Address: 0x137c0c, Func Offset: 0x60c
	// Line 270, Address: 0x137c10, Func Offset: 0x610
	// Line 271, Address: 0x137c18, Func Offset: 0x618
	// Line 272, Address: 0x137c2c, Func Offset: 0x62c
	// Line 273, Address: 0x137c34, Func Offset: 0x634
	// Line 272, Address: 0x137c38, Func Offset: 0x638
	// Line 273, Address: 0x137c40, Func Offset: 0x640
	// Line 279, Address: 0x137c50, Func Offset: 0x650
	// Line 280, Address: 0x137c6c, Func Offset: 0x66c
	// Line 281, Address: 0x137c74, Func Offset: 0x674
	// Line 280, Address: 0x137c78, Func Offset: 0x678
	// Line 281, Address: 0x137c80, Func Offset: 0x680
	// Line 283, Address: 0x137c88, Func Offset: 0x688
	// Line 284, Address: 0x137c94, Func Offset: 0x694
	// Line 283, Address: 0x137c98, Func Offset: 0x698
	// Line 284, Address: 0x137ca0, Func Offset: 0x6a0
	// Line 285, Address: 0x137cc8, Func Offset: 0x6c8
	// Line 286, Address: 0x137ce8, Func Offset: 0x6e8
	// Line 288, Address: 0x137cf0, Func Offset: 0x6f0
	// Line 286, Address: 0x137cf8, Func Offset: 0x6f8
	// Line 288, Address: 0x137d00, Func Offset: 0x700
	// Line 289, Address: 0x137d14, Func Offset: 0x714
	// Line 290, Address: 0x137d18, Func Offset: 0x718
	// Line 291, Address: 0x137d38, Func Offset: 0x738
	// Line 294, Address: 0x137d48, Func Offset: 0x748
	// Line 295, Address: 0x137d74, Func Offset: 0x774
	// Line 297, Address: 0x137d78, Func Offset: 0x778
	// Line 298, Address: 0x137d90, Func Offset: 0x790
	// Line 299, Address: 0x137db4, Func Offset: 0x7b4
	// Line 300, Address: 0x137dc0, Func Offset: 0x7c0
	// Line 301, Address: 0x137df0, Func Offset: 0x7f0
	// Line 305, Address: 0x137e00, Func Offset: 0x800
	// Line 306, Address: 0x137e1c, Func Offset: 0x81c
	// Line 307, Address: 0x137e24, Func Offset: 0x824
	// Line 306, Address: 0x137e28, Func Offset: 0x828
	// Line 307, Address: 0x137e30, Func Offset: 0x830
	// Line 309, Address: 0x137e38, Func Offset: 0x838
	// Line 310, Address: 0x137e44, Func Offset: 0x844
	// Line 309, Address: 0x137e48, Func Offset: 0x848
	// Line 310, Address: 0x137e50, Func Offset: 0x850
	// Line 312, Address: 0x137e64, Func Offset: 0x864
	// Line 313, Address: 0x137e68, Func Offset: 0x868
	// Line 312, Address: 0x137e6c, Func Offset: 0x86c
	// Line 313, Address: 0x137e74, Func Offset: 0x874
	// Line 314, Address: 0x137e9c, Func Offset: 0x89c
	// Line 315, Address: 0x137ea0, Func Offset: 0x8a0
	// Line 316, Address: 0x137ecc, Func Offset: 0x8cc
	// Line 318, Address: 0x137ed0, Func Offset: 0x8d0
	// Line 322, Address: 0x137f00, Func Offset: 0x900
	// Line 326, Address: 0x137f40, Func Offset: 0x940
	// Line 327, Address: 0x137f48, Func Offset: 0x948
	// Line 328, Address: 0x137f4c, Func Offset: 0x94c
	// Line 326, Address: 0x137f50, Func Offset: 0x950
	// Line 327, Address: 0x137f58, Func Offset: 0x958
	// Line 328, Address: 0x137f60, Func Offset: 0x960
	// Line 327, Address: 0x137f64, Func Offset: 0x964
	// Line 328, Address: 0x137f6c, Func Offset: 0x96c
	// Line 330, Address: 0x137f7c, Func Offset: 0x97c
	// Line 332, Address: 0x137f80, Func Offset: 0x980
	// Line 333, Address: 0x137f98, Func Offset: 0x998
	// Line 334, Address: 0x137fc0, Func Offset: 0x9c0
	// Line 335, Address: 0x137fdc, Func Offset: 0x9dc
	// Line 336, Address: 0x137fe4, Func Offset: 0x9e4
	// Line 338, Address: 0x137ff8, Func Offset: 0x9f8
	// Line 339, Address: 0x138020, Func Offset: 0xa20
	// Line 342, Address: 0x138030, Func Offset: 0xa30
	// Line 344, Address: 0x138050, Func Offset: 0xa50
	// Line 345, Address: 0x138060, Func Offset: 0xa60
	// Line 346, Address: 0x138080, Func Offset: 0xa80
	// Line 347, Address: 0x13808c, Func Offset: 0xa8c
	// Line 349, Address: 0x138090, Func Offset: 0xa90
	// Line 351, Address: 0x138098, Func Offset: 0xa98
	// Line 352, Address: 0x1380c0, Func Offset: 0xac0
	// Func End, Address: 0x1380d0, Func Offset: 0xad0
}

// 
// Start address: 0x1380d0
void bhAllDrawModel()
{
	// Line 358, Address: 0x1380d0, Func Offset: 0
	// Line 361, Address: 0x1380d8, Func Offset: 0x8
	// Line 364, Address: 0x1380e0, Func Offset: 0x10
	// Line 365, Address: 0x1380e8, Func Offset: 0x18
	// Line 368, Address: 0x13810c, Func Offset: 0x3c
	// Line 371, Address: 0x138130, Func Offset: 0x60
	// Line 372, Address: 0x13815c, Func Offset: 0x8c
	// Line 374, Address: 0x138164, Func Offset: 0x94
	// Line 402, Address: 0x138174, Func Offset: 0xa4
	// Line 403, Address: 0x1381a0, Func Offset: 0xd0
	// Line 404, Address: 0x1381b0, Func Offset: 0xe0
	// Line 406, Address: 0x1381c0, Func Offset: 0xf0
	// Line 410, Address: 0x1381c8, Func Offset: 0xf8
	// Line 412, Address: 0x1381d4, Func Offset: 0x104
	// Line 415, Address: 0x138208, Func Offset: 0x138
	// Line 416, Address: 0x138218, Func Offset: 0x148
	// Line 417, Address: 0x138230, Func Offset: 0x160
	// Line 421, Address: 0x138238, Func Offset: 0x168
	// Line 423, Address: 0x138240, Func Offset: 0x170
	// Line 424, Address: 0x138248, Func Offset: 0x178
	// Line 427, Address: 0x13826c, Func Offset: 0x19c
	// Line 432, Address: 0x138290, Func Offset: 0x1c0
	// Line 433, Address: 0x1382a0, Func Offset: 0x1d0
	// Line 434, Address: 0x1382b8, Func Offset: 0x1e8
	// Line 438, Address: 0x1382c0, Func Offset: 0x1f0
	// Line 439, Address: 0x1382cc, Func Offset: 0x1fc
	// Line 440, Address: 0x1382d4, Func Offset: 0x204
	// Line 442, Address: 0x1382f4, Func Offset: 0x224
	// Line 447, Address: 0x138300, Func Offset: 0x230
	// Line 449, Address: 0x138360, Func Offset: 0x290
	// Line 451, Address: 0x13837c, Func Offset: 0x2ac
	// Line 461, Address: 0x138394, Func Offset: 0x2c4
	// Line 462, Address: 0x1383a0, Func Offset: 0x2d0
	// Line 463, Address: 0x1383bc, Func Offset: 0x2ec
	// Line 487, Address: 0x1383cc, Func Offset: 0x2fc
	// Line 488, Address: 0x1383f8, Func Offset: 0x328
	// Line 490, Address: 0x138400, Func Offset: 0x330
	// Line 491, Address: 0x138410, Func Offset: 0x340
	// Line 493, Address: 0x138418, Func Offset: 0x348
	// Line 494, Address: 0x138420, Func Offset: 0x350
	// Line 496, Address: 0x138428, Func Offset: 0x358
	// Func End, Address: 0x138434, Func Offset: 0x364
}

// 
// Start address: 0x138440
void bhAllEasyDrawModel()
{
	// Line 502, Address: 0x138440, Func Offset: 0
	// Line 504, Address: 0x138444, Func Offset: 0x4
	// Line 502, Address: 0x138448, Func Offset: 0x8
	// Line 504, Address: 0x13844c, Func Offset: 0xc
	// Line 507, Address: 0x138454, Func Offset: 0x14
	// Line 508, Address: 0x13845c, Func Offset: 0x1c
	// Line 511, Address: 0x138480, Func Offset: 0x40
	// Line 514, Address: 0x1384a4, Func Offset: 0x64
	// Line 515, Address: 0x1384d0, Func Offset: 0x90
	// Line 517, Address: 0x1384d8, Func Offset: 0x98
	// Line 518, Address: 0x1384e8, Func Offset: 0xa8
	// Line 519, Address: 0x138514, Func Offset: 0xd4
	// Line 520, Address: 0x138524, Func Offset: 0xe4
	// Line 522, Address: 0x138534, Func Offset: 0xf4
	// Line 525, Address: 0x13853c, Func Offset: 0xfc
	// Line 532, Address: 0x138544, Func Offset: 0x104
	// Line 533, Address: 0x13854c, Func Offset: 0x10c
	// Line 534, Address: 0x138564, Func Offset: 0x124
	// Line 536, Address: 0x13856c, Func Offset: 0x12c
	// Func End, Address: 0x138578, Func Offset: 0x138
}

// 
// Start address: 0x138580
void bhEtcMirrorDrawModel()
{
	// Line 542, Address: 0x138580, Func Offset: 0
	// Line 547, Address: 0x138588, Func Offset: 0x8
	// Line 548, Address: 0x138590, Func Offset: 0x10
	// Line 552, Address: 0x13859c, Func Offset: 0x1c
	// Line 553, Address: 0x1385a4, Func Offset: 0x24
	// Line 556, Address: 0x1385c8, Func Offset: 0x48
	// Line 559, Address: 0x1385ec, Func Offset: 0x6c
	// Line 560, Address: 0x138618, Func Offset: 0x98
	// Line 562, Address: 0x138620, Func Offset: 0xa0
	// Line 563, Address: 0x138630, Func Offset: 0xb0
	// Line 564, Address: 0x13865c, Func Offset: 0xdc
	// Line 565, Address: 0x13866c, Func Offset: 0xec
	// Line 567, Address: 0x13867c, Func Offset: 0xfc
	// Line 569, Address: 0x138684, Func Offset: 0x104
	// Line 571, Address: 0x138690, Func Offset: 0x110
	// Line 573, Address: 0x138698, Func Offset: 0x118
	// Line 574, Address: 0x1386b0, Func Offset: 0x130
	// Line 576, Address: 0x1386b8, Func Offset: 0x138
	// Func End, Address: 0x1386c4, Func Offset: 0x144
}

