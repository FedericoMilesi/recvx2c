#include "../../../ps2/veronica/prog/en19.h"
#include "../../../ps2/veronica/prog/en29.h"
#include "../../../ps2/veronica/prog/Motion.h"
#include "../../../ps2/veronica/prog/main.h"
#include "../../../ps2/veronica/prog/ps2_dummy.h"
#include "../../../ps2/veronica/prog/subpl.h"

// ENEMY: Tentacle 

/*void(*bhEne29_Mode0)(BH_PWORK*)[6];
void(*bhEne29_BrainType)(BH_PWORK*)[4];
_enum_0 InitBrnMde[4];
char En29FlpTbl[20];
_anon19 Ene29CapColTbl[15];
EA_WORK En29ActTbl[40];
ACT_TBL_WORK En29PlyActTbl[2];
_anon40 En29CombWepTbl[21];
_anon43 En29CombJointTbl[21];
ET_WORK TypPrm[4];
_anon29 En29DmgDat;
DS_WORK E29DmgSet[5];
_anon30 E29OffTbl[20];
int E29EffTbl[4][9];*/

// 
// Start address: 0x210a00
void bhEne29(BH_PWORK* ewP)
{
	// Line 335, Address: 0x210a00, Func Offset: 0
	// Line 338, Address: 0x210a0c, Func Offset: 0xc
	// Line 340, Address: 0x210a1c, Func Offset: 0x1c
	// Line 357, Address: 0x210a3c, Func Offset: 0x3c
	// Line 361, Address: 0x210a48, Func Offset: 0x48
	// Line 365, Address: 0x210a54, Func Offset: 0x54
	// Func End, Address: 0x210a64, Func Offset: 0x64
	scePrintf("bhEne29 - UNIMPLEMENTED!\n");
}

// 
// Start address: 0x210a70
static void bhEne29_Init(BH_PWORK* ewP)
{
	O_WRK* oP;
	NJS_POINT3* szP;
	//ATR_WORK* htP;
	ET_WORK* etP;
	ATR_WORK* htP;
	en29_freework* fwP;
	// Line 375, Address: 0x210a70, Func Offset: 0
	// Line 379, Address: 0x210a80, Func Offset: 0x10
	// Line 383, Address: 0x210aa4, Func Offset: 0x34
	// Line 386, Address: 0x210ab4, Func Offset: 0x44
	// Line 395, Address: 0x210abc, Func Offset: 0x4c
	// Line 388, Address: 0x210ac4, Func Offset: 0x54
	// Line 386, Address: 0x210ac8, Func Offset: 0x58
	// Line 390, Address: 0x210ad4, Func Offset: 0x64
	// Line 395, Address: 0x210ad8, Func Offset: 0x68
	// Line 386, Address: 0x210adc, Func Offset: 0x6c
	// Line 387, Address: 0x210b10, Func Offset: 0xa0
	// Line 388, Address: 0x210b1c, Func Offset: 0xac
	// Line 389, Address: 0x210b20, Func Offset: 0xb0
	// Line 390, Address: 0x210b24, Func Offset: 0xb4
	// Line 391, Address: 0x210b28, Func Offset: 0xb8
	// Line 392, Address: 0x210b38, Func Offset: 0xc8
	// Line 395, Address: 0x210b3c, Func Offset: 0xcc
	// Line 398, Address: 0x210b48, Func Offset: 0xd8
	// Line 401, Address: 0x210b4c, Func Offset: 0xdc
	// Line 410, Address: 0x210b50, Func Offset: 0xe0
	// Line 411, Address: 0x210b54, Func Offset: 0xe4
	// Line 414, Address: 0x210b58, Func Offset: 0xe8
	// Line 401, Address: 0x210b5c, Func Offset: 0xec
	// Line 402, Address: 0x210b60, Func Offset: 0xf0
	// Line 403, Address: 0x210b64, Func Offset: 0xf4
	// Line 404, Address: 0x210b68, Func Offset: 0xf8
	// Line 410, Address: 0x210b6c, Func Offset: 0xfc
	// Line 411, Address: 0x210b70, Func Offset: 0x100
	// Line 412, Address: 0x210b74, Func Offset: 0x104
	// Line 413, Address: 0x210b78, Func Offset: 0x108
	// Line 414, Address: 0x210b7c, Func Offset: 0x10c
	// Line 416, Address: 0x210b80, Func Offset: 0x110
	// Line 415, Address: 0x210b84, Func Offset: 0x114
	// Line 416, Address: 0x210b88, Func Offset: 0x118
	// Line 417, Address: 0x210b8c, Func Offset: 0x11c
	// Line 420, Address: 0x210b98, Func Offset: 0x128
	// Line 421, Address: 0x210b9c, Func Offset: 0x12c
	// Line 422, Address: 0x210ba0, Func Offset: 0x130
	// Line 423, Address: 0x210ba4, Func Offset: 0x134
	// Line 426, Address: 0x210ba8, Func Offset: 0x138
	// Line 424, Address: 0x210bac, Func Offset: 0x13c
	// Line 426, Address: 0x210bb0, Func Offset: 0x140
	// Line 425, Address: 0x210bb4, Func Offset: 0x144
	// Line 426, Address: 0x210bb8, Func Offset: 0x148
	// Line 429, Address: 0x210bbc, Func Offset: 0x14c
	// Line 430, Address: 0x210bc0, Func Offset: 0x150
	// Line 435, Address: 0x210bc4, Func Offset: 0x154
	// Line 436, Address: 0x210bc8, Func Offset: 0x158
	// Line 429, Address: 0x210bcc, Func Offset: 0x15c
	// Line 430, Address: 0x210bd4, Func Offset: 0x164
	// Line 437, Address: 0x210bd8, Func Offset: 0x168
	// Line 438, Address: 0x210bdc, Func Offset: 0x16c
	// Line 439, Address: 0x210be0, Func Offset: 0x170
	// Line 430, Address: 0x210be4, Func Offset: 0x174
	// Line 431, Address: 0x210bec, Func Offset: 0x17c
	// Line 446, Address: 0x210bf0, Func Offset: 0x180
	// Line 440, Address: 0x210bf4, Func Offset: 0x184
	// Line 446, Address: 0x210bf8, Func Offset: 0x188
	// Line 431, Address: 0x210bfc, Func Offset: 0x18c
	// Line 435, Address: 0x210c04, Func Offset: 0x194
	// Line 436, Address: 0x210c08, Func Offset: 0x198
	// Line 437, Address: 0x210c0c, Func Offset: 0x19c
	// Line 438, Address: 0x210c10, Func Offset: 0x1a0
	// Line 439, Address: 0x210c14, Func Offset: 0x1a4
	// Line 440, Address: 0x210c20, Func Offset: 0x1b0
	// Line 443, Address: 0x210c24, Func Offset: 0x1b4
	// Line 446, Address: 0x210c2c, Func Offset: 0x1bc
	// Line 448, Address: 0x210c40, Func Offset: 0x1d0
	// Line 449, Address: 0x210c48, Func Offset: 0x1d8
	// Line 450, Address: 0x210c50, Func Offset: 0x1e0
	// Line 451, Address: 0x210c58, Func Offset: 0x1e8
	// Line 452, Address: 0x210c60, Func Offset: 0x1f0
	// Line 453, Address: 0x210c68, Func Offset: 0x1f8
	// Line 458, Address: 0x210c70, Func Offset: 0x200
	// Line 461, Address: 0x210c74, Func Offset: 0x204
	// Line 462, Address: 0x210c80, Func Offset: 0x210
	// Line 463, Address: 0x210c88, Func Offset: 0x218
	// Line 464, Address: 0x210c90, Func Offset: 0x220
	// Line 465, Address: 0x210c98, Func Offset: 0x228
	// Line 470, Address: 0x210cb0, Func Offset: 0x240
	// Line 473, Address: 0x210cc0, Func Offset: 0x250
	// Line 474, Address: 0x210cc8, Func Offset: 0x258
	// Line 475, Address: 0x210ce4, Func Offset: 0x274
	// Line 474, Address: 0x210ce8, Func Offset: 0x278
	// Line 475, Address: 0x210cec, Func Offset: 0x27c
	// Line 476, Address: 0x210cf0, Func Offset: 0x280
	// Line 477, Address: 0x210cf4, Func Offset: 0x284
	// Line 481, Address: 0x210cfc, Func Offset: 0x28c
	// Line 482, Address: 0x210d10, Func Offset: 0x2a0
	// Line 499, Address: 0x210d28, Func Offset: 0x2b8
	// Line 500, Address: 0x210d40, Func Offset: 0x2d0
	// Func End, Address: 0x210d54, Func Offset: 0x2e4
}

