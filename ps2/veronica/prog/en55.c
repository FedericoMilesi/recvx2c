typedef struct BH_PWORK;
typedef struct _anon0;
typedef struct _anon1;

typedef struct _anon3;
typedef struct _anon4;
typedef struct npobj;
typedef struct _anon5;


typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef struct _anon12;


typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;

typedef struct _anon19;

typedef struct _anon21;

typedef struct _anon23;
typedef struct _anon24;


typedef struct _anon27;
typedef struct _anon28;

typedef struct _anon30;
typedef struct _anon31;


typedef void(*type_19)(BH_PWORK*);
typedef void(*type_36)(BH_PWORK*);
typedef void(*type_50)(BH_PWORK*);
typedef void(*type_65)(BH_PWORK*);
typedef void(*type_75)(BH_PWORK*);
typedef void(*type_82)(void*);


typedef _anon0* type_1[512];
typedef _anon0* type_2[128];
typedef _anon0* type_3[128];
typedef _anon0* type_4[128];
typedef _anon0* type_5[512];
typedef _anon0* type_6[512];
typedef unsigned char type_7[64];

typedef _anon0* type_9[512];
typedef unsigned int type_10[4];
typedef _anon0* type_11[32];
typedef _anon0* type_12[512];
typedef BH_PWORK type_13[0];

typedef _anon0* type_15[32];
typedef _anon0* type_16[512];


typedef char type_20[8];
typedef void(*type_21)(BH_PWORK*)[1];
typedef _anon0* type_22[32];
typedef _anon0* type_23[512];

typedef _anon0* type_25[512];
typedef char type_26[32];

typedef short type_28[32];

typedef unsigned int type_30[1];

typedef int* type_32[16];
typedef _anon5 type_33[256];
typedef npobj* type_34[16];

typedef int type_37[4];
typedef void(*type_38)(BH_PWORK*)[1];
typedef _anon10 type_39[16];
typedef unsigned int type_40[4];
typedef char type_41[256];
typedef float type_42[4];
typedef float type_43[4];
typedef _anon8* type_44[128];
typedef float type_45[4];
typedef unsigned char type_46[64];
typedef char type_47[8];
typedef void* type_48[2];

typedef void(*type_51)(BH_PWORK*)[6];
typedef unsigned char* type_52[256];
typedef int type_53[4];
typedef unsigned int type_54[2];
typedef short type_55[256];
typedef float type_56[3];
typedef _anon21 type_57[4];
typedef short type_58[256];
typedef int type_59[3];
typedef int type_60[8];
typedef float type_61[3];

typedef _anon9 type_63[256];

typedef void(*type_66)(BH_PWORK*)[1];

typedef short type_68[256];
typedef int type_69[64];
typedef _anon10 type_70[450];
typedef char type_71[3];


typedef int type_74[450];
typedef void(*type_76)(BH_PWORK*)[1];
typedef unsigned int type_77[8];
typedef unsigned char type_78[450];
typedef char type_79[16];
typedef char type_80[4];
typedef unsigned int type_81[3];
typedef unsigned int type_83[32];
typedef unsigned int type_84[16];
typedef unsigned int type_85[16];
typedef unsigned char type_86[2];
typedef _anon28 type_87[64];
typedef unsigned int type_88[32];
typedef char type_89[32];
typedef _anon28 type_90[64];
typedef unsigned int type_91[16];
typedef char type_92[64];
typedef _anon28 type_93[64];
typedef BH_PWORK* type_94[16];
typedef unsigned int type_95[8];
typedef unsigned int type_96[1];
typedef unsigned int type_97[384];
typedef unsigned int type_98[2];
typedef unsigned int type_99[4];
typedef int* type_100[16];
typedef npobj* type_101[16];

typedef char type_103[4];
typedef _anon10 type_104[16];
typedef short type_105[4];
typedef unsigned char type_106[4];
typedef _anon24 type_107[16];
typedef unsigned int type_108[32];
typedef _anon0* type_109[128];

