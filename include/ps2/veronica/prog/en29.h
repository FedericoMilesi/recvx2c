#ifndef _EN29_H_
#define _EN29_H_

#include "types.h"

typedef enum TC_ACT_NO 
{
    TC_ACT_000  = 0,
    TC_ACT_001  = 1,
    TC_ACT_002  = 2,
    TC_ACT_003  = 3,
    TC_ACT_004  = 4,
    TC_ACT_005  = 5,
    TC_ACT_006  = 6,
    TC_ACT_007  = 7,
    TC_ACT_008  = 8,
    TC_ACT_009  = 9,
    TC_ACT_010  = 10,
    TC_ACT_011  = 11,
    TC_ACT_012  = 12,
    TC_ACT_013  = 13,
    TC_ACT_014  = 14,
    TC_ACT_015  = 15,
    TC_ACT_016  = 16,
    TC_ACT_017  = 17,
    TC_ACT_018  = 18,
    TC_ACT_019  = 19,
    TC_ACT_020  = 20,
    TC_ACT_021  = 21,
    TC_ACT_022  = 22,
    TC_ACT_023  = 23,
    TC_ACT_INIT = 30,
    TC_ACT_ALL  = -1
} TC_ACT_NO;

typedef enum TC_BR_MODE0 
{
    TC_BR0_NORMAL = 0,
    TC_BR0_ATTACK = 1,
    TC_BR0_DAMAGE = 2,
    TC_BR0_DIE    = 3,
    TC_BR0_WAIT   = 4
} TC_BR_MODE0;

typedef enum TC_BR_MODE1 
{
    TC_BR1_FIRST = 0,
    TC_BR1_LOOP0 = 1,
    TC_BR1_LOOP1 = 2
} TC_BR_MODE1;

typedef enum TC_OBJ_BODY
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
} TC_OBJ_BODY;

typedef enum TC_PRG_MODE0 
{
    TC_PRG_INIT    = 0,
    TC_PRG_MOVE    = 1,
    TC_PRG_DAMAGE  = 2,
    TC_PRG_DIE     = 3,
    TC_PRG_UNKKOWN = 4,
    TC_PRG_EVENT   = 5
} TC_PRG_MODE0;

typedef struct _e19_dmg_typ e19_dmg_typ;
struct _e19_dmg_typ 
{
    // total size: 0x14
    e19_dmg_typ* nextP;  // offset 0x0, size 0x4
    BH_PWORK* ewP;       // offset 0x4, size 0x4
    TC_OBJ_BODY atr_top; // offset 0x8, size 0x4
    TC_OBJ_BODY atr_end; // offset 0xC, size 0x4
    float atr_rad;       // offset 0x10, size 0x4
};

typedef struct _eaw_typ 
{
    // total size: 0x48
    int act_flg;                           // offset 0x0, size 0x4
    void (*prgP)(BH_PWORK*, void*, int);   // offset 0x4, size 0x4
    int act_frm;                           // offset 0x8, size 0x4
    int act_now;                           // offset 0xC, size 0x4
    int mtn_rte;                           // offset 0x10, size 0x4
    int chg_rte;                           // offset 0x14, size 0x4
    int act_cnt;                           // offset 0x18, size 0x4
    int b_act_flg;                         // offset 0x1C, size 0x4
    void (*b_prgP)(BH_PWORK*, void*, int); // offset 0x20, size 0x4
    int b_act_frm;                         // offset 0x24, size 0x4
    int b_act_now;                         // offset 0x28, size 0x4
    int b_mtn_rte;                         // offset 0x2C, size 0x4
    int b_chg_rte;                         // offset 0x30, size 0x4
    int b_act_cnt;                         // offset 0x34, size 0x4
    int b_mtn_md;                          // offset 0x38, size 0x4
    int dummy;                             // offset 0x3C, size 0x4
    EA_WORK* act_tblP;                     // offset 0x40, size 0x4
    int tbl_num;                           // offset 0x44, size 0x4
} eaw_typ;

