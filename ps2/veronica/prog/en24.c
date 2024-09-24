



































typedef void(*type_25)(BH_PWORK*);
typedef void(*type_67)(BH_PWORK*);
typedef void(*type_70)(void*);
typedef void(*type_94)(BH_PWORK*);

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
typedef int type_26[4];
typedef void(*type_27)(BH_PWORK*)[6];

typedef unsigned int type_29[4];
typedef MODEL_DATA type_30[16];
typedef Unknown1* type_31[512];
typedef char type_32[256];
typedef float type_33[4];
typedef float type_34[4];
typedef float type_35[4];

typedef unsigned char type_37[64];

typedef char type_39[8];
typedef void* type_40[2];
typedef float type_41[19];

typedef int type_43[4];
typedef unsigned char* type_44[256];
typedef unsigned int type_45[2];
typedef short type_46[256];

typedef float type_48[3];
typedef short type_49[256];
typedef int type_50[3];
typedef int type_51[8];
typedef float type_52[3];

typedef TEXTURE_BUFFER type_54[256];


typedef short type_57[256];
typedef char type_58[3];
typedef int type_59[64];
typedef MODEL_DATA type_60[450];


typedef int type_63[450];
typedef unsigned int type_64[8];
typedef unsigned char type_65[450];
typedef char type_66[16];
typedef void(*type_68)(BH_PWORK*)[1];
typedef char type_69[4];
typedef unsigned int type_71[32];
typedef unsigned int type_72[16];
typedef Unknown18 type_73[3];
typedef BOUNDARY type_74[64];
typedef unsigned int type_75[16];
typedef BOUNDARY type_76[64];
typedef unsigned int type_77[32];
typedef BOUNDARY type_78[64];
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
typedef void(*type_95)(BH_PWORK*)[7];
typedef MODEL_DATA type_96[16];
typedef short type_97[4];
typedef unsigned char type_98[4];

typedef unsigned int type_100[32];

typedef Unknown1* type_102[512];
typedef Unknown1* type_103[128];
typedef int type_104[2];
typedef Unknown1* type_105[512];
typedef unsigned char type_106[64];
typedef Unknown1* type_107[512];






















































































































































































































































































































































































































































































































































































































































































float DeadRate[19];
Unknown18 CapColTab[3];
void(*bhEne24_Mode0)(BH_PWORK*)[7];
void(*bhEne24_BrainType)(BH_PWORK*)[1];
void(*bhEne24_MoveMode2)(BH_PWORK*)[6];
extern BH_PWORK* plp;
extern SYS* sys;

void bhEne24(BH_PWORK* epw);
void bhEne24_Init(BH_PWORK* epw);
void bhEne24_Brain(BH_PWORK* epw);
void bhEne24_BR00(BH_PWORK* epw);
void bhEne24_Move(BH_PWORK* epw);
void bhEne24_MV00();
void bhEne24_MV01(BH_PWORK* epw);
void bhEne24_MV02(BH_PWORK* epw);
void bhEne24_MV03(BH_PWORK* epw);
void bhEne24_MV04(BH_PWORK* epw);
void bhEne24_MV05(BH_PWORK* epw);
void bhEne24_Nage();
void bhEne24_Damage();
void bhEne24_Die();
void bhEne24_Dummy();
void bhEne24_CollisionWalls(BH_PWORK* epw);
void bhEne24_CollisionLine(BH_PWORK* epw);
int bhEne24_DeadCheck(BH_PWORK* epw);

