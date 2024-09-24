#include "ps2_NaTextureFunction.h"
#include "types.h"

unsigned int Ps2_current_texbreak;
unsigned int Ps2_current_gindex;
unsigned int Ps2_texcontinue_no;
void* Ps2_free_last;
unsigned int Ps2_free_texmemsize;
void* Ps2_now_free;
NJS_TEXMEMLIST Ps2_last_tmlist;
NJS_TEXMEMLIST Ps2_1st_tmlist;
unsigned int Ps2_texmemlist_num;
NJS_TEXMEMLIST* Ps2_tex_info;
PS2_TIM_LIST_ENTRY Ps2_tm_list_last;
PS2_TIM_LIST_ENTRY Ps2_tm_list_1st;
void* Ps2_tex_buff;
unsigned int Ps2_current_texno;
NJS_TEXLIST* Ps2_current_texlist;
NJS_TEXMEMLIST* Ps2_current_texmemlist;
// char* (*index)(char*, int); // HUH
unsigned int Ps2_render_width;
unsigned int palbuf[4096];
unsigned int Ps2_clut[1024];
void* Ps2_render_p;
int Ps2_tex3DEx_count;
NJS_TEXTURE_VTX* Ps2_tex3DEx_p;
int Ps2_tex3DEx_trans;
int Ps2_3DEx_count;
NJS_POLYGON_VTX* Ps2_3DEx_p;
int Ps2_3DEx_trans;
unsigned int Ps2_quad_color;
int Ps2_quad_trans;
unsigned int Ps2_current_texno_bk;
NJS_TEXLIST* Ps2_current_texlist_bk;

//
// Start address: 0x2e1b80
void Ps2MemCopy4(void* vpDst, void* vpSrc, int lNum)
{
    unsigned int* lpDst;
    unsigned int* lpSrc;
    // Line 128, Address: 0x2e1b80, Func Offset: 0
    // Line 129, Address: 0x2e1b8c, Func Offset: 0xc
    // Line 130, Address: 0x2e1b90, Func Offset: 0x10
    // Line 129, Address: 0x2e1b98, Func Offset: 0x18
    // Line 130, Address: 0x2e1ba0, Func Offset: 0x20
    // Line 131, Address: 0x2e1ba8, Func Offset: 0x28
    // Func End, Address: 0x2e1bb0, Func Offset: 0x30
}

//
// Start address: 0x2e1bb0
void njInitTextureBuffer(Sint8* addr, Uint32 size)
{
    // Line 171, Address: 0x2e1bb0, Func Offset: 0
    // Func End, Address: 0x2e1bb8, Func Offset: 0x8
}

