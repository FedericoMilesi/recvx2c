



































typedef void(*type_2)(BH_PWORK*);
typedef void(*type_67)(void*);
typedef void(*type_90)(BH_PWORK*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_3[32];
typedef void(*type_4)(BH_PWORK*)[6];

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

typedef unsigned char type_37[64];

typedef char type_39[8];
typedef void* type_40[2];

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


typedef short type_56[256];
typedef char type_57[3];
typedef int type_58[64];
typedef MODEL_DATA type_59[450];


typedef int type_62[450];
typedef unsigned int type_63[8];
typedef unsigned char type_64[450];
typedef char type_65[16];
typedef char type_66[4];
typedef unsigned int type_68[32];
typedef unsigned int type_69[16];
typedef BOUNDARY type_70[64];
typedef unsigned int type_71[16];
typedef BOUNDARY type_72[64];
typedef unsigned int type_73[32];
typedef BOUNDARY type_74[64];
typedef unsigned int type_75[16];
typedef unsigned int type_76[3];
typedef BH_PWORK* type_77[16];
typedef unsigned int type_78[8];
typedef unsigned int type_79[1];
typedef unsigned int type_80[384];
typedef unsigned int type_81[2];
typedef unsigned char type_82[2];
typedef unsigned int type_83[4];
typedef int* type_84[16];
typedef char type_85[32];

typedef char type_87[64];

typedef char type_89[4];
typedef void(*type_91)(BH_PWORK*)[3];
typedef MODEL_DATA type_92[16];
typedef short type_93[4];
typedef unsigned char type_94[4];

typedef unsigned int type_96[32];

typedef Unknown1* type_98[512];
typedef Unknown1* type_99[128];
typedef Unknown1* type_100[512];
typedef unsigned char type_101[64];
typedef Unknown1* type_102[512];






















































































































































































































































































































































































































































































































































































































































































void(*bhEne10_Mode0)(BH_PWORK*)[6];
void(*bhEne10_MoveMode2)(BH_PWORK*)[3];
extern BH_PWORK* plp;
extern SYS* sys;

void bhEne10(BH_PWORK* epw);
void bhEne10_Init(BH_PWORK* epw);
void bhEne10_CheckPos(BH_PWORK* epw);
void bhEne10_Brain(BH_PWORK* epw);
void bhEne10_Move(BH_PWORK* epw);
void bhEne10_MV00();
void bhEne10_MV01(BH_PWORK* epw);
void bhEne10_MV02(BH_PWORK* epw);
void bhEne10_Nage(BH_PWORK* epw);
void bhEne10_Damage();
void bhEne10_Die();

// 
// Start address: 0x1d2440
void bhEne10(BH_PWORK* epw)
{
	int i;
	OBJECT_WORK* owk;
	// Line 118, Address: 0x1d2440, Func Offset: 0
	// Line 123, Address: 0x1d2454, Func Offset: 0x14
	// Line 126, Address: 0x1d2474, Func Offset: 0x34
	// Line 127, Address: 0x1d2484, Func Offset: 0x44
	// Line 128, Address: 0x1d2498, Func Offset: 0x58
	// Line 129, Address: 0x1d249c, Func Offset: 0x5c
	// Line 130, Address: 0x1d24ac, Func Offset: 0x6c
	// Line 131, Address: 0x1d24c4, Func Offset: 0x84
	// Line 133, Address: 0x1d24c8, Func Offset: 0x88
	// Line 136, Address: 0x1d24e8, Func Offset: 0xa8
	// Line 137, Address: 0x1d24f8, Func Offset: 0xb8
	// Line 138, Address: 0x1d2500, Func Offset: 0xc0
	// Line 139, Address: 0x1d251c, Func Offset: 0xdc
	// Line 143, Address: 0x1d252c, Func Offset: 0xec
	// Line 144, Address: 0x1d253c, Func Offset: 0xfc
	// Line 145, Address: 0x1d2544, Func Offset: 0x104
	// Line 149, Address: 0x1d254c, Func Offset: 0x10c
	// Line 152, Address: 0x1d2558, Func Offset: 0x118
	// Line 153, Address: 0x1d2560, Func Offset: 0x120
	// Line 154, Address: 0x1d2568, Func Offset: 0x128
	// Line 155, Address: 0x1d25a4, Func Offset: 0x164
	// Line 162, Address: 0x1d25a8, Func Offset: 0x168
	// Line 155, Address: 0x1d25b0, Func Offset: 0x170
	// Line 157, Address: 0x1d25b4, Func Offset: 0x174
	// Line 158, Address: 0x1d25bc, Func Offset: 0x17c
	// Line 159, Address: 0x1d25c4, Func Offset: 0x184
	// Line 160, Address: 0x1d25cc, Func Offset: 0x18c
	// Line 162, Address: 0x1d25d4, Func Offset: 0x194
	// Line 165, Address: 0x1d25d8, Func Offset: 0x198
	// Line 166, Address: 0x1d25ec, Func Offset: 0x1ac
	// Line 169, Address: 0x1d25f8, Func Offset: 0x1b8
	// Line 170, Address: 0x1d2604, Func Offset: 0x1c4
	// Func End, Address: 0x1d2618, Func Offset: 0x1d8
}

// 
// Start address: 0x1d2620
void bhEne10_Init(BH_PWORK* epw)
{
	int ang;
	// Line 181, Address: 0x1d2620, Func Offset: 0
	// Line 185, Address: 0x1d2630, Func Offset: 0x10
	// Line 186, Address: 0x1d263c, Func Offset: 0x1c
	// Line 190, Address: 0x1d264c, Func Offset: 0x2c
	// Line 195, Address: 0x1d2650, Func Offset: 0x30
	// Line 194, Address: 0x1d2658, Func Offset: 0x38
	// Line 199, Address: 0x1d265c, Func Offset: 0x3c
	// Line 190, Address: 0x1d2660, Func Offset: 0x40
	// Line 194, Address: 0x1d2668, Func Offset: 0x48
	// Line 209, Address: 0x1d266c, Func Offset: 0x4c
	// Line 210, Address: 0x1d2674, Func Offset: 0x54
	// Line 203, Address: 0x1d2678, Func Offset: 0x58
	// Line 194, Address: 0x1d267c, Func Offset: 0x5c
	// Line 210, Address: 0x1d2684, Func Offset: 0x64
	// Line 195, Address: 0x1d2688, Func Offset: 0x68
	// Line 198, Address: 0x1d2694, Func Offset: 0x74
	// Line 199, Address: 0x1d26a0, Func Offset: 0x80
	// Line 200, Address: 0x1d26a4, Func Offset: 0x84
	// Line 201, Address: 0x1d26a8, Func Offset: 0x88
	// Line 202, Address: 0x1d26ac, Func Offset: 0x8c
	// Line 203, Address: 0x1d26b0, Func Offset: 0x90
	// Line 206, Address: 0x1d26b4, Func Offset: 0x94
	// Line 207, Address: 0x1d26c0, Func Offset: 0xa0
	// Line 208, Address: 0x1d26cc, Func Offset: 0xac
	// Line 209, Address: 0x1d26d8, Func Offset: 0xb8
	// Line 210, Address: 0x1d26dc, Func Offset: 0xbc
	// Line 211, Address: 0x1d26e4, Func Offset: 0xc4
	// Line 212, Address: 0x1d26ec, Func Offset: 0xcc
	// Line 213, Address: 0x1d26f4, Func Offset: 0xd4
	// Line 216, Address: 0x1d26fc, Func Offset: 0xdc
	// Line 217, Address: 0x1d2700, Func Offset: 0xe0
	// Line 218, Address: 0x1d2704, Func Offset: 0xe4
	// Line 222, Address: 0x1d2708, Func Offset: 0xe8
	// Line 223, Address: 0x1d2760, Func Offset: 0x140
	// Line 227, Address: 0x1d2794, Func Offset: 0x174
	// Line 228, Address: 0x1d2798, Func Offset: 0x178
	// Line 223, Address: 0x1d279c, Func Offset: 0x17c
	// Line 226, Address: 0x1d27a0, Func Offset: 0x180
	// Line 227, Address: 0x1d27a4, Func Offset: 0x184
	// Line 228, Address: 0x1d27a8, Func Offset: 0x188
	// Line 229, Address: 0x1d27b4, Func Offset: 0x194
	// Func End, Address: 0x1d27c8, Func Offset: 0x1a8
}

// 
// Start address: 0x1d27d0
void bhEne10_CheckPos(BH_PWORK* epw)
{
	int ang;
	float dz;
	float dx;
	// Line 239, Address: 0x1d27d0, Func Offset: 0
	// Line 244, Address: 0x1d27e4, Func Offset: 0x14
	// Line 245, Address: 0x1d27ec, Func Offset: 0x1c
	// Line 244, Address: 0x1d27f4, Func Offset: 0x24
	// Line 245, Address: 0x1d27f8, Func Offset: 0x28
	// Line 244, Address: 0x1d27fc, Func Offset: 0x2c
	// Line 245, Address: 0x1d2800, Func Offset: 0x30
	// Line 246, Address: 0x1d2804, Func Offset: 0x34
	// Line 249, Address: 0x1d2814, Func Offset: 0x44
	// Line 246, Address: 0x1d2818, Func Offset: 0x48
	// Line 249, Address: 0x1d281c, Func Offset: 0x4c
	// Line 250, Address: 0x1d2824, Func Offset: 0x54
	// Line 249, Address: 0x1d2828, Func Offset: 0x58
	// Line 250, Address: 0x1d282c, Func Offset: 0x5c
	// Line 249, Address: 0x1d2830, Func Offset: 0x60
	// Line 250, Address: 0x1d2834, Func Offset: 0x64
	// Line 251, Address: 0x1d2838, Func Offset: 0x68
	// Line 252, Address: 0x1d2848, Func Offset: 0x78
	// Line 253, Address: 0x1d286c, Func Offset: 0x9c
	// Line 254, Address: 0x1d2884, Func Offset: 0xb4
	// Func End, Address: 0x1d289c, Func Offset: 0xcc
}

// 
// Start address: 0x1d28a0
void bhEne10_Brain(BH_PWORK* epw)
{
	// Line 265, Address: 0x1d28a0, Func Offset: 0
	// Line 268, Address: 0x1d28ac, Func Offset: 0xc
	// Line 273, Address: 0x1d28f8, Func Offset: 0x58
	// Line 275, Address: 0x1d2908, Func Offset: 0x68
	// Line 278, Address: 0x1d293c, Func Offset: 0x9c
	// Line 279, Address: 0x1d2944, Func Offset: 0xa4
	// Line 280, Address: 0x1d2948, Func Offset: 0xa8
	// Line 284, Address: 0x1d294c, Func Offset: 0xac
	// Line 285, Address: 0x1d2958, Func Offset: 0xb8
	// Line 291, Address: 0x1d2960, Func Offset: 0xc0
	// Line 293, Address: 0x1d2990, Func Offset: 0xf0
	// Line 294, Address: 0x1d2998, Func Offset: 0xf8
	// Line 295, Address: 0x1d299c, Func Offset: 0xfc
	// Line 298, Address: 0x1d29a0, Func Offset: 0x100
	// Line 296, Address: 0x1d29a4, Func Offset: 0x104
	// Line 298, Address: 0x1d29a8, Func Offset: 0x108
	// Line 300, Address: 0x1d29b0, Func Offset: 0x110
	// Func End, Address: 0x1d29c0, Func Offset: 0x120
}

// 
// Start address: 0x1d29c0
void bhEne10_Move(BH_PWORK* epw)
{
	NJS_POINT3 pos;
	// Line 311, Address: 0x1d29c0, Func Offset: 0
	// Line 315, Address: 0x1d29cc, Func Offset: 0xc
	// Line 316, Address: 0x1d29dc, Func Offset: 0x1c
	// Line 319, Address: 0x1d29e4, Func Offset: 0x24
	// Line 320, Address: 0x1d29fc, Func Offset: 0x3c
	// Line 321, Address: 0x1d2a24, Func Offset: 0x64
	// Line 333, Address: 0x1d2a58, Func Offset: 0x98
	// Line 338, Address: 0x1d2a64, Func Offset: 0xa4
	// Line 339, Address: 0x1d2a74, Func Offset: 0xb4
	// Line 343, Address: 0x1d2a7c, Func Offset: 0xbc
	// Line 345, Address: 0x1d2a8c, Func Offset: 0xcc
	// Line 348, Address: 0x1d2a9c, Func Offset: 0xdc
	// Line 355, Address: 0x1d2aa0, Func Offset: 0xe0
	// Line 353, Address: 0x1d2aa4, Func Offset: 0xe4
	// Line 355, Address: 0x1d2aa8, Func Offset: 0xe8
	// Line 348, Address: 0x1d2aac, Func Offset: 0xec
	// Line 350, Address: 0x1d2ab0, Func Offset: 0xf0
	// Line 355, Address: 0x1d2ab4, Func Offset: 0xf4
	// Line 350, Address: 0x1d2ac0, Func Offset: 0x100
	// Line 351, Address: 0x1d2ac4, Func Offset: 0x104
	// Line 352, Address: 0x1d2acc, Func Offset: 0x10c
	// Line 353, Address: 0x1d2ad0, Func Offset: 0x110
	// Line 355, Address: 0x1d2ad4, Func Offset: 0x114
	// Line 371, Address: 0x1d2adc, Func Offset: 0x11c
	// Line 372, Address: 0x1d2ae0, Func Offset: 0x120
	// Line 377, Address: 0x1d2ae4, Func Offset: 0x124
	// Line 371, Address: 0x1d2ae8, Func Offset: 0x128
	// Line 372, Address: 0x1d2af0, Func Offset: 0x130
	// Line 373, Address: 0x1d2af4, Func Offset: 0x134
	// Line 374, Address: 0x1d2af8, Func Offset: 0x138
	// Line 375, Address: 0x1d2afc, Func Offset: 0x13c
	// Line 379, Address: 0x1d2b00, Func Offset: 0x140
	// Line 383, Address: 0x1d2b08, Func Offset: 0x148
	// Line 384, Address: 0x1d2b18, Func Offset: 0x158
	// Line 385, Address: 0x1d2b38, Func Offset: 0x178
	// Func End, Address: 0x1d2b48, Func Offset: 0x188
}

// 
// Start address: 0x1d2b50
void bhEne10_MV00()
{
	// Line 396, Address: 0x1d2b50, Func Offset: 0
	// Func End, Address: 0x1d2b58, Func Offset: 0x8
}

// 
// Start address: 0x1d2b60
void bhEne10_MV01(BH_PWORK* epw)
{
	int ang;
	// Line 406, Address: 0x1d2b60, Func Offset: 0
	// Line 409, Address: 0x1d2b74, Func Offset: 0x14
	// Line 412, Address: 0x1d2b94, Func Offset: 0x34
	// Line 413, Address: 0x1d2bb8, Func Offset: 0x58
	// Line 416, Address: 0x1d2bc4, Func Offset: 0x64
	// Line 417, Address: 0x1d2bcc, Func Offset: 0x6c
	// Line 416, Address: 0x1d2bd4, Func Offset: 0x74
	// Line 417, Address: 0x1d2bdc, Func Offset: 0x7c
	// Line 419, Address: 0x1d2be4, Func Offset: 0x84
	// Line 420, Address: 0x1d2bf4, Func Offset: 0x94
	// Line 422, Address: 0x1d2c08, Func Offset: 0xa8
	// Line 424, Address: 0x1d2c18, Func Offset: 0xb8
	// Line 425, Address: 0x1d2c70, Func Offset: 0x110
	// Line 427, Address: 0x1d2ca4, Func Offset: 0x144
	// Line 425, Address: 0x1d2ca8, Func Offset: 0x148
	// Line 427, Address: 0x1d2cac, Func Offset: 0x14c
	// Line 428, Address: 0x1d2cb0, Func Offset: 0x150
	// Line 429, Address: 0x1d2cb4, Func Offset: 0x154
	// Line 430, Address: 0x1d2cb8, Func Offset: 0x158
	// Line 435, Address: 0x1d2cbc, Func Offset: 0x15c
	// Func End, Address: 0x1d2cd0, Func Offset: 0x170
}

// 
// Start address: 0x1d2cd0
void bhEne10_MV02(BH_PWORK* epw)
{
	int ay;
	// Line 445, Address: 0x1d2cd0, Func Offset: 0
	// Line 448, Address: 0x1d2ce0, Func Offset: 0x10
	// Line 451, Address: 0x1d2d0c, Func Offset: 0x3c
	// Line 452, Address: 0x1d2d20, Func Offset: 0x50
	// Line 451, Address: 0x1d2d24, Func Offset: 0x54
	// Line 453, Address: 0x1d2d28, Func Offset: 0x58
	// Line 452, Address: 0x1d2d30, Func Offset: 0x60
	// Line 453, Address: 0x1d2d34, Func Offset: 0x64
	// Line 454, Address: 0x1d2d3c, Func Offset: 0x6c
	// Line 455, Address: 0x1d2d80, Func Offset: 0xb0
	// Line 456, Address: 0x1d2d84, Func Offset: 0xb4
	// Line 455, Address: 0x1d2d8c, Func Offset: 0xbc
	// Line 458, Address: 0x1d2d94, Func Offset: 0xc4
	// Line 461, Address: 0x1d2d9c, Func Offset: 0xcc
	// Line 462, Address: 0x1d2db4, Func Offset: 0xe4
	// Line 461, Address: 0x1d2dbc, Func Offset: 0xec
	// Line 462, Address: 0x1d2dc0, Func Offset: 0xf0
	// Line 464, Address: 0x1d2dc8, Func Offset: 0xf8
	// Line 465, Address: 0x1d2dd8, Func Offset: 0x108
	// Line 466, Address: 0x1d2dec, Func Offset: 0x11c
	// Line 468, Address: 0x1d2e6c, Func Offset: 0x19c
	// Line 470, Address: 0x1d2e74, Func Offset: 0x1a4
	// Line 474, Address: 0x1d2e7c, Func Offset: 0x1ac
	// Line 475, Address: 0x1d2ec4, Func Offset: 0x1f4
	// Line 482, Address: 0x1d2ef8, Func Offset: 0x228
	// Line 477, Address: 0x1d2efc, Func Offset: 0x22c
	// Line 482, Address: 0x1d2f00, Func Offset: 0x230
	// Line 475, Address: 0x1d2f04, Func Offset: 0x234
	// Line 477, Address: 0x1d2f08, Func Offset: 0x238
	// Line 478, Address: 0x1d2f0c, Func Offset: 0x23c
	// Line 479, Address: 0x1d2f10, Func Offset: 0x240
	// Line 480, Address: 0x1d2f14, Func Offset: 0x244
	// Line 482, Address: 0x1d2f18, Func Offset: 0x248
	// Line 485, Address: 0x1d2f1c, Func Offset: 0x24c
	// Func End, Address: 0x1d2f30, Func Offset: 0x260
}

// 
// Start address: 0x1d2f30
void bhEne10_Nage(BH_PWORK* epw)
{
	int ay;
	// Line 496, Address: 0x1d2f30, Func Offset: 0
	// Line 500, Address: 0x1d2f44, Func Offset: 0x14
	// Line 503, Address: 0x1d2f64, Func Offset: 0x34
	// Line 504, Address: 0x1d2f70, Func Offset: 0x40
	// Line 503, Address: 0x1d2f74, Func Offset: 0x44
	// Line 504, Address: 0x1d2f7c, Func Offset: 0x4c
	// Line 505, Address: 0x1d2f84, Func Offset: 0x54
	// Line 504, Address: 0x1d2f88, Func Offset: 0x58
	// Line 505, Address: 0x1d2f90, Func Offset: 0x60
	// Line 506, Address: 0x1d2fa4, Func Offset: 0x74
	// Line 507, Address: 0x1d2fa8, Func Offset: 0x78
	// Line 513, Address: 0x1d2fb4, Func Offset: 0x84
	// Line 516, Address: 0x1d2fb8, Func Offset: 0x88
	// Line 507, Address: 0x1d2fbc, Func Offset: 0x8c
	// Line 508, Address: 0x1d2fc0, Func Offset: 0x90
	// Line 516, Address: 0x1d2fc8, Func Offset: 0x98
	// Line 508, Address: 0x1d2fd4, Func Offset: 0xa4
	// Line 509, Address: 0x1d2fd8, Func Offset: 0xa8
	// Line 510, Address: 0x1d2fe4, Func Offset: 0xb4
	// Line 516, Address: 0x1d2ff0, Func Offset: 0xc0
	// Line 518, Address: 0x1d2ff8, Func Offset: 0xc8
	// Line 520, Address: 0x1d3004, Func Offset: 0xd4
	// Line 524, Address: 0x1d300c, Func Offset: 0xdc
	// Line 520, Address: 0x1d3014, Func Offset: 0xe4
	// Line 525, Address: 0x1d3018, Func Offset: 0xe8
	// Line 520, Address: 0x1d301c, Func Offset: 0xec
	// Line 525, Address: 0x1d3028, Func Offset: 0xf8
	// Line 521, Address: 0x1d3030, Func Offset: 0x100
	// Line 527, Address: 0x1d303c, Func Offset: 0x10c
	// Line 531, Address: 0x1d3040, Func Offset: 0x110
	// Line 521, Address: 0x1d3048, Func Offset: 0x118
	// Line 522, Address: 0x1d3054, Func Offset: 0x124
	// Line 531, Address: 0x1d305c, Func Offset: 0x12c
	// Line 522, Address: 0x1d3060, Func Offset: 0x130
	// Line 523, Address: 0x1d306c, Func Offset: 0x13c
	// Line 524, Address: 0x1d3080, Func Offset: 0x150
	// Line 525, Address: 0x1d309c, Func Offset: 0x16c
	// Line 526, Address: 0x1d30b8, Func Offset: 0x188
	// Line 527, Address: 0x1d30d4, Func Offset: 0x1a4
	// Line 528, Address: 0x1d30e8, Func Offset: 0x1b8
	// Line 529, Address: 0x1d30fc, Func Offset: 0x1cc
	// Line 530, Address: 0x1d3110, Func Offset: 0x1e0
	// Line 531, Address: 0x1d3128, Func Offset: 0x1f8
	// Line 536, Address: 0x1d3140, Func Offset: 0x210
	// Line 538, Address: 0x1d314c, Func Offset: 0x21c
	// Line 540, Address: 0x1d315c, Func Offset: 0x22c
	// Line 542, Address: 0x1d3160, Func Offset: 0x230
	// Line 540, Address: 0x1d3164, Func Offset: 0x234
	// Line 542, Address: 0x1d3170, Func Offset: 0x240
	// Line 544, Address: 0x1d3174, Func Offset: 0x244
	// Line 545, Address: 0x1d31a8, Func Offset: 0x278
	// Line 552, Address: 0x1d31dc, Func Offset: 0x2ac
	// Line 547, Address: 0x1d31e0, Func Offset: 0x2b0
	// Line 552, Address: 0x1d31e4, Func Offset: 0x2b4
	// Line 545, Address: 0x1d31e8, Func Offset: 0x2b8
	// Line 547, Address: 0x1d31ec, Func Offset: 0x2bc
	// Line 548, Address: 0x1d31f0, Func Offset: 0x2c0
	// Line 549, Address: 0x1d31f4, Func Offset: 0x2c4
	// Line 550, Address: 0x1d31f8, Func Offset: 0x2c8
	// Line 552, Address: 0x1d31fc, Func Offset: 0x2cc
	// Line 556, Address: 0x1d3200, Func Offset: 0x2d0
	// Func End, Address: 0x1d3214, Func Offset: 0x2e4
}

// 
// Start address: 0x1d3220
void bhEne10_Damage()
{
	// Line 568, Address: 0x1d3220, Func Offset: 0
	// Func End, Address: 0x1d3228, Func Offset: 0x8
}

// 
// Start address: 0x1d3230
void bhEne10_Die()
{
	// Line 580, Address: 0x1d3230, Func Offset: 0
	// Func End, Address: 0x1d3238, Func Offset: 0x8
}