struct BH_PWORK
{
	unsigned int flg;
	unsigned short id;
	unsigned short type;
	char flr_no;
	char flr_nob;
	unsigned char mdlver;
	unsigned char param;
	unsigned char mode0;
	unsigned char mode1;
	unsigned char mode2;
	unsigned char mode3;
	float px;
	float py;
	float pz;
	int ax;
	int ay;
	int az;
	float ar;
	float aw;
	float ah;
	float ad;
	float car;
	float cah;
	float pxb;
	float pyb;
	float pzb;
	int axb;
	int ayb;
	int azb;
	float gpx;
	float gpy;
	float gpz;
	float lox;
	float loy;
	float loz;
	float aox;
	float aoy;
	float aoz;
	float spd;
	unsigned int flg2;
	unsigned int mdflg;
	unsigned int stflg;
	unsigned int Dummy3;
	int draw_tp;
	int mdl_n;
	void* mskp;
	unsigned int Dummy[1];
	int* skp[16];
	npobj* mbp[16];
	NJS_TEXLIST* txp[16];
	_anon10 mdl[16];
	_anon10* mlwP;
	unsigned int mdl_no;
	int lkono;
	unsigned char* lkwkp;
	unsigned char* exp0;
	unsigned char* exp1;
	unsigned char* exp2;
	unsigned char* exp3;
	unsigned char mtxbuf[64];
	NJS_MATRIX mtx;
	npobj* obj_a;
	npobj* obj_b;
	float shp_ct;
	char clp_jno[8];
	int lok_jno;
	_anon8* mnwP;
	_anon8* mnwPb;
	unsigned int mtn_attr;
	unsigned int mtn_no;
	int frm_no;
	unsigned int frm_mode;
	int hokan_rate;
	unsigned int hokan_count;
	unsigned int hokan_ctbak;
	int mtn_add;
	unsigned int mtn_md;
	unsigned char* mtn_tp;
	int axp;
	int ayp;
	int azp;
	short psh_ct;
	short psh_idx;
	int idx_ct;
	int mtn_chk;
	float ofx;
	float ofy;
	float ofz;
	float sx;
	float sy;
	float sz;
	float sxb;
	float syb;
	float szb;
	float xn;
	float yn;
	float zn;
	int ct0;
	int ct1;
	int ct2;
	int ct3;
	int wpnr_no;
	int wpnl_no;
	unsigned int at_flg;
	NJS_CAPSULE watr;
	_anon17* cpcl;
	short wax;
	short way;
	short waz;
	short waxp;
	short wayp;
	short wazp;
	int hp;
	int dam[64];
	int djnt_no;
	int cpcl_no;
	int dax;
	int day;
	float dpx;
	float dpy;
	float dpz;
	float dvx;
	float dvy;
	float dvz;
	int flr_snd;
	int ko_num;
	int footeff;
	int src_no;
	unsigned char* kdnp;
	int kdnidx;
	void* dan_ap;
	unsigned int comb_flg;
	unsigned int comb_wep;
	int comb_pnt;
	int comb_timeout;
	int total_dam;
	unsigned int Dummy2[2];
};

struct _anon0
{
	unsigned int flg;
	unsigned short id;
	unsigned short type;
	char flr_no;
	char flr_nob;
	unsigned char mdlver;
	unsigned char param;
	unsigned char mode0;
	unsigned char mode1;
	unsigned char mode2;
	unsigned char mode3;
	float px;
	float py;
	float pz;
	int ax;
	int ay;
	int az;
	float ar;
	float aw;
	float ah;
	float ad;
	float car;
	float cah;
	float pxb;
	float pyb;
	float pzb;
	int axb;
	int ayb;
	int azb;
	float gpx;
	float gpy;
	float gpz;
	float lox;
	float loy;
	float loz;
	float aox;
	float aoy;
	float aoz;
	float spd;
	unsigned int flg2;
	unsigned int mdflg;
	unsigned int stflg;
	unsigned int Dummy3;
	int draw_tp;
	int mdl_n;
	void* mskp;
	unsigned int Dummy[1];
	int* skp[16];
	npobj* mbp[16];
	NJS_TEXLIST* txp[16];
	_anon10 mdl[16];
	_anon10* mlwP;
	unsigned int mdl_no;
	int lkono;
	unsigned char* lkwkp;
	unsigned char* exp0;
	unsigned char* exp1;
	unsigned char* exp2;
	unsigned char* exp3;
	unsigned char mtxbuf[64];
	NJS_MATRIX mtx;
	npobj* obj_a;
	npobj* obj_b;
	float shp_ct;
	char clp_jno[8];
	int lok_jno;
	_anon8* mnwP;
	_anon8* mnwPb;
	unsigned int mtn_attr;
	unsigned int mtn_no;
	int frm_no;
	unsigned int frm_mode;
	int hokan_rate;
	unsigned int hokan_count;
	unsigned int hokan_ctbak;
	int mtn_add;
	unsigned int mtn_md;
	unsigned char* mtn_tp;
	int axp;
	int ayp;
	int azp;
	short psh_ct;
	short psh_idx;
	int idx_ct;
	int mtn_chk;
	float ofx;
	float ofy;
	float ofz;
	float sx;
	float sy;
	float sz;
	float sxb;
	float syb;
	float szb;
	float xn;
	float yn;
	float zn;
	int ct0;
	int ct1;
	int ct2;
	int ct3;
	unsigned char* objbak;
	_anon31 cspr;
	int pn;
	NJS_POLYGON_VTX* pvp;
	NJS_TEXTURE_VTX* tvp;
	NJS_POLYGON_VTX pv[4];
	NJS_TEXTURE_VTX tv[4];
	int bl_src;
	int bl_dst;
	int ani_ct;
	int tex_id;
	int aspd;
	unsigned int gidx;
	int bank;
	char jno[16];
	char hide[4];
	void(*func)(void*);
	int idx;
	int Dummy2;
};

