#ifndef _EN29_H_
#define _EN29_H_

#include "types.h"

typedef enum _tc_obj_body 
{
    TC_OBJ_NULL   = 0,
    TC_OBJ_BODY00 = 1,
    TC_OBJ_BODY01 = 2,
    TC_OBJ_BODY02 = 3,
    TC_OBJ_BODY03 = 4,
    TC_OBJ_BODY04 = 5,
    TC_OBJ_BODY05 = 6,
    TC_OBJ_BODY06 = 7,
    TC_OBJ_BODY07 = 8,
    TC_OBJ_BODY08 = 9,
    TC_OBJ_BODY09 = 10,
    TC_OBJ_BODY10 = 11,
    TC_OBJ_BODY11 = 12,
    TC_OBJ_BODY12 = 13,
    TC_OBJ_BODY13 = 14,
    TC_OBJ_BODY14 = 15,
    TC_OBJ_BODY15 = 16,
    TC_OBJ_BODY16 = 17,
    TC_OBJ_BODY17 = 18,
    TC_OBJ_BODY18 = 19,
    TC_OBJ_NUM    = 20
} tc_obj_body;

typedef struct _e19_dmg_typ 
{
    // total size: 0x14
    struct _e19_dmg_typ * nextP; // offset 0x0, size 0x4
    struct BH_PWORK * ewP; // offset 0x4, size 0x4
    tc_obj_body atr_top; // offset 0x8, size 0x4
    tc_obj_body atr_end; // offset 0xC, size 0x4
    float atr_rad; // offset 0x10, size 0x4
} e19_dmg_typ;

typedef struct eaw_typ 
{
    // total size: 0x48
    signed int act_flg; // offset 0x0, size 0x4
    void (* prgP)(struct BH_PWORK *, void *, signed int); // offset 0x4, size 0x4
    signed int act_frm; // offset 0x8, size 0x4
    signed int act_now; // offset 0xC, size 0x4
    signed int mtn_rte; // offset 0x10, size 0x4
    signed int chg_rte; // offset 0x14, size 0x4
    signed int act_cnt; // offset 0x18, size 0x4
    signed int b_act_flg; // offset 0x1C, size 0x4
    void (* b_prgP)(struct BH_PWORK *, void *, signed int); // offset 0x20, size 0x4
    signed int b_act_frm; // offset 0x24, size 0x4
    signed int b_act_now; // offset 0x28, size 0x4
    signed int b_mtn_rte; // offset 0x2C, size 0x4
    signed int b_chg_rte; // offset 0x30, size 0x4
    signed int b_act_cnt; // offset 0x34, size 0x4
    signed int b_mtn_md; // offset 0x38, size 0x4
    signed int dummy; // offset 0x3C, size 0x4
    struct /* @anon7 */ {
        // total size: 0x14
        signed int label; // offset 0x0, size 0x4
        unsigned char mtn_no; // offset 0x4, size 0x1
        unsigned char frm_no; // offset 0x5, size 0x1
        unsigned char hkn_lvl; // offset 0x6, size 0x1
        unsigned char hkn_cnt; // offset 0x7, size 0x1
        float chg_rte; // offset 0x8, size 0x4
        signed int flag; // offset 0xC, size 0x4
        void * prgP; // offset 0x10, size 0x4
    } * act_tblP; // offset 0x40, size 0x4
    signed int tbl_num; // offset 0x44, size 0x4
} eaw_typ;

