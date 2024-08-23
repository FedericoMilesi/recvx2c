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
void njPtclDrawPolygon(_anon0* p, int n, float h);
void njPtclSpriteStart(int texid, unsigned int col, int flag);
void njPtclSpriteEnd();
void njPtclDrawSprite(_anon0* p, int n, float w, float h);

/* 100% match */
void njPtclPolygonStart(unsigned int col) {
    Ps2_ptcl_poly_col = col; // Line 46, Address: 0x2d82e0
} // Line 47, Address: 0x2d82e4

/* empty */
void njPtclPolygonEnd() { } // Line 56, Address: 0x2d82f0

// 
// Start address: 0x2d8300
void njPtclDrawPolygon(_anon0* p, int n, float h)
{
	tagNJS_SCRVECTOR scr;
	unsigned int col;
	unsigned int i;
	float bp[4];
	float buff[4][256];
	float invz;
	// Line 67, Address: 0x2d8300, Func Offset: 0
	// Line 78, Address: 0x2d832c, Func Offset: 0x2c
	// Line 79, Address: 0x2d8338, Func Offset: 0x38
	// Line 81, Address: 0x2d8380, Func Offset: 0x80
	// Line 82, Address: 0x2d8384, Func Offset: 0x84
	// Line 83, Address: 0x2d8388, Func Offset: 0x88
	// Line 84, Address: 0x2d838c, Func Offset: 0x8c
	// Line 85, Address: 0x2d8390, Func Offset: 0x90
	// Line 86, Address: 0x2d8394, Func Offset: 0x94
	// Line 87, Address: 0x2d8398, Func Offset: 0x98
	// Line 90, Address: 0x2d839c, Func Offset: 0x9c
	// Line 102, Address: 0x2d83ac, Func Offset: 0xac
	// Line 121, Address: 0x2d83b0, Func Offset: 0xb0
	// Line 91, Address: 0x2d83b4, Func Offset: 0xb4
	// Line 103, Address: 0x2d83b8, Func Offset: 0xb8
	// Line 104, Address: 0x2d83bc, Func Offset: 0xbc
	// Line 102, Address: 0x2d83c0, Func Offset: 0xc0
	// Line 105, Address: 0x2d83c4, Func Offset: 0xc4
	// Line 120, Address: 0x2d83c8, Func Offset: 0xc8
	// Line 102, Address: 0x2d83cc, Func Offset: 0xcc
	// Line 103, Address: 0x2d83d0, Func Offset: 0xd0
	// Line 121, Address: 0x2d83d4, Func Offset: 0xd4
	// Line 103, Address: 0x2d83d8, Func Offset: 0xd8
	// Line 104, Address: 0x2d83e0, Func Offset: 0xe0
	// Line 105, Address: 0x2d83e8, Func Offset: 0xe8
	// Line 106, Address: 0x2d83f0, Func Offset: 0xf0
	// Line 107, Address: 0x2d83fc, Func Offset: 0xfc
	// Line 108, Address: 0x2d8408, Func Offset: 0x108
	// Line 109, Address: 0x2d8410, Func Offset: 0x110
	// Line 112, Address: 0x2d8418, Func Offset: 0x118
	// Line 113, Address: 0x2d841c, Func Offset: 0x11c
	// Line 114, Address: 0x2d8420, Func Offset: 0x120
	// Line 115, Address: 0x2d8424, Func Offset: 0x124
	// Line 117, Address: 0x2d8428, Func Offset: 0x128
	// Line 118, Address: 0x2d842c, Func Offset: 0x12c
	// Line 119, Address: 0x2d8430, Func Offset: 0x130
	// Line 120, Address: 0x2d8434, Func Offset: 0x134
	// Line 121, Address: 0x2d8438, Func Offset: 0x138
	// Line 123, Address: 0x2d8440, Func Offset: 0x140
	// Line 124, Address: 0x2d8454, Func Offset: 0x154
	// Line 126, Address: 0x2d8468, Func Offset: 0x168
	// Line 127, Address: 0x2d8470, Func Offset: 0x170
	// Line 130, Address: 0x2d8484, Func Offset: 0x184
	// Func End, Address: 0x2d84b4, Func Offset: 0x1b4
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
void njPtclDrawSprite(NJS_POINT3* p, int n, float w, float h) { // Line 67, Address: 0x2d8300
    float(* bp)[4]; // modified from dwarf2cpp's output
    unsigned int col;
    unsigned int i;
    float buff[256][4];
    tagNJS_SCRVECTOR scr;
    float invz; 
    
    
    
    
    bp = (void*)&buff; // Line 78, Address: 0x2d832c
    col = Ps2_ptcl_spr_col; // Line 79, Address: 0x2d8338
    
    for (i = 0; i < n; i++) { // Line 81, Address: 0x2d8380
        *(unsigned int*)&bp[1][0] = (((col >> 16) & 0xFF) + 1) / 2; // Line 82, Address: 0x2d8384
        *(unsigned int*)&bp[1][1] = (((col >> 8) & 0xFF) + 1) / 2; // Line 83, Address: 0x2d8388
        *(unsigned int*)&bp[1][2] = ((col & 0xFF) + 1) / 2; // Line 84, Address: 0x2d838c
        *(unsigned int*)&bp[1][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 85, Address: 0x2d8390
        *(unsigned int*)&bp[4][0] = (((col >> 16) & 0xFF) + 1) / 2; // Line 86, Address: 0x2d8394
        *(unsigned int*)&bp[4][1] = (((col >> 8) & 0xFF) + 1) / 2; // Line 87, Address: 0x2d8398

        
        *(unsigned int*)&bp[4][2] = ((col & 0xFF) + 1) / 2; // Line 90, Address: 0x2d839c
        *(unsigned int*)&bp[4][3] = (((col >> 24) & 0xFF) + 1) / 2; // Line 91, Address: 0x2d83b4
        
        
        
        
        
        
        
        
        
        
        njRotTransPers(&p[i], &scr); // Line 102, Address: 0x2d83ac, 0x2d83c0, 0x2d83cc
        invz = scr.iz; // Line 103, Address: 0x2d83b8, 0x2d83d0, 0x2d83d8
        bp[2][0] = scr.x - (invz * (w * _nj_screen_.dist)); // Line 104, Address: 0x2d83bc, 0x2d83e0
        bp[2][1] = scr.y - (invz * (h * _nj_screen_.dist)); // Line 105, Address: 0x2d83c4, 0x2d83e8
        bp[2][2] = scr.z; // Line 106, Address: 0x2d83f0
        bp[2][3] = scr.fog; // Line 107, Address: 0x2d83fc
        bp[5][0] = scr.x + (invz * (w * _nj_screen_.dist)); // Line 108, Address: 0x2d8408
        bp[5][1] = scr.y + (invz * (h * _nj_screen_.dist)); // Line 109, Address: 0x2d8410

        
        bp[5][2] = scr.z; // Line 112, Address: 0x2d8418
        bp[5][3] = scr.fog; // Line 113, Address: 0x2d841c
        bp[0][0] = 0; // Line 114, Address: 0x2d8420
        bp[0][1] = 0; // Line 115, Address: 0x2d8424
        
        bp[0][2] = invz; // Line 117, Address: 0x2d8428
        bp[0][3] = 0; // Line 118, Address: 0x2d842c
        bp[3][0] = invz; // Line 119, Address: 0x2d8430
        bp[3][1] = invz; // Line 120, Address: 0x2d8434
        bp[3][2] = invz; // Line 121, Address: 0x2d8438
        
        bp[3][3] = 0; // Line 123, Address: 0x2d8440
        bp += 6; // Line 124, Address: 0x2d8454
    }
    if (Ps2_ptcl_spr_flag == 1) { // Line 126, Address: 0x2d8468
        Ps2AddPrim3D(0x3B0000L << 32, &buff, n); // Line 127, Address: 0x2d8470
        
    } else {
        Ps2AddPrim3D(0x1B0000L << 32, &buff, n); // Line 130, Address: 0x2d8484
    }
}

