typedef struct _anon0;
typedef struct tagNJS_SCRVECTOR;
typedef struct _anon1;


typedef float type_0[4][256];
typedef float type_1[4];
typedef float type_2[4][256];

struct _anon0
{
	float x;
	float y;
	float z;
};

struct tagNJS_SCRVECTOR
{
	float x;
	float y;
	float z;
	float iz;
	float fog;
};

struct _anon1
{
	float dist;
	float w;
	float h;
	float cx;
	float cy;
};

unsigned int Ps2_ptcl_poly_col;
int Ps2_ptcl_spr_flag;
unsigned int Ps2_ptcl_spr_col;
_anon1 _nj_screen_;

void njPtclPolygonStart(unsigned int col);
void njPtclPolygonEnd();
void njPtclDrawPolygon(NJS_POINT3* p, int n, float h);
void njPtclSpriteStart(int texid, unsigned int col, int flag);
void njPtclSpriteEnd();
void njPtclDrawSprite(NJS_POINT3* p, int n, float w, float h);

/* 100% match */
void njPtclPolygonStart(unsigned int col) {
    Ps2_ptcl_poly_col = col; // Line 46, Address: 0x2d82e0
} // Line 47, Address: 0x2d82e4

/* empty */
void njPtclPolygonEnd() { } // Line 56, Address: 0x2d82f0