typedef struct en29_freework 
{
    // total size: 0x1A0
    struct _e19_dmg_typ * dmg_eneP; // offset 0x0, size 0x4
    struct _e19_dmg_typ DmgWrk[8]; // offset 0x4, size 0xA0
    signed int status; // offset 0xA4, size 0x4
    enum /* @enum */ {
        TC_PRG_INIT = 0,
        TC_PRG_MOVE = 1,
        TC_PRG_DAMAGE = 2,
        TC_PRG_DIE = 3,
        TC_PRG_UNKKOWN = 4,
        TC_PRG_EVENT = 5,
    } mode0_bak; // offset 0xA8, size 0x4
    enum /* @enum */ {
        TC_BR0_NORMAL = 0,
        TC_BR0_ATTACK = 1,
        TC_BR0_DAMAGE = 2,
        TC_BR0_DIE = 3,
        TC_BR0_WAIT = 4,
    } br_mde0; // offset 0xAC, size 0x4
    enum /* @enum */ {
        TC_BR1_FIRST = 0,
        TC_BR1_LOOP0 = 1,
        TC_BR1_LOOP1 = 2,
    } br_mde1; // offset 0xB0, size 0x4
    signed int br_rnd; // offset 0xB4, size 0x4
    signed int br_tim; // offset 0xB8, size 0x4
    signed int br_fir; // offset 0xBC, size 0x4
    struct /* @anon26 */ {
        // total size: 0xC
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
    } tgt_pos; // offset 0xC0, size 0xC
    signed int dir_dlt; // offset 0xCC, size 0x4
    tc_obj_body bas_obj; // offset 0xD0, size 0x4
    signed int bas_ax; // offset 0xD4, size 0x4
    signed int bas_ay; // offset 0xD8, size 0x4
    tc_obj_body atk_obj0; // offset 0xDC, size 0x4
    tc_obj_body atk_obj1; // offset 0xE0, size 0x4
    float atk_rng0; // offset 0xE4, size 0x4
    float atk_rng1; // offset 0xE8, size 0x4
    tc_obj_body dmg_obj; // offset 0xEC, size 0x4
    signed int dmg_lvl; // offset 0xF0, size 0x4
    signed int eff_wit; // offset 0xF4, size 0x4
    struct /* @anon0 */ {
        // total size: 0x4E0
        unsigned int flg; // offset 0x0, size 0x4
        unsigned short id; // offset 0x4, size 0x2
        unsigned short type; // offset 0x6, size 0x2
        signed char flr_no; // offset 0x8, size 0x1
        signed char flr_nob; // offset 0x9, size 0x1
        unsigned char mdlver; // offset 0xA, size 0x1
        unsigned char param; // offset 0xB, size 0x1
        unsigned char mode0; // offset 0xC, size 0x1
        unsigned char mode1; // offset 0xD, size 0x1
        unsigned char mode2; // offset 0xE, size 0x1
        unsigned char mode3; // offset 0xF, size 0x1
        float px; // offset 0x10, size 0x4
        float py; // offset 0x14, size 0x4
        float pz; // offset 0x18, size 0x4
        signed int ax; // offset 0x1C, size 0x4
        signed int ay; // offset 0x20, size 0x4
        signed int az; // offset 0x24, size 0x4
        float ar; // offset 0x28, size 0x4
        float aw; // offset 0x2C, size 0x4
        float ah; // offset 0x30, size 0x4
        float ad; // offset 0x34, size 0x4
        float car; // offset 0x38, size 0x4
        float cah; // offset 0x3C, size 0x4
        float pxb; // offset 0x40, size 0x4
        float pyb; // offset 0x44, size 0x4
        float pzb; // offset 0x48, size 0x4
        signed int axb; // offset 0x4C, size 0x4
        signed int ayb; // offset 0x50, size 0x4
        signed int azb; // offset 0x54, size 0x4
        float gpx; // offset 0x58, size 0x4
        float gpy; // offset 0x5C, size 0x4
        float gpz; // offset 0x60, size 0x4
        float lox; // offset 0x64, size 0x4
        float loy; // offset 0x68, size 0x4
        float loz; // offset 0x6C, size 0x4
        float aox; // offset 0x70, size 0x4
        float aoy; // offset 0x74, size 0x4
        float aoz; // offset 0x78, size 0x4
        float spd; // offset 0x7C, size 0x4
        unsigned int flg2; // offset 0x80, size 0x4
        unsigned int mdflg; // offset 0x84, size 0x4
        unsigned int stflg; // offset 0x88, size 0x4
        unsigned int Dummy3; // offset 0x8C, size 0x4
        signed int draw_tp; // offset 0x90, size 0x4
        signed int mdl_n; // offset 0x94, size 0x4
        void * mskp; // offset 0x98, size 0x4
        unsigned int Dummy[1]; // offset 0x9C, size 0x4
        signed int * skp[16]; // offset 0xA0, size 0x40
        struct npobj * mbp[16]; // offset 0xE0, size 0x40
        struct /* @anon2 */ {
            // total size: 0x8
            struct /* @anon18 */ {
                // total size: 0xC
                void * filename; // offset 0x0, size 0x4
                unsigned int attr; // offset 0x4, size 0x4
                unsigned int texaddr; // offset 0x8, size 0x4
            } * textures; // offset 0x0, size 0x4
            unsigned int nbTexture; // offset 0x4, size 0x4
        } * txp[16]; // offset 0x120, size 0x40
        struct /* @anon12 */ {
            // total size: 0x18
            unsigned int flg; // offset 0x0, size 0x4
            unsigned int obj_num; // offset 0x4, size 0x4
            void * datP; // offset 0x8, size 0x4
            struct npobj * objP; // offset 0xC, size 0x4
            struct /* @anon2 */ {
                // total size: 0x8
                struct /* @anon18 */ {
                    // total size: 0xC
                    void * filename; // offset 0x0, size 0x4
                    unsigned int attr; // offset 0x4, size 0x4
                    unsigned int texaddr; // offset 0x8, size 0x4
                } * textures; // offset 0x0, size 0x4
                unsigned int nbTexture; // offset 0x4, size 0x4
            } * texP; // offset 0x10, size 0x4
            struct /* @anon22 */ {
                // total size: 0x50
                unsigned int flg; // offset 0x0, size 0x4
                signed int dmy; // offset 0x4, size 0x4
                unsigned int dummy[2]; // offset 0x8, size 0x8
                float mtx[16]; // offset 0x10, size 0x40
            } * owP; // offset 0x14, size 0x4
        } mdl[16]; // offset 0x160, size 0x180
        struct /* @anon12 */ {
            // total size: 0x18
            unsigned int flg; // offset 0x0, size 0x4
            unsigned int obj_num; // offset 0x4, size 0x4
            void * datP; // offset 0x8, size 0x4
            struct npobj * objP; // offset 0xC, size 0x4
            struct /* @anon2 */ {
                // total size: 0x8
                struct /* @anon18 */ {
                    // total size: 0xC
                    void * filename; // offset 0x0, size 0x4
                    unsigned int attr; // offset 0x4, size 0x4
                    unsigned int texaddr; // offset 0x8, size 0x4
                } * textures; // offset 0x0, size 0x4
                unsigned int nbTexture; // offset 0x4, size 0x4
            } * texP; // offset 0x10, size 0x4
            struct /* @anon22 */ {
                // total size: 0x50
                unsigned int flg; // offset 0x0, size 0x4
                signed int dmy; // offset 0x4, size 0x4
                unsigned int dummy[2]; // offset 0x8, size 0x8
                float mtx[16]; // offset 0x10, size 0x40
            } * owP; // offset 0x14, size 0x4
        } * mlwP; // offset 0x2E0, size 0x4
        unsigned int mdl_no; // offset 0x2E4, size 0x4
        signed int lkono; // offset 0x2E8, size 0x4
        unsigned char * lkwkp; // offset 0x2EC, size 0x4
        unsigned char * exp0; // offset 0x2F0, size 0x4
        unsigned char * exp1; // offset 0x2F4, size 0x4
        unsigned char * exp2; // offset 0x2F8, size 0x4
        unsigned char * exp3; // offset 0x2FC, size 0x4
        unsigned char mtxbuf[64]; // offset 0x300, size 0x40
        float (* mtx)[16]; // offset 0x340, size 0x4
        struct npobj * obj_a; // offset 0x344, size 0x4
        struct npobj * obj_b; // offset 0x348, size 0x4
        float shp_ct; // offset 0x34C, size 0x4
        signed char clp_jno[8]; // offset 0x350, size 0x8
        signed int lok_jno; // offset 0x358, size 0x4
        struct /* @anon6 */ {
            // total size: 0x18
            unsigned int flg; // offset 0x0, size 0x4
            unsigned int obj_num; // offset 0x4, size 0x4
            unsigned int frm_num; // offset 0x8, size 0x4
            void * datP; // offset 0xC, size 0x4
            struct /* @anon17 */ {
                // total size: 0x8
                void * p[2]; // offset 0x0, size 0x8
            } * md2P; // offset 0x10, size 0x4
            unsigned short * atrP; // offset 0x14, size 0x4
        } * mnwP; // offset 0x35C, size 0x4
        struct /* @anon6 */ {
            // total size: 0x18
            unsigned int flg; // offset 0x0, size 0x4
            unsigned int obj_num; // offset 0x4, size 0x4
            unsigned int frm_num; // offset 0x8, size 0x4
            void * datP; // offset 0xC, size 0x4
            struct /* @anon17 */ {
                // total size: 0x8
                void * p[2]; // offset 0x0, size 0x8
            } * md2P; // offset 0x10, size 0x4
            unsigned short * atrP; // offset 0x14, size 0x4
        } * mnwPb; // offset 0x360, size 0x4
        unsigned int mtn_attr; // offset 0x364, size 0x4
        unsigned int mtn_no; // offset 0x368, size 0x4
        signed int frm_no; // offset 0x36C, size 0x4
        unsigned int frm_mode; // offset 0x370, size 0x4
        signed int hokan_rate; // offset 0x374, size 0x4
        unsigned int hokan_count; // offset 0x378, size 0x4
        unsigned int hokan_ctbak; // offset 0x37C, size 0x4
        signed int mtn_add; // offset 0x380, size 0x4
        unsigned int mtn_md; // offset 0x384, size 0x4
        unsigned char * mtn_tp; // offset 0x388, size 0x4
        signed int axp; // offset 0x38C, size 0x4
        signed int ayp; // offset 0x390, size 0x4
        signed int azp; // offset 0x394, size 0x4
        signed short psh_ct; // offset 0x398, size 0x2
        signed short psh_idx; // offset 0x39A, size 0x2
        signed int idx_ct; // offset 0x39C, size 0x4
        signed int mtn_chk; // offset 0x3A0, size 0x4
        float ofx; // offset 0x3A4, size 0x4
        float ofy; // offset 0x3A8, size 0x4
        float ofz; // offset 0x3AC, size 0x4
        float sx; // offset 0x3B0, size 0x4
        float sy; // offset 0x3B4, size 0x4
        float sz; // offset 0x3B8, size 0x4
        float sxb; // offset 0x3BC, size 0x4
        float syb; // offset 0x3C0, size 0x4
        float szb; // offset 0x3C4, size 0x4
        float xn; // offset 0x3C8, size 0x4
        float yn; // offset 0x3CC, size 0x4
        float zn; // offset 0x3D0, size 0x4
        signed int ct0; // offset 0x3D4, size 0x4
        signed int ct1; // offset 0x3D8, size 0x4
        signed int ct2; // offset 0x3DC, size 0x4
        signed int ct3; // offset 0x3E0, size 0x4
        unsigned char * objbak; // offset 0x3E4, size 0x4
        struct /* @anon41 */ {
            // total size: 0x10
            struct /* @anon26 */ {
                // total size: 0xC
                float x; // offset 0x0, size 0x4
                float y; // offset 0x4, size 0x4
                float z; // offset 0x8, size 0x4
            } c; // offset 0x0, size 0xC
            float r; // offset 0xC, size 0x4
        } cspr; // offset 0x3E8, size 0x10
        signed int pn; // offset 0x3F8, size 0x4
        struct /* @anon34 */ {
            // total size: 0x10
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            unsigned int col; // offset 0xC, size 0x4
        } * pvp; // offset 0x3FC, size 0x4
        struct /* @anon3 */ {
            // total size: 0x18
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float u; // offset 0xC, size 0x4
            float v; // offset 0x10, size 0x4
            unsigned int col; // offset 0x14, size 0x4
        } * tvp; // offset 0x400, size 0x4
        struct /* @anon34 */ {
            // total size: 0x10
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            unsigned int col; // offset 0xC, size 0x4
        } pv[4]; // offset 0x404, size 0x40
        struct /* @anon3 */ {
            // total size: 0x18
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
            float u; // offset 0xC, size 0x4
            float v; // offset 0x10, size 0x4
            unsigned int col; // offset 0x14, size 0x4
        } tv[4]; // offset 0x444, size 0x60
        signed int bl_src; // offset 0x4A4, size 0x4
        signed int bl_dst; // offset 0x4A8, size 0x4
        signed int ani_ct; // offset 0x4AC, size 0x4
        signed int tex_id; // offset 0x4B0, size 0x4
        signed int aspd; // offset 0x4B4, size 0x4
        unsigned int gidx; // offset 0x4B8, size 0x4
        signed int bank; // offset 0x4BC, size 0x4
        signed char jno[16]; // offset 0x4C0, size 0x10
        signed char hide[4]; // offset 0x4D0, size 0x4
        void (* func)(void *); // offset 0x4D4, size 0x4
        signed int idx; // offset 0x4D8, size 0x4
        signed int Dummy2; // offset 0x4DC, size 0x4
    } * sdw_owkP; // offset 0xF8, size 0x4
    struct /* @anon4 */ {
        // total size: 0x24
        unsigned char flg; // offset 0x0, size 0x1
        unsigned char type; // offset 0x1, size 0x1
        unsigned char id; // offset 0x2, size 0x1
        signed char flr_no; // offset 0x3, size 0x1
        unsigned int attr; // offset 0x4, size 0x4
        float px; // offset 0x8, size 0x4
        float py; // offset 0xC, size 0x4
        float pz; // offset 0x10, size 0x4
        float w; // offset 0x14, size 0x4
        float h; // offset 0x18, size 0x4
        float d; // offset 0x1C, size 0x4
        unsigned char prm0; // offset 0x20, size 0x1
        unsigned char prm1; // offset 0x21, size 0x1
        unsigned char prm2; // offset 0x22, size 0x1
        unsigned char prm3; // offset 0x23, size 0x1
    } * hit_tabP; // offset 0xFC, size 0x4
    tc_obj_body atr_obj; // offset 0x100, size 0x4
    signed int p_status; // offset 0x104, size 0x4
    signed int p_br_mde0; // offset 0x108, size 0x4
    signed int p_br_mde1; // offset 0x10C, size 0x4
    struct /* @anon26 */ {
        // total size: 0xC
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
    } ply_dmg; // offset 0x110, size 0xC
    signed int dmg_dir; // offset 0x11C, size 0x4
    struct eaw_typ ene_act; // offset 0x120, size 0x48
    struct /* @anon11 */ {
        // total size: 0x38
        signed int p_status; // offset 0x0, size 0x4
        signed int p_mode; // offset 0x4, size 0x4
        signed int p_act_flg; // offset 0x8, size 0x4
        void (* p_prgP)(struct BH_PWORK *, void *); // offset 0xC, size 0x4
        void * p_paramP; // offset 0x10, size 0x4
        signed int p_act_frm; // offset 0x14, size 0x4
        signed int p_chg_frm; // offset 0x18, size 0x4
        signed int p_mtn_rte; // offset 0x1C, size 0x4
        signed int p_act_jmp; // offset 0x20, size 0x4
        signed int p_frm_num; // offset 0x24, size 0x4
        signed int p_act_now; // offset 0x28, size 0x4
        struct /* @anon6 */ {
            // total size: 0x18
            unsigned int flg; // offset 0x0, size 0x4
            unsigned int obj_num; // offset 0x4, size 0x4
            unsigned int frm_num; // offset 0x8, size 0x4
            void * datP; // offset 0xC, size 0x4
            struct /* @anon17 */ {
                // total size: 0x8
                void * p[2]; // offset 0x0, size 0x8
            } * md2P; // offset 0x10, size 0x4
            unsigned short * atrP; // offset 0x14, size 0x4
        } * ene_mnwP; // offset 0x2C, size 0x4
        struct /* @anon14 */ {
            // total size: 0x10
            signed short mtn_no; // offset 0x0, size 0x2
            signed short frm_no; // offset 0x2, size 0x2
            unsigned char hkn_lvl; // offset 0x4, size 0x1
            unsigned char hkn_cnt; // offset 0x5, size 0x1
            unsigned char chg_frm; // offset 0x6, size 0x1
            signed char act_jmp; // offset 0x7, size 0x1
            signed int flag; // offset 0x8, size 0x4
            void * prgP; // offset 0xC, size 0x4
        } * act_tblP; // offset 0x30, size 0x4
        signed int tbl_num; // offset 0x34, size 0x4
    } ply_act; // offset 0x168, size 0x38
} en29_freework;