// 
// Start address: 0x210d60
static void bhEne29_Move(BH_PWORK* ewP)
{
	//en29_freework* fwP;
	en29_freework* fwP;
	// Line 510, Address: 0x210d60, Func Offset: 0
	// Line 511, Address: 0x210d70, Func Offset: 0x10
	// Line 521, Address: 0x210d78, Func Offset: 0x18
	// Line 519, Address: 0x210d80, Func Offset: 0x20
	// Line 521, Address: 0x210d90, Func Offset: 0x30
	// Line 527, Address: 0x210da0, Func Offset: 0x40
	// Line 528, Address: 0x210db0, Func Offset: 0x50
	// Line 534, Address: 0x210db8, Func Offset: 0x58
	// Line 535, Address: 0x210dbc, Func Offset: 0x5c
	// Line 538, Address: 0x210dc0, Func Offset: 0x60
	// Line 539, Address: 0x210df0, Func Offset: 0x90
	// Line 545, Address: 0x210e20, Func Offset: 0xc0
	// Line 548, Address: 0x210e2c, Func Offset: 0xcc
	// Line 551, Address: 0x210e4c, Func Offset: 0xec
	// Line 554, Address: 0x210e68, Func Offset: 0x108
	// Line 557, Address: 0x210e74, Func Offset: 0x114
	// Line 560, Address: 0x210e94, Func Offset: 0x134
	// Line 562, Address: 0x210ea4, Func Offset: 0x144
	// Func End, Address: 0x210eb8, Func Offset: 0x158
}

// 100% matching!
static void bhEne29_Die()
{
	
}

// 100% matching!
static void bhEne29_Damage()
{

}

// 100% matching!
static void bhEne29_Event(BH_PWORK* ewP)
{
	en29_freework* fwP;

	fwP = (en29_freework*)ewP->exp0;

	fwP->hit_tabP->flg &= ~0x1;

    fwP->sdw_owkP->stflg |= 0x1000000;

    bhEne_Event(ewP);

    bhSetMotion(ewP, ewP->mtn_add, ewP->mtn_md, ewP->mtn_tp);

    bhEne29_CalcEnemy(ewP, (en29_freework*)ewP->exp0);
}

// 
// Start address: 0x210f50
static void bhEne29_Br00(BH_PWORK* ewP)
{
	int lop;
	int rte;
	//_enum_4 act;
	//_enum_1* br1P;
	//_enum_0* br0P;
	int sts;
	int typ;
	int* stsP;
	eaw_typ* eawP;
	en29_freework* fwP;
	// Line 612, Address: 0x210f50, Func Offset: 0
	// Line 624, Address: 0x210f6c, Func Offset: 0x1c
	// Line 613, Address: 0x210f74, Func Offset: 0x24
	// Line 620, Address: 0x210f78, Func Offset: 0x28
	// Line 624, Address: 0x210f84, Func Offset: 0x34
	// Line 614, Address: 0x210f90, Func Offset: 0x40
	// Line 620, Address: 0x210f94, Func Offset: 0x44
	// Line 616, Address: 0x210f98, Func Offset: 0x48
	// Line 624, Address: 0x210f9c, Func Offset: 0x4c
	// Line 625, Address: 0x210fa8, Func Offset: 0x58
	// Line 628, Address: 0x210fac, Func Offset: 0x5c
	// Line 625, Address: 0x210fb0, Func Offset: 0x60
	// Line 628, Address: 0x210fb4, Func Offset: 0x64
	// Line 632, Address: 0x210fbc, Func Offset: 0x6c
	// Line 636, Address: 0x210fc4, Func Offset: 0x74
	// Line 633, Address: 0x210fc8, Func Offset: 0x78
	// Line 634, Address: 0x210fcc, Func Offset: 0x7c
	// Line 635, Address: 0x210fd4, Func Offset: 0x84
	// Line 637, Address: 0x210fd8, Func Offset: 0x88
	// Line 641, Address: 0x210fe0, Func Offset: 0x90
	// Line 651, Address: 0x210fec, Func Offset: 0x9c
	// Line 652, Address: 0x210ffc, Func Offset: 0xac
	// Line 653, Address: 0x211008, Func Offset: 0xb8
	// Line 654, Address: 0x21101c, Func Offset: 0xcc
	// Line 656, Address: 0x211020, Func Offset: 0xd0
	// Line 657, Address: 0x211028, Func Offset: 0xd8
	// Line 658, Address: 0x211034, Func Offset: 0xe4
	// Line 659, Address: 0x211038, Func Offset: 0xe8
	// Line 668, Address: 0x21103c, Func Offset: 0xec
	// Line 670, Address: 0x211040, Func Offset: 0xf0
	// Line 673, Address: 0x211078, Func Offset: 0x128
	// Line 674, Address: 0x211084, Func Offset: 0x134
	// Line 676, Address: 0x21108c, Func Offset: 0x13c
	// Line 677, Address: 0x211094, Func Offset: 0x144
	// Line 678, Address: 0x2110b4, Func Offset: 0x164
	// Line 679, Address: 0x2110b8, Func Offset: 0x168
	// Line 681, Address: 0x2110bc, Func Offset: 0x16c
	// Line 682, Address: 0x2110c4, Func Offset: 0x174
	// Line 684, Address: 0x2110c8, Func Offset: 0x178
	// Line 686, Address: 0x2110dc, Func Offset: 0x18c
	// Line 689, Address: 0x2110e4, Func Offset: 0x194
	// Line 693, Address: 0x211108, Func Offset: 0x1b8
	// Line 694, Address: 0x21110c, Func Offset: 0x1bc
	// Line 697, Address: 0x211114, Func Offset: 0x1c4
	// Line 699, Address: 0x21111c, Func Offset: 0x1cc
	// Line 701, Address: 0x211120, Func Offset: 0x1d0
	// Line 704, Address: 0x211128, Func Offset: 0x1d8
	// Line 706, Address: 0x211138, Func Offset: 0x1e8
	// Line 711, Address: 0x21113c, Func Offset: 0x1ec
	// Line 714, Address: 0x211144, Func Offset: 0x1f4
	// Line 717, Address: 0x21116c, Func Offset: 0x21c
	// Line 719, Address: 0x211178, Func Offset: 0x228
	// Line 720, Address: 0x21117c, Func Offset: 0x22c
	// Line 721, Address: 0x211184, Func Offset: 0x234
	// Line 722, Address: 0x2111a0, Func Offset: 0x250
	// Line 724, Address: 0x2111a4, Func Offset: 0x254
	// Line 730, Address: 0x2111ac, Func Offset: 0x25c
	// Line 732, Address: 0x2111bc, Func Offset: 0x26c
	// Line 738, Address: 0x2111c4, Func Offset: 0x274
	// Line 744, Address: 0x2111d0, Func Offset: 0x280
	// Line 747, Address: 0x2111d8, Func Offset: 0x288
	// Line 750, Address: 0x211204, Func Offset: 0x2b4
	// Line 752, Address: 0x211208, Func Offset: 0x2b8
	// Line 755, Address: 0x211210, Func Offset: 0x2c0
	// Line 756, Address: 0x211220, Func Offset: 0x2d0
	// Line 757, Address: 0x21122c, Func Offset: 0x2dc
	// Line 758, Address: 0x211230, Func Offset: 0x2e0
	// Line 767, Address: 0x211234, Func Offset: 0x2e4
	// Line 768, Address: 0x211238, Func Offset: 0x2e8
	// Line 771, Address: 0x211244, Func Offset: 0x2f4
	// Line 772, Address: 0x211250, Func Offset: 0x300
	// Line 773, Address: 0x211264, Func Offset: 0x314
	// Line 775, Address: 0x211268, Func Offset: 0x318
	// Line 780, Address: 0x211274, Func Offset: 0x324
	// Func End, Address: 0x211294, Func Offset: 0x344
}