//
// Start address: 0x2e1bc0
void njInitTexture(NJS_TEXMEMLIST* addr, unsigned int n)
{
    int i;
    // Line 182, Address: 0x2e1bc0, Func Offset: 0
    // Line 186, Address: 0x2e1bd4, Func Offset: 0x14
    // Line 211, Address: 0x2e1bdc, Func Offset: 0x1c
    // Line 212, Address: 0x2e1be4, Func Offset: 0x24
    // Line 213, Address: 0x2e1bec, Func Offset: 0x2c
    // Line 223, Address: 0x2e1bf4, Func Offset: 0x34
    // Line 224, Address: 0x2e1bfc, Func Offset: 0x3c
    // Line 190, Address: 0x2e1c04, Func Offset: 0x44
    // Line 188, Address: 0x2e1c0c, Func Offset: 0x4c
    // Line 189, Address: 0x2e1c18, Func Offset: 0x58
    // Line 193, Address: 0x2e1c20, Func Offset: 0x60
    // Line 194, Address: 0x2e1c28, Func Offset: 0x68
    // Line 195, Address: 0x2e1c30, Func Offset: 0x70
    // Line 190, Address: 0x2e1c38, Func Offset: 0x78
    // Line 191, Address: 0x2e1c40, Func Offset: 0x80
    // Line 214, Address: 0x2e1c48, Func Offset: 0x88
    // Line 215, Address: 0x2e1c50, Func Offset: 0x90
    // Line 217, Address: 0x2e1c58, Func Offset: 0x98
    // Line 220, Address: 0x2e1c60, Func Offset: 0xa0
    // Line 222, Address: 0x2e1c68, Func Offset: 0xa8
    // Line 192, Address: 0x2e1c78, Func Offset: 0xb8
    // Line 196, Address: 0x2e1c88, Func Offset: 0xc8
    // Line 197, Address: 0x2e1c98, Func Offset: 0xd8
    // Line 216, Address: 0x2e1c9c, Func Offset: 0xdc
    // Line 197, Address: 0x2e1ca0, Func Offset: 0xe0
    // Line 216, Address: 0x2e1ca4, Func Offset: 0xe4
    // Line 218, Address: 0x2e1cb0, Func Offset: 0xf0
    // Line 219, Address: 0x2e1cc0, Func Offset: 0x100
    // Line 221, Address: 0x2e1cc8, Func Offset: 0x108
    // Line 225, Address: 0x2e1cd4, Func Offset: 0x114
    // Line 229, Address: 0x2e1ce0, Func Offset: 0x120
    // Line 230, Address: 0x2e1cec, Func Offset: 0x12c
    // Line 231, Address: 0x2e1cf0, Func Offset: 0x130
    // Line 232, Address: 0x2e1cf4, Func Offset: 0x134
    // Line 233, Address: 0x2e1cf8, Func Offset: 0x138
    // Line 234, Address: 0x2e1cfc, Func Offset: 0x13c
    // Line 235, Address: 0x2e1d00, Func Offset: 0x140
    // Line 236, Address: 0x2e1d04, Func Offset: 0x144
    // Line 237, Address: 0x2e1d08, Func Offset: 0x148
    // Line 238, Address: 0x2e1d0c, Func Offset: 0x14c
    // Line 239, Address: 0x2e1d10, Func Offset: 0x150
    // Line 240, Address: 0x2e1d14, Func Offset: 0x154
    // Line 241, Address: 0x2e1d18, Func Offset: 0x158
    // Line 242, Address: 0x2e1d1c, Func Offset: 0x15c
    // Line 243, Address: 0x2e1d20, Func Offset: 0x160
    // Line 244, Address: 0x2e1d24, Func Offset: 0x164
    // Line 245, Address: 0x2e1d28, Func Offset: 0x168
    // Line 246, Address: 0x2e1d2c, Func Offset: 0x16c
    // Line 248, Address: 0x2e1d30, Func Offset: 0x170
    // Line 247, Address: 0x2e1d34, Func Offset: 0x174
    // Line 248, Address: 0x2e1d38, Func Offset: 0x178
    // Line 249, Address: 0x2e1d48, Func Offset: 0x188
    // Func End, Address: 0x2e1d5c, Func Offset: 0x19c
}

//
// Start address: 0x2e1d60
void njExitTexture()
{
    // Line 256, Address: 0x2e1d60, Func Offset: 0
    // Func End, Address: 0x2e1d68, Func Offset: 0x8
}

//
// Start address: 0x2e1d70
int SearchNumber(unsigned int global_index, unsigned int bank)
{
    NJS_TEXMEMLIST* addr;
    unsigned int n;
    unsigned int i;
    // Line 264, Address: 0x2e1d70, Func Offset: 0
    // Line 266, Address: 0x2e1d84, Func Offset: 0x14
    // Line 267, Address: 0x2e1d88, Func Offset: 0x18
    // Line 269, Address: 0x2e1d90, Func Offset: 0x20
    // Line 270, Address: 0x2e1d9c, Func Offset: 0x2c
    // Line 271, Address: 0x2e1da8, Func Offset: 0x38
    // Line 272, Address: 0x2e1dc0, Func Offset: 0x50
    // Line 275, Address: 0x2e1dc8, Func Offset: 0x58
    // Line 276, Address: 0x2e1dd8, Func Offset: 0x68
    // Line 277, Address: 0x2e1ddc, Func Offset: 0x6c
    // Func End, Address: 0x2e1de4, Func Offset: 0x74
}

//
// Start address: 0x2e1df0
int SearchNullNumber()
{
    NJS_TEXMEMLIST* addr;
    unsigned int n;
    unsigned int i;
    // Line 285, Address: 0x2e1df0, Func Offset: 0
    // Line 286, Address: 0x2e1df8, Func Offset: 0x8
    // Line 288, Address: 0x2e1e00, Func Offset: 0x10
    // Line 289, Address: 0x2e1e0c, Func Offset: 0x1c
    // Line 290, Address: 0x2e1e20, Func Offset: 0x30
    // Line 291, Address: 0x2e1e30, Func Offset: 0x40
    // Line 292, Address: 0x2e1e34, Func Offset: 0x44
    // Func End, Address: 0x2e1e3c, Func Offset: 0x4c
}