struct _anon1
{
	unsigned int ssd_ver;
	unsigned int ssd_flg;
	unsigned int ssd_reserve;
	char keytype;
	char adjust_x;
	char adjust_y;
	char vibration;
	int best_tm[8];
	unsigned int sys_partid;
	unsigned int itm_partid;
	unsigned int fil_partid;
	unsigned int dor_partid;
	unsigned int ss_flg;
	int pdm_no;
	unsigned int typ_flg;
	unsigned short typ_md0;
	unsigned short typ_md1;
	void* typ_exp;
	unsigned int tk_flg;
	unsigned int ts_flg;
	unsigned int gm_flg;
	unsigned int st_flg;
	unsigned int cb_flg;
	unsigned int rm_flg;
	unsigned int pt_flg;
	unsigned int sp_flg;
	unsigned int ef_flg;
	unsigned int error;
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
	unsigned int ev_flg[32];
	unsigned int it_flg[16];
	unsigned int ic_flg[16];
	unsigned int ed_flg[32];
	unsigned int ky_flg[16];
	unsigned int mp_flg[8];
	unsigned int itm[384];
	unsigned int ply_stflg[4];
	NJS_POINT3 ply_pos;
	int ply_ang;
	char ply_wno[4];
	short ply_hp[4];
	unsigned char evt_posno[4];
	int time;
	int stv_tm;
	short spray_ct;
	short retry_ct;
	short clear_ct;
	short reserve1;
	unsigned int save_end;
	char stg_nob;
	char rom_nob;
	char pos_nob;
	char rcase_b;
	unsigned int en_flg[4];
	NJS_TEXLIST* et_lp[16][16][100];
	NJS_TEXLIST* ot_lp[1300];
	NJS_TEXLIST* it_lp[200];
	int eft_n;
	NJS_TEXLIST* eft_lp[8];
	int loop_ct;
	int loop_now;
	int cng_pid;
	PDS_PERIPHERAL* p1per;
	PDS_PERIPHERAL* p2per;
	PDS_PERIPHERAL* kbper;
	PDS_PERIPHERAL* msper;
	PDS_PERIPHERAL ms_per;
	int pad_port;
	unsigned int pad_on;
	unsigned int pad_oncpy;
	unsigned int pad_ps;
	unsigned int pad_rs;
	unsigned int pad_old;
	unsigned int pad_onb;
	unsigned int pad_psb;
	unsigned int pad_oldb;
	short pad_ax;
	short pad_ay;
	short pad_dx;
	short pad_dy;
	unsigned short pad_ar;
	unsigned short pad_al;
	int fixcno;
	int fixkno;
	unsigned int exm_attr;
	short evc_no;
	short evc_kn;
	short evc_ono;
	short evc_okn;
	int evc_sc;
	unsigned char mn_mode0;
	unsigned char mn_mode1;
	unsigned char mn_mode2;
	unsigned char mn_mode3;
	unsigned char mn_md0;
	unsigned char mn_md1;
	unsigned char mn_md2;
	unsigned char mn_md3;
	int mn_setct;
	unsigned int mn_stack[8];
	unsigned int sdm_flg;
	unsigned int sdm_mode;
	unsigned char* ltc_bp;
	unsigned int ltc_tsbak;
	int ewk_n;
	unsigned int enow;
	unsigned int onow;
	unsigned int efnow;
	int vsyc_ct;
	int vsyc_flg;
	int fog_ct;
	int bcl_ct;
	int gfrm_ct;
	int gframe;
	int eor_ct;
	unsigned int pfm_cts;
	int evt_tmd;
	int evt_tim;
	int evt_tdg;
	int evt_fcd;
	unsigned int evt_fcdct;
	unsigned int fsize;
	unsigned int rdtsz;
	unsigned char* memp;
	unsigned char* mempb;
	unsigned char* endp;
	unsigned char* rdtp;
	unsigned char* plmdlp;
	unsigned char* lmmdlp;
	unsigned char* wrmdlp;
	unsigned char* wlmdlp;
	unsigned char* plmthp;
	unsigned char* plbmtp;
	unsigned char* plwmtp;
	unsigned char* plzmtp;
	unsigned char* plemtp;
	unsigned char* plexwp;
	unsigned char* plhdwp;
	unsigned char* pletcp;
	unsigned char* subtxp;
	unsigned char* doordp;
	unsigned char* sbs_sp;
	_anon0* obwp;
	_anon0* itwp;
	_anon8* emtp[128];
	_anon8* rmthp;
	unsigned char* mspp;
	unsigned char* lspp;
	unsigned int* mes_ip;
	unsigned int* mes_sp;
	void* mes_tp;
	short txr_n;
	short txr_ct;
	NJS_TEXLIST* txlp[256];
	unsigned char* txdp[256];
	short txloff[256];
	short txb_ct;
	short txb_n;
	short txb[256];
	NJS_TEXLIST* txblp[256];
	_anon9 txbp[256];
	unsigned char* ef_psp;
	NJS_TEXNAME ef_tex[450];
	NJS_TEXLIST ef_tlist;
	_anon27 ef;
	short efid[256];
	_anon10 efm[450];
	int ef_ct;
	int ef_ctb;
	int ef_extn;
	int ef_tn[450];
	unsigned char ef_pbkb[450];
	int ef_pbnk;
	int ef_slow;
	int ef_ctrn;
	int yk_ct;
	int mg_ct;
	int bl_ct;
	int windr;
	float winds;
	int windrb;
	float windsb;
	unsigned int thunder;
	float gas_py;
	int en_objn;
	BH_PWORK* en_obj[16];
	int ef_poln;
	int ef_mdfn;
	int ef_linn;
	int ef_ntxn;
	int ef_trsn;
	int ef_pncn;
	int ef_opqn;
	int ef_thln;
	int ef_ntx2dn;
	int ef_trs2dn;
	int ef_pnc2dn;
	int ef_fncn;
	_anon0* ef_pol[512];
	_anon0* ef_mdf[128];
	_anon0* ef_lin[512];
	_anon0* ef_ntx[512];
	_anon0* ef_trs[512];
	_anon0* ef_pnc[512];
	_anon0* ef_opq[512];
	_anon0* ef_thl[512];
	_anon0* ef_ntx2d[128];
	_anon0* ef_trs2d[128];
	_anon0* ef_pnc2d[128];
	_anon0* ef_fnc[512];
	int ob_nlgn;
	int ob_hlgn;
	int ob_spcn;
	_anon0* ob_nlg[32];
	_anon0* ob_hlg[32];
	_anon0* ob_spc[32];
	unsigned int ren_gid;
	NJS_TEXINFO ren_info;
	NJS_TEXNAME ren_tex[1];
	NJS_TEXLIST ren_tlist;
	_anon5 rpb[256];
	int ren_n;
	int ren_idx[4];
	int wt_nbpt;
	float wt_px;
	float wt_pz;
	int wt_xp;
	int wt_zp;
	int wt_minx;
	int wt_minz;
	int wt_maxx;
	int wt_maxz;
	unsigned char* wt_wvp;
	NJS_PLANE mr_pl;
	unsigned char* zan_memp;
	unsigned char* zanp;
	_anon3* lgtp;
	float lg_vx;
	float lg_vy;
	float lg_vz;
	float lg_r;
	float lg_g;
	float lg_b;
	int lg_pnt;
	_anon21 lg_ptb[4];
	int mes_idx;
	unsigned int* mes_dp;
	int mes_ct;
	int mes_tim;
	int mes_fls;
	int mes_sel;
	int mes_seln;
	NJS_POINT2 mes_sps[16];
	int rt_sp;
	unsigned char* rt_wp;
	unsigned char* rt_dp;
	unsigned char* rt_nw;
	unsigned char* rt_nx;
	float* rt_ln;
	BH_PWORK* plp;
	_anon28* pl_htp;
	int costume;
	NJS_POINT3 hd_pos;
	NJS_POINT3 apos;
	_anon28* ahtp;
	int mwal_n;
	int metc_n;
	int mflr_n;
	_anon28 mwalp[64];
	_anon28 metcp[64];
	_anon28 mflrp[64];
	int dla_n;
	_anon28* htp;
	int psh_snd;
	int fog_cngct;
	unsigned int fog_col;
	float fog_nr;
	float fog_fr;
	float fade_ct;
	float fade_hkn;
	float fade_ao;
	float fade_an;
	float fade_ap;
	float fade_ro;
	float fade_rn;
	float fade_rp;
	float fade_go;
	float fade_gn;
	float fade_gp;
	float fade_bo;
	float fade_bn;
	float fade_bp;
	unsigned int fade_pbk;
	unsigned short ssv_md0;
	unsigned short ssv_md1;
	int ssv_tim;
	float ssv_ct;
	float ssv_hkn;
	float ssv_ao;
	float ssv_an;
	float ssv_ap;
	short fil_no;
	short fil_rt;
	float rvf_sc;
	float rvf_sn;
	unsigned int rvfc[4];
	float cine_an;
	float cine_ap;
	unsigned int sco_flg;
	float amb_r[4];
	float amb_g[4];
	float amb_b[4];
	int sb_id;
	int sb_cmd;
	int sb_rdid;
	int sb_rdsz;
	void* sb_rdp;
	void* sb_mlb;
	void* sb_ppp;
	NJS_TEXLIST* sb_tlist;
	int ddmd;
	_anon12 door;
	int mpmd;
	int mp_prm[4];
	unsigned short gov_md0;
	unsigned short gov_md1;
	int gov_ct;
	void* gov_exp;
	unsigned int com_flg;
	unsigned short com_md0;
	unsigned short com_md1;
	unsigned int com_num;
	void* com_exp;
	short ond_tnm;
	short ond_ud;
	char ond_cx;
	char ond_n[3];
	unsigned char ufo_md;
	unsigned char ufo_flg;
	short ufo_oidx;
	NJS_POINT3 ufo_pos;
	unsigned int opt_flg;
	unsigned short opt_md0;
	unsigned short opt_md1;
	void* opt_exp;
	unsigned int etc_idx;
	unsigned int flr_idx;
	int mvi_no;
	int mvi_tp;
	unsigned short mvi_md;
	unsigned short mvi_flg;
	unsigned int mvi_tsb;
	unsigned int mvi_spb;
	unsigned char* mvi_memp;
	unsigned int dcg_tkbak;
	unsigned int dcg_tsbak;
	unsigned int pau_spbak;
	unsigned int pau_pad_on;
	unsigned int pau_pad_ps;
	unsigned int pau_pad_old;
	unsigned char* pdm_dp;
	unsigned char* pdm_pd;
	int pdm_keytpb;
	int gat_ct;
	_anon24 gatc[16];
	int ght_ct;
	unsigned int ghtc[32];
	NJS_POINT3 ghtp[32];
	unsigned short db_md0;
	unsigned short db_md1;
	char db_stgno;
	char db_romno;
	char db_rcase;
	char db_muteki;
	short db_px;
	short db_py;
	int db_mes;
	int calc_v;
	unsigned int brkfg;
	char brkfg_typ[32];
	short brkfg_bit[32];
	unsigned int brkfg_tkb;
	unsigned int brkfg_tsb;
	int brkfg_ct;
	unsigned int bmt_size;
	unsigned int lmt_size;
	unsigned int emt_size;
	unsigned int wmt_size;
	char mes[256];
	float sfx;
	float sfy;
	float sfxn;
	float sfyn;
	float sfct;
};











