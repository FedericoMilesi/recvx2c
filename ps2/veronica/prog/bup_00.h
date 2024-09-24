#pragma once

#ifndef _BUP_00_H_
#define _BUP_00_H_

#include <shinobi.h>

typedef struct BupAnon1 BupAnon1;
typedef struct BupAnon2 BupAnon2;
typedef struct BupAnon3 BupAnon3;

struct BupAnon1 {
    NJS_TEXNAME twtx[3];
    NJS_TEXLIST twtx_list;
    int mode_00;
    int mode_02;
    int mode_03;
    int nextmode00;
    int nextmode01;
    int savecsr;
    int mesnum;
    int errorcode;
    unsigned int pertype[3][4];
    unsigned int ptbak[3][4];
    int vmscsr;
    int drive;
    int gamesavesize;
    int stg[15];
    int saveversion[15];
    int savenamework[32];
    int savecount[15];
    int playername[15];
    int gamemode[15];
    int timer[8];
    int fileimagesize;
    int freeaddress;
    int buffersize;
    short keywait00;
    short keywait01;
    short count00;
    short count01;
    short count02;
    short count03;
    short count04;
    short count05;
    short count06;
    short count07;
    short count08;
    short csr_00;
    short csr_01;
    short cur_cnt[4];
    short cur_flg[4];
    short vmsretry;
    unsigned char* savemem;
    char mestype;
    unsigned char dirbuf[2][4];
    unsigned char* mountbuf;
    unsigned char* mountbak;
    unsigned int version;
    int save_ct;
    char ply_id;
    char stg_no;
    char rom_no;
    char rcase;
    char pos_no;
    char cut_no;
    char flr_no;
    char reserve0;
    int gm_mode;
    unsigned int end;
    unsigned int ssd_ver;
    unsigned int ssd_flg;
    unsigned int ssd_reserve;
    char keytype;
    char adjust_x;
    char adjust_y;
    char vibration;
    unsigned int best_tm[8];
    unsigned int sys_end;
};

struct BupAnon2 {
    float x1;
    float y1;
    float x2;
    float y2;
    float u1;
    float v1;
    float u2;
    float v2;
};

struct BupAnon3 {
    char vms_comment[18];
    char btr_comment[34];
    unsigned char game_name[16];
    void* icon_palette;
    void* icon_data;
    unsigned short icon_num;
    unsigned short icon_speed;
    void* visual_data;
    unsigned short visual_type;
    unsigned short reserved;
    void* save_data;
    unsigned int save_size;
};

void ControlTypewriter();
void TypewriterKeepMemory();
void CountDisplay(int disppoint, NJS_POINT2* pos, unsigned int col);
unsigned int RoomNameSwitch(unsigned int name);
void TypeWriterTextureInit();
void TypewriterInit();
void TypewriterMain();
void TypewriterExit();

#endif // _BUP_00_H_