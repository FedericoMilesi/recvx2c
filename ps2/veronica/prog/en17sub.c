


typedef struct _anon1;










typedef void(*type_3)(BH_PWORK*);
typedef void(*type_10)(BH_PWORK*);

typedef char type_0[8];
typedef void* type_1[2];
typedef unsigned int type_2[2];
typedef void(*type_4)(BH_PWORK*)[4];
typedef float type_5[3];
typedef int type_6[3];
typedef float type_7[3];
typedef int type_8[64];

typedef void(*type_11)(BH_PWORK*)[4];
typedef float type_12[3];
typedef float type_13[3][6];
typedef unsigned int type_14[1];
typedef unsigned int type_15[2];
typedef int* type_16[16];


typedef MODEL_DATA type_19[16];
typedef unsigned char type_20[64];
























struct _anon1
{
	int keys;
	int* iparam;
	float* fparam;
};












































void(*bhEne17LArm_Mode0)(BH_PWORK*)[4];
void(*bhEne17RArm_Mode0)(BH_PWORK*)[4];

void bhEne17LArm(BH_PWORK* epw);
void bhEne17LArm_Init(BH_PWORK* epw);
void bhEne17LArm_Move();
void bhEne17RArm(BH_PWORK* epw);
void bhEne17RArm_Init(BH_PWORK* epw);
void bhEne17RArm_Move();
void bhEne17_AxsCheck(BH_PWORK* epw);

// 
// Start address: 0x1ee700
void bhEne17LArm(BH_PWORK* epw)
{
	NJS_OBJECT* obj;
	BH_PWORK* epp;
	// Line 96, Address: 0x1ee700, Func Offset: 0
	// Line 101, Address: 0x1ee714, Func Offset: 0x14
	// Line 103, Address: 0x1ee734, Func Offset: 0x34
	// Line 105, Address: 0x1ee73c, Func Offset: 0x3c
	// Line 107, Address: 0x1ee750, Func Offset: 0x50
	// Line 108, Address: 0x1ee768, Func Offset: 0x68
	// Line 111, Address: 0x1ee770, Func Offset: 0x70
	// Line 115, Address: 0x1ee77c, Func Offset: 0x7c
	// Line 116, Address: 0x1ee780, Func Offset: 0x80
	// Line 115, Address: 0x1ee788, Func Offset: 0x88
	// Line 116, Address: 0x1ee78c, Func Offset: 0x8c
	// Line 118, Address: 0x1ee794, Func Offset: 0x94
	// Line 119, Address: 0x1ee79c, Func Offset: 0x9c
	// Line 122, Address: 0x1ee7a4, Func Offset: 0xa4
	// Line 136, Address: 0x1ee7b4, Func Offset: 0xb4
	// Func End, Address: 0x1ee7c8, Func Offset: 0xc8
}

// 
// Start address: 0x1ee7d0
void bhEne17LArm_Init(BH_PWORK* epw)
{
	int i;
	float* ax_p2;
	float* ax_p1;
	BH_PWORK* epp;
	// Line 155, Address: 0x1ee7d0, Func Offset: 0
	// Line 166, Address: 0x1ee7d4, Func Offset: 0x4
	// Line 159, Address: 0x1ee7d8, Func Offset: 0x8
	// Line 160, Address: 0x1ee7dc, Func Offset: 0xc
	// Line 161, Address: 0x1ee7e8, Func Offset: 0x18
	// Line 164, Address: 0x1ee7f4, Func Offset: 0x24
	// Line 165, Address: 0x1ee7f8, Func Offset: 0x28
	// Line 170, Address: 0x1ee7fc, Func Offset: 0x2c
	// Line 168, Address: 0x1ee800, Func Offset: 0x30
	// Line 169, Address: 0x1ee804, Func Offset: 0x34
	// Line 170, Address: 0x1ee808, Func Offset: 0x38
	// Line 171, Address: 0x1ee818, Func Offset: 0x48
	// Line 173, Address: 0x1ee81c, Func Offset: 0x4c
	// Line 171, Address: 0x1ee820, Func Offset: 0x50
	// Line 172, Address: 0x1ee824, Func Offset: 0x54
	// Line 177, Address: 0x1ee828, Func Offset: 0x58
	// Line 175, Address: 0x1ee82c, Func Offset: 0x5c
	// Line 176, Address: 0x1ee830, Func Offset: 0x60
	// Line 177, Address: 0x1ee834, Func Offset: 0x64
	// Line 178, Address: 0x1ee844, Func Offset: 0x74
	// Line 179, Address: 0x1ee84c, Func Offset: 0x7c
	// Line 180, Address: 0x1ee850, Func Offset: 0x80
	// Line 182, Address: 0x1ee854, Func Offset: 0x84
	// Func End, Address: 0x1ee85c, Func Offset: 0x8c
}