struct _anon3
{
	unsigned int flg;
	unsigned int type;
	int aspd;
	int lkflg;
	int lkno;
	int lkono;
	int lsrc;
	float px;
	float py;
	float pz;
	float lx;
	float ly;
	float lz;
	float vx;
	float vy;
	float vz;
	float spc;
	float dif;
	float amb;
	float r;
	float g;
	float b;
	float nr;
	float fr;
	int iang;
	int oang;
	int ax;
	int ay;
	int az;
	unsigned int mode;
	int ct0;
	int ct1;
	int ct2;
	int ct3;
	float wpx;
	float wpy;
	float wpz;
	float wvx;
	float wvy;
	float wvz;
	float wspc;
	float wdif;
	float wamb;
	float wr;
	float wg;
	float wb;
	float wnr;
	float wfr;
	int wiang;
	int woang;
	int wax;
	int way;
	int waz;
	unsigned char* lkwkp;
	unsigned char* exp;
	_anon19* light;
};

struct _anon4
{
	unsigned int flg;
	int dmy;
	unsigned int dummy[2];
	NJS_MATRIX mtx;
};

struct npobj
{
	unsigned int evalflags;
	NJS_CNK_MODEL* model;
	float pos[3];
	int ang[3];
	float scl[3];
	npobj* child;
	npobj* sibling;
};