// 
// Start address: 0x207620
void bhEne24(BH_PWORK* epw)
{
	BH_PWORK* ep;
	// Line 204, Address: 0x207620, Func Offset: 0
	// Line 206, Address: 0x20762c, Func Offset: 0xc
	// Line 210, Address: 0x20763c, Func Offset: 0x1c
	// Line 213, Address: 0x20765c, Func Offset: 0x3c
	// Line 214, Address: 0x207664, Func Offset: 0x44
	// Line 215, Address: 0x207674, Func Offset: 0x54
	// Line 218, Address: 0x20767c, Func Offset: 0x5c
	// Line 221, Address: 0x207688, Func Offset: 0x68
	// Line 226, Address: 0x20768c, Func Offset: 0x6c
	// Line 227, Address: 0x207694, Func Offset: 0x74
	// Line 221, Address: 0x207698, Func Offset: 0x78
	// Line 222, Address: 0x20769c, Func Offset: 0x7c
	// Line 223, Address: 0x2076a4, Func Offset: 0x84
	// Line 224, Address: 0x2076ac, Func Offset: 0x8c
	// Line 225, Address: 0x2076b4, Func Offset: 0x94
	// Line 226, Address: 0x2076bc, Func Offset: 0x9c
	// Line 227, Address: 0x2076c8, Func Offset: 0xa8
	// Line 230, Address: 0x2076cc, Func Offset: 0xac
	// Line 233, Address: 0x2076ec, Func Offset: 0xcc
	// Line 234, Address: 0x207700, Func Offset: 0xe0
	// Line 235, Address: 0x207720, Func Offset: 0x100
	// Line 237, Address: 0x20772c, Func Offset: 0x10c
	// Func End, Address: 0x20773c, Func Offset: 0x11c
}

// 
// Start address: 0x207740
void bhEne24_Init(BH_PWORK* epw)
{
	// Line 247, Address: 0x207740, Func Offset: 0
	// Line 249, Address: 0x20774c, Func Offset: 0xc
	// Line 252, Address: 0x207750, Func Offset: 0x10
	// Line 250, Address: 0x207758, Func Offset: 0x18
	// Line 256, Address: 0x20775c, Func Offset: 0x1c
	// Line 249, Address: 0x207760, Func Offset: 0x20
	// Line 250, Address: 0x207768, Func Offset: 0x28
	// Line 260, Address: 0x20776c, Func Offset: 0x2c
	// Line 250, Address: 0x207770, Func Offset: 0x30
	// Line 251, Address: 0x207778, Func Offset: 0x38
	// Line 252, Address: 0x207784, Func Offset: 0x44
	// Line 253, Address: 0x207788, Func Offset: 0x48
	// Line 254, Address: 0x20778c, Func Offset: 0x4c
	// Line 255, Address: 0x207790, Func Offset: 0x50
	// Line 256, Address: 0x207794, Func Offset: 0x54
	// Line 257, Address: 0x207798, Func Offset: 0x58
	// Line 260, Address: 0x2077a4, Func Offset: 0x64
	// Line 263, Address: 0x2077a8, Func Offset: 0x68
	// Line 264, Address: 0x2077b4, Func Offset: 0x74
	// Line 266, Address: 0x2077c4, Func Offset: 0x84
	// Line 267, Address: 0x2077c8, Func Offset: 0x88
	// Line 279, Address: 0x2077d0, Func Offset: 0x90
	// Line 275, Address: 0x2077d4, Func Offset: 0x94
	// Line 266, Address: 0x2077d8, Func Offset: 0x98
	// Line 267, Address: 0x2077dc, Func Offset: 0x9c
	// Line 276, Address: 0x2077e0, Func Offset: 0xa0
	// Line 279, Address: 0x2077e4, Func Offset: 0xa4
	// Line 267, Address: 0x2077e8, Func Offset: 0xa8
	// Line 268, Address: 0x2077ec, Func Offset: 0xac
	// Line 269, Address: 0x2077f4, Func Offset: 0xb4
	// Line 270, Address: 0x2077fc, Func Offset: 0xbc
	// Line 271, Address: 0x207804, Func Offset: 0xc4
	// Line 274, Address: 0x20780c, Func Offset: 0xcc
	// Line 275, Address: 0x207810, Func Offset: 0xd0
	// Line 276, Address: 0x207814, Func Offset: 0xd4
	// Line 282, Address: 0x207820, Func Offset: 0xe0
	// Line 283, Address: 0x207868, Func Offset: 0x128
	// Func End, Address: 0x207878, Func Offset: 0x138
}

// 
// Start address: 0x207880
void bhEne24_Brain(BH_PWORK* epw)
{
	// Line 294, Address: 0x207880, Func Offset: 0
	// Func End, Address: 0x2078a0, Func Offset: 0x20
}

