
typedef struct _anon1;












































typedef struct Camera;

typedef void(*type_2)(void*);


typedef unsigned char type_1[256];
typedef unsigned int type_3[16];

typedef char type_5[3];
typedef unsigned int type_6[16];
typedef unsigned int type_7[32];
typedef float type_8[128];
typedef unsigned int type_9[16];
typedef BH_PWORK* type_10[16];
typedef unsigned int type_11[8];
typedef unsigned int type_12[1];
typedef unsigned int type_13[384];
typedef unsigned int type_14[2];
typedef int* type_15[16];
typedef unsigned int type_16[4];


typedef char type_19[4];
typedef MODEL_DATA type_20[16];
typedef short type_21[4];
typedef unsigned char type_22[4];
typedef unsigned int type_23[8];
typedef unsigned int type_24[4];
typedef BOUNDARY type_25[64];
typedef Unknown1* type_26[512];
typedef BOUNDARY type_27[64];
typedef Unknown1* type_28[128];
typedef BOUNDARY type_29[64];
typedef Unknown1* type_30[512];
typedef unsigned char type_31[64];
typedef Unknown1* type_32[512];
typedef Unknown1* type_33[512];
typedef unsigned int type_34[4];
typedef Unknown1* type_35[512];



typedef char type_39[8];
typedef Unknown1* type_40[512];
typedef unsigned int type_41[3];

typedef Unknown1* type_43[512];
typedef float type_44[32];


typedef Unknown1* type_47[128];
typedef unsigned char type_48[2];
typedef unsigned int type_49[1];
typedef unsigned int type_50[32];
typedef Unknown1* type_51[128];
typedef char type_52[32];

typedef int* type_54[16];



typedef char type_58[64];
typedef Unknown1* type_59[128];

typedef float type_61[4];
typedef Unknown1* type_62[512];
typedef MODEL_DATA type_63[16];
typedef float type_64[4];
typedef float type_65[4];
typedef Unknown1* type_66[32];

typedef Unknown1* type_68[32];
typedef float type_69[3];
typedef unsigned char type_70[64];
typedef float type_71[3][20];
typedef Unknown1* type_72[32];
typedef float type_73[3];
typedef float type_74[3][20];
typedef float type_75[3];
typedef char type_76[32];
typedef float type_77[3][20];
typedef char type_78[8];
typedef float type_79[3];
typedef short type_80[32];

typedef float type_82[3][20];

typedef int type_84[4];
typedef unsigned int type_85[4];

typedef void* type_87[2];
typedef unsigned char* type_88[256];
typedef char type_89[256];
typedef short type_90[256];
typedef float type_91[4];
typedef float type_92[4];
typedef float type_93[4];
typedef short type_94[256];
typedef unsigned int type_95[2];
typedef int type_96[8];

typedef float type_98[3];
typedef TEXTURE_BUFFER type_99[256];
typedef int type_100[3];
typedef float type_101[3];

typedef _anon1* type_103[10];
typedef short type_104[256];
typedef int type_105[64];
typedef MODEL_DATA type_106[450];
typedef unsigned int type_107[16];
typedef char type_108[4];
typedef unsigned int type_109[8];
typedef int type_110[4];


typedef int type_113[450];
typedef unsigned int type_114[8];

typedef unsigned char type_116[450];
typedef char type_117[16];
typedef char type_118[4];
typedef _anon1* type_119[10];
typedef CAMERA type_120[2];
typedef unsigned int type_121[32];


struct _anon1
{
	char room;
	char rcase;
	char evc_no;
	char flag;
	char ev_flag;
	unsigned int col;
	unsigned int ev_col;
};






































































































































































































































































































































































































































































































































































































































































































































extern Camera cam;
extern SYS* sys;
extern ROOM* rom;
extern unsigned char BackColorFlag;

void bhChangeBackColor();
void bhChangeBackColorEvt();