typedef struct _en29_freework 
{
    // total size: 0x1A0
    e19_dmg_typ* dmg_eneP;  // offset 0x0, size 0x4
    e19_dmg_typ DmgWrk[8];  // offset 0x4, size 0xA0
    int status;             // offset 0xA4, size 0x4
    TC_PRG_MODE0 mode0_bak; // offset 0xA8, size 0x4
    TC_BR_MODE0 br_mde0;    // offset 0xAC, size 0x4
    TC_BR_MODE1 br_mde1;    // offset 0xB0, size 0x4
    int br_rnd;             // offset 0xB4, size 0x4
    int br_tim;             // offset 0xB8, size 0x4
    int br_fir;             // offset 0xBC, size 0x4
    NJS_POINT3 tgt_pos;     // offset 0xC0, size 0xC
    int dir_dlt;            // offset 0xCC, size 0x4
    TC_OBJ_BODY bas_obj;    // offset 0xD0, size 0x4
    int bas_ax;             // offset 0xD4, size 0x4
    int bas_ay;             // offset 0xD8, size 0x4
    TC_OBJ_BODY atk_obj0;   // offset 0xDC, size 0x4
    TC_OBJ_BODY atk_obj1;   // offset 0xE0, size 0x4
    float atk_rng0;         // offset 0xE4, size 0x4
    float atk_rng1;         // offset 0xE8, size 0x4
    TC_OBJ_BODY dmg_obj;    // offset 0xEC, size 0x4
    int dmg_lvl;            // offset 0xF0, size 0x4
    int eff_wit;            // offset 0xF4, size 0x4
    O_WRK* sdw_owkP;        // offset 0xF8, size 0x4
    ATR_WORK* hit_tabP;     // offset 0xFC, size 0x4
    TC_OBJ_BODY atr_obj;    // offset 0x100, size 0x4
    int p_status;           // offset 0x104, size 0x4
    int p_br_mde0;          // offset 0x108, size 0x4
    int p_br_mde1;          // offset 0x10C, size 0x4
    NJS_POINT3 ply_dmg;     // offset 0x110, size 0xC
    int dmg_dir;            // offset 0x11C, size 0x4
    eaw_typ ene_act;        // offset 0x120, size 0x48
    PAW_WORK ply_act;       // offset 0x168, size 0x38
} en29_freework;

typedef struct CLL_WORK
{
    // total size: 0x8
    int obj_no;    // offset 0x0, size 0x4
    float chk_siz; // offset 0x4, size 0x4
} CLL_WORK;

typedef struct DS_WORK 
{
    // total size: 0x10
    TC_OBJ_BODY atr_top; // offset 0x0, size 0x4
    TC_OBJ_BODY atr_end; // offset 0x4, size 0x4
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
    TC_OBJ_BODY bas_obj;  // offset 0x0, size 0x4
    TC_OBJ_BODY atr_obj;  // offset 0x4, size 0x4
    NJS_POINT3 atr_siz;   // offset 0x8, size 0xC
    TC_OBJ_BODY atk_obj0; // offset 0x14, size 0x4
    float atk_rng0;       // offset 0x18, size 0x4
    TC_OBJ_BODY atk_obj1; // offset 0x1C, size 0x4
    float atk_rng1;       // offset 0x20, size 0x4
} ET_WORK;

/* unused */
typedef struct OFF_TBL_WORK 
{
    float off_z; // offset 0x0, size 0x4
    float rnd_z; // offset 0x4, size 0x4
} OFF_TBL_WORK;

void bhEne29(BH_PWORK* ewP);
static void bhEne29_Init(BH_PWORK* ewP);
static void bhEne29_Move(BH_PWORK* ewP);
static void bhEne29_Die();
static void bhEne29_Damage();
static void bhEne29_Event(BH_PWORK* ewP);
static void bhEne29_Br00(BH_PWORK* ewP);
static void bhEne29_Br01(BH_PWORK* ewP);
static void bhEne29_Mv00(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv01(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv02(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv03(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv04(BH_PWORK* ewP, en29_freework* fwP, int count);
static void bhEne29_Mv20(BH_PWORK* ewP, en29_freework* fwP, int count);
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