// 
// Start address: 0x2112a0
static void bhEne29_Br01(BH_PWORK* ewP)
{
	int lop;
	int rte;
	//_enum_4 act;
	//_enum_1* br1P;
	//_enum_0* br0P;
	int sts;
	int typ;
	int* stsP;
	eaw_typ* eawP;
	en29_freework* fwP;
	// Line 790, Address: 0x2112a0, Func Offset: 0
	// Line 791, Address: 0x2112bc, Func Offset: 0x1c
	// Line 798, Address: 0x2112c0, Func Offset: 0x20
	// Line 792, Address: 0x2112cc, Func Offset: 0x2c
	// Line 798, Address: 0x2112d0, Func Offset: 0x30
	// Line 802, Address: 0x2112e4, Func Offset: 0x44
	// Line 806, Address: 0x2112ec, Func Offset: 0x4c
	// Line 802, Address: 0x2112f4, Func Offset: 0x54
	// Line 803, Address: 0x21130c, Func Offset: 0x6c
	// Line 806, Address: 0x211314, Func Offset: 0x74
	// Line 810, Address: 0x21131c, Func Offset: 0x7c
	// Line 814, Address: 0x211324, Func Offset: 0x84
	// Line 815, Address: 0x211328, Func Offset: 0x88
	// Line 811, Address: 0x211334, Func Offset: 0x94
	// Line 812, Address: 0x211338, Func Offset: 0x98
	// Line 813, Address: 0x21133c, Func Offset: 0x9c
	// Line 815, Address: 0x211340, Func Offset: 0xa0
	// Line 818, Address: 0x21134c, Func Offset: 0xac
	// Line 828, Address: 0x211358, Func Offset: 0xb8
	// Line 829, Address: 0x211368, Func Offset: 0xc8
	// Line 830, Address: 0x211374, Func Offset: 0xd4
	// Line 831, Address: 0x211388, Func Offset: 0xe8
	// Line 833, Address: 0x211390, Func Offset: 0xf0
	// Line 834, Address: 0x211398, Func Offset: 0xf8
	// Line 835, Address: 0x2113a4, Func Offset: 0x104
	// Line 836, Address: 0x2113a8, Func Offset: 0x108
	// Line 845, Address: 0x2113ac, Func Offset: 0x10c
	// Line 847, Address: 0x2113b0, Func Offset: 0x110
	// Line 850, Address: 0x2113f4, Func Offset: 0x154
	// Line 851, Address: 0x211400, Func Offset: 0x160
	// Line 853, Address: 0x211408, Func Offset: 0x168
	// Line 854, Address: 0x211410, Func Offset: 0x170
	// Line 855, Address: 0x211430, Func Offset: 0x190
	// Line 856, Address: 0x211434, Func Offset: 0x194
	// Line 858, Address: 0x211438, Func Offset: 0x198
	// Line 859, Address: 0x211440, Func Offset: 0x1a0
	// Line 861, Address: 0x211448, Func Offset: 0x1a8
	// Line 863, Address: 0x211460, Func Offset: 0x1c0
	// Line 866, Address: 0x211468, Func Offset: 0x1c8
	// Line 869, Address: 0x21148c, Func Offset: 0x1ec
	// Line 871, Address: 0x211490, Func Offset: 0x1f0
	// Line 874, Address: 0x211498, Func Offset: 0x1f8
	// Line 876, Address: 0x2114a0, Func Offset: 0x200
	// Line 875, Address: 0x2114a4, Func Offset: 0x204
	// Line 878, Address: 0x2114a8, Func Offset: 0x208
	// Line 881, Address: 0x2114b0, Func Offset: 0x210
	// Line 883, Address: 0x2114c0, Func Offset: 0x220
	// Line 882, Address: 0x2114c4, Func Offset: 0x224
	// Line 887, Address: 0x2114c8, Func Offset: 0x228
	// Line 890, Address: 0x2114d0, Func Offset: 0x230
	// Line 893, Address: 0x2114f8, Func Offset: 0x258
	// Line 894, Address: 0x211504, Func Offset: 0x264
	// Line 896, Address: 0x211508, Func Offset: 0x268
	// Line 897, Address: 0x211510, Func Offset: 0x270
	// Line 898, Address: 0x211530, Func Offset: 0x290
	// Line 900, Address: 0x211534, Func Offset: 0x294
	// Line 906, Address: 0x21153c, Func Offset: 0x29c
	// Line 908, Address: 0x21154c, Func Offset: 0x2ac
	// Line 914, Address: 0x211554, Func Offset: 0x2b4
	// Line 920, Address: 0x211560, Func Offset: 0x2c0
	// Line 923, Address: 0x211568, Func Offset: 0x2c8
	// Line 926, Address: 0x211594, Func Offset: 0x2f4
	// Line 928, Address: 0x211598, Func Offset: 0x2f8
	// Line 931, Address: 0x2115a0, Func Offset: 0x300
	// Line 932, Address: 0x2115b0, Func Offset: 0x310
	// Line 933, Address: 0x2115bc, Func Offset: 0x31c
	// Line 942, Address: 0x2115c0, Func Offset: 0x320
	// Line 945, Address: 0x2115c8, Func Offset: 0x328
	// Line 948, Address: 0x2115f4, Func Offset: 0x354
	// Line 950, Address: 0x2115f8, Func Offset: 0x358
	// Line 954, Address: 0x211600, Func Offset: 0x360
	// Line 955, Address: 0x211618, Func Offset: 0x378
	// Line 956, Address: 0x21161c, Func Offset: 0x37c
	// Line 957, Address: 0x211628, Func Offset: 0x388
	// Line 958, Address: 0x211630, Func Offset: 0x390
	// Line 959, Address: 0x211638, Func Offset: 0x398
	// Line 962, Address: 0x211640, Func Offset: 0x3a0
	// Line 966, Address: 0x211654, Func Offset: 0x3b4
	// Line 968, Address: 0x211658, Func Offset: 0x3b8
	// Line 971, Address: 0x211664, Func Offset: 0x3c4
	// Line 972, Address: 0x211670, Func Offset: 0x3d0
	// Line 973, Address: 0x211684, Func Offset: 0x3e4
	// Line 974, Address: 0x211688, Func Offset: 0x3e8
	// Line 978, Address: 0x211694, Func Offset: 0x3f4
	// Func End, Address: 0x2116b4, Func Offset: 0x414
}

// 100% matching!
static void bhEne29_Mv00()
{

}

// 
// Start address: 0x2116d0
static void bhEne29_Mv01(BH_PWORK* ewP, en29_freework* fwP, int count)
{
	// Line 1001, Address: 0x2116d0, Func Offset: 0
	// Line 1002, Address: 0x2116e4, Func Offset: 0x14
	// Line 1003, Address: 0x2116ec, Func Offset: 0x1c
	// Line 1006, Address: 0x21172c, Func Offset: 0x5c
	// Line 1007, Address: 0x211744, Func Offset: 0x74
	// Line 1008, Address: 0x211758, Func Offset: 0x88
	// Line 1011, Address: 0x211764, Func Offset: 0x94
	// Func End, Address: 0x211778, Func Offset: 0xa8
}

// 
// Start address: 0x211780
static void bhEne29_Mv02(BH_PWORK* ewP, en29_freework* fwP, int count)
{
	// Line 1023, Address: 0x211780, Func Offset: 0
	// Line 1024, Address: 0x211784, Func Offset: 0x4
	// Line 1025, Address: 0x21178c, Func Offset: 0xc
	// Line 1027, Address: 0x2117cc, Func Offset: 0x4c
	// Func End, Address: 0x2117d8, Func Offset: 0x58
}