//
// Start address: 0x2e1e40
int njLoadTexture(NJS_TEXLIST* texlist)
{
    NJS_TEXMEMLIST* addr;
    unsigned int attr;
    unsigned int bank;
    unsigned int g_index;
    unsigned int tex_num;
    int cont_no;
    int no;
    int j;
    // Line 308, Address: 0x2e1e40, Func Offset: 0
    // Line 315, Address: 0x2e1e6c, Func Offset: 0x2c
    // Line 317, Address: 0x2e1e74, Func Offset: 0x34
    // Line 316, Address: 0x2e1e78, Func Offset: 0x38
    // Line 322, Address: 0x2e1e80, Func Offset: 0x40
    // Line 323, Address: 0x2e1e88, Func Offset: 0x48
    // Line 326, Address: 0x2e1e9c, Func Offset: 0x5c
    // Line 327, Address: 0x2e1ea0, Func Offset: 0x60
    // Line 326, Address: 0x2e1ea4, Func Offset: 0x64
    // Line 327, Address: 0x2e1eac, Func Offset: 0x6c
    // Line 328, Address: 0x2e1eb8, Func Offset: 0x78
    // Line 330, Address: 0x2e1ec8, Func Offset: 0x88
    // Line 331, Address: 0x2e1ee0, Func Offset: 0xa0
    // Line 332, Address: 0x2e1ef0, Func Offset: 0xb0
    // Line 333, Address: 0x2e1ef4, Func Offset: 0xb4
    // Line 334, Address: 0x2e1f04, Func Offset: 0xc4
    // Line 335, Address: 0x2e1f1c, Func Offset: 0xdc
    // Line 336, Address: 0x2e1f24, Func Offset: 0xe4
    // Line 337, Address: 0x2e1f2c, Func Offset: 0xec
    // Line 339, Address: 0x2e1f30, Func Offset: 0xf0
    // Line 340, Address: 0x2e1f74, Func Offset: 0x134
    // Line 343, Address: 0x2e1f7c, Func Offset: 0x13c
    // Line 341, Address: 0x2e1f8c, Func Offset: 0x14c
    // Line 343, Address: 0x2e1f90, Func Offset: 0x150
    // Line 345, Address: 0x2e1f9c, Func Offset: 0x15c
    // Line 347, Address: 0x2e1fa4, Func Offset: 0x164
    // Line 348, Address: 0x2e1fa8, Func Offset: 0x168
    // Line 349, Address: 0x2e1fac, Func Offset: 0x16c
    // Line 351, Address: 0x2e1fb4, Func Offset: 0x174
    // Line 357, Address: 0x2e1fb8, Func Offset: 0x178
    // Line 358, Address: 0x2e1fcc, Func Offset: 0x18c
    // Line 360, Address: 0x2e1fe8, Func Offset: 0x1a8
    // Line 362, Address: 0x2e1ff8, Func Offset: 0x1b8
    // Line 363, Address: 0x2e2000, Func Offset: 0x1c0
    // Line 364, Address: 0x2e2008, Func Offset: 0x1c8
    // Line 365, Address: 0x2e2018, Func Offset: 0x1d8
    // Line 366, Address: 0x2e2030, Func Offset: 0x1f0
    // Line 367, Address: 0x2e2038, Func Offset: 0x1f8
    // Line 369, Address: 0x2e2040, Func Offset: 0x200
    // Line 370, Address: 0x2e2058, Func Offset: 0x218
    // Line 371, Address: 0x2e205c, Func Offset: 0x21c
    // Line 373, Address: 0x2e2060, Func Offset: 0x220
    // Line 375, Address: 0x2e2064, Func Offset: 0x224
    // Line 374, Address: 0x2e2068, Func Offset: 0x228
    // Line 375, Address: 0x2e206c, Func Offset: 0x22c
    // Line 376, Address: 0x2e2070, Func Offset: 0x230
    // Line 377, Address: 0x2e2084, Func Offset: 0x244
    // Line 378, Address: 0x2e2098, Func Offset: 0x258
    // Line 379, Address: 0x2e209c, Func Offset: 0x25c
    // Line 380, Address: 0x2e20a0, Func Offset: 0x260
    // Line 381, Address: 0x2e20b4, Func Offset: 0x274
    // Line 382, Address: 0x2e20c8, Func Offset: 0x288
    // Line 383, Address: 0x2e20cc, Func Offset: 0x28c
    // Line 384, Address: 0x2e20d0, Func Offset: 0x290
    // Line 385, Address: 0x2e20d4, Func Offset: 0x294
    // Line 388, Address: 0x2e20d8, Func Offset: 0x298
    // Line 389, Address: 0x2e20e8, Func Offset: 0x2a8
    // Line 392, Address: 0x2e20f0, Func Offset: 0x2b0
    // Line 393, Address: 0x2e20f8, Func Offset: 0x2b8
    // Line 395, Address: 0x2e2100, Func Offset: 0x2c0
    // Line 396, Address: 0x2e2110, Func Offset: 0x2d0
    // Line 401, Address: 0x2e2118, Func Offset: 0x2d8
    // Line 400, Address: 0x2e2140, Func Offset: 0x300
    // Line 401, Address: 0x2e2144, Func Offset: 0x304
    // Func End, Address: 0x2e214c, Func Offset: 0x30c
}

