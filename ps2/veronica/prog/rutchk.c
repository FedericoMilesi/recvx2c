

typedef void (*type_74)(void*);

typedef unsigned int type_0[4];
typedef Unknown1* type_1[512];
typedef Unknown1* type_2[32];

typedef Unknown1* type_4[32];
typedef Unknown1* type_5[512];

typedef char type_8[8];
typedef Unknown1* type_9[32];
typedef Unknown1* type_10[512];

typedef char type_12[32];
typedef float type_13[32];
typedef Unknown1* type_14[512];

typedef short type_16[32];

typedef Unknown1* type_18[128];
typedef unsigned int type_19[1];

typedef int* type_22[16];
typedef Unknown1* type_23[128];

typedef Unknown1* type_26[128];
typedef int type_27[4];

typedef unsigned int type_29[4];
typedef float type_30[4];
typedef MODEL_DATA type_31[16];
typedef Unknown1* type_32[512];
typedef float type_33[4];
typedef char type_34[256];
typedef float type_35[4];
typedef float type_36[4];
typedef float type_37[4];
typedef float type_38[4];

typedef unsigned char type_40[64];

typedef char type_42[8];
typedef void* type_43[2];

typedef int type_45[4];
typedef unsigned char* type_46[256];
typedef unsigned int type_47[2];
typedef short type_48[256];

typedef float type_50[3];
typedef short type_51[256];
typedef int type_52[3];
typedef int type_53[8];
typedef float type_54[3];

typedef TEXTURE_BUFFER type_56[256];

typedef short type_59[256];
typedef char type_60[3];
typedef int type_61[64];
typedef MODEL_DATA type_62[450];
typedef unsigned int type_63[16];
typedef char type_64[4];
typedef unsigned int type_65[8];

typedef int type_68[450];
typedef unsigned int type_69[8];
typedef unsigned char type_70[450];
typedef float type_71[128];
typedef char type_72[16];
typedef char type_73[4];
typedef unsigned int type_75[32];
typedef CAMERA type_76[2];
typedef unsigned char type_77[256];
typedef unsigned int type_78[16];
typedef BOUNDARY type_79[64];
typedef unsigned int type_80[16];
typedef BOUNDARY type_81[64];
typedef unsigned int type_82[32];
typedef BOUNDARY type_83[64];
typedef unsigned int type_84[16];
typedef unsigned int type_85[3];
typedef BH_PWORK* type_86[16];
typedef unsigned int type_87[8];
typedef unsigned int type_88[1];
typedef unsigned int type_89[384];
typedef unsigned int type_90[2];
typedef unsigned char type_91[2];
typedef int* type_92[16];
typedef unsigned int type_93[4];
typedef char type_94[32];

typedef char type_96[64];

typedef char type_98[4];
typedef MODEL_DATA type_99[16];
typedef short type_100[4];
typedef unsigned char type_101[4];

typedef unsigned int type_103[8];
typedef unsigned int type_104[32];
typedef unsigned int type_105[4];

typedef Unknown1* type_107[512];
typedef Unknown1* type_108[128];
typedef Unknown1* type_109[512];
typedef unsigned char type_110[64];
typedef Unknown1* type_111[512];



extern ROOM* rom;
extern SYS* sys;

unsigned char bhCheckRoute(NJS_POINT3* ps0, NJS_POINT3* ps1, NJS_POINT3* ps2);
unsigned char bhCheckRouteID(NJS_POINT3* ps);

//
// Start address: 0x26b8d0
unsigned char bhCheckRoute(NJS_POINT3* ps0, NJS_POINT3* ps1, NJS_POINT3* ps2)
{
    unsigned char rid;
    unsigned char nxt;
    unsigned char now;
    BOUNDARY* rp;
    // Line 69, Address: 0x26b8d0, Func Offset: 0
    // Line 72, Address: 0x26b8e8, Func Offset: 0x18
    // Line 73, Address: 0x26b8f4, Func Offset: 0x24
    // Line 74, Address: 0x26b908, Func Offset: 0x38
    // Line 75, Address: 0x26b918, Func Offset: 0x48
    // Line 76, Address: 0x26b92c, Func Offset: 0x5c
    // Line 78, Address: 0x26b934, Func Offset: 0x64
    // Line 79, Address: 0x26b93c, Func Offset: 0x6c
    // Line 80, Address: 0x26b944, Func Offset: 0x74
    // Line 81, Address: 0x26b948, Func Offset: 0x78
    // Line 83, Address: 0x26b950, Func Offset: 0x80
    // Line 85, Address: 0x26b958, Func Offset: 0x88
    // Line 83, Address: 0x26b960, Func Offset: 0x90
    // Line 84, Address: 0x26b970, Func Offset: 0xa0
    // Line 83, Address: 0x26b974, Func Offset: 0xa4
    // Line 84, Address: 0x26b980, Func Offset: 0xb0
    // Line 85, Address: 0x26b990, Func Offset: 0xc0
    // Line 86, Address: 0x26b9a4, Func Offset: 0xd4
    // Line 87, Address: 0x26b9b8, Func Offset: 0xe8
    // Line 89, Address: 0x26b9cc, Func Offset: 0xfc
    // Func End, Address: 0x26b9e4, Func Offset: 0x114
}

//
// Start address: 0x26b9f0
unsigned char bhCheckRouteID(NJS_POINT3* ps)
{
    int i;
    BOUNDARY* rp;
    // Line 104, Address: 0x26b9f0, Func Offset: 0
    // Line 105, Address: 0x26b9fc, Func Offset: 0xc
    // Line 106, Address: 0x26ba08, Func Offset: 0x18
    // Line 110, Address: 0x26ba98, Func Offset: 0xa8
    // Line 112, Address: 0x26baa0, Func Offset: 0xb0
    // Line 113, Address: 0x26bab4, Func Offset: 0xc4
    // Line 114, Address: 0x26bab8, Func Offset: 0xc8
    // Func End, Address: 0x26bac0, Func Offset: 0xd0
}
