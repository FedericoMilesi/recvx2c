#pragma once

#ifndef _PS2_NINJACNK_H_
#define _PS2_NINJACNK_H_

#include <shinobi.h>
#include "ps2_Vu1.h"

typedef struct tagCHUNK_HEAD {
    unsigned char ucType;      // Type of the chunk (identifies the kind of data).
    unsigned char ucHeadBits;  // Additional bits or flags associated with the chunk header.
    unsigned short usSize;     // Size of the chunk in bytes.
} CHUNK_HEAD;

typedef struct CHUNK_ENTRY {
    unsigned char ucType;      // Type of the chunk entry (indicates its specific role or data type).
    unsigned char ucAttr;      // Attribute flags (could specify properties like visibility, collision, etc.).
    unsigned short usSize;     // Size of the chunk entry.
    unsigned short usIndexOfs; // Offset into an index table (could relate to a list of sub-elements or references).
    unsigned short usIndexMax; // Maximum index value (limits the range of indices within the chunk entry).
} CHUNK_ENTRY;

typedef struct tagCNK_PRIM_BUF {
    Float fS;
    Float fT;
    Float fQ;
    Uint32 ulKick;
    Float fR;
    Float fG;
    Float fB;
    Float fA;
    Float fX;
    Float fY;
    Float fZ;
    Float fF;
} CNK_PRIM_BUF;

struct _anon14 {
    Uint32 gindex;
    Uint32 size;
    Uint32 count;
    void* addr;
    void* before;
    void* after;
};

struct VU1_COLOR {
    Float fR;
    Float fG;
    Float fB;
    Float fA;
};

struct _anon15 {
    unsigned char ucType;
    unsigned char ucAttr;
    unsigned short usSize;
    unsigned short usIndexOfs;
    unsigned short usIndexMax;
    unsigned char ucPadding[56];
};

typedef struct tagCNK_LIGHT {
    Uint32 ulState;
    Uint32 ulMode;
    Float fNearRR;
    Float fFarRR;
    Float fR;
    Float fG;
    Float fB;
    Float fI;
    Float fWx;
    Float fWy;
    Float fWz;
    Float pad0;
    Float fCx;
    Float fCy;
    Float fCz;
    Float pad1;
} CNK_LIGHT;

typedef struct tagCNK_LIGHTING {
    CNK_LIGHT* pLightTop;
    Int lLightMax;
    VU1_COLOR* pDiffuse;
    VU1_COLOR* pSpecula;
    VU1_COLOR* pAmbient;
    Uint32 pad[11];
} CNK_LIGHTING;

void njInit3D(NJS_VERTEX_BUF* pBufferTop, Int iBufferMax);
void njDrawModel(NJS_MODEL* pModel);
void njControl3D(Uint32 ulFlag);
void njSetConstantAttr(Uint32 ulAnd, Uint32 ulOr);
void njSetConstantMaterial(NJS_ARGB* pMaterial);
void njSetCnkBlendMode(Uint32 ulAttr);
void njCnkModDrawModel(NJS_CNK_MODEL* pModel);
void njCnkSetEasyLight(Float fX, Float fY, Float fZ);
void njCnkSetEasyLightIntensity(Float fDiffuse, Float fAmbient);
void njCnkSetEasyLightColor(Float fR, Float fG, Float fB);
void njCnkSetEasyMultiLight(Int iLightMax);
void njCnkSetEasyMultiLightSwitch(Int iLightNum, Int iSwitch);
void njCnkSetEasyMultiAmbient(Float fR, Float fG, Float fB);
void njCnkSetEasyMultiLightColor(Int iLightNum, Float fR, Float fG, Float fB);
void njCnkSetEasyMultiLightVector(Float fX, Float fY, Float fZ);
void njCnkSetEasyMultiLightPoint(Int iLightNum, Float fX, Float fY, Float fZ);
void njCnkSetEasyMultiLightRange(Int iLightNum, Float fNear, Float fFar);
void njCnkSetEasyMultiLightMatrices();
void njCnkSetSimpleLight(Float fX, Float fY, Float fZ);
void njCnkSetSimpleLightIntensity(Float fDiffuse, Float fAmbient);
void njCnkSetSimpleLightColor(Float fR, Float fG, Float fB);
void njCnkSetSimpleMultiLight(Int lLightMax);
void njCnkSetSimpleMultiLightSwitch(Int iLightNum, Int iSwitch);
void njCnkSetSimpleMultiAmbient(Float fR, Float fG, Float fB);
void njCnkSetSimpleMultiLightColor(Int iLightNum, Float fR, Float fG, Float fB);
void njCnkSetSimpleMultiLightVector(Float fX, Float fY, Float fZ);
void njCnkSetSimpleMultiLightPoint(Int iLightNum, Float fX, Float fY, Float fZ);
void njCnkSetSimpleMultiLightRange(Int iLightNum, Float fNear, Float fFar);
void njCnkSetSimpleMultiLightMatrices();
void njCnkEasyDrawModel(NJS_CNK_MODEL* pModel);
void njCnkEasyDrawObject(NJS_CNK_OBJECT* pObject);
void njCnkEasyMultiDrawModel(NJS_CNK_MODEL* pModel);
void njCnkEasyMultiDrawObject(NJS_CNK_OBJECT* pObject);
void njCnkSimpleDrawModel(NJS_CNK_MODEL* pModel);
void njCnkSimpleMultiDrawModel(NJS_CNK_MODEL* pModel);
void njCnkSetCurrentDrawMode(Uint32 ulMode);
Int njCnkDrawModelLocal(NJS_CNK_MODEL* pModel);
Int njCnkDrawModelLocalMod(NJS_CNK_MODEL* pModel);
CHUNK_HEAD* njCnkCn(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCbBa(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCbDa(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCbExp(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCtTid(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmD(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmA(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmDa(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmS(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmDs(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmAs(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCmDas(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCoP4(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCoSt(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCvVn(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCvVnPs2(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCvVMod(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCoP3(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkCs(CHUNK_HEAD* pCnk);
Int _CVV(Float* v0);
CHUNK_HEAD* njCnkDefaultLong(CHUNK_HEAD* pCnk);
CHUNK_HEAD* njCnkDefaultShort(CHUNK_HEAD* pCnk);
void njCnkEasyMultiDrawObjectI(NJS_CNK_OBJECT* pObject);

#endif //_PS2_NINJACNK_H_