struct _anon5
{
	float x;
	float y;
	float z;
	float u;
	float v;
	unsigned int bcol;
	unsigned int ocol;
};





















struct _anon8
{
	unsigned int flg;
	unsigned int obj_num;
	unsigned int frm_num;
	void* datP;
	_anon16* md2P;
	unsigned short* atrP;
};

struct _anon9
{
	unsigned char* adr;
	unsigned int gidx;
	unsigned int attr;
	unsigned int w;
	unsigned int h;
};

struct _anon10
{
	unsigned int flg;
	unsigned int obj_num;
	void* datP;
	npobj* objP;
	NJS_TEXLIST* texP;
	_anon4* owP;
};





















struct _anon12
{
	unsigned int flg;
	char stg_no;
	char rom_no;
	unsigned char pos_no;
	unsigned char dor_tp;
	unsigned char mode0;
	unsigned char mode1;
	unsigned char mode2;
	unsigned char mode3;
	int ct0;
	int ct1;
	int ct2;
	int ct3;
};














struct _anon15
{
	float a;
	float r;
	float g;
	float b;
};

struct _anon16
{
	void* p[2];
};

struct _anon17
{
	short jnt_a;
	short jnt_b;
	int cap_r;
};







struct _anon19
{
	NJS_MATRIX mtrx;
	NJS_POINT3 pnt;
	NJS_POINT3 vctr;
	int stat;
	int reserve;
	_anon23 ltcal;
	_anon30 attr;
};








