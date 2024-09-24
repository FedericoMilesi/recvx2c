#pragma once

#ifndef _PS2_VU1_H_
#define _PS2_VU1_H_

typedef struct tagVU1_STRIP_BUF {
    float fU;
    float fV;
    float fPad0;
    float fPad1;
    float fIr;
    float fIg;
    float fIb;
    float fA;
    float fVx;
    float fVy;
    float fVz;
    float fFog;
    float fSx;
    float fSy;
    float fIz;
    float fNz;
} VU1_STRIP_BUF;

typedef struct tagVU1_PRIM_BUF {
    float fS;
    float fT;
    float fQ;
    unsigned int ulKick;
    float fR;
    float fG;
    float fB;
    float fA;
    float fX;
    float fY;
    float fZ;
    float fF;
} VU1_PRIM_BUF;

typedef struct tagVU1_COLOR {
    float fR;
    float fG;
    float fB;
    float fA;
} VU1_COLOR;

#endif // _PS2_VU1_H_