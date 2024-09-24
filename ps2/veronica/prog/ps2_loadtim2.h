#pragma once

#ifndef _PS2_LOADTIM2_H_
#define _PS2_LOADTIM2_H_


#include "tim2.h"

int Tim2CalcBufWidth(int psm, int w);
void Set_GsTex(TIM2_PICTUREHEADER* ph, unsigned long send_image_adr, unsigned long send_clut_adr);
long128* MakeRenderTexHeader(void* tex_adr);
void StoreRenderTex(void* tex_adr);
int LoadToVram(unsigned long tbp, long128* addr, int tbw, int psm, int pos, int width, int height, int size);
int Send_1024_Clut_data(void* clt_adr, unsigned long send_clut_adr);
int Send_Tim2_dataEx(void* tim2_top_adr, unsigned long send_image_adr, unsigned long send_clut_adr);
int Clut_Load_Func(TIM2_PICTUREHEADER* ph, unsigned long clut_addr);
int P32_Image_Load(TIM2_PICTUREHEADER* ph, unsigned long image_addr);
int Tim2_Image_Load(TIM2_PICTUREHEADER* ph, unsigned long image_addr);
void Ps2PxlconvCheck(void* timadr);
void SyncPath();
void D2_SyncTag();
void loadImage(void* tags);
void ClearVram();

#define UNCMASK 0x0fffffff
#define UNCBASE 0x20000000

inline void* UncAddr(void* val)
{
    return ((void*)(((unsigned int)val & UNCMASK) | UNCBASE));
}

#undef UNCMASK
#undef UNCBASE

#endif // _PS2_LOADTIM2_H_