struct _anon21
{
	NJS_POINT3 ps;
	float nr;
	float fr;
	float cr;
	float cg;
	float cb;
};









struct _anon23
{
	float ratten;
	float ipd;
	float nrr;
	float frr;
	float cosi;
	float cose;
	float idev;
	float odev;
	float rate;
	float intns;
	int exp;
	int reserve;
	NJS_POINT3 lpnt;
	NJS_POINT3 lvctr;
	NJS_POINT3 lmvctr;
	_anon15 atten;
	_anon15 amb;
	_anon15 dif;
	_anon15 spc;
	_anon15 mamb;
	_anon15 mdif;
	_anon15 mspc;
};

struct _anon24
{
	NJS_POINT3 c1;
	NJS_POINT3 c2;
	float r1;
	float r2;
};




















struct _anon27
{
	unsigned int flg;
	unsigned short id;
	unsigned short type;
	short flr_no;
	unsigned short mdlver;
	float px;
	float py;
	float pz;
	float sx;
	float sy;
	float sz;
	short ay;
	short ax;
};

struct _anon28
{
	unsigned char flg;
	unsigned char type;
	unsigned char id;
	char flr_no;
	unsigned int attr;
	float px;
	float py;
	float pz;
	float w;
	float h;
	float d;
	unsigned char prm0;
	unsigned char prm1;
	unsigned char prm2;
	unsigned char prm3;
};














struct _anon30
{
	int lsrc;
	float iamb;
	float idif;
	float ispc;
	float nrang;
	float frang;
	void* func;
	int iang;
	int oang;
	_anon15 argb;
};

struct _anon31
{
	NJS_POINT3 c;
	float r;
};








void(*bhEne55_Mode0)(BH_PWORK*)[6];
void(*bhEne55_MoveType)(BH_PWORK*)[1];
void(*bhEne55_MoveMode2)(BH_PWORK*)[1];
void(*bhEne55_DamageType)(BH_PWORK*)[1];
void(*bhEne55_DamageMode2)(BH_PWORK*)[1];
_anon1* sys;
BH_PWORK ene[0];

void bhEne55(BH_PWORK* epw);
void bhEne55_MainLoop(BH_PWORK* epw);
int bhEne55_SetMtn(BH_PWORK* epw);
void bhEne55_CollCheck(BH_PWORK* epw);
void bhEne55_CalcEnemy(BH_PWORK* epw);
void bhEne55_Init(BH_PWORK* epw);
void bhEne55_Move(BH_PWORK* epw);
void bhEne55_Damage(BH_PWORK* epw);
void bhEne55_MVType00(BH_PWORK* epw);
void bhEne55_MV00(BH_PWORK* epw);
void bhEne55_DGType00(BH_PWORK* epw);
void bhEne55_DG00(BH_PWORK* epw);

// 
// Start address: 0x21b410
void bhEne55(BH_PWORK* epw)
{
	int i;
	// Line 154, Address: 0x21b410, Func Offset: 0
	// Line 158, Address: 0x21b41c, Func Offset: 0xc
	// Line 161, Address: 0x21b424, Func Offset: 0x14
	// Line 163, Address: 0x21b434, Func Offset: 0x24
	// Line 164, Address: 0x21b458, Func Offset: 0x48
	// Line 168, Address: 0x21b468, Func Offset: 0x58
	// Line 171, Address: 0x21b474, Func Offset: 0x64
	// Line 173, Address: 0x21b47c, Func Offset: 0x6c
	// Func End, Address: 0x21b48c, Func Offset: 0x7c
}

