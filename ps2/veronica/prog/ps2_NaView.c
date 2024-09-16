#include "types.h"

float fNaViwOffsetX;
float fNaViwOffsetY;
float fNaViwAspectW;
float fNaViwAspectH;
float fNaViwClipNear;
float fNaViwClipFar;
float _fNaViwClipNear;
float _fNaViwClipFar;
float ClipDispW;
float ClipDispH;
NJS_SCREEN _nj_screen_;
NJS_MATRIX NaViewScreenMatrix;
float fNaViwHalfH;
float fNaViwHalfW;
NJS_MATRIX NaViwViewMatrix;
Unknown31 ClipVolume;
float ClipScreenMatrix[4][4];
float ClipMatrix2[4][4];
float fVu1Projection;

void njSetScreen(NJS_SCREEN* pScreen);
void njSetPerspective(int lAngle);
void njSetScreenProjection(float dist);
void njSetAspect(float fW, float fH);
void njInitView(NJS_VIEW* pView);
void njSetView();
void njClipZ(float fNear, float fFar);
int njCalcScreen(NJS_POINT3* pPoint, float* fpScreenX, float* fpScreenY);
void njViewScreenMatrix(NJS_MATRIX vs);
//void _Make_ClipMatrix(float sc[4], float scr, float near, float far);
void _Make_ClipMatrix(sceVu0FMATRIX sc, float scr, float near, float far);
void _Make_ClipVolume(float x, float y);






















































































/* 100% match */
void njSetScreen(NJS_SCREEN* pScreen) { // Line 122, Address: 0x2e2970
    _nj_screen_.dist = pScreen->dist; // Line 123, Address: 0x2e297c
    
    Ps2CalcScreenCone(); // Line 125, Address: 0x2e2988
    
    _nj_screen_.w = pScreen->w; // Line 127, Address: 0x2e2990, 0x2e29a4
    _nj_screen_.h = pScreen->h; // Line 128, Address: 0x2e29a8, 0x2e29bc
    _nj_screen_.cx = pScreen->cx; // Line 129, Address: 0x2e29c0, 0x2e29d8
    _nj_screen_.cy = pScreen->cy; // Line 130, Address: 0x2e29dc
    fNaViwOffsetX = 1728.0f + pScreen->cx; // Line 131, Address: 0x2e2998, 0x2e29f0, 0x2e2a00
    fNaViwOffsetY = 1808.0f + pScreen->cy; // Line 132, Address: 0x2e29a0, 0x2e29b0, 0x2e2a0c, 0x2e2a2c
    
    fNaViwHalfW = _nj_screen_.w / 2.0f; // Line 134, Address: 0x2e29b4, 0x2e29e8, 0x2e29fc, 0x2e2a24
    ClipDispW = 2047.0f; // Line 135, Address: 0x2e29f4, 0x2e2a14, 0x2e2a38




    
    ClipDispH = 2047.0f; // Line 141, Address: 0x2e29c8, 0x2e2a10, 0x2e2a18
    fNaViwHalfH = _nj_screen_.h / 2.0f; // Line 142, Address: 0x2e2a1c

    
    njViewScreenMatrix(&NaViewScreenMatrix[0]); // Line 145, Address: 0x2e29d0, 0x2e2a40
    
    vu1SetScreenProjection(_nj_screen_.dist); // Line 147, Address: 0x2e2a48
    vu1SetScreenOffset(fNaViwOffsetX, fNaViwOffsetY); // Line 148, Address: 0x2e2a54
    
} // Line 150, Address: 0x2e2a68














/* 100% match */
void njSetPerspective(int lAngle) { // Line 166, Address: 0x2e2a94
    lAngle >>= 1; // Line 167, Address: 0x2e2a80
    _nj_screen_.dist = (_nj_screen_.w / 2.0f) / tanf(0.0000958738f * lAngle); // Line 168, Address: 0x2e2a84, 0x2e2a9c
    
    Ps2CalcScreenCone(); // Line 170, Address: 0x2e2acc



    
    njViewScreenMatrix(&NaViewScreenMatrix[0]); // Line 175, Address: 0x2e2ad4
    
    vu1SetScreenProjection(_nj_screen_.dist); // Line 177, Address: 0x2e2ae0
} // Line 178, Address: 0x2e2aec











