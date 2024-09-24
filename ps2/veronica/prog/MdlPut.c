





























typedef struct Camera;






typedef void(*type_73)(void*);
typedef void(*type_104)();


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
typedef char type_71[16];
typedef char type_72[4];
typedef unsigned int type_74[32];
typedef unsigned int type_75[16];
typedef BOUNDARY type_76[64];
typedef unsigned int type_77[16];
typedef BOUNDARY type_78[64];
typedef unsigned int type_79[32];
typedef BOUNDARY type_80[64];
typedef unsigned int type_81[16];
typedef unsigned int type_82[3];
typedef BH_PWORK* type_83[16];
typedef unsigned int type_84[8];
typedef unsigned int type_85[1];
typedef unsigned int type_86[384];
typedef unsigned int type_87[2];
typedef unsigned char type_88[2];
typedef int* type_89[16];
typedef unsigned int type_90[4];
typedef char type_91[32];

typedef char type_93[64];

typedef char type_95[4];
typedef MODEL_DATA type_96[16];
typedef short type_97[4];
typedef unsigned char type_98[4];

typedef unsigned int type_100[32];

typedef Unknown1* type_102[512];
typedef Unknown1* type_103[128];
typedef void(*type_105)()[4];
typedef Unknown1* type_106[512];
typedef unsigned char type_107[64];
typedef Unknown1* type_108[512];























































































































































































































































































































































































































































































































































































































































































void(*bhJumpCnkDraw)()[4];
extern Camera cam;
unsigned int _nj_control_3d_flag_;
extern SYS* sys;

void bhPutModel(BH_PWORK* ewP);
void DrawTreeBsc(NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num);
void EasyMultiDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num);
void SimpleMultiDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num);
void EasyDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num);
void SimpleDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num);
void bhCalcModel(BH_PWORK* ewP);
void bhCalcTree(NJS_MATRIX basP, MODEL_DATA* mlwP);

// 
// Start address: 0x12ebb0
void bhPutModel(BH_PWORK* ewP)
{
	unsigned int c3df;
	int draw_tp;
	OBJECT_WORK* owP;
	MODEL_DATA* mlwP;
	// Line 65, Address: 0x12ebb0, Func Offset: 0
	// Line 66, Address: 0x12ebcc, Func Offset: 0x1c
	// Line 71, Address: 0x12ebd4, Func Offset: 0x24
	// Line 72, Address: 0x12ebe0, Func Offset: 0x30
	// Line 77, Address: 0x12ebe8, Func Offset: 0x38
	// Line 79, Address: 0x12ec10, Func Offset: 0x60
	// Line 81, Address: 0x12ec20, Func Offset: 0x70
	// Line 84, Address: 0x12ec38, Func Offset: 0x88
	// Line 85, Address: 0x12ec44, Func Offset: 0x94
	// Line 86, Address: 0x12ec54, Func Offset: 0xa4
	// Line 87, Address: 0x12ec70, Func Offset: 0xc0
	// Line 88, Address: 0x12ec78, Func Offset: 0xc8
	// Line 90, Address: 0x12ec94, Func Offset: 0xe4
	// Line 91, Address: 0x12ecbc, Func Offset: 0x10c
	// Line 93, Address: 0x12ece4, Func Offset: 0x134
	// Line 94, Address: 0x12ecf8, Func Offset: 0x148
	// Line 95, Address: 0x12ed18, Func Offset: 0x168
	// Line 96, Address: 0x12ed28, Func Offset: 0x178
	// Line 97, Address: 0x12ed30, Func Offset: 0x180
	// Line 98, Address: 0x12ed38, Func Offset: 0x188
	// Line 99, Address: 0x12ed40, Func Offset: 0x190
	// Line 100, Address: 0x12ed4c, Func Offset: 0x19c
	// Line 101, Address: 0x12ed64, Func Offset: 0x1b4
	// Line 102, Address: 0x12ed6c, Func Offset: 0x1bc
	// Line 103, Address: 0x12ed80, Func Offset: 0x1d0
	// Line 104, Address: 0x12ed90, Func Offset: 0x1e0
	// Line 105, Address: 0x12ed98, Func Offset: 0x1e8
	// Line 107, Address: 0x12eda0, Func Offset: 0x1f0
	// Line 108, Address: 0x12edac, Func Offset: 0x1fc
	// Line 111, Address: 0x12edb4, Func Offset: 0x204
	// Line 112, Address: 0x12eddc, Func Offset: 0x22c
	// Line 114, Address: 0x12ee04, Func Offset: 0x254
	// Line 115, Address: 0x12ee18, Func Offset: 0x268
	// Line 116, Address: 0x12ee38, Func Offset: 0x288
	// Line 117, Address: 0x12ee48, Func Offset: 0x298
	// Line 118, Address: 0x12ee50, Func Offset: 0x2a0
	// Line 119, Address: 0x12ee58, Func Offset: 0x2a8
	// Line 120, Address: 0x12ee60, Func Offset: 0x2b0
	// Line 121, Address: 0x12ee6c, Func Offset: 0x2bc
	// Line 122, Address: 0x12ee84, Func Offset: 0x2d4
	// Line 123, Address: 0x12ee8c, Func Offset: 0x2dc
	// Line 124, Address: 0x12eea0, Func Offset: 0x2f0
	// Line 125, Address: 0x12eeb0, Func Offset: 0x300
	// Line 126, Address: 0x12eeb8, Func Offset: 0x308
	// Line 129, Address: 0x12eec0, Func Offset: 0x310
	// Line 131, Address: 0x12eec8, Func Offset: 0x318
	// Line 134, Address: 0x12eed8, Func Offset: 0x328
	// Func End, Address: 0x12eef8, Func Offset: 0x348
}

