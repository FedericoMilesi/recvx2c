













typedef void(*type_0)(BH_PWORK*);
typedef void(*type_9)(BH_PWORK*);

typedef char type_1[8];
typedef void* type_2[2];
typedef unsigned int type_3[2];
typedef float type_4[3];
typedef int type_5[3];
typedef float type_6[3];
typedef int type_7[64];

typedef void(*type_10)(BH_PWORK*)[3];
typedef unsigned int type_11[1];
typedef unsigned int type_12[2];
typedef int* type_13[16];


typedef MODEL_DATA type_16[16];
typedef unsigned char type_17[64];
typedef void(*type_18)(BH_PWORK*)[2];




































































void(*bhEne05s_Mode0)(BH_PWORK*)[2];
void(*bhEne05s_MoveMode2)(BH_PWORK*)[3];

void bhEne05s(BH_PWORK* epw);
void bhEne05s_Init(BH_PWORK* epw);
void bhEne05s_Move(BH_PWORK* epw);
void bhEne05s_MV00();
void bhEne05s_MV01(BH_PWORK* epw);
void bhEne05s_MV02(BH_PWORK* epw);
void bhEne05s_FloorCollision(BH_PWORK* epw);

// 
// Start address: 0x1b8fa0
void bhEne05s(BH_PWORK* epw)
{
	NJS_POINT3 v;
	// Line 97, Address: 0x1b8fa0, Func Offset: 0
	// Line 99, Address: 0x1b8fb8, Func Offset: 0x18
	// Line 102, Address: 0x1b8fd8, Func Offset: 0x38
	// Line 107, Address: 0x1b8fe0, Func Offset: 0x40
	// Line 106, Address: 0x1b8fe4, Func Offset: 0x44
	// Line 107, Address: 0x1b8fe8, Func Offset: 0x48
	// Line 108, Address: 0x1b8fec, Func Offset: 0x4c
	// Line 107, Address: 0x1b8ff0, Func Offset: 0x50
	// Line 108, Address: 0x1b8ff4, Func Offset: 0x54
	// Line 110, Address: 0x1b8ff8, Func Offset: 0x58
	// Line 111, Address: 0x1b9008, Func Offset: 0x68
	// Line 114, Address: 0x1b9010, Func Offset: 0x70
	// Line 111, Address: 0x1b9014, Func Offset: 0x74
	// Line 112, Address: 0x1b901c, Func Offset: 0x7c
	// Line 113, Address: 0x1b902c, Func Offset: 0x8c
	// Line 114, Address: 0x1b9038, Func Offset: 0x98
	// Line 115, Address: 0x1b9040, Func Offset: 0xa0
	// Line 116, Address: 0x1b9050, Func Offset: 0xb0
	// Line 117, Address: 0x1b9060, Func Offset: 0xc0
	// Line 119, Address: 0x1b9070, Func Offset: 0xd0
	// Func End, Address: 0x1b9088, Func Offset: 0xe8
}

// 
// Start address: 0x1b9090
void bhEne05s_Init(BH_PWORK* epw)
{
	// Line 129, Address: 0x1b9090, Func Offset: 0
	// Line 131, Address: 0x1b909c, Func Offset: 0xc
	// Line 132, Address: 0x1b90a4, Func Offset: 0x14
	// Line 135, Address: 0x1b90a8, Func Offset: 0x18
	// Line 136, Address: 0x1b90b0, Func Offset: 0x20
	// Line 137, Address: 0x1b90b4, Func Offset: 0x24
	// Line 138, Address: 0x1b90b8, Func Offset: 0x28
	// Line 141, Address: 0x1b90bc, Func Offset: 0x2c
	// Line 142, Address: 0x1b90c8, Func Offset: 0x38
	// Line 144, Address: 0x1b90d8, Func Offset: 0x48
	// Func End, Address: 0x1b90e8, Func Offset: 0x58
}

// 
// Start address: 0x1b90f0
void bhEne05s_Move(BH_PWORK* epw)
{
	// Line 156, Address: 0x1b90f0, Func Offset: 0
	// Func End, Address: 0x1b9110, Func Offset: 0x20
}

// 
// Start address: 0x1b9110
void bhEne05s_MV00()
{
	// Line 169, Address: 0x1b9110, Func Offset: 0
	// Func End, Address: 0x1b9118, Func Offset: 0x8
}