// 
// Start address: 0x2078a0
void bhEne24_BR00(BH_PWORK* epw)
{
	// Line 305, Address: 0x2078a0, Func Offset: 0
	// Line 307, Address: 0x2078ac, Func Offset: 0xc
	// Line 308, Address: 0x2078c8, Func Offset: 0x28
	// Line 309, Address: 0x2078e4, Func Offset: 0x44
	// Line 310, Address: 0x2078e8, Func Offset: 0x48
	// Line 311, Address: 0x2078f0, Func Offset: 0x50
	// Line 316, Address: 0x2078fc, Func Offset: 0x5c
	// Line 318, Address: 0x207938, Func Offset: 0x98
	// Line 320, Address: 0x207940, Func Offset: 0xa0
	// Line 321, Address: 0x207950, Func Offset: 0xb0
	// Line 322, Address: 0x207958, Func Offset: 0xb8
	// Line 324, Address: 0x207960, Func Offset: 0xc0
	// Line 327, Address: 0x20798c, Func Offset: 0xec
	// Line 326, Address: 0x207990, Func Offset: 0xf0
	// Line 327, Address: 0x207994, Func Offset: 0xf4
	// Line 330, Address: 0x207998, Func Offset: 0xf8
	// Line 333, Address: 0x2079e0, Func Offset: 0x140
	// Func End, Address: 0x2079f0, Func Offset: 0x150
}

// 
// Start address: 0x2079f0
void bhEne24_Move(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	// Line 343, Address: 0x2079f0, Func Offset: 0
	// Line 345, Address: 0x2079fc, Func Offset: 0xc
	// Line 346, Address: 0x207a0c, Func Offset: 0x1c
	// Line 349, Address: 0x207a14, Func Offset: 0x24
	// Line 350, Address: 0x207a2c, Func Offset: 0x3c
	// Line 351, Address: 0x207a3c, Func Offset: 0x4c
	// Line 352, Address: 0x207a4c, Func Offset: 0x5c
	// Line 357, Address: 0x207a58, Func Offset: 0x68
	// Line 358, Address: 0x207a68, Func Offset: 0x78
	// Line 359, Address: 0x207a74, Func Offset: 0x84
	// Line 361, Address: 0x207a80, Func Offset: 0x90
	// Line 362, Address: 0x207ad4, Func Offset: 0xe4
	// Line 363, Address: 0x207adc, Func Offset: 0xec
	// Line 365, Address: 0x207ae4, Func Offset: 0xf4
	// Line 370, Address: 0x207af0, Func Offset: 0x100
	// Line 373, Address: 0x207b00, Func Offset: 0x110
	// Line 377, Address: 0x207b14, Func Offset: 0x124
	// Line 376, Address: 0x207b18, Func Offset: 0x128
	// Line 377, Address: 0x207b1c, Func Offset: 0x12c
	// Line 378, Address: 0x207b20, Func Offset: 0x130
	// Line 379, Address: 0x207b24, Func Offset: 0x134
	// Line 380, Address: 0x207b28, Func Offset: 0x138
	// Line 382, Address: 0x207b2c, Func Offset: 0x13c
	// Line 379, Address: 0x207b34, Func Offset: 0x144
	// Line 380, Address: 0x207b38, Func Offset: 0x148
	// Line 382, Address: 0x207b3c, Func Offset: 0x14c
	// Line 380, Address: 0x207b48, Func Offset: 0x158
	// Line 381, Address: 0x207b50, Func Offset: 0x160
	// Line 382, Address: 0x207b54, Func Offset: 0x164
	// Line 385, Address: 0x207b5c, Func Offset: 0x16c
	// Line 386, Address: 0x207b68, Func Offset: 0x178
	// Line 391, Address: 0x207b6c, Func Offset: 0x17c
	// Line 385, Address: 0x207b70, Func Offset: 0x180
	// Line 386, Address: 0x207b7c, Func Offset: 0x18c
	// Line 396, Address: 0x207b84, Func Offset: 0x194
	// Line 386, Address: 0x207b90, Func Offset: 0x1a0
	// Line 387, Address: 0x207b9c, Func Offset: 0x1ac
	// Line 388, Address: 0x207bb0, Func Offset: 0x1c0
	// Line 389, Address: 0x207bc8, Func Offset: 0x1d8
	// Line 390, Address: 0x207be0, Func Offset: 0x1f0
	// Line 391, Address: 0x207bf8, Func Offset: 0x208
	// Line 392, Address: 0x207c0c, Func Offset: 0x21c
	// Line 393, Address: 0x207c20, Func Offset: 0x230
	// Line 394, Address: 0x207c34, Func Offset: 0x244
	// Line 395, Address: 0x207c48, Func Offset: 0x258
	// Line 396, Address: 0x207c60, Func Offset: 0x270
	// Line 398, Address: 0x207c78, Func Offset: 0x288
	// Line 399, Address: 0x207c7c, Func Offset: 0x28c
	// Line 398, Address: 0x207c80, Func Offset: 0x290
	// Line 399, Address: 0x207c88, Func Offset: 0x298
	// Line 400, Address: 0x207c8c, Func Offset: 0x29c
	// Line 403, Address: 0x207c90, Func Offset: 0x2a0
	// Line 407, Address: 0x207c98, Func Offset: 0x2a8
	// Line 408, Address: 0x207cb8, Func Offset: 0x2c8
	// Func End, Address: 0x207cc8, Func Offset: 0x2d8
}

