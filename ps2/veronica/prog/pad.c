



































typedef void(*type_70)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef unsigned int type_2[18];
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
typedef unsigned int type_26[18];
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
typedef unsigned short type_41[19];

typedef int type_43[4];
typedef unsigned char* type_44[256];
typedef unsigned int type_45[2];
typedef short type_46[256];
typedef unsigned int type_47[18];

typedef float type_49[3];
typedef short type_50[256];
typedef int type_51[3];
typedef int type_52[8];
typedef float type_53[3];

typedef TEXTURE_BUFFER type_55[256];


typedef unsigned int* type_58[4];
typedef short type_59[256];
typedef char type_60[3];
typedef int type_61[64];
typedef MODEL_DATA type_62[450];


typedef int type_65[450];
typedef unsigned int type_66[8];
typedef unsigned char type_67[450];
typedef char type_68[16];
typedef char type_69[4];
typedef unsigned int type_71[32];
typedef unsigned int type_72[16];
typedef BOUNDARY type_73[64];
typedef unsigned int type_74[16];
typedef BOUNDARY type_75[64];
typedef unsigned int type_76[32];
typedef BOUNDARY type_77[64];
typedef unsigned int type_78[16];
typedef unsigned int type_79[18];
typedef unsigned int type_80[3];
typedef BH_PWORK* type_81[16];
typedef unsigned int type_82[8];
typedef unsigned int type_83[1];
typedef unsigned int type_84[384];
typedef unsigned int type_85[2];
typedef unsigned char type_86[2];
typedef int* type_87[16];
typedef unsigned int type_88[4];
typedef char type_89[32];
typedef unsigned int type_90[18];

typedef char type_92[64];

typedef char type_94[4];
typedef MODEL_DATA type_95[16];
typedef short type_96[4];
typedef unsigned char type_97[4];

typedef unsigned int type_99[32];

typedef Unknown1* type_101[512];
typedef Unknown1* type_102[128];
typedef unsigned short type_103[10];
typedef Unknown1* type_104[512];
typedef unsigned char type_105[64];
typedef Unknown1* type_106[512];






















































































































































































































































































































































































































































































































































































































































































unsigned int pad_tab_a[18];
unsigned int pad_tab_b[18];
unsigned int pad_tab_c[18];
unsigned int pad_tab_d[18];
unsigned int* pad_type[4];
unsigned short pdm_mes[10];
unsigned short pdm_palmes[19];
extern SYS* sys;
int pd_port;

void bhSetPad();