//
// Start address: 0x2e2150
int njSetTexture(NJS_TEXLIST* texlist)
{
    // Line 409, Address: 0x2e2150, Func Offset: 0
    // Line 410, Address: 0x2e2158, Func Offset: 0x8
    // Line 411, Address: 0x2e2160, Func Offset: 0x10
    // Line 412, Address: 0x2e2168, Func Offset: 0x18
    // Func End, Address: 0x2e2170, Func Offset: 0x20
}

//
// Start address: 0x2e2170
int njSetTextureNum(unsigned int n)
{
    // Line 430, Address: 0x2e2170, Func Offset: 0
    // Line 441, Address: 0x2e2188, Func Offset: 0x18
    // Line 444, Address: 0x2e218c, Func Offset: 0x1c
    // Line 445, Address: 0x2e2194, Func Offset: 0x24
    // Line 447, Address: 0x2e21b4, Func Offset: 0x44
    // Line 451, Address: 0x2e21c8, Func Offset: 0x58
    // Func End, Address: 0x2e21d0, Func Offset: 0x60
}

//
// Start address: 0x2e21d0
int njSetTextureNumG(unsigned int globalIndex)
{
    int no;
    // Line 463, Address: 0x2e21d0, Func Offset: 0
    // Line 469, Address: 0x2e21dc, Func Offset: 0xc
    // Line 470, Address: 0x2e21e8, Func Offset: 0x18
    // Line 472, Address: 0x2e21f0, Func Offset: 0x20
    // Line 474, Address: 0x2e21f4, Func Offset: 0x24
    // Line 472, Address: 0x2e21f8, Func Offset: 0x28
    // Line 474, Address: 0x2e21fc, Func Offset: 0x2c
    // Line 478, Address: 0x2e2218, Func Offset: 0x48
    // Line 480, Address: 0x2e2224, Func Offset: 0x54
    // Line 481, Address: 0x2e222c, Func Offset: 0x5c
    // Line 483, Address: 0x2e2248, Func Offset: 0x78
    // Func End, Address: 0x2e2258, Func Offset: 0x88
}

//
// Start address: 0x2e2260
int njSetTextureNumSys(unsigned int n)
{
    // Line 500, Address: 0x2e2260, Func Offset: 0
    // Func End, Address: 0x2e2284, Func Offset: 0x24
}

//
// Start address: 0x2e2290
void njReleaseTextureAll()
{
    // Line 509, Address: 0x2e2290, Func Offset: 0
    // Func End, Address: 0x2e22a4, Func Offset: 0x14
}

