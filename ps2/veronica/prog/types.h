typedef struct vector3 {
    float x;
    float y;
    float z;
}
vector3;


typedef struct camera {
    /*   0 */ unsigned int flg;
    /*   4 */ int camver;
    /*   8 */ unsigned char mode0;
    /*   9 */ unsigned char mode1;
    /*  10 */ unsigned char mode2;
    /*  11 */ unsigned char mode3;
    /*  12 */ float px;
    /*  16 */ float py;
    /*  20 */ float pz;
    /*  24 */ float vx;
    /*  28 */ float vy;
    /*  32 */ float vz;
    /*  36 */ float wpx;
    /*  40 */ float wpy;
    /*  44 */ float wpz;
    /*  48 */ float plx;
    /*  52 */ float ply;
    /*  56 */ float plz;
    /*  60 */ float pxp;
    /*  64 */ float pyp;
    /*  68 */ float pzp;
    /*  72 */ float ofx;
    /*  76 */ float ofy;
    /*  80 */ float ofz;
    /*  84 */ int ax;
    /*  88 */ int ay;
    /*  92 */ int az;
    /*  96 */ int axp;
    /* 100 */ int ayp;
    /* 104 */ int azp;
    /* 108 */ float ln;
    /* 112 */ float pln;
    /* 116 */ float xr;
    /* 120 */ float xn;
    /* 124 */ float yr;
    /* 128 */ float yn;
    /* 132 */ int pers;
    /* 136 */ int ppers;
    /* 140 */ int ncut;
    /* 144 */ int ocut;
    /* 148 */ unsigned int ocflg;
    /* 152 */ unsigned int attr;
    /* 156 */ float* mtx;
    /* 160 */ float* mtxb;
    /* 164 */ int evc_no;
    /* 168 */ int hct;
    /* 172 */ int ct0;
    /* 176 */ int ct1;
    /* 180 */ int keyf_no;
    /* 184 */ float frm;
    /* 188 */ float spd;
    /* 192 */ float pxn;
    /* 196 */ float pyn;
    /* 200 */ float pzn;
    /* 204 */ int axn;
    /* 208 */ int ayn;
    /* 212 */ int azn;
    /* 216 */ int pe_ax;
    /* 220 */ int pe_pers;
    /* 224 */ unsigned int fog_col;
    /* 228 */ float fog_nr;
    /* 232 */ float fog_fr;
    /* 236 */ float ips[20][3];
    /* 476 */ float ian[20][3];
    /* 716 */ float ipf[20][3];
    /* 956 */ float icr[20][3];
}
camera;


typedef struct Timestamp {
    /* 0 */ unsigned short year;
    /* 2 */ unsigned char month;
    /* 3 */ unsigned char day;
    /* 4 */ unsigned char hour;
    /* 5 */ unsigned char minute;
    /* 6 */ unsigned char second;
    /* 7 */ unsigned char dayofweek;
}
Timestamp;


typedef struct Disk {
    /*  0 */ unsigned char volume[32];
    /* 32 */ unsigned short total_blocks;
    /* 34 */ unsigned short total_user_blocks;
    /* 36 */ unsigned short free_blocks;
    /* 38 */ unsigned short free_user_blocks;
    /* 40 */ unsigned short total_exe_blocks;
    /* 42 */ unsigned short free_exe_blocks;
    /* 44 */ unsigned short block_size;
    /* 46 */ unsigned short icon_no;
    /* 48 */ Timestamp time;
}
Disk;


typedef struct Drive {
    /*  0 */ unsigned short Ready;
    /*  2 */ unsigned short IsFormat;
    /*  4 */ unsigned int LastError;
    /*  8 */ unsigned int ProgressCount;
    /* 12 */ unsigned int ProgressMax;
    /* 16 */ unsigned int Operation;
    /* 20 */ Disk DiskInfo;
    /* 76 */ unsigned int Connect;
    /* 80 */ void* Work;
    /* 84 */ unsigned int WorkSize;
    /* 88 */ unsigned int Capacity;
    /* 92 */ int MemMode;
}
Drive;