typedef struct _e29_cll
{
    // total size: 0x8
    int obj_no;    // offset 0x0, size 0x4
    float chk_siz; // offset 0x4, size 0x4
} e29_cll;

typedef struct DS_WORK 
{
    // total size: 0x10
    tc_obj_body atr_top; // offset 0x0, size 0x4
    tc_obj_body atr_end; // offset 0x4, size 0x4
    float atr_rad;       // offset 0x8, size 0x4
    int or_flg2;         // offset 0xC, size 0x4
} DS_WORK;

typedef struct DD_WRK
{
    // total size: 0x10
    int eff_nml_p; // offset 0x0, size 0x4
    int eff_nml_s; // offset 0x4, size 0x4
    int eff_cmb_p; // offset 0x8, size 0x4
    int eff_cmb_s; // offset 0xC, size 0x4
} DD_WRK;

typedef struct ET_WORK 
{
    // total size: 0x24
    tc_obj_body bas_obj;  // offset 0x0, size 0x4
    tc_obj_body atr_obj;  // offset 0x4, size 0x4
    NJS_POINT3 atr_siz;   // offset 0x8, size 0xC
    tc_obj_body atk_obj0; // offset 0x14, size 0x4
    float atk_rng0;       // offset 0x18, size 0x4
    tc_obj_body atk_obj1; // offset 0x1C, size 0x4
    float atk_rng1;       // offset 0x20, size 0x4
} ET_WORK;