//
// Start address: 0x2e22b0
int njReleaseTexture(NJS_TEXLIST* texlist)
{
    NJS_TEXMEMLIST* p;
    unsigned int tex_num;
    int i;
    // Line 517, Address: 0x2e22b0, Func Offset: 0
    // Line 523, Address: 0x2e22cc, Func Offset: 0x1c
    // Line 553, Address: 0x2e22d8, Func Offset: 0x28
    // Line 555, Address: 0x2e22e0, Func Offset: 0x30
    // Line 556, Address: 0x2e22f0, Func Offset: 0x40
    // Line 557, Address: 0x2e22f4, Func Offset: 0x44
    // Line 556, Address: 0x2e22f8, Func Offset: 0x48
    // Line 557, Address: 0x2e2300, Func Offset: 0x50
    // Line 558, Address: 0x2e230c, Func Offset: 0x5c
    // Line 560, Address: 0x2e2318, Func Offset: 0x68
    // Line 561, Address: 0x2e2328, Func Offset: 0x78
    // Line 562, Address: 0x2e2334, Func Offset: 0x84
    // Line 564, Address: 0x2e233c, Func Offset: 0x8c
    // Line 565, Address: 0x2e2344, Func Offset: 0x94
    // Line 566, Address: 0x2e2348, Func Offset: 0x98
    // Line 567, Address: 0x2e234c, Func Offset: 0x9c
    // Line 568, Address: 0x2e2350, Func Offset: 0xa0
    // Line 569, Address: 0x2e2354, Func Offset: 0xa4
    // Line 570, Address: 0x2e2358, Func Offset: 0xa8
    // Line 571, Address: 0x2e235c, Func Offset: 0xac
    // Line 572, Address: 0x2e2360, Func Offset: 0xb0
    // Line 573, Address: 0x2e2364, Func Offset: 0xb4
    // Line 574, Address: 0x2e2368, Func Offset: 0xb8
    // Line 576, Address: 0x2e236c, Func Offset: 0xbc
    // Line 580, Address: 0x2e2370, Func Offset: 0xc0
    // Line 581, Address: 0x2e2374, Func Offset: 0xc4
    // Line 583, Address: 0x2e2378, Func Offset: 0xc8
    // Line 612, Address: 0x2e2388, Func Offset: 0xd8
    // Line 613, Address: 0x2e2390, Func Offset: 0xe0
    // Func End, Address: 0x2e23b0, Func Offset: 0x100
}

//
// Start address: 0x2e23b0
Uint32 njCalcTexture(Uint32 flag)
{
    // Line 628, Address: 0x2e23b0, Func Offset: 0
    // Func End, Address: 0x2e23b8, Func Offset: 0x8
}

//
// Start address: 0x2e23c0
void njSetTextureInfo(NJS_TEXINFO* info, unsigned short* tex, int Type, int nWidth, int nHeight)
{
    // Line 658, Address: 0x2e23c0, Func Offset: 0
    // Line 659, Address: 0x2e23c4, Func Offset: 0x4
    // Line 660, Address: 0x2e23cc, Func Offset: 0xc
    // Line 662, Address: 0x2e23d0, Func Offset: 0x10
    // Func End, Address: 0x2e23d8, Func Offset: 0x18
}

//
// Start address: 0x2e23e0
void njSetTextureName(NJS_TEXNAME* texname, void* addr, unsigned int globalIndex, unsigned int attr)
{
    // Line 679, Address: 0x2e23e0, Func Offset: 0
    // Line 680, Address: 0x2e23e4, Func Offset: 0x4
    // Line 683, Address: 0x2e23e8, Func Offset: 0x8
    // Func End, Address: 0x2e23f0, Func Offset: 0x10
}

//
// Start address: 0x2e23f0
void njRenderTextureNum(Uint32 n)
{
    // Line 696, Address: 0x2e23f0, Func Offset: 0
    // Func End, Address: 0x2e2420, Func Offset: 0x30
}

//
// Start address: 0x2e2420
void njRenderTextureNumG(unsigned int globalIndex)
{
    int no;
    // Line 710, Address: 0x2e2420, Func Offset: 0
    // Line 714, Address: 0x2e2428, Func Offset: 0x8
    // Line 715, Address: 0x2e2430, Func Offset: 0x10
    // Line 716, Address: 0x2e2438, Func Offset: 0x18
    // Line 717, Address: 0x2e2458, Func Offset: 0x38
    // Line 718, Address: 0x2e2460, Func Offset: 0x40
    // Line 725, Address: 0x2e247c, Func Offset: 0x5c
    // Func End, Address: 0x2e2488, Func Offset: 0x68
}