// 
// Start address: 0x1b9120
void bhEne05s_MV01(BH_PWORK* epw)
{
	NJS_POINT3 vec;
	BH_PWORK* ep;
	int ang;
	// Line 179, Address: 0x1b9120, Func Offset: 0
	// Line 184, Address: 0x1b9134, Func Offset: 0x14
	// Line 186, Address: 0x1b9160, Func Offset: 0x40
	// Line 187, Address: 0x1b9170, Func Offset: 0x50
	// Line 188, Address: 0x1b9180, Func Offset: 0x60
	// Line 192, Address: 0x1b9190, Func Offset: 0x70
	// Line 193, Address: 0x1b91e4, Func Offset: 0xc4
	// Line 194, Address: 0x1b91f8, Func Offset: 0xd8
	// Line 193, Address: 0x1b91fc, Func Offset: 0xdc
	// Line 194, Address: 0x1b9204, Func Offset: 0xe4
	// Line 195, Address: 0x1b9220, Func Offset: 0x100
	// Line 200, Address: 0x1b9224, Func Offset: 0x104
	// Line 194, Address: 0x1b9228, Func Offset: 0x108
	// Line 195, Address: 0x1b922c, Func Offset: 0x10c
	// Line 197, Address: 0x1b9234, Func Offset: 0x114
	// Line 200, Address: 0x1b9244, Func Offset: 0x124
	// Line 201, Address: 0x1b9248, Func Offset: 0x128
	// Line 202, Address: 0x1b924c, Func Offset: 0x12c
	// Line 204, Address: 0x1b9258, Func Offset: 0x138
	// Line 205, Address: 0x1b926c, Func Offset: 0x14c
	// Line 206, Address: 0x1b9288, Func Offset: 0x168
	// Line 207, Address: 0x1b929c, Func Offset: 0x17c
	// Line 208, Address: 0x1b92b0, Func Offset: 0x190
	// Line 210, Address: 0x1b92c4, Func Offset: 0x1a4
	// Line 211, Address: 0x1b92d0, Func Offset: 0x1b0
	// Line 212, Address: 0x1b92dc, Func Offset: 0x1bc
	// Line 213, Address: 0x1b92e4, Func Offset: 0x1c4
	// Line 214, Address: 0x1b92f0, Func Offset: 0x1d0
	// Line 215, Address: 0x1b9300, Func Offset: 0x1e0
	// Line 216, Address: 0x1b9314, Func Offset: 0x1f4
	// Line 218, Address: 0x1b9328, Func Offset: 0x208
	// Line 220, Address: 0x1b9338, Func Offset: 0x218
	// Line 221, Address: 0x1b9340, Func Offset: 0x220
	// Line 222, Address: 0x1b9348, Func Offset: 0x228
	// Line 225, Address: 0x1b9354, Func Offset: 0x234
	// Line 226, Address: 0x1b9360, Func Offset: 0x240
	// Line 227, Address: 0x1b936c, Func Offset: 0x24c
	// Line 230, Address: 0x1b9378, Func Offset: 0x258
	// Line 231, Address: 0x1b9388, Func Offset: 0x268
	// Line 232, Address: 0x1b9394, Func Offset: 0x274
	// Line 233, Address: 0x1b93d0, Func Offset: 0x2b0
	// Line 234, Address: 0x1b93d8, Func Offset: 0x2b8
	// Line 236, Address: 0x1b9418, Func Offset: 0x2f8
	// Line 239, Address: 0x1b941c, Func Offset: 0x2fc
	// Line 236, Address: 0x1b9428, Func Offset: 0x308
	// Line 239, Address: 0x1b942c, Func Offset: 0x30c
	// Line 236, Address: 0x1b9434, Func Offset: 0x314
	// Line 237, Address: 0x1b943c, Func Offset: 0x31c
	// Line 238, Address: 0x1b944c, Func Offset: 0x32c
	// Line 239, Address: 0x1b9458, Func Offset: 0x338
	// Line 242, Address: 0x1b9460, Func Offset: 0x340
	// Func End, Address: 0x1b9474, Func Offset: 0x354
}