// 
// Start address: 0x2117e0
static void bhEne29_Mv03(BH_PWORK* ewP, en29_freework* fwP, int count)
{
	// Line 1039, Address: 0x2117e0, Func Offset: 0
	// Line 1040, Address: 0x2117f4, Func Offset: 0x14
	// Line 1041, Address: 0x2117fc, Func Offset: 0x1c
	// Line 1044, Address: 0x21183c, Func Offset: 0x5c
	// Line 1045, Address: 0x211854, Func Offset: 0x74
	// Line 1046, Address: 0x211868, Func Offset: 0x88
	// Line 1048, Address: 0x211874, Func Offset: 0x94
	// Func End, Address: 0x211888, Func Offset: 0xa8
}

// 
// Start address: 0x211890
static void bhEne29_Mv04(BH_PWORK* ewP, en29_freework* fwP)
{
	// Line 1060, Address: 0x211890, Func Offset: 0
	// Line 1063, Address: 0x2118a0, Func Offset: 0x10
	// Line 1064, Address: 0x2118b8, Func Offset: 0x28
	// Line 1065, Address: 0x2118e0, Func Offset: 0x50
	// Line 1070, Address: 0x211920, Func Offset: 0x90
	// Func End, Address: 0x211934, Func Offset: 0xa4
}

// 
// Start address: 0x211940
static void bhEne29_Mv20(BH_PWORK* ewP, en29_freework* fwP)
{
	// Line 1082, Address: 0x211940, Func Offset: 0
	// Line 1083, Address: 0x21194c, Func Offset: 0xc
	// Line 1084, Address: 0x211960, Func Offset: 0x20
	// Line 1085, Address: 0x211974, Func Offset: 0x34
	// Line 1087, Address: 0x211980, Func Offset: 0x40
	// Func End, Address: 0x211990, Func Offset: 0x50
}

// 100% matching!
static void bhEne29_ActionInit(eaw_typ* eawP, EA_WORK* act_tblP, int tbl_num)
{
	eawP->act_tblP = act_tblP;

	eawP->tbl_num = tbl_num;

	eawP->act_now = 30;
}

// 
// Start address: 0x2119b0
static EA_WORK* bhEne29_ActionSearch(eaw_typ* eawP, int act_nw, int act_no)
{
	int val;
	int middle;
	int low;
	int high;
	int key;
	EA_WORK* eaP;
	// Line 1118, Address: 0x2119b0, Func Offset: 0
	// Line 1117, Address: 0x2119c0, Func Offset: 0x10
	// Line 1119, Address: 0x2119c4, Func Offset: 0x14
	// Line 1122, Address: 0x2119c8, Func Offset: 0x18
	// Line 1124, Address: 0x2119d4, Func Offset: 0x24
	// Line 1125, Address: 0x2119dc, Func Offset: 0x2c
	// Line 1127, Address: 0x2119f0, Func Offset: 0x40
	// Line 1128, Address: 0x2119f8, Func Offset: 0x48
	// Line 1130, Address: 0x211a08, Func Offset: 0x58
	// Line 1135, Address: 0x211a14, Func Offset: 0x64
	// Line 1138, Address: 0x211a20, Func Offset: 0x70
	// Line 1139, Address: 0x211a24, Func Offset: 0x74
	// Func End, Address: 0x211a2c, Func Offset: 0x7c
}

// 100% matching!
static int bhEne29_ActionChange(BH_PWORK* ewP, eaw_typ* eawP, int act_dst)
{
	EA_WORK* eaP;
    
    if (((eaP = bhEne29_ActionSearch(eawP, eawP->act_now, act_dst)) == NULL) && (eawP->act_now != act_dst)) 
    {
        eaP = bhEne29_ActionSearch(eawP, -1, act_dst);
    }
    
    if (eaP != NULL) 
    {
        njMemCopy4(&eawP->b_act_flg, &eawP->act_flg, 7);
        
        eawP->b_mtn_md = ewP->mtn_md;
        
        eawP->act_flg = 0;
        
        eawP->prgP = eaP->prgP;
        
        eawP->act_cnt = 0;
        eawP->act_frm = eaP->frm_no;
        
        ewP->mtn_no = eaP->mtn_no;
        ewP->frm_no = eaP->frm_no * 65536;
        
        ewP->hokan_rate  = eaP->hkn_lvl * (65536.0 / 255.0);
        ewP->hokan_count = eaP->hkn_cnt;

        if ((eaP->flag & 0x20000)) 
        {
            ewP->mtn_add = 0;
        } 
        else if ((eaP->flag & 0x40000)) 
        {
            ewP->mtn_add = -65536;
        } 
        else 
        {
            ewP->mtn_add =  65536;
        }

        ewP->mtn_md = (unsigned short)eaP->flag;
        
        eawP->chg_rte = eaP->chg_rte * 65536.0f;
        
        eawP->act_now = act_dst;
        
        return 1;
    }
    
    return 0;
}

// 100% matching!
static int bhEne29_ActionMain(BH_PWORK* ewP, eaw_typ* eawP)
{
	short* s16P;
    
    if (eawP->prgP != NULL) 
    {
        eawP->prgP(ewP, ewP->exp0, eawP->act_cnt++);
    }
    
    s16P = (short*)&eawP->act_frm;
    
    s16P[1] += bhSetMotion(ewP, ewP->mtn_add, ewP->mtn_md, ewP->mtn_tp);
    s16P[0] =  ewP->frm_no / 65536;
    
    eawP->mtn_rte = ewP->frm_no / (ewP->mnwP[ewP->mtn_no].frm_num - 1);
    
    return 0;
}

// 
// Start address: 0x211c70
static void bhEne29_TargetAnalyze(BH_PWORK* ewP, en29_freework* fwP)
{
	float dst;
	//NJS_POINT3 dlt;
	//int dlt;
	int ad;
	NJS_POINT3 dlt;
	NJS_POINT3* vP;
	int* stsP;
	// Line 1242, Address: 0x211c70, Func Offset: 0
	// Line 1246, Address: 0x211c88, Func Offset: 0x18
	// Line 1243, Address: 0x211c90, Func Offset: 0x20
	// Line 1246, Address: 0x211c94, Func Offset: 0x24
	// Line 1247, Address: 0x211ca0, Func Offset: 0x30
	// Line 1253, Address: 0x211cd0, Func Offset: 0x60
	// Line 1254, Address: 0x211cec, Func Offset: 0x7c
	// Line 1255, Address: 0x211d10, Func Offset: 0xa0
	// Line 1262, Address: 0x211d34, Func Offset: 0xc4
	// Line 1263, Address: 0x211d40, Func Offset: 0xd0
	// Line 1262, Address: 0x211d44, Func Offset: 0xd4
	// Line 1263, Address: 0x211d6c, Func Offset: 0xfc
	// Line 1266, Address: 0x211d74, Func Offset: 0x104
	// Line 1268, Address: 0x211d98, Func Offset: 0x128
	// Line 1266, Address: 0x211da0, Func Offset: 0x130
	// Line 1268, Address: 0x211da4, Func Offset: 0x134
	// Line 1266, Address: 0x211dac, Func Offset: 0x13c
	// Line 1269, Address: 0x211db4, Func Offset: 0x144
	// Line 1270, Address: 0x211dcc, Func Offset: 0x15c
	// Line 1278, Address: 0x211dd8, Func Offset: 0x168
	// Line 1280, Address: 0x211df0, Func Offset: 0x180
	// Line 1281, Address: 0x211dfc, Func Offset: 0x18c
	// Line 1282, Address: 0x211e04, Func Offset: 0x194
	// Line 1284, Address: 0x211e0c, Func Offset: 0x19c
	// Line 1292, Address: 0x211e10, Func Offset: 0x1a0
	// Line 1294, Address: 0x211e18, Func Offset: 0x1a8
	// Line 1295, Address: 0x211e1c, Func Offset: 0x1ac
	// Line 1292, Address: 0x211e20, Func Offset: 0x1b0
	// Line 1294, Address: 0x211e28, Func Offset: 0x1b8
	// Line 1295, Address: 0x211e58, Func Offset: 0x1e8
	// Line 1296, Address: 0x211e60, Func Offset: 0x1f0
	// Line 1297, Address: 0x211e6c, Func Offset: 0x1fc
	// Line 1296, Address: 0x211e70, Func Offset: 0x200
	// Line 1297, Address: 0x211e78, Func Offset: 0x208
	// Line 1299, Address: 0x211e9c, Func Offset: 0x22c
	// Line 1300, Address: 0x211ea8, Func Offset: 0x238
	// Line 1299, Address: 0x211eac, Func Offset: 0x23c
	// Line 1300, Address: 0x211ed4, Func Offset: 0x264
	// Line 1302, Address: 0x211edc, Func Offset: 0x26c
	// Line 1301, Address: 0x211ee0, Func Offset: 0x270
	// Line 1302, Address: 0x211ee8, Func Offset: 0x278
	// Line 1301, Address: 0x211eec, Func Offset: 0x27c
	// Line 1302, Address: 0x211ef4, Func Offset: 0x284
	// Line 1307, Address: 0x211f10, Func Offset: 0x2a0
	// Func End, Address: 0x211f2c, Func Offset: 0x2bc
}