//
// Start address: 0x2e2490
void njSetRenderWidth(unsigned int nWidth)
{
    // Line 737, Address: 0x2e2490, Func Offset: 0
    // Line 739, Address: 0x2e2494, Func Offset: 0x4
    // Func End, Address: 0x2e249c, Func Offset: 0xc
}

//
// Start address: 0x2e24a0
void njSetPaletteBankNum(unsigned int n, int bank)
{
    // Line 753, Address: 0x2e24a0, Func Offset: 0
    // Line 758, Address: 0x2e24c0, Func Offset: 0x20
    // Func End, Address: 0x2e24c8, Func Offset: 0x28
}

/* empty */
void njSetPaletteMode() { } // Line 773, Address: 0x2e24d0, Func Offset: 0

//
// Start address: 0x2e24e0
unsigned int njGetPaletteMode()
{
    // Line 782, Address: 0x2e24e0, Func Offset: 0
    // Func End, Address: 0x2e24e8, Func Offset: 0x8
}

//
// Start address: 0x2e24f0
void njSetPaletteData(Sint32 offset, Sint32 count, void* data)
{
    // Line 793, Address: 0x2e24f0, Func Offset: 0
    // Func End, Address: 0x2e2500, Func Offset: 0x10
}

//
// Start address: 0x2e2500
void njGarbageTexture(NJS_TEXMEMLIST* addr, Uint32 n)
{
    // Line 825, Address: 0x2e2500, Func Offset: 0
    // Func End, Address: 0x2e2508, Func Offset: 0x8
}

//
// Start address: 0x2e2510
unsigned int Ps2GetTim2Size(void* p)
{
    // Line 874, Address: 0x2e2510, Func Offset: 0
    // Line 875, Address: 0x2e2514, Func Offset: 0x4
    // Func End, Address: 0x2e251c, Func Offset: 0xc
}

//
// Start address: 0x2e2520
int Ps2TextureMalloc(NJS_TEXMEMLIST* p)
{
    PS2_TIM_LIST_ENTRY* last2;
    PS2_TIM_LIST_ENTRY* timp;
    unsigned int size;
    // Line 882, Address: 0x2e2520, Func Offset: 0
    // Line 886, Address: 0x2e2534, Func Offset: 0x14
    // Line 890, Address: 0x2e2548, Func Offset: 0x28
    // Line 891, Address: 0x2e2578, Func Offset: 0x58
    // Line 892, Address: 0x2e2580, Func Offset: 0x60
    // Line 893, Address: 0x2e2588, Func Offset: 0x68
    // Line 898, Address: 0x2e2590, Func Offset: 0x70
    // Line 892, Address: 0x2e2598, Func Offset: 0x78
    // Line 893, Address: 0x2e259c, Func Offset: 0x7c
    // Line 894, Address: 0x2e25a4, Func Offset: 0x84
    // Line 896, Address: 0x2e25a8, Func Offset: 0x88
    // Line 908, Address: 0x2e25ac, Func Offset: 0x8c
    // Line 901, Address: 0x2e25b0, Func Offset: 0x90
    // Line 906, Address: 0x2e25b4, Func Offset: 0x94
    // Line 894, Address: 0x2e25b8, Func Offset: 0x98
    // Line 896, Address: 0x2e25bc, Func Offset: 0x9c
    // Line 908, Address: 0x2e25c0, Func Offset: 0xa0
    // Line 897, Address: 0x2e25c4, Func Offset: 0xa4
    // Line 898, Address: 0x2e25c8, Func Offset: 0xa8
    // Line 899, Address: 0x2e25cc, Func Offset: 0xac
    // Line 900, Address: 0x2e25d8, Func Offset: 0xb8
    // Line 901, Address: 0x2e25e8, Func Offset: 0xc8
    // Line 903, Address: 0x2e25ec, Func Offset: 0xcc
    // Line 904, Address: 0x2e25fc, Func Offset: 0xdc
    // Line 906, Address: 0x2e260c, Func Offset: 0xec
    // Line 908, Address: 0x2e2610, Func Offset: 0xf0
    // Line 909, Address: 0x2e2618, Func Offset: 0xf8
    // Line 908, Address: 0x2e2620, Func Offset: 0x100
    // Line 909, Address: 0x2e262c, Func Offset: 0x10c
    // Line 911, Address: 0x2e263c, Func Offset: 0x11c
    // Line 914, Address: 0x2e2644, Func Offset: 0x124
    // Line 915, Address: 0x2e2648, Func Offset: 0x128
    // Line 917, Address: 0x2e2650, Func Offset: 0x130
    // Line 915, Address: 0x2e2658, Func Offset: 0x138
    // Line 917, Address: 0x2e265c, Func Offset: 0x13c
    // Line 920, Address: 0x2e267c, Func Offset: 0x15c
    // Line 921, Address: 0x2e2684, Func Offset: 0x164
    // Line 925, Address: 0x2e2688, Func Offset: 0x168
    // Line 923, Address: 0x2e2690, Func Offset: 0x170
    // Line 928, Address: 0x2e2694, Func Offset: 0x174
    // Line 921, Address: 0x2e2698, Func Offset: 0x178
    // Line 923, Address: 0x2e269c, Func Offset: 0x17c
    // Line 924, Address: 0x2e26a0, Func Offset: 0x180
    // Line 925, Address: 0x2e26a4, Func Offset: 0x184
    // Line 926, Address: 0x2e26a8, Func Offset: 0x188
    // Line 927, Address: 0x2e26b4, Func Offset: 0x194
    // Line 928, Address: 0x2e26c4, Func Offset: 0x1a4
    // Line 930, Address: 0x2e26c8, Func Offset: 0x1a8
    // Line 932, Address: 0x2e26d8, Func Offset: 0x1b8
    // Line 934, Address: 0x2e26ec, Func Offset: 0x1cc
    // Line 936, Address: 0x2e26fc, Func Offset: 0x1dc
    // Line 939, Address: 0x2e2704, Func Offset: 0x1e4
    // Line 937, Address: 0x2e2708, Func Offset: 0x1e8
    // Line 936, Address: 0x2e2710, Func Offset: 0x1f0
    // Line 937, Address: 0x2e271c, Func Offset: 0x1fc
    // Line 940, Address: 0x2e2728, Func Offset: 0x208
    // Func End, Address: 0x2e2740, Func Offset: 0x220
}