// 
// Start address: 0x1b9480
void bhEne05s_MV02(BH_PWORK* epw)
{
	NJS_POINT3 vec;
	NJS_POINT3 pos;
	OBJECT_WORK* owk;
	// Line 252, Address: 0x1b9480, Func Offset: 0
	// Line 259, Address: 0x1b9498, Func Offset: 0x18
	// Line 261, Address: 0x1b94a4, Func Offset: 0x24
	// Line 259, Address: 0x1b94a8, Func Offset: 0x28
	// Line 261, Address: 0x1b94ac, Func Offset: 0x2c
	// Line 259, Address: 0x1b94b0, Func Offset: 0x30
	// Line 261, Address: 0x1b94c0, Func Offset: 0x40
	// Line 263, Address: 0x1b94d8, Func Offset: 0x58
	// Line 264, Address: 0x1b94e0, Func Offset: 0x60
	// Line 266, Address: 0x1b94ec, Func Offset: 0x6c
	// Line 267, Address: 0x1b952c, Func Offset: 0xac
	// Line 268, Address: 0x1b9570, Func Offset: 0xf0
	// Line 271, Address: 0x1b957c, Func Offset: 0xfc
	// Line 272, Address: 0x1b9588, Func Offset: 0x108
	// Line 273, Address: 0x1b9594, Func Offset: 0x114
	// Line 276, Address: 0x1b959c, Func Offset: 0x11c
	// Line 277, Address: 0x1b95a4, Func Offset: 0x124
	// Line 279, Address: 0x1b95b0, Func Offset: 0x130
	// Line 278, Address: 0x1b95b4, Func Offset: 0x134
	// Line 279, Address: 0x1b95bc, Func Offset: 0x13c
	// Line 278, Address: 0x1b95c0, Func Offset: 0x140
	// Line 279, Address: 0x1b95c4, Func Offset: 0x144
	// Line 280, Address: 0x1b95cc, Func Offset: 0x14c
	// Line 281, Address: 0x1b95d8, Func Offset: 0x158
	// Line 282, Address: 0x1b95e4, Func Offset: 0x164
	// Line 303, Address: 0x1b95f0, Func Offset: 0x170
	// Line 304, Address: 0x1b9600, Func Offset: 0x180
	// Line 306, Address: 0x1b9644, Func Offset: 0x1c4
	// Line 309, Address: 0x1b9648, Func Offset: 0x1c8
	// Line 306, Address: 0x1b9654, Func Offset: 0x1d4
	// Line 307, Address: 0x1b965c, Func Offset: 0x1dc
	// Line 309, Address: 0x1b9660, Func Offset: 0x1e0
	// Line 307, Address: 0x1b9668, Func Offset: 0x1e8
	// Line 308, Address: 0x1b9670, Func Offset: 0x1f0
	// Line 309, Address: 0x1b9678, Func Offset: 0x1f8
	// Line 312, Address: 0x1b9680, Func Offset: 0x200
	// Func End, Address: 0x1b969c, Func Offset: 0x21c
}

// 
// Start address: 0x1b96a0
void bhEne05s_FloorCollision(BH_PWORK* epw)
{
	BOUNDARY* hp;
	// Line 322, Address: 0x1b96a0, Func Offset: 0
	// Line 325, Address: 0x1b96ac, Func Offset: 0xc
	// Line 327, Address: 0x1b96c0, Func Offset: 0x20
	// Line 328, Address: 0x1b96cc, Func Offset: 0x2c
	// Line 329, Address: 0x1b96d4, Func Offset: 0x34
	// Line 330, Address: 0x1b96e0, Func Offset: 0x40
	// Line 331, Address: 0x1b96ec, Func Offset: 0x4c
	// Line 332, Address: 0x1b9710, Func Offset: 0x70
	// Line 333, Address: 0x1b971c, Func Offset: 0x7c
	// Line 334, Address: 0x1b9734, Func Offset: 0x94
	// Line 337, Address: 0x1b974c, Func Offset: 0xac
	// Line 339, Address: 0x1b9770, Func Offset: 0xd0
	// Line 341, Address: 0x1b9774, Func Offset: 0xd4
	// Line 343, Address: 0x1b979c, Func Offset: 0xfc
	// Line 344, Address: 0x1b97c4, Func Offset: 0x124
	// Line 346, Address: 0x1b97e0, Func Offset: 0x140
	// Line 347, Address: 0x1b9808, Func Offset: 0x168
	// Line 351, Address: 0x1b9824, Func Offset: 0x184
	// Func End, Address: 0x1b9834, Func Offset: 0x194
}