// 
// Start address: 0x211f30
static void bhEne29_CalcEnemy(BH_PWORK* ewP, en29_freework* fwP)
{
	ATR_WORK* htP;
	// Line 1318, Address: 0x211f30, Func Offset: 0
	// Line 1322, Address: 0x211f44, Func Offset: 0x14
	// Line 1325, Address: 0x211f4c, Func Offset: 0x1c
	// Line 1331, Address: 0x211f58, Func Offset: 0x28
	// Line 1329, Address: 0x211f60, Func Offset: 0x30
	// Line 1331, Address: 0x211f64, Func Offset: 0x34
	// Line 1332, Address: 0x211f80, Func Offset: 0x50
	// Line 1338, Address: 0x211fa4, Func Offset: 0x74
	// Func End, Address: 0x211fb8, Func Offset: 0x88
}

// 
// Start address: 0x211fc0
static void bhEne29_DmgCheck(BH_PWORK* ewP, en29_freework* fwP)
{
	DD_WRK* ddP;
	int dmg_obj;
	static const DD_WRK DmgDat[21];
	// Line 1349, Address: 0x211fc0, Func Offset: 0
	// Line 1377, Address: 0x211fd8, Func Offset: 0x18
	// Line 1379, Address: 0x211fe0, Func Offset: 0x20
	// Line 1383, Address: 0x211ff0, Func Offset: 0x30
	// Line 1386, Address: 0x211ffc, Func Offset: 0x3c
	// Line 1393, Address: 0x212014, Func Offset: 0x54
	// Line 1387, Address: 0x21201c, Func Offset: 0x5c
	// Line 1393, Address: 0x212020, Func Offset: 0x60
	// Line 1411, Address: 0x212028, Func Offset: 0x68
	// Line 1413, Address: 0x21202c, Func Offset: 0x6c
	// Line 1415, Address: 0x212038, Func Offset: 0x78
	// Line 1419, Address: 0x212044, Func Offset: 0x84
	// Line 1415, Address: 0x212048, Func Offset: 0x88
	// Line 1419, Address: 0x21204c, Func Offset: 0x8c
	// Line 1420, Address: 0x212058, Func Offset: 0x98
	// Line 1421, Address: 0x212064, Func Offset: 0xa4
	// Line 1423, Address: 0x212070, Func Offset: 0xb0
	// Line 1424, Address: 0x21207c, Func Offset: 0xbc
	// Line 1429, Address: 0x212084, Func Offset: 0xc4
	// Line 1430, Address: 0x2120a0, Func Offset: 0xe0
	// Line 1433, Address: 0x2120ac, Func Offset: 0xec
	// Line 1438, Address: 0x2120b8, Func Offset: 0xf8
	// Line 1439, Address: 0x2120c8, Func Offset: 0x108
	// Line 1440, Address: 0x2120d0, Func Offset: 0x110
	// Line 1441, Address: 0x2120d4, Func Offset: 0x114
	// Line 1442, Address: 0x2120dc, Func Offset: 0x11c
	// Line 1443, Address: 0x2120e8, Func Offset: 0x128
	// Line 1444, Address: 0x2120f0, Func Offset: 0x130
	// Line 1448, Address: 0x2120f8, Func Offset: 0x138
	// Line 1449, Address: 0x212114, Func Offset: 0x154
	// Line 1451, Address: 0x212118, Func Offset: 0x158
	// Line 1452, Address: 0x212120, Func Offset: 0x160
	// Line 1455, Address: 0x212124, Func Offset: 0x164
	// Line 1456, Address: 0x212130, Func Offset: 0x170
	// Line 1458, Address: 0x212138, Func Offset: 0x178
	// Line 1463, Address: 0x212154, Func Offset: 0x194
	// Line 1466, Address: 0x212168, Func Offset: 0x1a8
	// Line 1467, Address: 0x21217c, Func Offset: 0x1bc
	// Func End, Address: 0x212194, Func Offset: 0x1d4
}

// 
// Start address: 0x2121a0
static int bhEne29_AttackHitCheck(BH_PWORK* ewP, en29_freework* fwP)
{
	int ang;
	int i;
	static NJS_SPHERE spr;
	static const e29_cll E29Cll[6];
	// Line 1478, Address: 0x2121a0, Func Offset: 0
	// Line 1489, Address: 0x2121c8, Func Offset: 0x28
	// Line 1494, Address: 0x2121cc, Func Offset: 0x2c
	// Line 1502, Address: 0x2121dc, Func Offset: 0x3c
	// Line 1494, Address: 0x2121e0, Func Offset: 0x40
	// Line 1502, Address: 0x21220c, Func Offset: 0x6c
	// Line 1495, Address: 0x212210, Func Offset: 0x70
	// Line 1502, Address: 0x21221c, Func Offset: 0x7c
	// Line 1507, Address: 0x212244, Func Offset: 0xa4
	// Line 1508, Address: 0x21225c, Func Offset: 0xbc
	// Line 1510, Address: 0x212260, Func Offset: 0xc0
	// Line 1512, Address: 0x212274, Func Offset: 0xd4
	// Line 1510, Address: 0x212278, Func Offset: 0xd8
	// Line 1512, Address: 0x212280, Func Offset: 0xe0
	// Line 1515, Address: 0x212294, Func Offset: 0xf4
	// Line 1512, Address: 0x212298, Func Offset: 0xf8
	// Line 1515, Address: 0x2122a0, Func Offset: 0x100
	// Line 1518, Address: 0x2122a8, Func Offset: 0x108
	// Line 1520, Address: 0x2122b8, Func Offset: 0x118
	// Line 1522, Address: 0x2122bc, Func Offset: 0x11c
	// Func End, Address: 0x2122d8, Func Offset: 0x138
}