// 
// Start address: 0x1ee860
void bhEne17LArm_Move()
{
	// Line 201, Address: 0x1ee860, Func Offset: 0
	// Func End, Address: 0x1ee868, Func Offset: 0x8
}

// 
// Start address: 0x1ee870
void bhEne17RArm(BH_PWORK* epw)
{
	// Line 219, Address: 0x1ee870, Func Offset: 0
	// Line 220, Address: 0x1ee880, Func Offset: 0x10
	// Line 222, Address: 0x1ee8a0, Func Offset: 0x30
	// Line 223, Address: 0x1ee8a8, Func Offset: 0x38
	// Func End, Address: 0x1ee8b8, Func Offset: 0x48
}

// 
// Start address: 0x1ee8c0
void bhEne17RArm_Init(BH_PWORK* epw)
{
	// Line 242, Address: 0x1ee8c0, Func Offset: 0
	// Line 243, Address: 0x1ee8c4, Func Offset: 0x4
	// Line 246, Address: 0x1ee8c8, Func Offset: 0x8
	// Line 243, Address: 0x1ee8cc, Func Offset: 0xc
	// Line 244, Address: 0x1ee8d4, Func Offset: 0x14
	// Line 246, Address: 0x1ee8e0, Func Offset: 0x20
	// Line 247, Address: 0x1ee8e4, Func Offset: 0x24
	// Line 248, Address: 0x1ee8e8, Func Offset: 0x28
	// Line 250, Address: 0x1ee8ec, Func Offset: 0x2c
	// Func End, Address: 0x1ee8f4, Func Offset: 0x34
}

// 
// Start address: 0x1ee900
void bhEne17RArm_Move()
{
	// Line 269, Address: 0x1ee900, Func Offset: 0
	// Func End, Address: 0x1ee908, Func Offset: 0x8
}