// 
// Start address: 0x21b490
void bhEne55_MainLoop(BH_PWORK* epw)
{
	// Line 193, Address: 0x21b490, Func Offset: 0
	// Line 197, Address: 0x21b4a0, Func Offset: 0x10
	// Line 200, Address: 0x21b4c0, Func Offset: 0x30
	// Line 210, Address: 0x21b4c8, Func Offset: 0x38
	// Func End, Address: 0x21b4d8, Func Offset: 0x48
}

// 
// Start address: 0x21b4e0
int bhEne55_SetMtn(BH_PWORK* epw)
{
	int ret;
	// Line 226, Address: 0x21b4e0, Func Offset: 0
	// Line 232, Address: 0x21b4f0, Func Offset: 0x10
	// Line 235, Address: 0x21b500, Func Offset: 0x20
	// Line 236, Address: 0x21b508, Func Offset: 0x28
	// Line 238, Address: 0x21b51c, Func Offset: 0x3c
	// Line 241, Address: 0x21b530, Func Offset: 0x50
	// Func End, Address: 0x21b540, Func Offset: 0x60
}

// 
// Start address: 0x21b540
void bhEne55_CollCheck(BH_PWORK* epw)
{
	int i;
	NJS_POINT3 ps;
	_anon31 at;
	_anon4* owk;
	BH_PWORK* epp;
	// Line 260, Address: 0x21b540, Func Offset: 0
	// Line 267, Address: 0x21b550, Func Offset: 0x10
	// Line 270, Address: 0x21b580, Func Offset: 0x40
	// Line 273, Address: 0x21b598, Func Offset: 0x58
	// Line 276, Address: 0x21b59c, Func Offset: 0x5c
	// Line 277, Address: 0x21b5a0, Func Offset: 0x60
	// Line 273, Address: 0x21b5a8, Func Offset: 0x68
	// Line 274, Address: 0x21b5b4, Func Offset: 0x74
	// Line 275, Address: 0x21b5b8, Func Offset: 0x78
	// Line 277, Address: 0x21b5bc, Func Offset: 0x7c
	// Line 278, Address: 0x21b5c8, Func Offset: 0x88
	// Line 279, Address: 0x21b5cc, Func Offset: 0x8c
	// Line 281, Address: 0x21b5e4, Func Offset: 0xa4
	// Line 282, Address: 0x21b5ec, Func Offset: 0xac
	// Line 281, Address: 0x21b5f0, Func Offset: 0xb0
	// Line 282, Address: 0x21b5fc, Func Offset: 0xbc
	// Line 283, Address: 0x21b600, Func Offset: 0xc0
	// Line 284, Address: 0x21b604, Func Offset: 0xc4
	// Line 287, Address: 0x21b608, Func Offset: 0xc8
	// Line 289, Address: 0x21b610, Func Offset: 0xd0
	// Line 290, Address: 0x21b628, Func Offset: 0xe8
	// Func End, Address: 0x21b63c, Func Offset: 0xfc
}

// 
// Start address: 0x21b640
void bhEne55_CalcEnemy(BH_PWORK* epw)
{
	_anon4* owk;
	// Line 307, Address: 0x21b640, Func Offset: 0
	// Line 311, Address: 0x21b64c, Func Offset: 0xc
	// Line 314, Address: 0x21b654, Func Offset: 0x14
	// Line 315, Address: 0x21b658, Func Offset: 0x18
	// Line 326, Address: 0x21b65c, Func Offset: 0x1c
	// Line 314, Address: 0x21b660, Func Offset: 0x20
	// Line 315, Address: 0x21b664, Func Offset: 0x24
	// Line 318, Address: 0x21b674, Func Offset: 0x34
	// Line 319, Address: 0x21b67c, Func Offset: 0x3c
	// Line 320, Address: 0x21b684, Func Offset: 0x44
	// Line 321, Address: 0x21b68c, Func Offset: 0x4c
	// Line 322, Address: 0x21b694, Func Offset: 0x54
	// Line 323, Address: 0x21b69c, Func Offset: 0x5c
	// Line 324, Address: 0x21b6a4, Func Offset: 0x64
	// Line 325, Address: 0x21b6ac, Func Offset: 0x6c
	// Line 326, Address: 0x21b6b4, Func Offset: 0x74
	// Line 327, Address: 0x21b6b8, Func Offset: 0x78
	// Func End, Address: 0x21b6c8, Func Offset: 0x88
}