// 
// Start address: 0x2122e0
static int bhEne29_PlySetDamage(BH_PWORK* plP, en29_freework* fwP, int dmg_mde)
{
	int dir_mde;
	static const int PlyDmgTbl[4] = { 5, 5, 5, 5 };
	// Line 1533, Address: 0x2122e0, Func Offset: 0
	// Line 1543, Address: 0x2122f0, Func Offset: 0x10
	// Line 1533, Address: 0x2122f4, Func Offset: 0x14
	// Line 1543, Address: 0x2122fc, Func Offset: 0x1c
	// Line 1545, Address: 0x212308, Func Offset: 0x28
	// Line 1549, Address: 0x212318, Func Offset: 0x38
	// Line 1551, Address: 0x212338, Func Offset: 0x58
	// Line 1552, Address: 0x21234c, Func Offset: 0x6c
	// Line 1553, Address: 0x212358, Func Offset: 0x78
	// Line 1554, Address: 0x212360, Func Offset: 0x80
	// Line 1557, Address: 0x212370, Func Offset: 0x90
	// Line 1558, Address: 0x21237c, Func Offset: 0x9c
	// Line 1564, Address: 0x212384, Func Offset: 0xa4
	// Line 1565, Address: 0x212390, Func Offset: 0xb0
	// Line 1566, Address: 0x212398, Func Offset: 0xb8
	// Line 1564, Address: 0x21239c, Func Offset: 0xbc
	// Line 1565, Address: 0x2123a4, Func Offset: 0xc4
	// Line 1572, Address: 0x2123a8, Func Offset: 0xc8
	// Line 1565, Address: 0x2123ac, Func Offset: 0xcc
	// Line 1566, Address: 0x2123b4, Func Offset: 0xd4
	// Line 1567, Address: 0x2123b8, Func Offset: 0xd8
	// Line 1568, Address: 0x2123bc, Func Offset: 0xdc
	// Line 1569, Address: 0x2123c0, Func Offset: 0xe0
	// Line 1572, Address: 0x2123c4, Func Offset: 0xe4
	// Line 1574, Address: 0x2123c8, Func Offset: 0xe8
	// Line 1577, Address: 0x2123cc, Func Offset: 0xec
	// Line 1578, Address: 0x2123d4, Func Offset: 0xf4
	// Line 1581, Address: 0x2123dc, Func Offset: 0xfc
	// Line 1582, Address: 0x2123e8, Func Offset: 0x108
	// Line 1583, Address: 0x2123f0, Func Offset: 0x110
	// Line 1581, Address: 0x2123f4, Func Offset: 0x114
	// Line 1582, Address: 0x2123fc, Func Offset: 0x11c
	// Line 1592, Address: 0x212400, Func Offset: 0x120
	// Line 1582, Address: 0x212404, Func Offset: 0x124
	// Line 1583, Address: 0x21240c, Func Offset: 0x12c
	// Line 1584, Address: 0x212410, Func Offset: 0x130
	// Line 1585, Address: 0x212414, Func Offset: 0x134
	// Line 1586, Address: 0x212418, Func Offset: 0x138
	// Line 1589, Address: 0x21241c, Func Offset: 0x13c
	// Line 1592, Address: 0x212420, Func Offset: 0x140
	// Line 1595, Address: 0x212424, Func Offset: 0x144
	// Line 1598, Address: 0x212428, Func Offset: 0x148
	// Line 1603, Address: 0x212430, Func Offset: 0x150
	// Line 1604, Address: 0x212434, Func Offset: 0x154
	// Func End, Address: 0x21244c, Func Offset: 0x16c
}

// 
// Start address: 0x212450
static void bhEne29_PlyMoveMain(BH_PWORK* plP, en29_freework* fwP)
{
	int lop;
	int act;
	int* br1P;
	int* br0P;
	int* stsP;
	// Line 1615, Address: 0x212450, Func Offset: 0
	// Line 1618, Address: 0x212474, Func Offset: 0x24
	// Line 1616, Address: 0x21247c, Func Offset: 0x2c
	// Line 1618, Address: 0x212480, Func Offset: 0x30
	// Line 1620, Address: 0x21248c, Func Offset: 0x3c
	// Line 1621, Address: 0x212490, Func Offset: 0x40
	// Line 1622, Address: 0x212494, Func Offset: 0x44
	// Line 1623, Address: 0x212498, Func Offset: 0x48
	// Line 1626, Address: 0x21249c, Func Offset: 0x4c
	// Line 1628, Address: 0x2124c8, Func Offset: 0x78
	// Line 1637, Address: 0x2124d4, Func Offset: 0x84
	// Line 1646, Address: 0x2124e0, Func Offset: 0x90
	// Line 1651, Address: 0x2124e8, Func Offset: 0x98
	// Line 1646, Address: 0x2124f8, Func Offset: 0xa8
	// Line 1647, Address: 0x212500, Func Offset: 0xb0
	// Line 1651, Address: 0x212510, Func Offset: 0xc0
	// Line 1652, Address: 0x21251c, Func Offset: 0xcc
	// Line 1653, Address: 0x212528, Func Offset: 0xd8
	// Line 1656, Address: 0x212568, Func Offset: 0x118
	// Line 1658, Address: 0x212574, Func Offset: 0x124
	// Line 1659, Address: 0x212590, Func Offset: 0x140
	// Line 1661, Address: 0x21259c, Func Offset: 0x14c
	// Func End, Address: 0x2125c4, Func Offset: 0x174
}

// 100% matching!
static void bhEne29_PlyActionInit(BH_PWORK* ewP, PAW_WORK* pawP, ACT_TBL_WORK* act_tblP, int tbl_num)
{
	pawP->act_tblP = act_tblP;
    
    pawP->tbl_num = tbl_num;
    
    pawP->p_act_now = -1;
    
    pawP->ene_mnwP = ewP->mnwP;
    pawP->p_paramP = ewP->exp0;
}

// 100% matching!
static void bhEne29_PlyActionMain(BH_PWORK* plP, PAW_WORK* pawP)
{
	if ((pawP->p_act_flg & 0x7) == 2)
    {
        pawP->p_act_flg &= ~0x2;
        
        bhEne29_PlyActionChange(plP, pawP, pawP->p_act_jmp);
    }
    
    pawP->p_mtn_rte = plP->frm_no / (pawP->p_frm_num - 1);
    
    if (pawP->p_prgP != NULL) 
    {
        pawP->p_prgP(plP, pawP->p_paramP);
    }
    
    pawP->p_act_frm = plP->frm_no / 65536;
    
    if (pawP->p_act_frm == pawP->p_chg_frm) 
    {
        pawP->p_act_flg &= ~0x1;
    }
}

// 100% matching!
static int bhEne29_PlyActionChange(BH_PWORK* plP, PAW_WORK* pawP, int act_no)
{
	ACT_TBL_WORK* paP;
    
    paP = &pawP->act_tblP[act_no];
    
    if ((!(pawP->p_act_flg & 0x7)) && (pawP->p_act_now != act_no))
    {
        pawP->p_prgP = paP->prgP;
        
        pawP->p_act_now = act_no;
        pawP->p_act_flg = 1;
        
        if (act_no >= 0)
        {
            plP->mnwP = pawP->ene_mnwP;
            
            plP->mtn_no = paP->mtn_no;
            plP->frm_no = paP->frm_no * 65536;
            
            plP->hokan_count = paP->hkn_cnt;
            plP->hokan_rate  = paP->hkn_lvl * (65536.0 / 255.0);
            
            plP->mtn_add = 65536;
            plP->mtn_md  = (unsigned short)paP->flag;
                
            pawP->p_frm_num = plP->mnwP[paP->mtn_no].frm_num;
            
            pawP->p_act_frm = paP->frm_no;
            pawP->p_act_jmp = paP->act_jmp;
            
            if (pawP->p_act_jmp != -1)
            {
                pawP->p_act_flg |= 0x2;
            }
            
            if (paP->chg_frm != 0xFF) 
            {
                pawP->p_chg_frm = paP->chg_frm;
            } 
            else 
            {
                pawP->p_chg_frm = pawP->p_frm_num - 1;
            }
        }
        
        return 1;
    }
    
    return 0;
}

// 
// Start address: 0x212820
static void bhEne29_PlyDmg117(BH_PWORK* plP, en29_freework* fwP)
{
	int dlt;
	// Line 1778, Address: 0x212820, Func Offset: 0
	// Line 1780, Address: 0x212834, Func Offset: 0x14
	// Line 1782, Address: 0x21283c, Func Offset: 0x1c
	// Line 1786, Address: 0x212848, Func Offset: 0x28
	// Line 1780, Address: 0x212850, Func Offset: 0x30
	// Line 1781, Address: 0x212858, Func Offset: 0x38
	// Line 1782, Address: 0x212868, Func Offset: 0x48
	// Line 1783, Address: 0x212874, Func Offset: 0x54
	// Line 1786, Address: 0x212880, Func Offset: 0x60
	// Line 1787, Address: 0x212890, Func Offset: 0x70
	// Line 1789, Address: 0x21289c, Func Offset: 0x7c
	// Line 1791, Address: 0x2128c4, Func Offset: 0xa4
	// Line 1794, Address: 0x2128dc, Func Offset: 0xbc
	// Line 1795, Address: 0x2128fc, Func Offset: 0xdc
	// Func End, Address: 0x212914, Func Offset: 0xf4
}

