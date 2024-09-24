#pragma once

#ifndef _PS2_NAMATRIX_H_
#define _PS2_NAMATRIX_H_

#include "types.h"

void njInitMatrix(NJS_MATRIX* pMatrix, int lSize, int lFlag);
void njCalcPoints(NJS_MATRIX* pMatrix, NJS_POINT3* pSrcPoints, NJS_POINT3* pDstPoints, int lNum);
void njGetTranslation(NJS_MATRIX* pMatrix, NJS_POINT3* pPoint);
void njUnitTransPortion(NJS_MATRIX* pMatrix);
void njUnitRotPortion(NJS_MATRIX* pMatrix);
void njClearMatrix();
int njPushMatrix(NJS_MATRIX* pMatrix);
int njPopMatrix(unsigned int ulNumber);
void njUnitMatrix(NJS_MATRIX* pMatrix);
void njSetMatrix(NJS_MATRIX* pDst, NJS_MATRIX* pSrc);
void njSetMatrixCN(NJS_MATRIX pMat);
void njGetMatrix(NJS_MATRIX* pMatrix);
void njMultiMatrix(NJS_MATRIX* pDstMat, NJS_MATRIX* pSrcMat);
void njTranslate(NJS_MATRIX* pMatrix, float fX, float fY, float fZ);
void njTranslateV(NJS_MATRIX* pMatrix, NJS_POINT3* pVector);
void njRotateX(NJS_MATRIX* pMatrix, int lAngle);
void njRotateY(NJS_MATRIX* pMatrix, int lAngle);
void njRotateZ(NJS_MATRIX* pMatrix, int lAngle);
void njRotateXYZ(NJS_MATRIX* pMatrix, int lAngleX, int lAngleY, int lAngleZ);
void njRotXYZ(NJS_MATRIX* pMatrix, int lAngleX, int lAngleY, int lAngleZ);
void njRotate(NJS_MATRIX* pMatrix, NJS_POINT3* pAxis, int lAngle);
void njScale(NJS_MATRIX* pMatrix, float fScaleX, float fScaleY, float fScaleZ);
void njScaleV(NJS_MATRIX* pMatrix, NJS_POINT3* pScale);
int njInvertMatrix(NJS_MATRIX* pMatrix);
void njTransposeMatrix(NJS_MATRIX* pMatrix);
float njAtan2b(float a, float b);
void njMirror(NJS_MATRIX* pMatrix, NJS_PLANE* pPlane);
void njCalcPoint(NJS_MATRIX* pMatrix, NJS_POINT3* pSrcPoint, NJS_POINT3* pDstPoint);
void njCalcPoint4(NJS_MATRIX* pMatrix, NJS_POINT4* pSrcPoint, NJS_POINT4* pDstPoint);
void njCalcPointCN(NJS_POINT3* pSrcPoint, NJS_POINT3* pDstPoint);
void njAddVector(NJS_POINT3* pDstVec, NJS_POINT3* pSrcVec);
void njSubVector(NJS_POINT3* pDstVec, NJS_POINT3* pSrcVec);
void njCalcVector(NJS_MATRIX* pMatrix, NJS_POINT3* pSrcVec, NJS_POINT3* pDstVec);
float njUnitVector(NJS_POINT3* pVector);
float njScalor(NJS_POINT3* pVector);
float njScalor2(NJS_POINT3* pVector);
void njProjectScreen(NJS_MATRIX* pMatrix, NJS_POINT3* pPoint, NJS_POINT2* pScreen);
float njOuterProduct(NJS_POINT3* pSrcVec1, NJS_POINT3* pSrcVec2, NJS_POINT3* pDstVec);
float njInnerProduct(NJS_POINT3* pVec1, NJS_POINT3* pVec2);
void njTranslateEx(NJS_POINT3* pVector);
void njRotateEx(int* lpAngle, int lV);
void njScaleEx(NJS_POINT3* pScale);
int njPushMatrixEx();
int njPopMatrixEx();
void njRotTransPers(NJS_POINT3* pPoint, NJS_SCRVECTOR* pScreen);
void njRotTrans(NJS_POINT3* pPoint, NJS_POINT3* pOut);
void njPers(NJS_SCRVECTOR* pScreen);
void njCopyMatrix(NJS_MATRIX* pDstMat, NJS_MATRIX* pSrcMat);
void njMulMatrixCN(NJS_MATRIX* pSrcMat1, NJS_MATRIX* pSrcMat2);

#endif //_PS2_NAMATRIX_H_