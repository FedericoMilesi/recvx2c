#pragma once

#ifndef _PS2_NAVIEW_H_
#define _PS2_NAVIEW_H_

#include "types.h"
#include <libvu0.h>

void njSetScreen(NJS_SCREEN* pScreen);
void njSetPerspective(Angle lAngle);
void njSetScreenProjection(Float dist);
void njSetAspect(Float fW, Float fH);
void njInitView(NJS_VIEW* pView);
void njSetView(NJS_VIEW* v);
void njClipZ(Float fNear, Float fFar);
int njCalcScreen(NJS_POINT3* pPoint, Float* fpScreenX, Float* fpScreenY);
void njViewScreenMatrix(NJS_MATRIX* vs);
void _Make_ClipMatrix(sceVu0FMATRIX sc, Float scr, Float near, Float far);
void _Make_ClipVolume(Float x, Float y);

#endif // _PS2_NAVIEW_H_