// 
// Start address: 0x1ee910
void bhEne17_AxsCheck(BH_PWORK* epw)
{
	float fparam;
	int iparam;
	_anon1 attr;
	float idata[3][6];
	int i;
	NJS_POINT3 pd;
	NJS_POINT3 ps;
	OBJECT_WORK* owk;
	BH_PWORK* epp;
	// Line 291, Address: 0x1ee910, Func Offset: 0
	// Line 298, Address: 0x1ee928, Func Offset: 0x18
	// Line 292, Address: 0x1ee92c, Func Offset: 0x1c
	// Line 303, Address: 0x1ee930, Func Offset: 0x20
	// Line 304, Address: 0x1ee934, Func Offset: 0x24
	// Line 298, Address: 0x1ee93c, Func Offset: 0x2c
	// Line 300, Address: 0x1ee944, Func Offset: 0x34
	// Line 301, Address: 0x1ee948, Func Offset: 0x38
	// Line 304, Address: 0x1ee94c, Func Offset: 0x3c
	// Line 306, Address: 0x1ee958, Func Offset: 0x48
	// Line 308, Address: 0x1ee960, Func Offset: 0x50
	// Line 315, Address: 0x1ee964, Func Offset: 0x54
	// Line 308, Address: 0x1ee968, Func Offset: 0x58
	// Line 309, Address: 0x1ee974, Func Offset: 0x64
	// Line 310, Address: 0x1ee984, Func Offset: 0x74
	// Line 312, Address: 0x1ee994, Func Offset: 0x84
	// Line 313, Address: 0x1ee9a4, Func Offset: 0x94
	// Line 314, Address: 0x1ee9b4, Func Offset: 0xa4
	// Line 315, Address: 0x1ee9c4, Func Offset: 0xb4
	// Line 316, Address: 0x1ee9cc, Func Offset: 0xbc
	// Line 317, Address: 0x1ee9e8, Func Offset: 0xd8
	// Line 335, Address: 0x1ee9ec, Func Offset: 0xdc
	// Line 317, Address: 0x1ee9f0, Func Offset: 0xe0
	// Line 331, Address: 0x1ee9f4, Func Offset: 0xe4
	// Line 317, Address: 0x1ee9fc, Func Offset: 0xec
	// Line 318, Address: 0x1eea04, Func Offset: 0xf4
	// Line 332, Address: 0x1eea0c, Func Offset: 0xfc
	// Line 333, Address: 0x1eea10, Func Offset: 0x100
	// Line 318, Address: 0x1eea14, Func Offset: 0x104
	// Line 319, Address: 0x1eea1c, Func Offset: 0x10c
	// Line 335, Address: 0x1eea24, Func Offset: 0x114
	// Line 319, Address: 0x1eea30, Func Offset: 0x120
	// Line 320, Address: 0x1eea38, Func Offset: 0x128
	// Line 321, Address: 0x1eea48, Func Offset: 0x138
	// Line 330, Address: 0x1eea58, Func Offset: 0x148
	// Line 331, Address: 0x1eea5c, Func Offset: 0x14c
	// Line 332, Address: 0x1eea60, Func Offset: 0x150
	// Line 333, Address: 0x1eea64, Func Offset: 0x154
	// Line 337, Address: 0x1eea6c, Func Offset: 0x15c
	// Line 340, Address: 0x1eea70, Func Offset: 0x160
	// Line 337, Address: 0x1eea78, Func Offset: 0x168
	// Line 338, Address: 0x1eea84, Func Offset: 0x174
	// Line 339, Address: 0x1eea94, Func Offset: 0x184
	// Line 340, Address: 0x1eeaa8, Func Offset: 0x198
	// Line 342, Address: 0x1eeab0, Func Offset: 0x1a0
	// Line 345, Address: 0x1eeab4, Func Offset: 0x1a4
	// Line 342, Address: 0x1eeabc, Func Offset: 0x1ac
	// Line 343, Address: 0x1eeac4, Func Offset: 0x1b4
	// Line 344, Address: 0x1eead0, Func Offset: 0x1c0
	// Line 347, Address: 0x1eeadc, Func Offset: 0x1cc
	// Line 348, Address: 0x1eeb10, Func Offset: 0x200
	// Line 351, Address: 0x1eeb20, Func Offset: 0x210
	// Line 353, Address: 0x1eeb28, Func Offset: 0x218
	// Line 356, Address: 0x1eeb2c, Func Offset: 0x21c
	// Line 353, Address: 0x1eeb34, Func Offset: 0x224
	// Line 354, Address: 0x1eeb40, Func Offset: 0x230
	// Line 355, Address: 0x1eeb50, Func Offset: 0x240
	// Line 356, Address: 0x1eeb64, Func Offset: 0x254
	// Line 358, Address: 0x1eeb6c, Func Offset: 0x25c
	// Line 361, Address: 0x1eeb70, Func Offset: 0x260
	// Line 358, Address: 0x1eeb78, Func Offset: 0x268
	// Line 359, Address: 0x1eeb80, Func Offset: 0x270
	// Line 360, Address: 0x1eeb8c, Func Offset: 0x27c
	// Line 363, Address: 0x1eeb98, Func Offset: 0x288
	// Line 364, Address: 0x1eebcc, Func Offset: 0x2bc
	// Line 367, Address: 0x1eebdc, Func Offset: 0x2cc
	// Func End, Address: 0x1eebf8, Func Offset: 0x2e8
}

