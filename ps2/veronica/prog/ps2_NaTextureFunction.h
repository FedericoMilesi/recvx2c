#pragma once

#ifndef _PS2_NATEXTUREFUNCTION_H_
#define _PS2_NATEXTUREFUNCTION_H_

#include <shinobi.h>

void Ps2MemCopy4(void* vpDst, void* vpSrc, int lNum);
void njInitTextureBuffer(Sint8* addr, Uint32 size);
void njInitTexture(NJS_TEXMEMLIST* addr, unsigned int n);
void njExitTexture();
int SearchNumber(unsigned int global_index, unsigned int bank);
int SearchNullNumber();
int njLoadTexture(NJS_TEXLIST* texlist);
int njSetTexture(NJS_TEXLIST* texlist);
int njSetTextureNum(unsigned int n);
int njSetTextureNumG(unsigned int globalIndex);
int njSetTextureNumSys(unsigned int n);
void njReleaseTextureAll();
int njReleaseTexture(NJS_TEXLIST* texlist);
Uint32 njCalcTexture(Uint32 flag);
void njSetTextureInfo(NJS_TEXINFO* info, unsigned short* tex, int Type, int nWidth, int nHeight);
void njSetTextureName(NJS_TEXNAME* texname, void* addr, unsigned int globalIndex, unsigned int attr);
void njRenderTextureNum(Uint32 n);
void njRenderTextureNumG(unsigned int globalIndex);
void njSetRenderWidth(unsigned int nWidth);
void njSetPaletteBankNum(Uint32 n, Sint32 bank);
void njSetPaletteMode(Uint32 mode);
Uint32 njGetPaletteMode(void);
void njSetPaletteData(Sint32 offset, Sint32 count, void* data);
void njGarbageTexture(NJS_TEXMEMLIST* addr, Uint32 n);
unsigned int Ps2GetTim2Size(void* p);
int Ps2TextureMalloc(NJS_TEXMEMLIST* p);
int Ps2TextureFree(NJS_TEXMEMLIST* p);
int Ps2ReplaceTexAddr(unsigned int gindex, void* rep_addr);
int Ps2TextureGarbageCollectionAll();
int ring_check();

#endif // _PS2_NATEXTUREFUNCTION_H_