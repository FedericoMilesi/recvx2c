// main.c

typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef struct npobj;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef struct _anon9;

typedef struct _anon11;
typedef struct _anon12;

typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct BH_PWORK;
typedef struct _anon18;
typedef struct _anon19;


typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;

typedef struct _anon27;
typedef struct _anon28;

typedef struct _anon30;
typedef struct _anon31;
typedef struct _anon32;
typedef struct _anon33;

typedef struct _anon35;

typedef struct _anon37;
typedef struct _anon38;

typedef struct _anon40;
typedef struct _anon41;

typedef struct _anon43;
typedef struct _anon44;
typedef struct _anon45;
typedef struct _anon46;

typedef void(*type_27)(void*);
typedef void(*type_42)();

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef short type_3[256];
typedef unsigned int type_4[2];
typedef int type_5[8];

typedef _anon37 type_7[256];
typedef float type_8[3];

typedef int type_10[3];
typedef float type_11[3];
typedef short type_12[256];
typedef _anon5 type_13[450];
typedef int type_14[64];
typedef unsigned int type_15[16];
typedef char type_16[4];
typedef unsigned int type_17[8];
typedef int type_18[4];

typedef int type_20[450];

typedef unsigned int type_22[8];
typedef unsigned char type_23[450];
typedef _anon1 type_24[4];
typedef char type_25[16];
typedef char type_26[4];
typedef _anon44 type_28[2];
typedef unsigned int type_29[32];

typedef unsigned char type_31[256];
typedef unsigned int type_32[16];
typedef char type_33[3];
typedef unsigned int type_34[16];
typedef unsigned int type_35[32];
typedef unsigned int type_36[16];
typedef BH_PWORK* type_37[16];
typedef unsigned int type_38[8];
typedef char type_39[64];
typedef unsigned int type_40[1];
typedef unsigned int type_41[384];
typedef unsigned int type_43[2];
typedef _anon24 type_44[256];
typedef void(*type_45)()[23];
typedef int* type_46[16];
typedef unsigned int type_47[4];
typedef npobj* type_48[16];

typedef char type_50[4];
typedef _anon5 type_51[16];
typedef short type_52[4];
typedef unsigned char type_53[4];
typedef unsigned int type_54[8];
typedef unsigned int type_55[4];
typedef _anon28 type_56[64];
typedef _anon27* type_57[512];
typedef _anon28 type_58[64];
typedef _anon27* type_59[128];
typedef _anon28 type_60[64];

typedef _anon27* type_62[512];
typedef float type_63[128];
typedef unsigned char type_64[64];
typedef _anon27* type_65[512];
typedef _anon27* type_66[512];
typedef unsigned int type_67[4];
typedef BH_PWORK type_68[128];
typedef _anon27* type_69[512];



typedef char type_73[8];
typedef _anon27* type_74[512];
typedef _anon27 type_75[512];

typedef _anon27* type_77[512];
typedef float type_78[32];
typedef _anon14 type_79[16];

typedef _anon27* type_81[128];
typedef unsigned int type_82[1];
typedef unsigned int type_83[32];
typedef _anon27* type_84[128];

typedef int* type_86[16];

typedef _anon30 type_88[16];
typedef _anon27* type_89[128];
typedef npobj* type_90[16];

typedef unsigned int type_92[3];
typedef _anon27* type_93[512];
typedef float type_94[4];
typedef _anon5 type_95[16];
typedef float type_96[4];
typedef float type_97[4];
typedef unsigned char type_98[2];
typedef _anon27* type_99[32];
typedef char type_100[32];
typedef _anon12* type_101[128];
typedef char type_102[64];
typedef _anon27* type_103[32];
typedef float type_104[3];
typedef unsigned char type_105[64];
typedef float type_106[3][20];
typedef _anon27* type_107[32];
typedef float type_108[3];
typedef float type_109[3][20];
typedef float type_110[3];
typedef char type_111[32];
typedef float type_112[3][20];
typedef char type_113[8];
typedef short type_114[32];

typedef float type_116[3];
typedef float type_117[3][20];

typedef _anon9 type_119[256];
typedef int type_120[4];
typedef unsigned int type_121[4];

typedef void* type_123[2];
typedef unsigned char* type_124[256];
typedef char type_125[256];
typedef short type_126[256];

struct _anon0
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
	_anon43* light;
};

struct _anon1
{
	NJS_POINT3 ps;
	float nr;
	float fr;
	float cr;
	float cg;
	float cb;
};

struct _anon2
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
	unsigned int flg;
	unsigned int obj_num;
	void* datP;
	npobj* objP;
	NJS_TEXLIST* texP;
	_anon2* owP;
};

struct _anon6
{
	short jnt_a;
	short jnt_b;
	int cap_r;
};