// 
// Start address: 0x12ef00
void DrawTreeBsc(NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num)
{
	// Line 146, Address: 0x12ef00, Func Offset: 0
	// Line 148, Address: 0x12ef1c, Func Offset: 0x1c
	// Line 149, Address: 0x12ef24, Func Offset: 0x24
	// Line 150, Address: 0x12ef30, Func Offset: 0x30
	// Line 151, Address: 0x12ef3c, Func Offset: 0x3c
	// Line 152, Address: 0x12ef58, Func Offset: 0x58
	// Line 153, Address: 0x12ef60, Func Offset: 0x60
	// Line 154, Address: 0x12ef68, Func Offset: 0x68
	// Line 156, Address: 0x12ef78, Func Offset: 0x78
	// Func End, Address: 0x12ef90, Func Offset: 0x90
}

// 
// Start address: 0x12ef90
void EasyMultiDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num)
{
	// Line 170, Address: 0x12ef90, Func Offset: 0
	// Line 172, Address: 0x12efb4, Func Offset: 0x24
	// Line 173, Address: 0x12efbc, Func Offset: 0x2c
	// Line 174, Address: 0x12efc8, Func Offset: 0x38
	// Line 175, Address: 0x12efdc, Func Offset: 0x4c
	// Line 177, Address: 0x12eff0, Func Offset: 0x60
	// Line 178, Address: 0x12f004, Func Offset: 0x74
	// Line 179, Address: 0x12f008, Func Offset: 0x78
	// Line 180, Address: 0x12f024, Func Offset: 0x94
	// Line 181, Address: 0x12f030, Func Offset: 0xa0
	// Line 182, Address: 0x12f038, Func Offset: 0xa8
	// Line 184, Address: 0x12f048, Func Offset: 0xb8
	// Func End, Address: 0x12f064, Func Offset: 0xd4
}

// 
// Start address: 0x12f070
void SimpleMultiDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num)
{
	// Line 189, Address: 0x12f070, Func Offset: 0
	// Line 191, Address: 0x12f094, Func Offset: 0x24
	// Line 192, Address: 0x12f09c, Func Offset: 0x2c
	// Line 193, Address: 0x12f0a8, Func Offset: 0x38
	// Line 194, Address: 0x12f0bc, Func Offset: 0x4c
	// Line 196, Address: 0x12f0d0, Func Offset: 0x60
	// Line 197, Address: 0x12f0e4, Func Offset: 0x74
	// Line 198, Address: 0x12f0e8, Func Offset: 0x78
	// Line 199, Address: 0x12f104, Func Offset: 0x94
	// Line 200, Address: 0x12f110, Func Offset: 0xa0
	// Line 201, Address: 0x12f118, Func Offset: 0xa8
	// Line 203, Address: 0x12f128, Func Offset: 0xb8
	// Func End, Address: 0x12f144, Func Offset: 0xd4
}