/* 100% match */
void njSetScreenProjection(float dist) { // Line 191, Address: 0x2e2b00
    _nj_screen_.dist = dist; // Line 192, Address: 0x2e2b08
    
    Ps2CalcScreenCone(); // Line 194, Address: 0x2e2b0c



    
    njViewScreenMatrix(&NaViewScreenMatrix[0]); // Line 199, Address: 0x2e2b14
    
    vu1SetScreenProjection(_nj_screen_.dist); // Line 201, Address: 0x2e2b20
    
} // Line 203, Address: 0x2e2b2c
















/* 100% match */
void njSetAspect(float fW, float fH) { // Line 221, Address: 0x2e2b40
    fNaViwAspectW = fW; // Line 222, Address: 0x2e2b50
    fNaViwAspectH = fH; // Line 223, Address: 0x2e2b5c, 0x2e2b68

    
    njViewScreenMatrix(&NaViewScreenMatrix[0]); // Line 226, Address: 0x2e2b58, 0x2e2b60, 0x2e2b6c
    
    vu1SetScreenAspect(fW, fH); // Line 228, Address: 0x2e2b74
    
} // Line 230, Address: 0x2e2b80





















/* 100% match */
void njInitView(NJS_VIEW *pView) {
    pView->px = 0; // Line 254, Address: 0x2e2ba0
    pView->py = 0; // Line 255, Address: 0x2e2ba4
    pView->pz = 0; // Line 256, Address: 0x2e2ba8

    
    pView->vx = 0; // Line 259, Address: 0x2e2bac
    pView->vy = 0; // Line 260, Address: 0x2e2bb0
    pView->vz = -1.0f; // Line 261, Address: 0x2e2bb4

    
    pView->roll = 0; // Line 264, Address: 0x2e2bbc

    
    pView->apx = 0; // Line 267, Address: 0x2e2bc0
    pView->apy = 0; // Line 268, Address: 0x2e2bc4
    pView->apz = 0; // Line 269, Address: 0x2e2bc8

    
    pView->avx = 0; // Line 272, Address: 0x2e2bcc
    pView->avy = 0; // Line 273, Address: 0x2e2bd0
    pView->avz = -1.0f; // Line 274, Address: 0x2e2bd4

    
    pView->aroll = 0; // Line 277, Address: 0x2e2bdc
    
    ClipDispW = 2047.0f; // Line 279, Address: 0x2e2bd8, 0x2e2be0
    ClipDispH = 2047.0f; // Line 280, Address: 0x2e2bec
} // Line 281, Address: 0x2e2bf0



















/* 100% match */
void njSetView() { // Line 302, Address: 0x2e2c00
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    NaViwViewMatrix[0] = 1.0f; // Line 353, Address: 0x2e2c08
    NaViwViewMatrix[1] = 0; // Line 354, Address: 0x2e2c14
    NaViwViewMatrix[2] = 0; // Line 355, Address: 0x2e2c1c
    NaViwViewMatrix[4] = 0; // Line 356, Address: 0x2e2c24
    NaViwViewMatrix[5] = -1.0f; // Line 357, Address: 0x2e2c2c
    NaViwViewMatrix[6] = 0; // Line 358, Address: 0x2e2c38
    NaViwViewMatrix[8] = 0; // Line 359, Address: 0x2e2c40
    NaViwViewMatrix[9] = 0; // Line 360, Address: 0x2e2c48
    NaViwViewMatrix[10] = -1.0f; // Line 361, Address: 0x2e2c50
    NaViwViewMatrix[12] = 0; // Line 362, Address: 0x2e2c58
    NaViwViewMatrix[13] = 0; // Line 363, Address: 0x2e2c60, 0x2e2c68
    NaViwViewMatrix[14] = 0; // Line 364, Address: 0x2e2c6c


    
    njViewScreenMatrix(&NaViewScreenMatrix[0]); // Line 368, Address: 0x2e2c64, 0x2e2c70

    
    njClearMatrix(); // Line 371, Address: 0x2e2c7c

    
} // Line 374, Address: 0x2e2c84




