/* 100% match */
void njPtclDrawPolygon(NJS_POINT3* p, int n, float h) { // Line 67, Address: 0x2d8300
    float(* bp)[4]; // modified from dwarf2cpp's output
    unsigned int col;
    unsigned int i;
    float buff[256][4];
    tagNJS_SCRVECTOR scr;
    float invz; 
    
    
    
    
    bp = (void*)&buff; // Line 78, Address: 0x2d832c
    col = Ps2_ptcl_poly_col; // Line 79, Address: 0x2d8338
    
    for (i = 0; i < n; i++) { // Line 81, Address: 0x2d8380
        *(unsigned int*)&bp[1][0] = ((col >> 16) & 0xFF) + 1; // Line 82, Address: 0x2d8384
        *(unsigned int*)&bp[1][1] = ((col >> 8) & 0xFF) + 1; // Line 83, Address: 0x2d8388
        *(unsigned int*)&bp[1][2] = (col & 0xFF) + 1; // Line 84, Address: 0x2d838c
        *(unsigned int*)&bp[1][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 85, Address: 0x2d8390
        *(unsigned int*)&bp[4][0] = ((col >> 16) & 0xFF) + 1; // Line 86, Address: 0x2d8394
        *(unsigned int*)&bp[4][1] = ((col >> 8) & 0xFF) + 1; // Line 87, Address: 0x2d8398

        
        *(unsigned int*)&bp[4][2] = (col & 0xFF) + 1; // Line 90, Address: 0x2d839c
        *(unsigned int*)&bp[4][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 91, Address: 0x2d83b4
            
            
            
            
            
            
            
            
            
            
        njRotTransPers(&p[i], &scr); // Line 102, Address: 0x2d83ac, 0x2d83c0, 0x2d83cc
        invz = scr.iz; // Line 103, Address: 0x2d83b8, 0x2d83d0, 0x2d83d8
        bp[2][0] = scr.x - h; // Line 104, Address: 0x2d83bc, 0x2d83e0
        bp[2][1] = scr.y - h; // Line 105, Address: 0x2d83c4, 0x2d83e8
        bp[2][2] = scr.z; // Line 106, Address: 0x2d83f0
        bp[2][3] = scr.fog; // Line 107, Address: 0x2d83fc
        bp[5][0] = scr.x + h; // Line 108, Address: 0x2d8408
        bp[5][1] = scr.y + h; // Line 109, Address: 0x2d8410

        
        bp[5][2] = scr.z; // Line 112, Address: 0x2d8418
        bp[5][3] = scr.fog; // Line 113, Address: 0x2d841c
        bp[0][0] = 0; // Line 114, Address: 0x2d8420
        bp[0][1] = 0; // Line 115, Address: 0x2d8424
        
        bp[0][2] = invz; // Line 117, Address: 0x2d8428
        bp[0][3] = 0; // Line 118, Address: 0x2d842c
        bp[3][0] = invz; // Line 119, Address: 0x2d8430
        bp[3][1] = invz; // Line 120, Address: 0x2d8434
        bp[3][2] = invz;  // Line 121, Address: 0x2d8438
        
        bp[3][3] = 0; // Line 123, Address: 0x2d8440
        bp += 6; // Line 124, Address: 0x2d8454
    }
    if (Ps2_ptcl_spr_flag == 1) { // Line 126, Address: 0x2d8468
        Ps2AddPrim3D(0x330000L << 32, &buff, n); // Line 127, Address: 0x2d8470
    } else {
        Ps2AddPrim3D(0x130000L << 32, &buff, n);
    } // Line 130, Address: 0x2d8484
}

/* 100% match */
void njPtclSpriteStart(int texid, unsigned int col, int flag) { // Line 140, Address: 0x2d84c0
    Ps2_ptcl_spr_col = col; // Line 141, Address: 0x2d84c8
    Ps2_ptcl_spr_flag = flag;
    njSetTextureNumSys(texid); // Line 143, Address: 0x2d84cc
}

/* empty */
void njPtclSpriteEnd() { } // Line 153, Address: 0x2d84e0

/* 100% match */
void njPtclDrawSprite(NJS_POINT3* p, int n, float w, float h) { // Line 164, Address: 0x2d84f0
    float(* bp)[4]; // modified from dwarf2cpp's output
    unsigned int col;
    unsigned int i;
    float buff[256][4];
    tagNJS_SCRVECTOR scr;
    float invz; 
    
    
    
    
    bp = (void*)&buff; // Line 175, Address: 0x2d8520
    col = Ps2_ptcl_spr_col; // Line 176, Address: 0x2d852c
    
    for (i = 0; i < n; i++) { // Line 178, Address: 0x2d8584
        *(unsigned int*)&bp[1][0] = (((col >> 16) & 0xFF) + 1) / 2; // Line 179, Address: 0x2d8588
        *(unsigned int*)&bp[1][1] = (((col >> 8) & 0xFF) + 1) / 2; // Line 180, Address: 0x2d858c
        *(unsigned int*)&bp[1][2] = ((col & 0xFF) + 1) / 2; // Line 181, Address: 0x2d8590
        *(unsigned int*)&bp[1][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 182, Address: 0x2d8594
        *(unsigned int*)&bp[4][0] = (((col >> 16) & 0xFF) + 1) / 2; // Line 183, Address: 0x2d8598
        *(unsigned int*)&bp[4][1] = (((col >> 8) & 0xFF) + 1) / 2; // Line 184, Address: 0x2d859c

        
        *(unsigned int*)&bp[4][2] = ((col & 0xFF) + 1) / 2; // Line 187, Address: 0x2d85a0
        *(unsigned int*)&bp[4][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 188, Address: 0x2d85bc
        njRotTransPers(&p[i], &scr); // Line 189, Address: 0x2d85b0, 0x2d85c0, 0x2d85c8, 0x2d85d8, 0x2d85e4
        invz = scr.iz; // Line 190, Address: 0x2d85c4, 0x2d85cc, 0x2d85ec, 0x2d85fc
        bp[2][0] = scr.x - (invz * (w * _nj_screen_.dist)); // Line 191, Address: 0x2d85d0, 0x2d8608
        bp[2][1] = scr.y - (invz * (h * _nj_screen_.dist)); // Line 192, Address: 0x2d85d4, 0x2d8610
        bp[2][2] = scr.z; // Line 193, Address: 0x2d85f8, 0x2d8618, 0x2d8628
        bp[2][3] = scr.fog; // Line 194, Address: 0x2d8624, 0x2d8634
        bp[5][0] = scr.x + (invz * (w * _nj_screen_.dist)); // Line 195, Address: 0x2d864c
        bp[5][1] = scr.y + (invz * (h * _nj_screen_.dist)); // Line 196, Address: 0x2d8654
        
        bp[5][2] = scr.z; // Line 198, Address: 0x2d865c
        bp[5][3] = scr.fog; // Line 199, Address: 0x2d8660
        bp[0][0] = 0; // Line 200, Address: 0x2d8664
        bp[0][1] = 0; // Line 201, Address: 0x2d8668
        
        bp[0][2] = invz; // Line 203, Address: 0x2d866c
        bp[0][3] = 0; // Line 204, Address: 0x2d8670
        bp[3][0] = invz; // Line 205, Address: 0x2d8674
        bp[3][1] = invz; // Line 206, Address: 0x2d8678
        bp[3][2] = invz; // Line 207, Address: 0x2d867c
        
        bp[3][3] = 0; // Line 209, Address: 0x2d8688
        bp += 6; // Line 210, Address: 0x2d869c
    }
    if (Ps2_ptcl_spr_flag == 1) { // Line 212, Address: 0x2d86b0
        Ps2AddPrim3D(0x3B0000L << 32, &buff, n); // Line 213, Address: 0x2d86b8
    } else {
        Ps2AddPrim3D(0x1B0000L << 32, &buff, n); 
    } // Line 216, Address: 0x2d86cc
}
