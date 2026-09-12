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
    EA_WORK* act_tblP; // offset 0x40, size 0x4
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
    O_WRK* sdw_owkP; // offset 0xF8, size 0x4
    ATR_WORK* hit_tabP; // offset 0xFC, size 0x4
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