/* 100% match */
void njClipZ(float fNear, float fFar) { // Line 396, Address: 0x2e2c98
    if (-1.0f < fNear) { // Line 397, Address: 0x2e2c90, 0x2e2c9c
        fNear = -1.0f; // Line 398, Address: 0x2e2cb0
    }
    if (fFar < -65535.0f) { // Line 400, Address: 0x2e2cd4
        fFar = -65535.0f; // Line 401, Address: 0x2e2cdc
    } // Line 402, Address: 0x2e2ce4
    fNaViwClipNear = fNear; // Line 403, Address: 0x2e2cf0
    
    fNaViwClipFar = fFar; // Line 405, Address: 0x2e2cfc
    
    _fNaViwClipNear = -fNear; // Line 407, Address: 0x2e2d10


    
    _fNaViwClipFar = -fFar; // Line 411, Address: 0x2e2d18
    vu1SetNearFarClip(_fNaViwClipNear, _fNaViwClipFar);
    CalcPs2ZbuffAB();
}



















/* 100% match */
int njCalcScreen(NJS_POINT3* pPoint, float* fpScreenX, float* fpScreenY) { // Line 435, Address: 0x2e2d30
    float fZ;
    float fSY;
    float fSX;
    NJS_POINT3 Point;

    njCalcPoint(&NaViwViewMatrix[0], pPoint, &Point); // Line 441, Address: 0x2e2d48


    fZ = _nj_screen_.dist / Point.z; // Line 444, Address: 0x2e2d5c, 0x2e2d64, 0x2e2d78
    fSX = Point.x * fZ; // Line 445, Address: 0x2e2d60, 0x2e2d84
    fSY = Point.y * fZ; // Line 446, Address: 0x2e2d70, 0x2e2d94
    *fpScreenX = fNaViwOffsetX + fSX; // Line 447, Address: 0x2e2d74, 0x2e2d7c, 0x2e2d88
    *fpScreenY = fNaViwOffsetY + fSY; // Line 448, Address: 0x2e2d80, 0x2e2d90, 0x2e2d98, 0x2e2da0


    if (Point.z < _fNaViwClipNear) return -1; // Line 451, Address: 0x2e2d9c, 0x2e2da4
    if (_fNaViwClipFar < Point.z) return -1; // Line 452, Address: 0x2e2dc4
    if (fSX < -fNaViwHalfW) return -1; // Line 453, Address: 0x2e2de4
    if (fNaViwHalfW < fSX) return -1; // Line 454, Address: 0x2e2e08
    if (fSY < -fNaViwHalfH) return -1; // Line 455, Address: 0x2e2e20
    if (fNaViwHalfH < fSY) return -1; // Line 456, Address: 0x2e2e44
    return 0;
} // Line 458, Address: 0x2e2e60





























































/* 100% match */
void njViewScreenMatrix(NJS_MATRIX vs) { // Line 521, Address: 0x2e2e80
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    njUnitMatrix(vs); // Line 548, Address: 0x2e2e8c
    vs[0] = fNaViwAspectW; // Line 549, Address: 0x2e2e94, 0x2e2ea0
    vs[5] = fNaViwAspectH; // Line 550, Address: 0x2e2ea4
    vs[10] = 1.0f; // Line 551, Address: 0x2e2e9c, 0x2e2eb0
    vs[12] = 0; // Line 552, Address: 0x2e2eb4
    vs[13] = 0; // Line 553, Address: 0x2e2eb8
    vs[14] = 0; // Line 554, Address: 0x2e2ebc
    vs[15] = _nj_screen_.dist; // Line 555, Address: 0x2e2ec0
    
} // Line 557, Address: 0x2e2ecc





















