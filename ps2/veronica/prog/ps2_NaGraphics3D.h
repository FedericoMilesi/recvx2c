#pragma once

#ifndef _PS2_NAGRAPHICS3D_H_
#define _PS2_NAGRAPHICS3D_H_

#include "types.h"
#include <libvu0.h>

typedef struct VU0_PLANE {
    sceVu0FVECTOR norm;
    sceVu0FVECTOR pos;
} VU0_PLANE;

void Ps2SetPlane(VU0_PLANE* p, float* v0, float* v1, float* v2);
void Ps2CalcScreenCone();
float Calc_Intersection2(float* v0, float* v1, VU0_PLANE* plane);
int CalcIntersectionCone(float* ans, float* v0, float* v1);
float Head_or_Tail(float* v);
float Across_Plane(float* v0, float* v1);
void njDrawLine3D(NJS_POINT3COL* p, Int n, Uint32 attr);
void njDrawLine3DEx(NJS_POINT3COL* p, Int n, Uint32 attr);
void njDrawTriangle3D(NJS_POINT3COL* p, Int n, Uint32 attr);
void njDrawPolygon3D(NJS_POINT3COL* p, Int n, Uint32 attr);

#endif // _PS2_NAGRAPHICS3D_H_