// 
// Start address: 0x207cd0
void bhEne24_MV00()
{
	// Line 420, Address: 0x207cd0, Func Offset: 0
	// Func End, Address: 0x207cd8, Func Offset: 0x8
}

// 
// Start address: 0x207ce0
void bhEne24_MV01(BH_PWORK* epw)
{
	// Line 430, Address: 0x207ce0, Func Offset: 0
	// Line 431, Address: 0x207cf0, Func Offset: 0x10
	// Line 433, Address: 0x207d10, Func Offset: 0x30
	// Line 436, Address: 0x207d24, Func Offset: 0x44
	// Line 439, Address: 0x207d2c, Func Offset: 0x4c
	// Line 440, Address: 0x207d70, Func Offset: 0x90
	// Line 442, Address: 0x207d7c, Func Offset: 0x9c
	// Line 443, Address: 0x207d8c, Func Offset: 0xac
	// Line 444, Address: 0x207d90, Func Offset: 0xb0
	// Line 445, Address: 0x207de4, Func Offset: 0x104
	// Line 449, Address: 0x207de8, Func Offset: 0x108
	// Func End, Address: 0x207df8, Func Offset: 0x118
}

// 
// Start address: 0x207e00
void bhEne24_MV02(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	// Line 459, Address: 0x207e00, Func Offset: 0
	// Line 462, Address: 0x207e14, Func Offset: 0x14
	// Line 465, Address: 0x207e34, Func Offset: 0x34
	// Line 466, Address: 0x207e74, Func Offset: 0x74
	// Line 467, Address: 0x207ec4, Func Offset: 0xc4
	// Line 468, Address: 0x207f38, Func Offset: 0x138
	// Line 469, Address: 0x207f44, Func Offset: 0x144
	// Line 472, Address: 0x207f50, Func Offset: 0x150
	// Line 475, Address: 0x207fa4, Func Offset: 0x1a4
	// Line 477, Address: 0x207fb0, Func Offset: 0x1b0
	// Line 479, Address: 0x207fbc, Func Offset: 0x1bc
	// Line 481, Address: 0x207fc8, Func Offset: 0x1c8
	// Line 482, Address: 0x207fdc, Func Offset: 0x1dc
	// Line 486, Address: 0x208004, Func Offset: 0x204
	// Line 487, Address: 0x208024, Func Offset: 0x224
	// Line 488, Address: 0x20802c, Func Offset: 0x22c
	// Line 489, Address: 0x208044, Func Offset: 0x244
	// Line 488, Address: 0x208050, Func Offset: 0x250
	// Line 489, Address: 0x208054, Func Offset: 0x254
	// Line 488, Address: 0x208058, Func Offset: 0x258
	// Line 489, Address: 0x20805c, Func Offset: 0x25c
	// Line 490, Address: 0x20806c, Func Offset: 0x26c
	// Line 493, Address: 0x20807c, Func Offset: 0x27c
	// Line 494, Address: 0x20808c, Func Offset: 0x28c
	// Line 495, Address: 0x208094, Func Offset: 0x294
	// Line 496, Address: 0x208098, Func Offset: 0x298
	// Line 499, Address: 0x20809c, Func Offset: 0x29c
	// Line 502, Address: 0x2080b8, Func Offset: 0x2b8
	// Line 501, Address: 0x2080bc, Func Offset: 0x2bc
	// Line 502, Address: 0x2080c0, Func Offset: 0x2c0
	// Line 503, Address: 0x2080c4, Func Offset: 0x2c4
	// Line 509, Address: 0x2080c8, Func Offset: 0x2c8
	// Line 510, Address: 0x2080d4, Func Offset: 0x2d4
	// Line 511, Address: 0x2080e0, Func Offset: 0x2e0
	// Line 512, Address: 0x2080f4, Func Offset: 0x2f4
	// Line 523, Address: 0x208134, Func Offset: 0x334
	// Func End, Address: 0x208148, Func Offset: 0x348
}

