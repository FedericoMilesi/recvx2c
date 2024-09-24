#pragma once

#ifndef _PS2_VU1STRIP_H_
#define _PS2_VU1STRIP_H_

#include <shinobi.h>
#include <libvu0.h>
#include "ps2_Vu1.h"

typedef struct SCISSOR_NODE {
    sceVu0FVECTOR vertex;
    sceVu0FVECTOR color;
    sceVu0FVECTOR texUV;
    sceVu0FVECTOR clipV;
} SCISSOR_NODE;

typedef struct SCISSOR_NODE_ARRAY {
    SCISSOR_NODE node[12];
    Uint32 nodeNum;
    float pad[3];
} SCISSOR_NODE_ARRAY;

typedef struct VECTOR4 {
    Float x;
    Float y;
    Float z;
    Float w;
} VECTOR4;

typedef struct SCISSOR_SYSTEM {
    SCISSOR_NODE_ARRAY triangle;
    SCISSOR_NODE_ARRAY narray[2];
    SCISSOR_NODE_ARRAY* in;
    SCISSOR_NODE_ARRAY* out;
    Uint32 rotflag;
    Uint32 flipflag;
} SCISSOR_SYSTEM;

typedef struct SCISSOR_PLANE {
    Uint32 xyzflag;
    Uint32 clipmask;
} SCISSOR_PLANE;

typedef struct SCISSOR_PLANE_SET {
    SCISSOR_PLANE plane[5];
    Uint32 planeNum;
} SCISSOR_PLANE_SET;

void vu1SetScreenProjection(float fProjection);
void vu1SetNearFarClip(float fNear, float fFar);
void vu1SetScreenOffset(float fOffsetX, float fOffsetY);
void vu1SetScreenAspect(float fAspectW, float fAspectH);
void vu1SetDiffuseMaterial(VU1_COLOR* pDiffuse);
void vu1SetSpeculaMaterial(VU1_COLOR* pSpecula);
void vu1SetAmbient(VU1_COLOR* pAmbient);
void vu1SetAlphaRatio(float fAlpha);
void InitNodeArraySet(SCISSOR_SYSTEM* scissor);
void InitScissorPlane(SCISSOR_PLANE_SET* sp);
void _Init_ScissorSystem();
int _Clip_ViewVolume(float* clip, float local_clip[4], float* vertex);
void PushTriangleNodeArray(SCISSOR_SYSTEM* scissor);
void ResetNodeArraySet(SCISSOR_SYSTEM* scissor);
void ScissorTriangle(SCISSOR_SYSTEM* scissor, SCISSOR_PLANE_SET* plane_set);
int _Check_DisplayAreaPoint(NJS_POINT3* vec);
void DrawScissorPolygonOpaque(SCISSOR_SYSTEM* scissor, unsigned long ulType);
void vu1DrawTriangleStripOpaqueSingle(unsigned long ulType, VU1_STRIP_BUF* pStripTop, unsigned short usStripMax, unsigned short usMode);
void vu1DrawTriangleStripOpaqueDouble(unsigned long ulType, VU1_STRIP_BUF* pS, unsigned short usStripMax, unsigned short usMode);
void vu1DrawTriangleStripTransSingle(unsigned long ulType, VU1_STRIP_BUF* pStripTop, unsigned short usStripMax, unsigned short usMode);
int _Clip_Screen(float* clip);
void vu1DrawTriangleStripTransDouble(unsigned long ulType, VU1_STRIP_BUF* pS, unsigned short usStripMax, unsigned short usMode);
void vu1GetVertexColor(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorCM(VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorIgnore(VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDif(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifAmb(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe1(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe2(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe3(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe1Amb(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe2Amb(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1GetVertexColorDifSpe3Amb(VU1_STRIP_BUF* pStrip, VU1_PRIM_BUF* pPrim);
void vu1RotTransStripBuf(NJS_MATRIX* pMatrix, NJS_POINT3* pVector, VU1_STRIP_BUF* pBuf);
void vu1DrawTriangleStripTransDoubleI(unsigned long ulType, VU1_STRIP_BUF* pS, unsigned short usStripMax, unsigned short usMode);
void DrawScissorPolygonTrans1P(SCISSOR_SYSTEM* scissor, unsigned long ulType);
void vu1DrawTriangleStripTransDouble1P(unsigned long ulType, VU1_STRIP_BUF* pS, unsigned short usStripMax, unsigned short usMode);

#endif // _PS2_VU1STRIP_H_