// 
// Start address: 0x12f150
void EasyDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num)
{
	// Line 208, Address: 0x12f150, Func Offset: 0
	// Line 210, Address: 0x12f174, Func Offset: 0x24
	// Line 211, Address: 0x12f17c, Func Offset: 0x2c
	// Line 212, Address: 0x12f188, Func Offset: 0x38
	// Line 213, Address: 0x12f19c, Func Offset: 0x4c
	// Line 215, Address: 0x12f1b0, Func Offset: 0x60
	// Line 216, Address: 0x12f1c4, Func Offset: 0x74
	// Line 217, Address: 0x12f1c8, Func Offset: 0x78
	// Line 218, Address: 0x12f1e4, Func Offset: 0x94
	// Line 219, Address: 0x12f1f0, Func Offset: 0xa0
	// Line 220, Address: 0x12f1f8, Func Offset: 0xa8
	// Line 222, Address: 0x12f208, Func Offset: 0xb8
	// Func End, Address: 0x12f224, Func Offset: 0xd4
}

// 
// Start address: 0x12f230
void SimpleDrawTreeCnk(BH_PWORK* ewP, NJS_OBJECT* objP, OBJECT_WORK* owP, int obj_num)
{
	// Line 227, Address: 0x12f230, Func Offset: 0
	// Line 229, Address: 0x12f254, Func Offset: 0x24
	// Line 230, Address: 0x12f25c, Func Offset: 0x2c
	// Line 231, Address: 0x12f268, Func Offset: 0x38
	// Line 232, Address: 0x12f27c, Func Offset: 0x4c
	// Line 234, Address: 0x12f290, Func Offset: 0x60
	// Line 235, Address: 0x12f2a4, Func Offset: 0x74
	// Line 236, Address: 0x12f2a8, Func Offset: 0x78
	// Line 237, Address: 0x12f2c4, Func Offset: 0x94
	// Line 238, Address: 0x12f2d0, Func Offset: 0xa0
	// Line 239, Address: 0x12f2d8, Func Offset: 0xa8
	// Line 241, Address: 0x12f2e8, Func Offset: 0xb8
	// Func End, Address: 0x12f304, Func Offset: 0xd4
}

// 
// Start address: 0x12f310
void bhCalcModel(BH_PWORK* ewP)
{
	// Line 251, Address: 0x12f310, Func Offset: 0
	// Line 253, Address: 0x12f31c, Func Offset: 0xc
	// Line 259, Address: 0x12f32c, Func Offset: 0x1c
	// Line 260, Address: 0x12f358, Func Offset: 0x48
	// Line 261, Address: 0x12f36c, Func Offset: 0x5c
	// Line 262, Address: 0x12f384, Func Offset: 0x74
	// Line 263, Address: 0x12f398, Func Offset: 0x88
	// Line 264, Address: 0x12f3a0, Func Offset: 0x90
	// Line 265, Address: 0x12f3ac, Func Offset: 0x9c
	// Line 266, Address: 0x12f3b4, Func Offset: 0xa4
	// Line 267, Address: 0x12f3c8, Func Offset: 0xb8
	// Line 271, Address: 0x12f3dc, Func Offset: 0xcc
	// Line 272, Address: 0x12f3e8, Func Offset: 0xd8
	// Func End, Address: 0x12f3f8, Func Offset: 0xe8
}

// 
// Start address: 0x12f400
void bhCalcTree(NJS_MATRIX basP, MODEL_DATA* mlwP)
{
	int obj_num;
	NJS_OBJECT* objP;
	OBJECT_WORK* owP;
	// Line 286, Address: 0x12f400, Func Offset: 0
	// Line 287, Address: 0x12f418, Func Offset: 0x18
	// Line 288, Address: 0x12f41c, Func Offset: 0x1c
	// Line 291, Address: 0x12f424, Func Offset: 0x24
	// Line 293, Address: 0x12f42c, Func Offset: 0x2c
	// Line 295, Address: 0x12f43c, Func Offset: 0x3c
	// Line 297, Address: 0x12f448, Func Offset: 0x48
	// Line 299, Address: 0x12f460, Func Offset: 0x60
	// Line 300, Address: 0x12f474, Func Offset: 0x74
	// Line 301, Address: 0x12f488, Func Offset: 0x88
	// Line 302, Address: 0x12f4a8, Func Offset: 0xa8
	// Line 304, Address: 0x12f4b8, Func Offset: 0xb8
	// Line 305, Address: 0x12f4d0, Func Offset: 0xd0
	// Line 307, Address: 0x12f4e0, Func Offset: 0xe0
	// Line 309, Address: 0x12f4e8, Func Offset: 0xe8
	// Func End, Address: 0x12f504, Func Offset: 0x104
}