struct _anon7
{
	unsigned int flg;
	unsigned short id;
	unsigned short type;
	char flr_no;
	unsigned char mdlver;
	unsigned char wrk_no;
	char prm1;
	float px;
	float py;
	float pz;
	short ax;
	short az;
	short ay;
	short aspd;
	char hide[4];
};









struct _anon9
{
	float x;
	float y;
	float z;
	float u;
	float v;
	unsigned int bcol;
	unsigned int ocol;
};















struct _anon11
{
	int mode;
	int frame;
	int count;
	int vtx_opq_a;
	int vtx_opq_b;
	int vtx_trs_a;
	int vtx_trs_b;
	int vtx_punch;
	int vtx_total;
};

struct _anon12
{
	unsigned int flg;
	unsigned int obj_num;
	unsigned int frm_num;
	void* datP;
	_anon15* md2P;
	unsigned short* atrP;
};









struct _anon14
{
	NJS_POINT3 c1;
	NJS_POINT3 c2;
	float r1;
	float r2;
};

struct _anon15
{
	void* p[2];
};

struct _anon16
{
	unsigned char flg;
	unsigned char type;
	char flr_no;
	unsigned char ctab_n;
	_anon19* cuttp;
	float cx;
	float cy;
	float cz;
	float cw;
	float ch;
	float cd;
	_anon44 cam[2];
	unsigned char exd[256];
};

struct _anon17
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
	_anon5 mdl[16];
	_anon5* mlwP;
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
	_anon12* mnwP;
	_anon12* mnwPb;
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
	_anon6* cpcl;
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

struct _anon18
{
	unsigned int flg;
	int camver;
	unsigned char mode0;
	unsigned char mode1;
	unsigned char mode2;
	unsigned char mode3;
	float px;
	float py;
	float pz;
	float vx;
	float vy;
	float vz;
	float wpx;
	float wpy;
	float wpz;
	float plx;
	float ply;
	float plz;
	float pxp;
	float pyp;
	float pzp;
	float ofx;
	float ofy;
	float ofz;
	int ax;
	int ay;
	int az;
	int axp;
	int ayp;
	int azp;
	float ln;
	float pln;
	float xr;
	float xn;
	float yr;
	float yn;
	int pers;
	int ppers;
	int ncut;
	int ocut;
	unsigned int ocflg;
	unsigned int attr;
	NJS_MATRIX mtx;
	NJS_MATRIX mtxb;
	int evc_no;
	int hct;
	int ct0;
	int ct1;
	int keyf_no;
	float frm;
	float spd;
	float pxn;
	float pyn;
	float pzn;
	int axn;
	int ayn;
	int azn;
	int pe_ax;
	int pe_pers;
	unsigned int fog_col;
	float fog_nr;
	float fog_fr;
	float ips[3][20];
	float ian[3][20];
	float ipf[3][20];
	float icr[3][20];
};

struct _anon19
{
	unsigned int attr;
	char flr_no;
	char reserve0;
	char reserve1;
	char atr_tp;
	float h;
	float dmy;
	float minx;
	float minz;
	float maxx;
	float maxz;
};














struct _anon22
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
	int lkflg;
	int lkno;
	int lkono;
	float lx;
	float ly;
	float lz;
	int param;
};

struct _anon23
{
	float a;
	float r;
	float g;
	float b;
};

struct _anon24
{
	unsigned int globalIndex;
	unsigned int bank;
	unsigned int tspparambuffer;
	unsigned int texparambuffer;
	unsigned int texaddr;
	NJS_TEXINFO texinfo;
	unsigned short count;
	unsigned short dummy;
};

struct _anon25
{
	unsigned short* scd0;
	unsigned short* scd1;
	unsigned short* evd;
};







struct _anon27
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
	_anon5 mdl[16];
	_anon5* mlwP;
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
	_anon12* mnwP;
	_anon12* mnwPb;
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
	_anon40 cspr;
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
	unsigned short flg;
	short frame;
	float px;
	float py;
	float pz;
	short ax;
	short ay;
	short az;
	short pers;
	unsigned int hidobj[8];
	unsigned int hidlgt[4];
	unsigned int fog_col;
	float fog_nr;
	float fog_fr;
	short lkflg;
	short lkno;
	short lkono;
	short nxt_no;
	float lx;
	float ly;
	float lz;
	float prm_0;
	float prm_1;
	float prm_2;
	float prm_3;
	float prm_4;
	unsigned char* recp;
};

struct _anon31
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
	_anon23 atten;
	_anon23 amb;
	_anon23 dif;
	_anon23 spc;
	_anon23 mamb;
	_anon23 mdif;
	_anon23 mspc;
};