// 100% matching!
static void bhEne29_PlyDmg118(BH_PWORK* plP, en29_freework* fwP)
{
	bhEne29_PlyDmg117(plP, fwP);
}

// 100% matching!
static void bhEne29_PlyDmgRtn(BH_PWORK* plP, en29_freework* fwP)
{
	plP->mnwP = plP->mnwPb;
	
	plP->flg   &= ~0x10004;
	plP->stflg &= ~0x10000; 
	
	plP->mode0 = 1;
	plP->mode1 = 0;
	plP->mode2 = 0;
	plP->mode3 = 0;
	
	fwP->p_status &= ~0x1;
}

// 
// Start address: 0x212990
static void bhEne29_SetDmgEffect(BH_PWORK* ewP, int eff_typ)
{
	float scl;
	//int djnt_no;
	//NJS_POINT3 off;
	//int i;
	NJS_MATRIX* mtxP;
	NJS_POINT3 off;
	int djnt_no;
	//NJS_POINT3 dir;
	int i;
	NJS_VECTOR vct;
	//NJS_POINT3 dir;
	NJS_POINT3 dir;
	int* effP;
	// Line 1890, Address: 0x212990, Func Offset: 0
	// Line 1891, Address: 0x2129a4, Func Offset: 0x14
	// Line 1890, Address: 0x2129a8, Func Offset: 0x18
	// Line 1891, Address: 0x2129b8, Func Offset: 0x28
	// Line 1890, Address: 0x2129c4, Func Offset: 0x34
	// Line 1893, Address: 0x2129c8, Func Offset: 0x38
	// Line 1901, Address: 0x212a0c, Func Offset: 0x7c
	// Line 1905, Address: 0x212a10, Func Offset: 0x80
	// Line 1901, Address: 0x212a18, Func Offset: 0x88
	// Line 1905, Address: 0x212a38, Func Offset: 0xa8
	// Line 1907, Address: 0x212a60, Func Offset: 0xd0
	// Line 1915, Address: 0x212a68, Func Offset: 0xd8
	// Line 1919, Address: 0x212a6c, Func Offset: 0xdc
	// Line 1915, Address: 0x212a74, Func Offset: 0xe4
	// Line 1919, Address: 0x212a94, Func Offset: 0x104
	// Line 1921, Address: 0x212abc, Func Offset: 0x12c
	// Line 1928, Address: 0x212ac4, Func Offset: 0x134
	// Line 1929, Address: 0x212adc, Func Offset: 0x14c
	// Line 1931, Address: 0x212ae4, Func Offset: 0x154
	// Line 1932, Address: 0x212afc, Func Offset: 0x16c
	// Line 1933, Address: 0x212b14, Func Offset: 0x184
	// Line 1934, Address: 0x212b44, Func Offset: 0x1b4
	// Line 1935, Address: 0x212b74, Func Offset: 0x1e4
	// Line 1947, Address: 0x212b78, Func Offset: 0x1e8
	// Line 1934, Address: 0x212b7c, Func Offset: 0x1ec
	// Line 1935, Address: 0x212b88, Func Offset: 0x1f8
	// Line 1936, Address: 0x212bc4, Func Offset: 0x234
	// Line 1937, Address: 0x212bdc, Func Offset: 0x24c
	// Line 1938, Address: 0x212bf0, Func Offset: 0x260
	// Line 1946, Address: 0x212c38, Func Offset: 0x2a8
	// Line 1944, Address: 0x212c3c, Func Offset: 0x2ac
	// Line 1946, Address: 0x212c40, Func Offset: 0x2b0
	// Line 1947, Address: 0x212c5c, Func Offset: 0x2cc
	// Line 1950, Address: 0x212c64, Func Offset: 0x2d4
	// Line 1953, Address: 0x212c70, Func Offset: 0x2e0
	// Line 1954, Address: 0x212c7c, Func Offset: 0x2ec
	// Line 1955, Address: 0x212cbc, Func Offset: 0x32c
	// Line 1956, Address: 0x212cfc, Func Offset: 0x36c
	// Line 1957, Address: 0x212d14, Func Offset: 0x384
	// Line 1956, Address: 0x212d1c, Func Offset: 0x38c
	// Line 1957, Address: 0x212d20, Func Offset: 0x390
	// Line 1956, Address: 0x212d24, Func Offset: 0x394
	// Line 1957, Address: 0x212d34, Func Offset: 0x3a4
	// Line 1956, Address: 0x212d48, Func Offset: 0x3b8
	// Line 1957, Address: 0x212d4c, Func Offset: 0x3bc
	// Line 1958, Address: 0x212d54, Func Offset: 0x3c4
	// Line 1960, Address: 0x212d58, Func Offset: 0x3c8
	// Line 1961, Address: 0x212d98, Func Offset: 0x408
	// Line 1962, Address: 0x212ddc, Func Offset: 0x44c
	// Line 1963, Address: 0x212dfc, Func Offset: 0x46c
	// Line 1962, Address: 0x212e04, Func Offset: 0x474
	// Line 1963, Address: 0x212e14, Func Offset: 0x484
	// Line 1962, Address: 0x212e1c, Func Offset: 0x48c
	// Line 1963, Address: 0x212e24, Func Offset: 0x494
	// Line 1965, Address: 0x212e38, Func Offset: 0x4a8
	// Line 1966, Address: 0x212e78, Func Offset: 0x4e8
	// Line 1967, Address: 0x212eb8, Func Offset: 0x528
	// Line 1968, Address: 0x212ed8, Func Offset: 0x548
	// Line 1967, Address: 0x212ee0, Func Offset: 0x550
	// Line 1968, Address: 0x212ef0, Func Offset: 0x560
	// Line 1967, Address: 0x212ef8, Func Offset: 0x568
	// Line 1968, Address: 0x212f0c, Func Offset: 0x57c
	// Line 1970, Address: 0x212f20, Func Offset: 0x590
	// Line 1971, Address: 0x212f2c, Func Offset: 0x59c
	// Line 1972, Address: 0x212f6c, Func Offset: 0x5dc
	// Line 1973, Address: 0x212fac, Func Offset: 0x61c
	// Line 1974, Address: 0x212fc8, Func Offset: 0x638
	// Line 1973, Address: 0x212fd4, Func Offset: 0x644
	// Line 1974, Address: 0x212fe4, Func Offset: 0x654
	// Line 1973, Address: 0x212fe8, Func Offset: 0x658
	// Line 1974, Address: 0x212ff0, Func Offset: 0x660
	// Line 1975, Address: 0x213004, Func Offset: 0x674
	// Line 1976, Address: 0x213008, Func Offset: 0x678
	// Line 1979, Address: 0x213014, Func Offset: 0x684
	// Line 1987, Address: 0x21301c, Func Offset: 0x68c
	// Line 1992, Address: 0x213024, Func Offset: 0x694
	// Line 1987, Address: 0x213030, Func Offset: 0x6a0
	// Line 1992, Address: 0x213040, Func Offset: 0x6b0
	// Line 1987, Address: 0x213044, Func Offset: 0x6b4
	// Line 1988, Address: 0x213048, Func Offset: 0x6b8
	// Line 1989, Address: 0x21304c, Func Offset: 0x6bc
	// Line 1990, Address: 0x213050, Func Offset: 0x6c0
	// Line 1992, Address: 0x213054, Func Offset: 0x6c4
	// Line 1988, Address: 0x213058, Func Offset: 0x6c8
	// Line 1989, Address: 0x21305c, Func Offset: 0x6cc
	// Line 1992, Address: 0x213060, Func Offset: 0x6d0
	// Line 1993, Address: 0x213064, Func Offset: 0x6d4
	// Line 1990, Address: 0x213070, Func Offset: 0x6e0
	// Line 1993, Address: 0x213074, Func Offset: 0x6e4
	// Line 1994, Address: 0x21307c, Func Offset: 0x6ec
	// Line 1995, Address: 0x2130a0, Func Offset: 0x710
	// Line 1994, Address: 0x2130a8, Func Offset: 0x718
	// Line 1995, Address: 0x2130b0, Func Offset: 0x720
	// Line 1997, Address: 0x2130d4, Func Offset: 0x744
	// Line 1998, Address: 0x2130d8, Func Offset: 0x748
	// Line 1995, Address: 0x2130dc, Func Offset: 0x74c
	// Line 1996, Address: 0x2130e8, Func Offset: 0x758
	// Line 1997, Address: 0x213100, Func Offset: 0x770
	// Line 1998, Address: 0x21313c, Func Offset: 0x7ac
	// Line 1999, Address: 0x213150, Func Offset: 0x7c0
	// Line 2002, Address: 0x21317c, Func Offset: 0x7ec
	// Line 2004, Address: 0x2131b8, Func Offset: 0x828
	// Line 2010, Address: 0x2131c0, Func Offset: 0x830
	// Line 2012, Address: 0x2131cc, Func Offset: 0x83c
	// Line 2009, Address: 0x2131d0, Func Offset: 0x840
	// Line 2012, Address: 0x2131d4, Func Offset: 0x844
	// Line 2010, Address: 0x2131dc, Func Offset: 0x84c
	// Line 2012, Address: 0x2131e0, Func Offset: 0x850
	// Line 2010, Address: 0x2131f0, Func Offset: 0x860
	// Line 2012, Address: 0x2131f4, Func Offset: 0x864
	// Line 2013, Address: 0x213200, Func Offset: 0x870
	// Line 2014, Address: 0x21320c, Func Offset: 0x87c
	// Line 2016, Address: 0x213220, Func Offset: 0x890
	// Line 2024, Address: 0x21322c, Func Offset: 0x89c
	// Line 2016, Address: 0x213234, Func Offset: 0x8a4
	// Line 2017, Address: 0x213240, Func Offset: 0x8b0
	// Line 2024, Address: 0x21324c, Func Offset: 0x8bc
	// Line 2017, Address: 0x213250, Func Offset: 0x8c0
	// Line 2018, Address: 0x21325c, Func Offset: 0x8cc
	// Line 2019, Address: 0x213284, Func Offset: 0x8f4
	// Line 2020, Address: 0x213298, Func Offset: 0x908
	// Line 2021, Address: 0x2132d4, Func Offset: 0x944
	// Line 2022, Address: 0x2132ec, Func Offset: 0x95c
	// Line 2024, Address: 0x213328, Func Offset: 0x998
	// Line 2029, Address: 0x213340, Func Offset: 0x9b0
	// Func End, Address: 0x213368, Func Offset: 0x9d8
}

