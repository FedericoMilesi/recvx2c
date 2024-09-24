#pragma once

#ifndef _PS2_DUMMY_H_
#define _PS2_DUMMY_H_

#include <shinobi.h>

typedef struct PS2_GS_SAVE {
    unsigned long SC_TAG[2];
    unsigned long GIF_TAG[2];
    unsigned long TEX0;
    unsigned long TEX0_TAG;
    unsigned long TEX0_NEXT;
    unsigned long TEX0_NEXT_TAG;
    unsigned long TEX1;
    unsigned long TEX1_TAG;
    unsigned long CLAMP;
    unsigned long CLAMP_TAG;
    unsigned long TEST;
    unsigned long TEST_TAG;
    unsigned long FOGCOL;
    unsigned long FOGCOL_TAG;
    unsigned long ALPHA;
    unsigned long ALPHA_TAG;
    unsigned long FBA;
    unsigned long FBA_TAG;
    unsigned long SCISSOR;
    unsigned long SCISSOR_TAG;
    unsigned char mode_bk[2];
    unsigned char set_last;
    unsigned char dc_alpha;
    unsigned int pad32;
    unsigned long pad64;
} PS2_GS_SAVE; 

struct _anon11 {
    unsigned short on;
    unsigned short old;
    unsigned short push;
    unsigned short release;
    short send;
    unsigned short ad_flag;
    unsigned char buff[2];
    unsigned short onon;
    unsigned short repeat;
    char time1[16];
    char time2[16];
    unsigned char rh;
    unsigned char rv;
    unsigned char lh;
    unsigned char lv;
    unsigned char au;
    unsigned char ad;
    unsigned char al;
    unsigned char ar;
    unsigned char abu;
    unsigned char abd;
    unsigned char abl;
    unsigned char abr;
    unsigned char al1;
    unsigned char al2;
    unsigned char ar1;
    unsigned char ar2;
};

struct _anon16 {
    unsigned long GIF_TAG[2];
    unsigned long TEX0;
    unsigned long TEX0_TAG;
    unsigned long TEX0_NEXT;
    unsigned long TEX0_NEXT_TAG;
    unsigned long CLAMP;
    unsigned long CLAMP_TAG;
};

// The structure of the OT list was empty in the output of the disassembler
// struct PS2_OT_LIST
// {
// };
// Fixing it with a void pointer
typedef void PS2_OT_LIST;

struct _anon17 {
    NJS_TEXMEMLIST* tp;
    unsigned char mode_bk[2];
    unsigned char set_last;
    unsigned char dc_alpha;
    PS2_OT_LIST* op;
    void* p;
    unsigned long ALPHA;
    unsigned long TEX0;
    unsigned long TEX0_NEXT;
    unsigned int bank;
    unsigned int pad;
};

struct _anon31 {
    void* tp; // Texture pointer
    unsigned int bank; // Texture bank
    unsigned int tex_addr; // Texture address
    unsigned int clt_addr; // Clut address
};

// Temporary fix for the structures
typedef struct _anon11 _anon11;
typedef struct _anon16 _anon16;
typedef struct _anon17 _anon17;
typedef struct _anon31 _anon31;

void _builtin_set_imask(int mask);
void Ps2Init();
void Ps2LoadModule(char* p);
void Snd_init();
void Cd_init();
void Card_init();
void PS2_jikken();
void PS2_swap();
void Ps2AddPrim(unsigned long prim, void* dp, unsigned int num, unsigned int clip_3d_on);
void Ps2AddPrim2D(unsigned long prim, void* dp, unsigned int num);
void Ps2AddPrim3D(unsigned long prim, void* dp, unsigned int num);
void Ps2AddPrim3DEx(unsigned long prim, void* dp, unsigned int num);
void Ps2AddPrim3DEx1P(unsigned long prim, void* dp, unsigned int num);
void Ps2AddPrim3DMod(unsigned long prim, void* dp, unsigned int num);
void Ps2ClearOT();
void Ps2AddOT(void* p, unsigned int num, float z, unsigned long prim);
void Ps2DrawOTag();
int Ps2DrawOTagSub(int start_no);
unsigned int Ps2BitCount(unsigned int value);
void Ps2InitTexCache();
int Ps2GlobalIndexTexLoad(unsigned int index);
int Ps2TexLoad(NJS_TEXMEMLIST* addr);
void Ps2SetFogColor();
void Ps2SetFogColorSys(unsigned int r, unsigned int g, unsigned int b);
void Ps2AlphaIs000(unsigned int* cp, unsigned int num);
unsigned int Ps2AlphaIsHalf(unsigned int* cp, unsigned int num);
unsigned int Ps2Alpha4to8(unsigned int* cp, unsigned int num);
int Ps2CheckTextureAlpha(void* pp);
void Ps2InitPS2_GS_SAVE();
void Ps2ScreenClear();
void Ps2DispScreenClear();
void Ps2ZbuffOff();
void Ps2ZbuffOff2();
void Ps2ZbuffOn();
void Ps2ShadowStart();
void Ps2ShadowDraw();
void Ps2ShadowMain0();
void Ps2ShadowMain1();
void Ps2ShadowEnd();
void Ps2Vu0ProgSend(unsigned int prog_no);
void Ps2Vu1ProgSend(unsigned int prog_no);
void Ps2AddPrim3DExI(unsigned long prim, void* dp, unsigned int num);
void PS2_Render_Tex_Sub();

#endif // _PS2_DUMMY_H_