//
// Start address: 0x2e2740
int Ps2TextureFree(NJS_TEXMEMLIST* p)
{
    PS2_TIM_LIST_ENTRY* timp;
    PS2_TIM_LIST_ENTRY* after;
    PS2_TIM_LIST_ENTRY* before;
    unsigned int size;
    // Line 944, Address: 0x2e2740, Func Offset: 0
    // Line 948, Address: 0x2e274c, Func Offset: 0xc
    // Line 949, Address: 0x2e2758, Func Offset: 0x18
    // Line 950, Address: 0x2e2760, Func Offset: 0x20
    // Line 952, Address: 0x2e2768, Func Offset: 0x28
    // Line 951, Address: 0x2e276c, Func Offset: 0x2c
    // Line 952, Address: 0x2e2770, Func Offset: 0x30
    // Line 954, Address: 0x2e277c, Func Offset: 0x3c
    // Line 955, Address: 0x2e2780, Func Offset: 0x40
    // Line 968, Address: 0x2e2784, Func Offset: 0x44
    // Line 956, Address: 0x2e2788, Func Offset: 0x48
    // Line 957, Address: 0x2e278c, Func Offset: 0x4c
    // Line 959, Address: 0x2e2790, Func Offset: 0x50
    // Line 960, Address: 0x2e2794, Func Offset: 0x54
    // Line 961, Address: 0x2e2798, Func Offset: 0x58
    // Line 962, Address: 0x2e279c, Func Offset: 0x5c
    // Line 963, Address: 0x2e27a0, Func Offset: 0x60
    // Line 964, Address: 0x2e27a4, Func Offset: 0x64
    // Line 965, Address: 0x2e27a8, Func Offset: 0x68
    // Line 966, Address: 0x2e27ac, Func Offset: 0x6c
    // Line 968, Address: 0x2e27b0, Func Offset: 0x70
    // Line 974, Address: 0x2e27c0, Func Offset: 0x80
    // Line 976, Address: 0x2e27c8, Func Offset: 0x88
    // Line 975, Address: 0x2e27d0, Func Offset: 0x90
    // Line 976, Address: 0x2e27d4, Func Offset: 0x94
    // Func End, Address: 0x2e27dc, Func Offset: 0x9c
}