// 
// Start address: 0x21b6d0
void bhEne55_Init(BH_PWORK* epw)
{
	int i;
	// Line 347, Address: 0x21b6d0, Func Offset: 0
	// Line 348, Address: 0x21b6d8, Func Offset: 0x8
	// Line 349, Address: 0x21b6e0, Func Offset: 0x10
	// Line 350, Address: 0x21b6e4, Func Offset: 0x14
	// Line 351, Address: 0x21b6e8, Func Offset: 0x18
	// Line 352, Address: 0x21b6ec, Func Offset: 0x1c
	// Line 353, Address: 0x21b6f0, Func Offset: 0x20
	// Line 354, Address: 0x21b6f8, Func Offset: 0x28
	// Line 355, Address: 0x21b6fc, Func Offset: 0x2c
	// Line 358, Address: 0x21b720, Func Offset: 0x50
	// Line 359, Address: 0x21b724, Func Offset: 0x54
	// Line 360, Address: 0x21b728, Func Offset: 0x58
	// Line 361, Address: 0x21b72c, Func Offset: 0x5c
	// Line 362, Address: 0x21b730, Func Offset: 0x60
	// Line 363, Address: 0x21b734, Func Offset: 0x64
	// Line 364, Address: 0x21b738, Func Offset: 0x68
	// Line 368, Address: 0x21b73c, Func Offset: 0x6c
	// Line 369, Address: 0x21b740, Func Offset: 0x70
	// Line 372, Address: 0x21b744, Func Offset: 0x74
	// Line 375, Address: 0x21b748, Func Offset: 0x78
	// Line 368, Address: 0x21b74c, Func Offset: 0x7c
	// Line 369, Address: 0x21b754, Func Offset: 0x84
	// Line 372, Address: 0x21b760, Func Offset: 0x90
	// Line 373, Address: 0x21b764, Func Offset: 0x94
	// Line 375, Address: 0x21b770, Func Offset: 0xa0
	// Line 376, Address: 0x21b774, Func Offset: 0xa4
	// Line 377, Address: 0x21b778, Func Offset: 0xa8
	// Line 379, Address: 0x21b77c, Func Offset: 0xac
	// Func End, Address: 0x21b784, Func Offset: 0xb4
}

// 
// Start address: 0x21b790
void bhEne55_Move(BH_PWORK* epw)
{
	// Line 399, Address: 0x21b790, Func Offset: 0
	// Func End, Address: 0x21b7b0, Func Offset: 0x20
}

// 
// Start address: 0x21b7b0
void bhEne55_Damage(BH_PWORK* epw)
{
	// Line 418, Address: 0x21b7b0, Func Offset: 0
	// Func End, Address: 0x21b7d0, Func Offset: 0x20
}

// 
// Start address: 0x21b7d0
void bhEne55_MVType00(BH_PWORK* epw)
{
	// Line 438, Address: 0x21b7d0, Func Offset: 0
	// Func End, Address: 0x21b7f0, Func Offset: 0x20
}

// 
// Start address: 0x21b7f0
void bhEne55_MV00(BH_PWORK* epw)
{
	// Line 459, Address: 0x21b7f0, Func Offset: 0
	// Line 460, Address: 0x21b7fc, Func Offset: 0xc
	// Line 463, Address: 0x21b81c, Func Offset: 0x2c
	// Line 464, Address: 0x21b82c, Func Offset: 0x3c
	// Line 465, Address: 0x21b830, Func Offset: 0x40
	// Line 470, Address: 0x21b83c, Func Offset: 0x4c
	// Func End, Address: 0x21b84c, Func Offset: 0x5c
}

// 
// Start address: 0x21b850
void bhEne55_DGType00(BH_PWORK* epw)
{
	// Line 489, Address: 0x21b850, Func Offset: 0
	// Func End, Address: 0x21b870, Func Offset: 0x20
}

// 
// Start address: 0x21b870
void bhEne55_DG00(BH_PWORK* epw)
{
	// Line 510, Address: 0x21b870, Func Offset: 0
	// Line 511, Address: 0x21b87c, Func Offset: 0xc
	// Line 514, Address: 0x21b8a8, Func Offset: 0x38
	// Line 516, Address: 0x21b8c8, Func Offset: 0x58
	// Line 517, Address: 0x21b8d4, Func Offset: 0x64
	// Line 520, Address: 0x21b8dc, Func Offset: 0x6c
	// Line 522, Address: 0x21b8ec, Func Offset: 0x7c
	// Line 525, Address: 0x21b8f8, Func Offset: 0x88
	// Line 527, Address: 0x21b928, Func Offset: 0xb8
	// Line 528, Address: 0x21b92c, Func Offset: 0xbc
	// Line 535, Address: 0x21b938, Func Offset: 0xc8
	// Func End, Address: 0x21b948, Func Offset: 0xd8
}