// 
// Start address: 0x208150
void bhEne24_MV03(BH_PWORK* epw)
{
	// Line 533, Address: 0x208150, Func Offset: 0
	// Line 534, Address: 0x208160, Func Offset: 0x10
	// Line 537, Address: 0x208180, Func Offset: 0x30
	// Line 538, Address: 0x2081d0, Func Offset: 0x80
	// Line 539, Address: 0x208214, Func Offset: 0xc4
	// Line 540, Address: 0x208224, Func Offset: 0xd4
	// Line 542, Address: 0x208230, Func Offset: 0xe0
	// Line 544, Address: 0x208240, Func Offset: 0xf0
	// Line 545, Address: 0x208250, Func Offset: 0x100
	// Line 546, Address: 0x208258, Func Offset: 0x108
	// Line 547, Address: 0x208260, Func Offset: 0x110
	// Line 551, Address: 0x208264, Func Offset: 0x114
	// Func End, Address: 0x208274, Func Offset: 0x124
}

// 
// Start address: 0x208280
void bhEne24_MV04(BH_PWORK* epw)
{
	// Line 561, Address: 0x208280, Func Offset: 0
	// Line 562, Address: 0x208290, Func Offset: 0x10
	// Line 564, Address: 0x2082b0, Func Offset: 0x30
	// Line 565, Address: 0x2082c0, Func Offset: 0x40
	// Line 566, Address: 0x2082d8, Func Offset: 0x58
	// Line 565, Address: 0x2082dc, Func Offset: 0x5c
	// Line 566, Address: 0x2082e8, Func Offset: 0x68
	// Line 567, Address: 0x2082f0, Func Offset: 0x70
	// Line 568, Address: 0x208310, Func Offset: 0x90
	// Line 569, Address: 0x208318, Func Offset: 0x98
	// Line 567, Address: 0x20831c, Func Offset: 0x9c
	// Line 568, Address: 0x208320, Func Offset: 0xa0
	// Line 569, Address: 0x20832c, Func Offset: 0xac
	// Line 570, Address: 0x208338, Func Offset: 0xb8
	// Line 572, Address: 0x208344, Func Offset: 0xc4
	// Line 573, Address: 0x208358, Func Offset: 0xd8
	// Line 576, Address: 0x20835c, Func Offset: 0xdc
	// Line 573, Address: 0x208364, Func Offset: 0xe4
	// Line 576, Address: 0x208368, Func Offset: 0xe8
	// Line 579, Address: 0x20836c, Func Offset: 0xec
	// Line 573, Address: 0x208370, Func Offset: 0xf0
	// Line 574, Address: 0x20837c, Func Offset: 0xfc
	// Line 575, Address: 0x208390, Func Offset: 0x110
	// Line 576, Address: 0x2083a4, Func Offset: 0x124
	// Line 579, Address: 0x2083b4, Func Offset: 0x134
	// Line 583, Address: 0x2083f4, Func Offset: 0x174
	// Line 585, Address: 0x20840c, Func Offset: 0x18c
	// Line 586, Address: 0x208420, Func Offset: 0x1a0
	// Line 585, Address: 0x208424, Func Offset: 0x1a4
	// Line 586, Address: 0x20842c, Func Offset: 0x1ac
	// Line 587, Address: 0x208434, Func Offset: 0x1b4
	// Line 586, Address: 0x208438, Func Offset: 0x1b8
	// Line 587, Address: 0x208440, Func Offset: 0x1c0
	// Line 588, Address: 0x208448, Func Offset: 0x1c8
	// Line 587, Address: 0x20844c, Func Offset: 0x1cc
	// Line 588, Address: 0x208454, Func Offset: 0x1d4
	// Line 589, Address: 0x20846c, Func Offset: 0x1ec
	// Line 594, Address: 0x208478, Func Offset: 0x1f8
	// Line 589, Address: 0x208484, Func Offset: 0x204
	// Line 590, Address: 0x208488, Func Offset: 0x208
	// Line 594, Address: 0x208490, Func Offset: 0x210
	// Line 590, Address: 0x208494, Func Offset: 0x214
	// Line 591, Address: 0x208498, Func Offset: 0x218
	// Line 592, Address: 0x2084a4, Func Offset: 0x224
	// Line 594, Address: 0x2084ac, Func Offset: 0x22c
	// Line 596, Address: 0x2084b4, Func Offset: 0x234
	// Line 597, Address: 0x2084d0, Func Offset: 0x250
	// Line 598, Address: 0x2084e8, Func Offset: 0x268
	// Line 599, Address: 0x2084f8, Func Offset: 0x278
	// Line 603, Address: 0x208504, Func Offset: 0x284
	// Line 605, Address: 0x20850c, Func Offset: 0x28c
	// Line 604, Address: 0x208510, Func Offset: 0x290
	// Line 605, Address: 0x208514, Func Offset: 0x294
	// Line 606, Address: 0x208518, Func Offset: 0x298
	// Line 607, Address: 0x20851c, Func Offset: 0x29c
	// Line 611, Address: 0x208528, Func Offset: 0x2a8
	// Func End, Address: 0x208538, Func Offset: 0x2b8
}