void bhEne29(BH_PWORK* ewP);
static void bhEne29_Init(BH_PWORK* ewP);
static void bhEne29_Move(BH_PWORK* ewP);
static void bhEne29_Die();
static void bhEne29_Damage();
static void bhEne29_Event(BH_PWORK* ewP);
static void bhEne29_Br00(BH_PWORK* ewP);
static void bhEne29_Br01(BH_PWORK* ewP);
static void bhEne29_Mv00();
static void bhEne29_Mv01(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv02(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv03(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv04(BH_PWORK* ewP, en29_freework* fwP);
static void bhEne29_Mv20(BH_PWORK* ewP, en29_freework* fwP);
static void bhEne29_ActionInit(eaw_typ* eawP, EA_WORK* act_tblP, int tbl_num);
static EA_WORK* bhEne29_ActionSearch(eaw_typ* eawP, int act_nw, int act_no);
static int bhEne29_ActionChange(BH_PWORK* ewP, eaw_typ* eawP, int act_dst);
static int bhEne29_ActionMain(BH_PWORK* ewP, eaw_typ* eawP);
static void bhEne29_TargetAnalyze(BH_PWORK* ewP, en29_freework* fwP);
static void bhEne29_CalcEnemy(BH_PWORK* ewP, en29_freework* fwP);
static void bhEne29_DmgCheck(BH_PWORK* ewP, en29_freework* fwP);
static int bhEne29_AttackHitCheck(BH_PWORK* ewP, en29_freework* fwP);
static int bhEne29_PlySetDamage(BH_PWORK* plP, en29_freework* fwP, int dmg_mde);
static void bhEne29_PlyMoveMain(BH_PWORK* plP, en29_freework* fwP);
static void bhEne29_PlyActionInit(BH_PWORK* ewP, PAW_WORK* pawP, ACT_TBL_WORK* act_tblP, int tbl_num);
static void bhEne29_PlyActionMain(BH_PWORK* plP, PAW_WORK* pawP);
static int bhEne29_PlyActionChange(BH_PWORK* plP, PAW_WORK* pawP, int act_no);
static void bhEne29_PlyDmg117(BH_PWORK* plP, en29_freework* fwP);
static void bhEne29_PlyDmg118(BH_PWORK* plP, en29_freework* fwP);
static void bhEne29_PlyDmgRtn(BH_PWORK* plP, en29_freework* fwP);
static void bhEne29_SetDmgEffect(BH_PWORK* ewP, int eff_typ);
static void SetDmgEne(en29_freework* fwP, DS_WORK* dsP, int set_num);
static void CalcDmgEne(BH_PWORK* ewP, en29_freework* fwP);
static void CheckDmgEne(BH_PWORK* ewP, en29_freework* fwP);

#endif