// 
// Start address: 0x2e7da0
void bhChangeBackColor()
{
	unsigned int BackCol;
	int i;
	_anon1* BackColTbl;
	_anon1* BackColStage[10];
	// Line 893, Address: 0x2e7da0, Func Offset: 0
	// Line 1042, Address: 0x2e7da8, Func Offset: 0x8
	// Line 1043, Address: 0x2e7db8, Func Offset: 0x18
	// Line 1045, Address: 0x2e7dc0, Func Offset: 0x20
	// Line 1044, Address: 0x2e7dc8, Func Offset: 0x28
	// Line 1045, Address: 0x2e7dcc, Func Offset: 0x2c
	// Line 1043, Address: 0x2e7dd4, Func Offset: 0x34
	// Line 1045, Address: 0x2e7dd8, Func Offset: 0x38
	// Line 1047, Address: 0x2e7e08, Func Offset: 0x68
	// Line 1050, Address: 0x2e7e30, Func Offset: 0x90
	// Line 1051, Address: 0x2e7e44, Func Offset: 0xa4
	// Line 1053, Address: 0x2e7e50, Func Offset: 0xb0
	// Line 1054, Address: 0x2e7e5c, Func Offset: 0xbc
	// Line 1055, Address: 0x2e7e64, Func Offset: 0xc4
	// Line 1056, Address: 0x2e7e78, Func Offset: 0xd8
	// Line 1057, Address: 0x2e7e8c, Func Offset: 0xec
	// Line 1060, Address: 0x2e7e94, Func Offset: 0xf4
	// Line 1061, Address: 0x2e7ea8, Func Offset: 0x108
	// Line 1062, Address: 0x2e7eb8, Func Offset: 0x118
	// Line 1065, Address: 0x2e7ec0, Func Offset: 0x120
	// Line 1066, Address: 0x2e7ed4, Func Offset: 0x134
	// Line 1067, Address: 0x2e7ee8, Func Offset: 0x148
	// Line 1068, Address: 0x2e7f08, Func Offset: 0x168
	// Line 1070, Address: 0x2e7f10, Func Offset: 0x170
	// Line 1071, Address: 0x2e7f14, Func Offset: 0x174
	// Line 1075, Address: 0x2e7f1c, Func Offset: 0x17c
	// Line 1076, Address: 0x2e7f24, Func Offset: 0x184
	// Line 1080, Address: 0x2e7f30, Func Offset: 0x190
	// Line 1084, Address: 0x2e7f38, Func Offset: 0x198
	// Line 1085, Address: 0x2e7f44, Func Offset: 0x1a4
	// Func End, Address: 0x2e7f50, Func Offset: 0x1b0
}

// 
// Start address: 0x2e7f50
void bhChangeBackColorEvt()
{
	unsigned int BackCol;
	int i;
	_anon1* BackColTbl;
	_anon1* BackColStage[10];
	// Line 1088, Address: 0x2e7f50, Func Offset: 0
	// Line 1165, Address: 0x2e7f58, Func Offset: 0x8
	// Line 1166, Address: 0x2e7f68, Func Offset: 0x18
	// Line 1168, Address: 0x2e7f70, Func Offset: 0x20
	// Line 1167, Address: 0x2e7f78, Func Offset: 0x28
	// Line 1168, Address: 0x2e7f7c, Func Offset: 0x2c
	// Line 1166, Address: 0x2e7f84, Func Offset: 0x34
	// Line 1168, Address: 0x2e7f88, Func Offset: 0x38
	// Line 1170, Address: 0x2e7fb8, Func Offset: 0x68
	// Line 1173, Address: 0x2e7fe0, Func Offset: 0x90
	// Line 1174, Address: 0x2e7ff4, Func Offset: 0xa4
	// Line 1176, Address: 0x2e8000, Func Offset: 0xb0
	// Line 1177, Address: 0x2e800c, Func Offset: 0xbc
	// Line 1178, Address: 0x2e8014, Func Offset: 0xc4
	// Line 1179, Address: 0x2e8028, Func Offset: 0xd8
	// Line 1180, Address: 0x2e803c, Func Offset: 0xec
	// Line 1183, Address: 0x2e8044, Func Offset: 0xf4
	// Line 1184, Address: 0x2e8058, Func Offset: 0x108
	// Line 1185, Address: 0x2e8068, Func Offset: 0x118
	// Line 1190, Address: 0x2e8070, Func Offset: 0x120
	// Line 1191, Address: 0x2e8078, Func Offset: 0x128
	// Line 1195, Address: 0x2e8084, Func Offset: 0x134
	// Line 1199, Address: 0x2e808c, Func Offset: 0x13c
	// Line 1200, Address: 0x2e8098, Func Offset: 0x148
	// Func End, Address: 0x2e80a4, Func Offset: 0x154
}