// 
// Start address: 0x208540
void bhEne24_MV05(BH_PWORK* epw)
{
	// Line 622, Address: 0x208540, Func Offset: 0
	// Line 624, Address: 0x208560, Func Offset: 0x20
	// Line 625, Address: 0x208568, Func Offset: 0x28
	// Line 626, Address: 0x208570, Func Offset: 0x30
	// Line 624, Address: 0x208574, Func Offset: 0x34
	// Line 625, Address: 0x20857c, Func Offset: 0x3c
	// Line 626, Address: 0x208588, Func Offset: 0x48
	// Line 627, Address: 0x208594, Func Offset: 0x54
	// Line 629, Address: 0x2085a0, Func Offset: 0x60
	// Line 630, Address: 0x2085b4, Func Offset: 0x74
	// Line 633, Address: 0x2085bc, Func Offset: 0x7c
	// Line 630, Address: 0x2085cc, Func Offset: 0x8c
	// Line 631, Address: 0x2085d4, Func Offset: 0x94
	// Line 632, Address: 0x2085e4, Func Offset: 0xa4
	// Line 633, Address: 0x2085f4, Func Offset: 0xb4
	// Line 634, Address: 0x2085fc, Func Offset: 0xbc
	// Line 635, Address: 0x208604, Func Offset: 0xc4
	// Line 638, Address: 0x20860c, Func Offset: 0xcc
	// Line 637, Address: 0x208610, Func Offset: 0xd0
	// Line 638, Address: 0x208614, Func Offset: 0xd4
	// Line 639, Address: 0x208618, Func Offset: 0xd8
	// Line 643, Address: 0x20861c, Func Offset: 0xdc
	// Func End, Address: 0x208624, Func Offset: 0xe4
}

// 
// Start address: 0x208630
void bhEne24_Nage()
{
	// Line 654, Address: 0x208630, Func Offset: 0
	// Func End, Address: 0x208638, Func Offset: 0x8
}

// 
// Start address: 0x208640
void bhEne24_Damage()
{
	// Line 665, Address: 0x208640, Func Offset: 0
	// Func End, Address: 0x208648, Func Offset: 0x8
}

// 
// Start address: 0x208650
void bhEne24_Die()
{
	// Line 676, Address: 0x208650, Func Offset: 0
	// Func End, Address: 0x208658, Func Offset: 0x8
}

// 
// Start address: 0x208660
void bhEne24_Dummy()
{
	// Line 687, Address: 0x208660, Func Offset: 0
	// Func End, Address: 0x208668, Func Offset: 0x8
}

// 
// Start address: 0x208670
void bhEne24_CollisionWalls(BH_PWORK* epw)
{
	// Line 697, Address: 0x208670, Func Offset: 0
	// Line 698, Address: 0x20867c, Func Offset: 0xc
	// Line 699, Address: 0x20868c, Func Offset: 0x1c
	// Line 700, Address: 0x208694, Func Offset: 0x24
	// Line 701, Address: 0x2086a4, Func Offset: 0x34
	// Func End, Address: 0x2086b4, Func Offset: 0x44
}