struct _anon32
{
	_anon16* cutp;
	_anon0* lgtp;
	_anon7* enep;
	_anon7* objp;
	_anon7* itmp;
	_anon22* effp;
	_anon28* walp;
	_anon28* etcp;
	_anon28* flrp;
	_anon33* posp;
	_anon28* rutp;
	unsigned char* ruttp;
	_anon25* evtp;
	_anon35* evcp;
	unsigned int* mesp;
	_anon0* evlp;
	unsigned char* dmp00;
	unsigned char* dmp01;
	unsigned char* dmp02;
	unsigned char* dmp03;
	unsigned char* dmp04;
	unsigned char* dmp05;
	unsigned char* dmp06;
	unsigned char* dmp07;
	unsigned char* dmp08;
	unsigned char* dmp09;
	unsigned char* dmp10;
	unsigned char* dmp11;
	unsigned char* dmp12;
	unsigned char* dmp13;
	unsigned char* dmp14;
	unsigned char* dmp15;
	int cut_n;
	int lgt_n;
	int ene_n;
	int obj_n;
	int itm_n;
	int eff_n;
	int wal_n;
	int etc_n;
	int flr_n;
	int pos_n;
	int rut_n;
	int evc_n;
	int mes_n;
	int evl_n;
	int dmy00;
	int dmy01;
	int dmy02;
	int dmy03;
	int dmy04;
	int dmy05;
	int dmy06;
	int dmy07;
	int dmy08;
	int dmy09;
	int dmy10;
	int dmy11;
	int dmy12;
	int dmy13;
	int dmy14;
	int dmy15;
	int dmy16;
	int dmy17;
	unsigned int flg;
	unsigned int bak_col;
	unsigned int fog_col;
	float fog_nr;
	float fog_fr;
	float w;
	float h;
	float d;
	float grand[32];
	_anon5 mdl;
	float fog[128];
	char amb_rom;
	char amb_chr;
	char amb_obj;
	char amb_itm;
	float amb_r[4];
	float amb_g[4];
	float amb_b[4];
};

struct _anon33
{
	float px;
	float py;
	float pz;
	int ay;
};











struct _anon35
{
	unsigned short flg;
	unsigned short type;
	short nxt_no;
	short keyf_n;
	_anon30 keyf[16];
};














struct _anon37
{
	unsigned char* adr;
	unsigned int gidx;
	unsigned int attr;
	unsigned int w;
	unsigned int h;
};

struct _anon38
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
	_anon23 argb;
};





















struct _anon40
{
	NJS_POINT3 c;
	float r;
};

struct _anon41
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








struct _anon43
{
	NJS_MATRIX mtrx;
	NJS_POINT3 pnt;
	NJS_POINT3 vctr;
	int stat;
	int reserve;
	_anon31 ltcal;
	_anon38 attr;
};

struct _anon44
{
	unsigned short flg;
	unsigned char lgtclip;
	char spd;
	float px;
	float py;
	float pz;
	float ln;
	float w;
	float h;
	float d;
	float y0;
	float y1;
	float y2;
	float y3;
	float am_spd;
	int ax;
	int ay;
	int az;
	int lax;
	int lay;
	short laz0;
	short laz1;
	short laz2;
	short laz3;
	char aa_spd;
	char fil_no;
	char fil_rt;
	char reserve;
	int pers;
	unsigned int hidobj[16];
	unsigned int hidlgt[8];
	unsigned int fog_col;
	float fog_nr;
	float fog_fr;
};

struct _anon45
{
	NJS_MATRIX m;
	float px;
	float py;
	float pz;
	float vx;
	float vy;
	float vz;
	int roll;
	float apx;
	float apy;
	float apz;
	float avx;
	float avy;
	float avz;
	int aroll;
};

struct _anon46
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
	_anon27* obwp;
	_anon27* itwp;
	_anon12* emtp[128];
	_anon12* rmthp;
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
	_anon37 txbp[256];
	unsigned char* ef_psp;
	NJS_TEXNAME ef_tex[450];
	NJS_TEXLIST ef_tlist;
	_anon17 ef;
	short efid[256];
	_anon5 efm[450];
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
	_anon27* ef_pol[512];
	_anon27* ef_mdf[128];
	_anon27* ef_lin[512];
	_anon27* ef_ntx[512];
	_anon27* ef_trs[512];
	_anon27* ef_pnc[512];
	_anon27* ef_opq[512];
	_anon27* ef_thl[512];
	_anon27* ef_ntx2d[128];
	_anon27* ef_trs2d[128];
	_anon27* ef_pnc2d[128];
	_anon27* ef_fnc[512];
	int ob_nlgn;
	int ob_hlgn;
	int ob_spcn;
	_anon27* ob_nlg[32];
	_anon27* ob_hlg[32];
	_anon27* ob_spc[32];
	unsigned int ren_gid;
	NJS_TEXINFO ren_info;
	NJS_TEXNAME ren_tex[1];
	NJS_TEXLIST ren_tlist;
	_anon9 rpb[256];
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
	_anon0* lgtp;
	float lg_vx;
	float lg_vy;
	float lg_vz;
	float lg_r;
	float lg_g;
	float lg_b;
	int lg_pnt;
	_anon1 lg_ptb[4];
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
	_anon41 door;
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
	_anon14 gatc[16];
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
