#pragma once

#ifndef _NJPLUS_H_
#define _NJPLUS_H_

#include <shinobi.h>

typedef struct NJP_QUATERNION {
    float x;
    float y;
    float z;
    float w;
} NJP_QUATERNION;

typedef struct _anon2 {
    unsigned char ucType;
    unsigned char ucAttr;
    unsigned short usSize;
    unsigned short usIndexOfs;
    unsigned short usIndexMax;
} _anon2;

typedef struct _anon3 {
    unsigned char ucType;
    unsigned char ucAttr;
    unsigned short usSize;
    unsigned short usIndexOfs;
    unsigned short usIndexMax;
    unsigned char ucPadding[56];
} _anon3;


typedef struct _anon19 {
    NJS_POINT3* p;
    NJS_COLOR* col;
    NJS_COLOR* tex;
    unsigned int num;
} _anon19;

typedef struct njplus_anon17 {
    float pos[3]; // Position
    int* vlist; // Vertex list
    short* plist; // Polygon list
} njplus_anon17;

#define NJP_MAX_ELEMENTS 128

typedef struct njplus_anon20 {
    int* sknp;
    int obj_now;
    int obj_cnt;
    unsigned char* buff;
    unsigned char* bp;
    int* vlist[NJP_MAX_ELEMENTS];
    NJS_POINT3 op[NJP_MAX_ELEMENTS];
    NJS_OBJECT* cobj[NJP_MAX_ELEMENTS];
    int* sktp[NJP_MAX_ELEMENTS];
    int* vlp[NJP_MAX_ELEMENTS];
    NJS_MATRIX mxp[NJP_MAX_ELEMENTS][10];
    void* wkp;
    unsigned char* buff2;
    unsigned char* bp2;
    njplus_anon17 mdlstr2[NJP_MAX_ELEMENTS];
    int* vlp2[NJP_MAX_ELEMENTS];
    char mes[NJP_MAX_ELEMENTS * 2];
} njplus_anon20;

void npPlusInit();
int npCollisionCheckCC(NJS_CAPSULE* cpa, NJS_CAPSULE* cpb);
int npCollisionCheckCCEx(NJS_CAPSULE* cpa, NJS_CAPSULE* cpb, NJS_POINT3* pos);
int npCollisionCheckSC(NJS_SPHERE* sa, NJS_CAPSULE* cpb);
void npDistanceP2C(NJS_POINT3* pos, NJS_CAPSULE* cap, NJS_POINT3* htp);
void npDrawPlane(NJS_POINT3* ps0, NJS_POINT3* ps1, NJS_POINT3* ps2, NJS_POINT3* ps3, unsigned int argb);
void npCalcMorphing(NJS_OBJECT* obj_a, NJS_OBJECT* obj_b, float no, int obj_n);
void npTransform(NJS_OBJECT* srcobj, NJS_OBJECT* dstobj, float no, int ono);
void npPushMdlstr(NJS_OBJECT* objp, int obj_n);
void npPopMdlstr(NJS_OBJECT* objp, int obj_n);
void npPushMdlstr2(NJS_OBJECT* objp, int obj_n);
void npPopMdlstr2(NJS_OBJECT* objp, int obj_n);
void npCnkFlatOff(NJS_OBJECT* objp);
void npClrTranslate();
void npSetMemory(unsigned char* memp, unsigned int size, char dat);
void npSetMemoryL(unsigned int* memp, unsigned int size, int dat);
void npCopyMemory(unsigned char* dst, unsigned char* src, unsigned int size);
void npGetWHDSizeSub(NJS_OBJECT* objp, NJS_POINT3* whd);
void npGetWHDSize(NJS_OBJECT* objp, NJS_POINT3* whd);
void npSkinConvPreparation(NJS_OBJECT* objp);
void npSkinConvSub(NJS_OBJECT* objp);
void npSkinConvMain(NJS_OBJECT* objp);
void npSkinConvert(NJS_OBJECT* objp, int* sknp);
void npRetSkinConvMain(NJS_OBJECT* objp);
void npRetSkinConvert(NJS_OBJECT* objp, int* sknp);
unsigned int npGetMatColor(NJS_OBJECT* objp, int obj_n);
void npSetAllMatColor(NJS_OBJECT* objp, int obj_n, unsigned int argb);
void npChangeMatAlphaColor(NJS_OBJECT* objp, int obj_n, unsigned char alpha);
void npSetAllMatAlphaColor(NJS_OBJECT* objp, int obj_n, unsigned char alpha);
void npSetOffsetUV(NJS_CNK_MODEL* mdlp, short offu, short offv);
void npSetOffsetUV2(NJS_CNK_MODEL* mdlp, short offu, short offv);
int npCopyVlist(int* dstp, int* srcp);
void npCutSkin();
void npInitCalcSkin(void* pwp, int obj_n, int* sknp);
void npCalcSkin(void* pwp, int obj_n, int* sknp);
void npInitCalcSkinFM(void* pwp, int obj_n, int* sknp);
void npCalcSkinFM(void* pwp, int obj_n, int* sknp);

#endif // _NJPLUS_H_