/* 100% match */
//void _Make_ClipMatrix(float sc[4], float scr, float near, float far) {
void _Make_ClipMatrix(sceVu0FMATRIX sc, float scr, float near, float far) { // Line 581, Address: 0x2e2ee0
    Unknown31* cv;
	float gsx;
	float gsy;
    register float (*mp2)[4]; // not originally outputted by dwarf2cpp
    float *fM, *fw, *fh; // not originally outputted by dwarf2cpp
    float (*mp)[4] = sc; // not originally outputted by dwarf2cpp
    
    if (mp == NULL) mp = &ClipMatrix2[0]; // Line 589, Address: 0x2e2f04
    cv = &ClipVolume; // Line 590, Address: 0x2e2f14













    

    
    gsx = (near * cv->x) / scr; // Line 607, Address: 0x2e2f1c, 0x2e2f28 
    gsy = (near * cv->y) / scr; // Line 608, Address: 0x2e2f20, 0x2e2f34 




    
    
    sceVu0UnitMatrix(mp); // Line 615, Address: 0x2e2f24, 0x2e2f44 

    mp[0][0] = (2.0f * near) / (gsx + gsx); // Line 617, Address: 0x2e2f4c, 0x2e2f58, 0x2e2f68, 0x2e2f70, 0x2e2f78
    mp[1][1] = (2.0f * near) / (gsy + gsy); // Line 618, Address: 0x2e2f6c, 0x2e2f7c, 0x2e2f84
    
    
    
    
    mp[2][2] = (far + near) / (far - near); // Line 623, Address: 0x2e2f8c, 0x2e2f9c
    mp[3][2] = (-2.0f * far * near) / (far - near); // Line 624, Address: 0x2e2f54, 0x2e2f74, 0x2e2f80, 0x2e2f88, 0x2e2f98, 0x2e2fa0 
    mp[2][3] = 1.0f; // Line 625, Address: 0x2e2f60, 0x2e2fa4
    mp[3][3] = 0; // Line 626, Address: 0x2e2fa8

    mp2 = &ClipMatrix2[0]; // Line 628, Address: 0x2e2f5c, 0x2e2f64
    asm ( lqc2 $vf24, 0x00(mp2); // Line 629, Address: 0x2e2fac
        lqc2 $vf25, 0x10(mp2); // Line 630, Address: 0x2e2fb0
        lqc2 $vf26, 0x20(mp2); // Line 631, Address: 0x2e2fb4
        lqc2 $vf27, 0x30(mp2); // Line 632, Address: 0x2e2fb8
    );

    



    





    



















    



    fM = ClipScreenMatrix[0]; fw = &ClipDispW; fh = &ClipDispH; // Line 669, Address: 0x2e2fbc
    asm ("lwc1 $f8, 0(%0)" : : "r"(fw)); // Line 670, Address: 0x2e2fd4
    asm ("lwc1 $f9, 0(%0)" : : "r"(fh)); // Line 671, Address: 0x2e2fd8
    asm ("swc1 $f8, 0x2c(%0)" : "=r"(fM)); // Line 672, Address: 0x2e2fdc
    asm ("swc1 $f9, 0x28(%0)" : "=r"(fM)); // Line 673, Address: 0x2e2fe0






    
} // Line 681, Address: 0x2e2fe4


























































/* 100% match */
void _Make_ClipVolume(float x, float y) { // Line 741, Address: 0x2e3014
    if ((x < 0) && (y < 0)) { // Line 742, Address: 0x2e3010, 0x2e3018
        
        ClipDispW = 0.5f * -x; // Line 744, Address: 0x2e3038, 0x2e3060
        ClipVolume.x = 320.0f; // Line 745, Address: 0x2e3070, 0x2e3078, 0x2e3084
        
        ClipDispH = 0.5f * -y; // Line 747, Address: 0x2e3048
        ClipVolume.y = 240.0f; // Line 748, Address: 0x2e3054
        
        _Make_ClipMatrix(ClipMatrix2[0], fVu1Projection, _fNaViwClipNear, _fNaViwClipFar); // Line 750, Address: 0x2e3068, 0x2e3074, 0x2e307c, 0x2e308c
    } // Line 751, Address: 0x2e309c
    else {
        ClipVolume.x = x; // Line 753, Address: 0x2e30b4
        ClipVolume.y = y; // Line 754, Address: 0x2e30c4
        
        ClipDispW = 2047.0f; // Line 756, Address: 0x2e30a4
        ClipDispH = 2047.0f; // Line 757, Address: 0x2e30ac
        
        _Make_ClipMatrix(ClipMatrix2[0], fVu1Projection, _fNaViwClipNear, _fNaViwClipFar); // Line 759, Address: 0x2e30cc
    }
} // Line 761, Address: 0x2e30f0