// 
// Start address: 0x213370
static void SetDmgEne(en29_freework* fwP, DS_WORK* dsP, int set_num)
{
	BH_PWORK* ewP;
	e19_dmg_typ* edP;
	e19_dmg_typ* hedP;
	// Line 2039, Address: 0x213370, Func Offset: 0
	// Line 2044, Address: 0x213384, Func Offset: 0x14
	// Line 2039, Address: 0x213388, Func Offset: 0x18
	// Line 2047, Address: 0x21338c, Func Offset: 0x1c
	// Line 2051, Address: 0x2133a0, Func Offset: 0x30
	// Line 2054, Address: 0x2133a8, Func Offset: 0x38
	// Line 2056, Address: 0x2133b8, Func Offset: 0x48
	// Line 2064, Address: 0x2133c0, Func Offset: 0x50
	// Line 2056, Address: 0x2133c4, Func Offset: 0x54
	// Line 2057, Address: 0x2133cc, Func Offset: 0x5c
	// Line 2058, Address: 0x2133d4, Func Offset: 0x64
	// Line 2059, Address: 0x2133dc, Func Offset: 0x6c
	// Line 2061, Address: 0x2133e4, Func Offset: 0x74
	// Line 2062, Address: 0x2133e8, Func Offset: 0x78
	// Line 2064, Address: 0x2133ec, Func Offset: 0x7c
	// Line 2062, Address: 0x2133f0, Func Offset: 0x80
	// Line 2063, Address: 0x2133f4, Func Offset: 0x84
	// Line 2064, Address: 0x2133f8, Func Offset: 0x88
	// Line 2065, Address: 0x213400, Func Offset: 0x90
	// Func End, Address: 0x21341c, Func Offset: 0xac
}

// 
// Start address: 0x213420
static void CalcDmgEne(BH_PWORK* ewP, en29_freework* fwP)
{
	BH_PWORK* enP;
	e19_dmg_typ* edP;
	e19_dmg_typ* hedP;
	O_WORK* owP;
	// Line 2080, Address: 0x213420, Func Offset: 0
	// Line 2079, Address: 0x213424, Func Offset: 0x4
	// Line 2081, Address: 0x213428, Func Offset: 0x8
	// Line 2084, Address: 0x213434, Func Offset: 0x14
	// Line 2085, Address: 0x213438, Func Offset: 0x18
	// Line 2086, Address: 0x213440, Func Offset: 0x20
	// Line 2087, Address: 0x21346c, Func Offset: 0x4c
	// Line 2089, Address: 0x213498, Func Offset: 0x78
	// Line 2090, Address: 0x2134a0, Func Offset: 0x80
	// Line 2091, Address: 0x2134a8, Func Offset: 0x88
	// Line 2092, Address: 0x2134b8, Func Offset: 0x98
	// Func End, Address: 0x2134c0, Func Offset: 0xa0
}

// 
// Start address: 0x2134c0
static void CheckDmgEne(BH_PWORK* ewP, en29_freework* fwP)
{
	int num;
	int* dstP;
	int* srcP;
	float d;
	BH_PWORK* enP;
	e19_dmg_typ* edP;
	e19_dmg_typ* hedP;
	BH_PWORK* dmgP;
	// Line 2102, Address: 0x2134c0, Func Offset: 0
	// Line 2114, Address: 0x2134dc, Func Offset: 0x1c
	// Line 2115, Address: 0x2134e4, Func Offset: 0x24
	// Line 2116, Address: 0x2134f0, Func Offset: 0x30
	// Line 2117, Address: 0x2134f4, Func Offset: 0x34
	// Line 2118, Address: 0x213504, Func Offset: 0x44
	// Line 2120, Address: 0x213510, Func Offset: 0x50
	// Line 2121, Address: 0x213524, Func Offset: 0x64
	// Line 2123, Address: 0x213544, Func Offset: 0x84
	// Line 2126, Address: 0x213548, Func Offset: 0x88
	// Line 2129, Address: 0x213558, Func Offset: 0x98
	// Line 2133, Address: 0x213570, Func Offset: 0xb0
	// Line 2134, Address: 0x213578, Func Offset: 0xb8
	// Line 2135, Address: 0x21357c, Func Offset: 0xbc
	// Line 2134, Address: 0x213588, Func Offset: 0xc8
	// Line 2135, Address: 0x21358c, Func Offset: 0xcc
	// Line 2136, Address: 0x2135a8, Func Offset: 0xe8
	// Line 2137, Address: 0x2135b0, Func Offset: 0xf0
	// Line 2138, Address: 0x2135b8, Func Offset: 0xf8
	// Line 2139, Address: 0x2135c0, Func Offset: 0x100
	// Line 2140, Address: 0x2135c8, Func Offset: 0x108
	// Line 2141, Address: 0x2135d0, Func Offset: 0x110
	// Line 2142, Address: 0x2135d8, Func Offset: 0x118
	// Line 2143, Address: 0x2135e0, Func Offset: 0x120
	// Line 2144, Address: 0x2135e8, Func Offset: 0x128
	// Line 2145, Address: 0x2135f0, Func Offset: 0x130
	// Line 2147, Address: 0x213604, Func Offset: 0x144
	// Func End, Address: 0x213624, Func Offset: 0x164
}