// 
// Start address: 0x1312b0
void bhSetPad()
{
	unsigned int padtbl[18];
	unsigned int padwork;
	unsigned int argb;
	unsigned int pon;
	unsigned int pad;
	int i;
	unsigned int* pd;
	// Line 395, Address: 0x1312b0, Func Offset: 0
	// Line 417, Address: 0x1312c0, Func Offset: 0x10
	// Line 418, Address: 0x1312dc, Func Offset: 0x2c
	// Line 420, Address: 0x1312ec, Func Offset: 0x3c
	// Line 421, Address: 0x1312f4, Func Offset: 0x44
	// Line 422, Address: 0x1312fc, Func Offset: 0x4c
	// Line 423, Address: 0x13130c, Func Offset: 0x5c
	// Line 424, Address: 0x131314, Func Offset: 0x64
	// Line 425, Address: 0x131328, Func Offset: 0x78
	// Line 424, Address: 0x13132c, Func Offset: 0x7c
	// Line 425, Address: 0x131334, Func Offset: 0x84
	// Line 426, Address: 0x13133c, Func Offset: 0x8c
	// Line 425, Address: 0x131340, Func Offset: 0x90
	// Line 426, Address: 0x131348, Func Offset: 0x98
	// Line 428, Address: 0x131360, Func Offset: 0xb0
	// Line 430, Address: 0x131368, Func Offset: 0xb8
	// Line 432, Address: 0x131374, Func Offset: 0xc4
	// Line 433, Address: 0x131394, Func Offset: 0xe4
	// Line 434, Address: 0x1313b0, Func Offset: 0x100
	// Line 437, Address: 0x1313b8, Func Offset: 0x108
	// Line 434, Address: 0x1313c8, Func Offset: 0x118
	// Line 437, Address: 0x1313d4, Func Offset: 0x124
	// Line 434, Address: 0x1313d8, Func Offset: 0x128
	// Line 437, Address: 0x1313dc, Func Offset: 0x12c
	// Line 443, Address: 0x1313e4, Func Offset: 0x134
	// Line 434, Address: 0x1313e8, Func Offset: 0x138
	// Line 437, Address: 0x1313ec, Func Offset: 0x13c
	// Line 443, Address: 0x131400, Func Offset: 0x150
	// Line 444, Address: 0x131408, Func Offset: 0x158
	// Line 445, Address: 0x13140c, Func Offset: 0x15c
	// Line 446, Address: 0x131410, Func Offset: 0x160
	// Line 447, Address: 0x131430, Func Offset: 0x180
	// Line 448, Address: 0x131440, Func Offset: 0x190
	// Line 451, Address: 0x131444, Func Offset: 0x194
	// Line 452, Address: 0x131448, Func Offset: 0x198
	// Line 451, Address: 0x13144c, Func Offset: 0x19c
	// Line 452, Address: 0x131450, Func Offset: 0x1a0
	// Line 458, Address: 0x131494, Func Offset: 0x1e4
	// Line 459, Address: 0x1314b8, Func Offset: 0x208
	// Line 462, Address: 0x1314c0, Func Offset: 0x210
	// Line 459, Address: 0x1314c8, Func Offset: 0x218
	// Line 462, Address: 0x1314cc, Func Offset: 0x21c
	// Line 459, Address: 0x1314d0, Func Offset: 0x220
	// Line 460, Address: 0x1314d4, Func Offset: 0x224
	// Line 459, Address: 0x1314d8, Func Offset: 0x228
	// Line 460, Address: 0x1314e0, Func Offset: 0x230
	// Line 461, Address: 0x1314e8, Func Offset: 0x238
	// Line 462, Address: 0x1314f8, Func Offset: 0x248
	// Line 463, Address: 0x131500, Func Offset: 0x250
	// Line 467, Address: 0x131510, Func Offset: 0x260
	// Line 469, Address: 0x131518, Func Offset: 0x268
	// Line 470, Address: 0x131528, Func Offset: 0x278
	// Line 471, Address: 0x13153c, Func Offset: 0x28c
	// Line 477, Address: 0x13158c, Func Offset: 0x2dc
	// Line 481, Address: 0x1315d8, Func Offset: 0x328
	// Line 483, Address: 0x131628, Func Offset: 0x378
	// Line 484, Address: 0x131638, Func Offset: 0x388
	// Line 483, Address: 0x131640, Func Offset: 0x390
	// Line 484, Address: 0x131648, Func Offset: 0x398
	// Line 489, Address: 0x131690, Func Offset: 0x3e0
	// Line 493, Address: 0x131698, Func Offset: 0x3e8
	// Line 494, Address: 0x1316b4, Func Offset: 0x404
	// Line 496, Address: 0x1316d0, Func Offset: 0x420
	// Line 497, Address: 0x1316ec, Func Offset: 0x43c
	// Line 498, Address: 0x131730, Func Offset: 0x480
	// Line 499, Address: 0x131744, Func Offset: 0x494
	// Line 500, Address: 0x131758, Func Offset: 0x4a8
	// Line 501, Address: 0x13176c, Func Offset: 0x4bc
	// Line 502, Address: 0x13177c, Func Offset: 0x4cc
	// Line 505, Address: 0x131784, Func Offset: 0x4d4
	// Line 507, Address: 0x131788, Func Offset: 0x4d8
	// Line 508, Address: 0x131798, Func Offset: 0x4e8
	// Line 515, Address: 0x1317bc, Func Offset: 0x50c
	// Line 516, Address: 0x1317e4, Func Offset: 0x534
	// Line 520, Address: 0x13180c, Func Offset: 0x55c
	// Line 522, Address: 0x131814, Func Offset: 0x564
	// Line 521, Address: 0x13181c, Func Offset: 0x56c
	// Line 526, Address: 0x131820, Func Offset: 0x570
	// Line 520, Address: 0x131824, Func Offset: 0x574
	// Line 522, Address: 0x13183c, Func Offset: 0x58c
	// Line 530, Address: 0x131858, Func Offset: 0x5a8
	// Line 531, Address: 0x131878, Func Offset: 0x5c8
	// Line 532, Address: 0x131888, Func Offset: 0x5d8
	// Line 535, Address: 0x1318a0, Func Offset: 0x5f0
	// Line 536, Address: 0x1318bc, Func Offset: 0x60c
	// Line 537, Address: 0x1318c8, Func Offset: 0x618
	// Line 538, Address: 0x1318e0, Func Offset: 0x630
	// Line 541, Address: 0x1318ec, Func Offset: 0x63c
	// Line 542, Address: 0x131900, Func Offset: 0x650
	// Line 544, Address: 0x131914, Func Offset: 0x664
	// Line 545, Address: 0x131920, Func Offset: 0x670
	// Line 546, Address: 0x13192c, Func Offset: 0x67c
	// Line 547, Address: 0x131950, Func Offset: 0x6a0
	// Line 549, Address: 0x131954, Func Offset: 0x6a4
	// Line 550, Address: 0x131960, Func Offset: 0x6b0
	// Line 551, Address: 0x13198c, Func Offset: 0x6dc
	// Line 553, Address: 0x131990, Func Offset: 0x6e0
	// Line 554, Address: 0x1319bc, Func Offset: 0x70c
	// Line 555, Address: 0x1319e0, Func Offset: 0x730
	// Line 556, Address: 0x1319e8, Func Offset: 0x738
	// Line 558, Address: 0x1319fc, Func Offset: 0x74c
	// Line 559, Address: 0x131a08, Func Offset: 0x758
	// Line 560, Address: 0x131a14, Func Offset: 0x764
	// Line 561, Address: 0x131a40, Func Offset: 0x790
	// Line 563, Address: 0x131a44, Func Offset: 0x794
	// Line 564, Address: 0x131a50, Func Offset: 0x7a0
	// Line 565, Address: 0x131a7c, Func Offset: 0x7cc
	// Line 567, Address: 0x131a80, Func Offset: 0x7d0
	// Line 568, Address: 0x131aac, Func Offset: 0x7fc
	// Line 569, Address: 0x131ad0, Func Offset: 0x820
	// Line 570, Address: 0x131ad8, Func Offset: 0x828
	// Line 573, Address: 0x131af4, Func Offset: 0x844
	// Line 574, Address: 0x131b1c, Func Offset: 0x86c
	// Line 575, Address: 0x131b50, Func Offset: 0x8a0
	// Line 576, Address: 0x131b78, Func Offset: 0x8c8
	// Func End, Address: 0x131b8c, Func Offset: 0x8dc
}

