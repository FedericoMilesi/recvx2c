#include "types.h"

extern Camera cam;
extern float cmmat[0][16];
extern float* cmat;

void bhInitCamera();
void bhControlCamera();
void bhMakeCameraVector();
void bhGetCameraPosition();















































void bhInitCamera() /* Matching - 100% */ { // Line 58, Address: 0x279ea0, 0x279eb0
    npSetMemory(cam, 1196, 0); // Line 59, Address: 0x279ea4, 0x279eb4
    cam.flg = 0; // Line 60, Address: 0x279ebc
    cam.ln = 256.0; // Line 61, Address: 0x279ec4
    cam.pers = 8192; // Line 62, Address: 0x279ed0
    cam.ncut = 0; // Line 63, Address: 0x279edc
    cam.ocut = -1; // Line 64, Address: 0x279ee4
    cam.ocflg = 0; // Line 65, Address: 0x279ef0
    cam.attr = 0; // Line 66, Address: 0x279ef8, 0x279f00
    cam.mtx = cmmat[0]; // Line 67, Address: 0x279efc, 0x279f04
    cam.mtxb = cmmat[1]; // Line 68, Address: 0x279f10
    njUnitMatrix(cam.mtx); // Line 69, Address: 0x279f20
    njUnitMatrix(cam.mtxb); // Line 70, Address: 0x279f2c
} // Line 71, Address: 0x279f38





void bhControlCamera() { /* Matching - 100% */ // Line 77, Address: 0x279f50, 0x279f5c
    Vector3 pos = { 0.0, 0.0, -1.0 }, ps; // Line 78, Address: 0x279f54, 0x279f60, 0x279f70

    njSetPerspective(cam.pers); // Line 80, Address: 0x279f6c, 0x279f78
    njSetMatrix(0, cmat); // Line 81, Address: 0x279f80
    njTranslate(0, 0, 0, -cam.ln); // Line 82, Address: 0x279f90


















    njRotateZ(0, cam.az); // Line 101, Address: 0x279fac
    njRotateX(0, cam.ax); // Line 102, Address: 0x279fbc
    njRotateY(0, cam.ay); // Line 103, Address: 0x279fcc
    njTranslate(0, -(cam.px + cam.ofx), -(cam.py + cam.ofy), -(cam.pz + cam.ofz)); // Line 104, Address: 0x279fdc


    njGetMatrix(cam.mtx); // Line 107, Address: 0x27a02c

    njUnitMatrix(0); // Line 109, Address: 0x27a038
    njRotateY(0, cam.ay); // Line 110, Address: 0x27a040
    njRotateX(0, cam.ax); // Line 111, Address: 0x27a050
    njRotateZ(0 ,cam.az); // Line 112, Address: 0x27a060
    njCalcVector(0, &pos, (Vector3*)&cam.vx); // Line 113, Address: 0x27a070
    cam.vx = -cam.vx; // Line 114, Address: 0x27a084, 0x27a090
    cam.vy = -cam.vy; // Line 115, Address: 0x27a09c

    njUnitMatrix(0); // Line 117, Address: 0x27a08c, 0x27a0ac
    njTranslate(0, cam.px + cam.ofx, cam.py + cam.ofy, cam.pz + cam.ofz); // Line 118, Address: 0x27a0b4
    njRotateY(0, cam.ay); // Line 119, Address: 0x27a0f8
    njRotateX(0, cam.ax); // Line 120, Address: 0x27a108
    njRotateZ(0, cam.az); // Line 121, Address: 0x27a118
    ps.x = ps.y = 0; // Line 122, Address: 0x27a130, 0x27a138
    ps.z = -cam.ln; // Line 123, Address: 0x27a128, 0x27a140
    njCalcPoint(0, &ps, (Vector3*)&cam.wpx); // Line 124, Address: 0x27a134, 0x27a13c, 0x27a144












} // Line 137, Address: 0x27a154





void bhMakeCameraVector() /* Matching - 99.76% */ { // Line 143, Address: 0x27a160, 0x27a16c
    Vector3 pos = { 0.0, 0.0, -1.0 }; // Line 144, Address: 0x27a164, 0x27a170
    njUnitMatrix(0); // Line 145, Address: 0x27a180
    njRotateY(0, cam.ay); // Line 146, Address: 0x27a18c
    njRotateX(0, cam.ax); // Line 147, Address: 0x27a19c
    njRotateZ(0, cam.az); // Line 148, Address: 0x27a1ac
    njCalcVector(0, &pos, (Vector3*)&cam.vx); // Line 149, Address: 0x27a1bc
    cam.vx = -cam.vx; // Line 150, Address: 0x27a1d0
    cam.vy = -cam.vy; // Line 151, Address: 0x27a1e4
} // Line 152, Address: 0x27a1f8





void bhGetCameraPosition() /* Matching - 100% */ { // Line 158, Address: 0x27a210
    Vector3 ps;
    njUnitMatrix(0); // Line 160, Address: 0x27a218
    njTranslate(0, cam.px + cam.ofx, cam.py + cam.ofy, cam.pz + cam.ofz); // Line 161, Address: 0x27a220
    njRotateY(0, cam.ay); // Line 162, Address: 0x27a264
    njRotateX(0, cam.ax); // Line 163, Address: 0x27a274
    njRotateZ(0, cam.az); // Line 164, Address: 0x27a284
    ps.x = ps.y = 0; // Line 165, Address: 0x27a29c, 0x27a2a4
    ps.z = -cam.ln; // Line 166, Address: 0x27a294, 0x27a2ac
    njCalcPoint(0, &ps, (Vector3*)&cam.wpx); // Line 167, Address: 0x27a2a0, 0x27a2a8, 0x27a2b0
} // Line 168, Address: 0x27a2c0