//
// Start address: 0x2e27e0
int Ps2ReplaceTexAddr(unsigned int gindex, void* rep_addr)
{
    int count;
    NJS_TEXMEMLIST* addr;
    unsigned int n;
    unsigned int i;
    // Line 987, Address: 0x2e27e0, Func Offset: 0
    // Line 988, Address: 0x2e27e8, Func Offset: 0x8
    // Line 990, Address: 0x2e27ec, Func Offset: 0xc
    // Line 991, Address: 0x2e27fc, Func Offset: 0x1c
    // Line 992, Address: 0x2e2808, Func Offset: 0x28
    // Line 994, Address: 0x2e2814, Func Offset: 0x34
    // Line 993, Address: 0x2e2818, Func Offset: 0x38
    // Line 995, Address: 0x2e281c, Func Offset: 0x3c
    // Line 996, Address: 0x2e2820, Func Offset: 0x40
    // Line 998, Address: 0x2e2830, Func Offset: 0x50
    // Func End, Address: 0x2e2838, Func Offset: 0x58
}

//
// Start address: 0x2e2840
int Ps2TextureGarbageCollectionAll()
{
    unsigned char* real_p;
    unsigned int size;
    PS2_TIM_LIST_ENTRY* after2;
    PS2_TIM_LIST_ENTRY* p;
    // Line 1003, Address: 0x2e2840, Func Offset: 0
    // Line 1008, Address: 0x2e2848, Func Offset: 0x8
    // Line 1009, Address: 0x2e2850, Func Offset: 0x10
    // Line 1010, Address: 0x2e2858, Func Offset: 0x18
    // Line 1014, Address: 0x2e2860, Func Offset: 0x20
    // Line 1015, Address: 0x2e286c, Func Offset: 0x2c
    // Line 1016, Address: 0x2e2874, Func Offset: 0x34
    // Line 1017, Address: 0x2e2884, Func Offset: 0x44
    // Line 1018, Address: 0x2e2888, Func Offset: 0x48
    // Line 1019, Address: 0x2e288c, Func Offset: 0x4c
    // Line 1020, Address: 0x2e2890, Func Offset: 0x50
    // Line 1028, Address: 0x2e28a0, Func Offset: 0x60
    // Line 1030, Address: 0x2e28ac, Func Offset: 0x6c
    // Line 1031, Address: 0x2e28b0, Func Offset: 0x70
    // Line 1032, Address: 0x2e28b4, Func Offset: 0x74
    // Line 1033, Address: 0x2e28d0, Func Offset: 0x90
    // Line 1035, Address: 0x2e28d8, Func Offset: 0x98
    // Line 1041, Address: 0x2e28e0, Func Offset: 0xa0
    // Line 1036, Address: 0x2e28e4, Func Offset: 0xa4
    // Line 1038, Address: 0x2e28e8, Func Offset: 0xa8
    // Line 1042, Address: 0x2e28f8, Func Offset: 0xb8
    // Func End, Address: 0x2e2908, Func Offset: 0xc8
}

//
// Start address: 0x2e2910
int ring_check()
{
    PS2_TIM_LIST_ENTRY* p;
    PS2_TIM_LIST_ENTRY* after;
    // Line 1079, Address: 0x2e2910, Func Offset: 0
    // Line 1084, Address: 0x2e2914, Func Offset: 0x4
    // Line 1079, Address: 0x2e291c, Func Offset: 0xc
    // Line 1087, Address: 0x2e2920, Func Offset: 0x10
    // Line 1089, Address: 0x2e2924, Func Offset: 0x14
    // Line 1087, Address: 0x2e2928, Func Offset: 0x18
    // Line 1089, Address: 0x2e292c, Func Offset: 0x1c
    // Line 1086, Address: 0x2e2930, Func Offset: 0x20
    // Line 1087, Address: 0x2e2934, Func Offset: 0x24
    // Line 1089, Address: 0x2e293c, Func Offset: 0x2c
    // Line 1090, Address: 0x2e2948, Func Offset: 0x38
    // Line 1098, Address: 0x2e2958, Func Offset: 0x48
    // Func End, Address: 0x2e2964, Func Offset: 0x54
}