// 
// Start address: 0x2086c0
void bhEne24_CollisionLine(BH_PWORK* epw)
{
	BOUNDARY* hp;
	NJS_POINT3 n;
	// Line 711, Address: 0x2086c0, Func Offset: 0
	// Line 715, Address: 0x2086d0, Func Offset: 0x10
	// Line 716, Address: 0x2086e4, Func Offset: 0x24
	// Line 717, Address: 0x2086f0, Func Offset: 0x30
	// Line 718, Address: 0x2086f8, Func Offset: 0x38
	// Line 719, Address: 0x208700, Func Offset: 0x40
	// Line 720, Address: 0x208708, Func Offset: 0x48
	// Line 721, Address: 0x20872c, Func Offset: 0x6c
	// Line 725, Address: 0x208740, Func Offset: 0x80
	// Func End, Address: 0x208750, Func Offset: 0x90
}

// 
// Start address: 0x208750
int bhEne24_DeadCheck(BH_PWORK* epw)
{
	int joint[2];
	int i;
	OBJECT_WORK* owk;
	float mov;
	int w;
	int ang;
	NJS_POINT3 vec;
	NJS_POINT3 pos;
	// Line 735, Address: 0x208750, Func Offset: 0
	// Line 741, Address: 0x208774, Func Offset: 0x24
	// Line 735, Address: 0x208778, Func Offset: 0x28
	// Line 741, Address: 0x20877c, Func Offset: 0x2c
	// Line 735, Address: 0x208780, Func Offset: 0x30
	// Line 741, Address: 0x208784, Func Offset: 0x34
	// Line 743, Address: 0x208790, Func Offset: 0x40
	// Line 741, Address: 0x20879c, Func Offset: 0x4c
	// Line 745, Address: 0x2087a0, Func Offset: 0x50
	// Line 747, Address: 0x2087ac, Func Offset: 0x5c
	// Line 748, Address: 0x2087b0, Func Offset: 0x60
	// Line 745, Address: 0x2087b4, Func Offset: 0x64
	// Line 754, Address: 0x2087b8, Func Offset: 0x68
	// Line 745, Address: 0x2087bc, Func Offset: 0x6c
	// Line 746, Address: 0x2087d0, Func Offset: 0x80
	// Line 747, Address: 0x2087d8, Func Offset: 0x88
	// Line 748, Address: 0x2087e0, Func Offset: 0x90
	// Line 751, Address: 0x2087e8, Func Offset: 0x98
	// Line 752, Address: 0x208800, Func Offset: 0xb0
	// Line 753, Address: 0x208818, Func Offset: 0xc8
	// Line 754, Address: 0x20882c, Func Offset: 0xdc
	// Line 757, Address: 0x208834, Func Offset: 0xe4
	// Line 760, Address: 0x208844, Func Offset: 0xf4
	// Line 761, Address: 0x20885c, Func Offset: 0x10c
	// Line 764, Address: 0x208868, Func Offset: 0x118
	// Line 771, Address: 0x20886c, Func Offset: 0x11c
	// Line 764, Address: 0x208870, Func Offset: 0x120
	// Line 771, Address: 0x208874, Func Offset: 0x124
	// Line 764, Address: 0x208880, Func Offset: 0x130
	// Line 771, Address: 0x208884, Func Offset: 0x134
	// Line 765, Address: 0x208888, Func Offset: 0x138
	// Line 766, Address: 0x208898, Func Offset: 0x148
	// Line 769, Address: 0x2088a8, Func Offset: 0x158
	// Line 771, Address: 0x2088b0, Func Offset: 0x160
	// Line 776, Address: 0x2088c8, Func Offset: 0x178
	// Line 777, Address: 0x2088f0, Func Offset: 0x1a0
	// Line 785, Address: 0x2088f8, Func Offset: 0x1a8
	// Line 777, Address: 0x208900, Func Offset: 0x1b0
	// Line 785, Address: 0x208908, Func Offset: 0x1b8
	// Line 787, Address: 0x208910, Func Offset: 0x1c0
	// Line 788, Address: 0x208914, Func Offset: 0x1c4
	// Func End, Address: 0x208944, Func Offset: 0x1f4
}

