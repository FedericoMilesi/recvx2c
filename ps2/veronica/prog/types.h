#pragma once

#include "ps2_prefix.h"

#include "eetypes.h"
#include "eestruct.h"

#include <shinobi.h>

#define NULL 0

#define CheckCmdReq(vol, pan, pitch) (0x00 | 0 | ((vol) & 1) | (((pan) & 1) << 1) | (((pitch) & 1) << 2))

typedef struct ADV_MESSAGE_DEFINITION {
    float Sx; // Start X
    float Sy; // Start Y
    int StartMsgNo; // Start Message Number
    int NaviMsgNo; // Navigation Message Number
    int MsgType; // Message Type
} ADV_MESSAGE_DEFINITION; // 0x14 bytes

typedef struct NJS_POINT4 {
    float x; // X coordinate or plane parameter
    float y; // Y coordinate or plane parameter
    float z; // Z coordinate or plane parameter
    float w; // W coordinate or plane parameter, possibly used for homogeneous clipping
} NJS_POINT4; // 16 bytes (0x10)

typedef struct SND_QUEUE {
    int cmd; // Command
    char vol; // Volume
    char pan; // Pan
    short pitch; // Pitch
} SND_QUEUE; // 0x8 bytes

typedef struct SND_STATUS {
    unsigned short se_info[6]; // Sound effect information
    unsigned short midi_info; // MIDI information
    short port_info[8]; // Port information
    short midi_sum[4]; // MIDI summary
    short se_sum[5]; // Sound effect summary
    unsigned short dummy[9]; // Reserved for alignment or future use
} SND_STATUS;

typedef struct Unknown29 {
    char ppStrPvpl[4]; // "PVPL"
    unsigned int ppNextTag; // Next Tag
    unsigned short ppCategoryCode; // Category Code
    unsigned short ppBankId; // Bank ID
    unsigned short ppEntryOffset; // Entry Offset
    unsigned short ppEntryCount; // Entry Count
} Unknown29; // 0x10 bytes

typedef struct PS2_TIM_LIST_ENTRY_ADMIN {
    unsigned int gindex; // G-Index
    unsigned int size; // Size
    unsigned int count; // Count
    void* addr; // Address
    void* before; // Before
    void* after; // After
} PS2_TIM_LIST_ENTRY_ADMIN; // 0x18 bytes

typedef struct PS2_TIM_LIST_ENTRY {
    char FileId[4]; // File ID
    unsigned char FormatVersion; // Format Version
    unsigned char FormatId; // Format ID
    unsigned short Pictures; // Pictures
    unsigned int Gindex; // G-Index
    unsigned char OrgColorType; // Original Color Type
    unsigned char OrgTexType; // Original Texture Type
    unsigned short ClutChange; // CLUT Change
    unsigned int PalNum; // Palette Number
    unsigned int PalData[27]; // Palette Data
    unsigned int TotalSize; // Total size
    unsigned int ClutSize; // CLUT size
    unsigned int ImageSize; // Image size
    unsigned short HeaderSize; // Header size
    unsigned short ClutColors; // CLUT colors
    unsigned char PictFormat; // Picture format
    unsigned char MipMapTextures; // MipMap textures
    unsigned char ClutType; // CLUT type
    unsigned char ImageType; // Image type
    unsigned short ImageWidth; // Image width
    unsigned short ImageHeight; // Image height
    sceGsTex0 GsTex0; // GS Texture 0
    sceGsTex1 GsTex1; // GS Texture 1
    unsigned int GsRegs; // GS Registers
    unsigned int GsTexClut; // GS Texture CLUT
    PS2_TIM_LIST_ENTRY_ADMIN admin; // Admin
    unsigned int TpFlag; // TP Flag
    unsigned int ClampFlag; // Clamp Flag
} PS2_TIM_LIST_ENTRY;

typedef struct TIM2_PICTUREHEADER {
    unsigned int TotalSize; // Total Size
    unsigned int ClutSize; // CLUT Size
    unsigned int ImageSize; // Image Size
    unsigned short HeaderSize; // Header Size
    unsigned short ClutColors; // CLUT Colors
    unsigned char PictFormat; // Picture Format
    unsigned char MipMapTextures; // MipMap Textures
    unsigned char ClutType; // CLUT Type
    unsigned char ImageType; // Image Type
    unsigned short ImageWidth; // Image Width
    unsigned short ImageHeight; // Image Height
    unsigned long GsTex0; // GS Texture 0
    unsigned long GsTex1; // GS Texture 1
    unsigned int GsRegs; // GS Registers
    unsigned int GsTexClut; // GS Texture CLUT
} TIM2_PICTUREHEADER;

typedef struct ADV_WORK {
    int PatId; // Pattern ID
    int Mode; // Mode
    int Mode2; // Mode 2
    int NextMode; // Next Mode
    int NextReturnCode; // Next Return Code
    int PortId; // Port ID
    int OptIndex; // Option Index
    int OptLevel; // Option Level
    int NextOptLevel; // Next Option Level
    int OptScrX; // Option Screen X
    int OptScrY; // Option Screen Y
    unsigned int PalNo; // Palette Number
    unsigned int PalMode; // Palette Mode
    unsigned int FontBaseColor; // Font Base Color
    unsigned char* SysMemPtr; // System Memory Pointer
    unsigned char* MsgPtr; // Message Pointer
    unsigned char* ptr[8]; // Pointers
    float Timer; // Timer
    float FadeRate; // Fade Rate
    float FadeSpeed; // Fade Speed
    float SaverTimer; // Saver Timer
    float SaverRate; // Saver Rate
    float FlushCount; // Flush Count
    float FlushSpeed; // Flush Speed
    float FlushCount2; // Flush Count 2
    float FlushSpeed2; // Flush Speed 2
    float ScrollPlatePosX[2][2]; // Scroll Plate Position X
    char Active; // Active
    char AppMode; // Application Mode
    char ExtraFlag; // Extra Flag
    char FadeType; // Fade Type
    char SaverCommand; // Saver Command
    char Count; // Count
    char LastLevel; // Last Level
    char FromTitle; // From Title
    char CurrentDiscId; // Current Disc ID
    char NextDiscId; // Next Disc ID
    char ErrorId; // Error ID
    unsigned char ErrorMsgFlushCount; // Error Message Flush Count
    char AnimId; // Animation ID
    unsigned char AnimTime; // Animation Time
    char GenFlag; // General Flag
    char PalFlag; // Palette Flag
    char SrFlag; // SR Flag
    char OptFadeType; // Option Fade Type
    char TexFlag; // Texture Flag
    char SoundMode; // Sound Mode
    char vibration; // Vibration
    char keytype; // Key Type
    char adjust_x; // Adjust X
    char adjust_y; // Adjust Y
    char OptSaveFlag; // Option Save Flag
    char vMode; // V-Mode
    char DriveNo; // Drive Number
    char MsgNo; // Message Number
    char DepthLevel; // Depth Level
    char OldVmOpMode; // Old VM Operation Mode
    char VmOpMode; // VM Operation Mode
    char SetTexture[2]; // Set Texture
    char KeyCommandCount[7]; // Key Command Count
    char Cursor[3]; // Cursor
    char CursorMax[3]; // Cursor Max
    char CursorFlag[4][4]; // Cursor Flag
    char ModeCommandId[4]; // Mode Command ID
} ADV_WORK;

typedef struct Camera {
    /*   0 */ unsigned int flg; // Flags
    /*   4 */ int camver; // Camera Version
    /*   8 */ unsigned char mode0; // Mode 0
    /*   9 */ unsigned char mode1; // Mode 1
    /*  10 */ unsigned char mode2; // Mode 2
    /*  11 */ unsigned char mode3; // Mode 3
    /*  12 */ float px; // Position X
    /*  16 */ float py; // Position Y
    /*  20 */ float pz; // Position Z
    /*  24 */ float vx; // Vector X
    /*  28 */ float vy; // Vector Y
    /*  32 */ float vz; // Vector Z
    /*  36 */ float wpx; // World Position X
    /*  40 */ float wpy; // World Position Y
    /*  44 */ float wpz; // World Position Z
    /*  48 */ float plx; // Player X?
    /*  52 */ float ply; // Player Y?
    /*  56 */ float plz; // Player Z?
    /*  60 */ float pxp; // Position X Previous
    /*  64 */ float pyp; // Position Y Previous
    /*  68 */ float pzp; // Position Z Previous
    /*  72 */ float ofx; // Offset X
    /*  76 */ float ofy; // Offset Y
    /*  80 */ float ofz; // Offset Z
    /*  84 */ int ax; // Angle X
    /*  88 */ int ay; // Angle Y
    /*  92 */ int az; // Angle Z
    /*  96 */ int axp; // Angle X Previous
    /* 100 */ int ayp; // Angle Y Previous
    /* 104 */ int azp; // Angle Z Previous
    /* 108 */ float ln; // Length
    /* 112 */ float pln; // Previous Length
    /* 116 */ float xr; // X Rotation
    /* 120 */ float xn; // X Normal
    /* 124 */ float yr; // Y Rotation
    /* 128 */ float yn; // Y Normal
    /* 132 */ int pers; // Perspective
    /* 136 */ int ppers; // Previous Perspective
    /* 140 */ int ncut; // Near Cut
    /* 144 */ int ocut; // Old Cut
    /* 148 */ unsigned int ocflg; // Occlusion Flags
    /* 152 */ unsigned int attr; // Attributes
    /* 156 */ float* mtx; // Matrix
    /* 160 */ float* mtxb; // Matrix Backup
    /* 164 */ int evc_no; // Event Camera Number
    /* 168 */ int hct; // Height Counter
    /* 172 */ int ct0; // Counter 0
    /* 176 */ int ct1; // Counter 1
    /* 180 */ int keyf_no; // Keyframe Number
    /* 184 */ float frm; // Frame
    /* 188 */ float spd; // Speed
    /* 192 */ float pxn; // Position X Next
    /* 196 */ float pyn; // Position Y Next
    /* 200 */ float pzn; // Position Z Next
    /* 204 */ int axn; // Angle X Next
    /* 208 */ int ayn; // Angle Y Next
    /* 212 */ int azn; // Angle Z Next
    /* 216 */ int pe_ax; // Previous Angle X
    /* 220 */ int pe_pers; // Previous Perspective
    /* 224 */ unsigned int fog_col; // Fog Color
    /* 228 */ float fog_nr; // Fog Near Range
    /* 232 */ float fog_fr; // Fog Far Range
    /* 236 */ float ips[20][3]; // Interpolated Position
    /* 476 */ float ian[20][3]; // Interpolated Angle
    /* 716 */ float ipf[20][3]; // Interpolated Focal Point
    /* 956 */ float icr[20][3]; // Interpolated Center
} Camera;

typedef struct Drive {
    /*  0 */ unsigned short Ready;
    /*  2 */ unsigned short IsFormat;
    /*  4 */ unsigned int LastError;
    /*  8 */ unsigned int ProgressCount;
    /* 12 */ unsigned int ProgressMax;
    /* 16 */ unsigned int Operation;
    /* 20 */ BUS_DISKINFO DiskInfo;
    /* 76 */ unsigned int Connect;
    /* 80 */ void* Work;
    /* 84 */ unsigned int WorkSize;
    /* 88 */ unsigned int Capacity;
    /* 92 */ int MemMode;
} Drive;

typedef struct Controller {
    /*  0 */ int PerType;
    /*  4 */ int OldPerType;
    /*  8 */ int PerTypeEx;
    /* 12 */ unsigned int Flag;
    /* 16 */ int SoftReset;
    /* 20 */ unsigned int on;
    /* 24 */ unsigned int press;
    /* 28 */ unsigned int Rept;
    /* 32 */ unsigned int on2;
    /* 36 */ unsigned int on2old;
    /* 40 */ unsigned int press2;
    /* 44 */ unsigned short l;
    /* 46 */ unsigned short r;
    /* 48 */ short x1;
    /* 50 */ short y1;
    /* 52 */ short x2;
    /* 54 */ short y2;
    /* 56 */ short Calibrate;
} Controller;

typedef struct ControllerButton {
    int Type;
    unsigned int Button;
} ControllerButton;

typedef struct KeyRepeatInfo {
    unsigned int WaitFlag;
    unsigned int WaitCnt;
    unsigned int Key;
} KeyRepeatInfo;

typedef struct LfOpen {
    unsigned int Flag;
    GDFS GdFs;
} LfOpen;

typedef struct Color {
    /*  0 */ float a;
    /*  4 */ float r;
    /*  8 */ float g;
    /* 12 */ float b;
} Color;

typedef struct DOOR {
    /*  0 */ unsigned int flg; // Flags
    /*  4 */ char stg_no; // Stage number
    /*  5 */ char rom_no; // Room number
    /*  6 */ unsigned char pos_no; // Position number
    /*  7 */ unsigned char dor_tp; // Door type
    /*  8 */ unsigned char mode0; // Mode 0
    /*  9 */ unsigned char mode1; // Mode 1
    /* 10 */ unsigned char mode2; // Mode 2
    /* 11 */ unsigned char mode3; // Mode 3
    /* 12 */ int ct0; // Counter 0
    /* 16 */ int ct1; // Counter 1
    /* 20 */ int ct2; // Counter 2
    /* 24 */ int ct3; // Counter 3
} DOOR;

typedef struct HardwareScreenInfo {
    /*  0 */ int mode;
    /*  4 */ int frame;
    /*  8 */ int count;
    /* 12 */ int vtx_opq_a;
    /* 16 */ int vtx_opq_b;
    /* 20 */ int vtx_trs_a;
    /* 24 */ int vtx_trs_b;
    /* 28 */ int vtx_punch;
    /* 32 */ int vtx_total;
} HardwareScreenInfo;

typedef struct Unknown18 {
    short jnt_a; // Joint A
    short jnt_b; // Joint B
    int cap_r; // Cap Radius
} Unknown18;

typedef struct Unknown16 {
    NJS_POINT3 c1;
    NJS_POINT3 c2;
    float r1;
    float r2;
} Unknown16;

typedef struct LIGHT_CLEAR_PARAMETERS {
    NJS_POINT3 ps; // Position (Start)
    float nr; // Near (Range)
    float fr; // Far (Range)
    float cr; // Clear (Red)
    float cg; // Clear (Green)
    float cb; // Clear (Blue)
} LIGHT_CLEAR_PARAMETERS;

typedef struct LIGHT_ATTRIBUTES {
    int lsrc; // Light Source
    float iamb; // Ambient Intensity
    float idif; // Diffuse Intensity
    float ispc; // Specular Intensity
    float nrang; // Near Range
    float frang; // Far Range
    void* func; // Function
    int iang; // Inner Angle
    int oang; // Outer Angle
    Color argb; // Ambient Color
} LIGHT_ATTRIBUTES;

typedef struct LIGHT_CALIBRATION {
    float ratten; // Radius Attenuation
    float ipd; // Intensity Per Distance
    float nrr; // Near Range Rate
    float frr; // Far Range Rate
    float cosi; // Cosine Intensity
    float cose; // Cosine Elevation
    float idev; // Intensity Deviation
    float odev; // Output Deviation
    float rate; // Rate
    float intns; // Intensity
    int exp; // Exponent
    int reserve; // Reserved
    NJS_POINT3 lpnt; // Light Point
    NJS_POINT3 lvctr; // Light Vector
    NJS_POINT3 lmvctr; // Light Model Vector
    Color atten; // Attenuation
    Color amb; // Ambient
    Color dif; // Diffuse
    Color spc; // Specular
    Color mamb; // Model Ambient
    Color mdif; // Model Diffuse
    Color mspc; // Model Specular
} LIGHT_CALIBRATION;

typedef struct LIGHT {
    unsigned int flg; // Flags
    unsigned int type; // Type
    int aspd; // Animation Speed
    int lkflg; // Link Flags
    int lkno; // Link Number
    int lkono; // Link Number (Old)
    int lsrc; // Light Source
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    float lx; // Light X
    float ly; // Light Y
    float lz; // Light Z
    float vx; // Vector X
    float vy; // Vector Y
    float vz; // Vector Z
    float spc; // Specular
    float dif; // Diffuse
    float amb; // Ambient
    float r; // Red
    float g; // Green
    float b; // Blue
    float nr; // Near Range
    float fr; // Far Range
    int iang; // Inner Angle
    int oang; // Outer Angle
    int ax; // Angle X
    int ay; // Angle Y
    int az; // Angle Z
    unsigned int mode; // Mode
    int ct0; // Counter 0
    int ct1; // Counter 1
    int ct2; // Counter 2
    int ct3; // Counter 3
    float wpx; // World Position X
    float wpy; // World Position Y
    float wpz; // World Position Z
    float wvx; // World Vector X
    float wvy; // World Vector Y
    float wvz; // World Vector Z
    float wspc; // World Specular
    float wdif; // World Diffuse
    float wamb; // World Ambient
    float wr; // World Red
    float wg; // World Green
    float wb; // World Blue
    float wnr; // World Near Range
    float wfr; // World Far Range
    int wiang; // World Inner Angle
    int woang; // World Outer Angle
    int wax; // World Angle X
    int way; // World Angle Y
    int waz; // World Angle Z
    unsigned char* lkwkp; // Link Work Pointer
    unsigned char* exp; // Expansion
    NJS_LIGHT_PTR light; // Light
} LIGHT;

typedef struct Unknown8 {
    unsigned int flg; // Flags
    unsigned short id; // ID
    unsigned short type; // Type
    short flr_no; // Floor Number
    unsigned short mdlver; // Model Version
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    float sx; // Scale X
    float sy; // Scale Y
    float sz; // Scale Z
    short ay; // Angle Y
    short ax; // Angle X
} Unknown8;

typedef struct TEXTURE_BUFFER {
    unsigned char* adr; // Address
    unsigned int gidx; // G-Index
    unsigned int attr; // Attributes
    unsigned int w; // Width
    unsigned int h; // Height
} TEXTURE_BUFFER;

typedef struct OBJECT_WORK {
    unsigned int flg; // Flags
    int dmy; // Dummy
    unsigned int dummy[2]; // Dummy
    NJS_MATRIX mtx; // Matrix
} OBJECT_WORK;

typedef struct MODEL_DATA {
    unsigned int flg; // Flags
    unsigned int obj_num; // Object Number
    void* datP; // Data Pointer
    NJS_OBJECT* objP; // Object Pointer
    NJS_TEXLIST* texP; // Texture List Pointer
    OBJECT_WORK* owP; // Object Work Pointer
} MODEL_DATA;

typedef struct MD2 {
    void* p[2]; // Pointers
} MD2;

typedef struct Unknown2 {
    unsigned int flg; // Flags
    unsigned int obj_num; // Object Number
    unsigned int frm_num; // Frame Number
    void* datP; // Data Pointer
    MD2* md2P; // MD2 Pointer
    unsigned short* atrP; // Attribute Pointer
} Unknown2;

typedef struct Unknown1 {
    unsigned int flg; // Flags
    unsigned short id; // ID
    unsigned short type; // Type
    char flr_no; // Floor Number
    char flr_nob; // Floor Number (Old)
    unsigned char mdlver; // Model Version
    unsigned char param; // Parameter
    unsigned char mode0; // Mode 0
    unsigned char mode1; // Mode 1
    unsigned char mode2; // Mode 2
    unsigned char mode3; // Mode 3
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    int ax; // Angle X
    int ay; // Angle Y
    int az; // Angle Z
    float ar; // Angle Radius
    float aw; // Angle Width
    float ah; // Angle Height
    float ad; // Angle Depth
    float car; // Camera Radius
    float cah; // Camera Height
    float pxb; // Position X (Backup)
    float pyb; // Position Y (Backup)
    float pzb; // Position Z (Backup)
    int axb; // Angle X (Backup)
    int ayb; // Angle Y (Backup)
    int azb; // Angle Z (Backup)
    float gpx; // Ground Position X
    float gpy; // Ground Position Y
    float gpz; // Ground Position Z
    float lox; // Look X
    float loy; // Look Y
    float loz; // Look Z
    float aox; // Angle Offset X
    float aoy; // Angle Offset Y
    float aoz; // Angle Offset Z
    float spd; // Speed
    unsigned int flg2; // Flags 2
    unsigned int mdflg; // Model Flags
    unsigned int stflg; // State Flags
    unsigned int Dummy3; // Dummy
    int draw_tp; // Draw Type
    int mdl_n; // Model Number
    void* mskp; // Mask Pointer
    unsigned int Dummy[1]; // Dummy
    int* skp[16]; // Skip
    NJS_OBJECT* mbp[16]; // Model Base Pointer
    NJS_TEXLIST* txp[16]; // Texture List Pointer
    MODEL_DATA mdl[16]; // Model Data
    MODEL_DATA* mlwP; // Model Work Pointer
    unsigned int mdl_no; // Model Number
    int lkono; // Link Object Number
    unsigned char* lkwkp; // Link Work Pointer
    unsigned char* exp0; // Expansion 0
    unsigned char* exp1; // Expansion 1
    unsigned char* exp2; // Expansion 2
    unsigned char* exp3; // Expansion 3
    unsigned char mtxbuf[64]; // Matrix Buffer
    NJS_MATRIX mtx; // Matrix
    NJS_OBJECT* obj_a; // Object A
    NJS_OBJECT* obj_b; // Object B
    float shp_ct; // Shape Counter
    char clp_jno[8]; // Clip Joint Number
    int lok_jno; // Look Joint Number
    Unknown2* mnwP; // Model Work Pointer
    Unknown2* mnwPb; // Model Work Pointer (Backup)
    unsigned int mtn_attr; // Motion Attributes
    unsigned int mtn_no; // Motion Number
    int frm_no; // Frame Number
    unsigned int frm_mode; // Frame Mode
    int hokan_rate; // Hokan Rate (Interpolation Rate)
    unsigned int hokan_count; // Hokan Count (Interpolation Count)
    unsigned int hokan_ctbak; // Hokan Count (Interpolation Count) (Backup)
    int mtn_add; // Motion Add
    unsigned int mtn_md; // Motion Mode
    unsigned char* mtn_tp; // Motion Type
    int axp; // Angle X (Previous)
    int ayp; // Angle Y (Previous)
    int azp; // Angle Z (Previous)
    short psh_ct; // Push Counter
    short psh_idx; // Push Index
    int idx_ct; // Index Counter
    int mtn_chk; // Motion Check
    float ofx; // Offset X
    float ofy; // Offset Y
    float ofz; // Offset Z
    float sx; // Scale X
    float sy; // Scale Y
    float sz; // Scale Z
    float sxb; // Scale X (Backup)
    float syb; // Scale Y (Backup)
    float szb; // Scale Z (Backup)
    float xn; // Normal X
    float yn; // Normal Y
    float zn; // Normal Z
    int ct0; // Counter 0
    int ct1; // Counter 1
    int ct2; // Counter 2
    int ct3; // Counter 3
    /**/ unsigned char* objbak; // Object Backup
    /**/ NJS_SPHERE cspr; // Collision Sphere
    /**/ int pn; // Part Number
    /**/ NJS_POLYGON_VTX* pvp; // Polygon Vertex Pointer
    /**/ NJS_TEXTURE_VTX* tvp; // Texture Vertex Pointer
    /**/ NJS_POLYGON_VTX pv[4]; // Polygon Vertex
    /**/ NJS_TEXTURE_VTX tv[4]; // Texture Vertex
    /**/ int bl_src; // Blend Source
    /**/ int bl_dst; // Blend Destination
    /**/ int ani_ct; // Animation Counter
    /**/ int tex_id; // Texture ID
    /**/ int aspd; // Animation Speed
    /**/ unsigned int gidx; // G-Index
    /**/ int bank; // Bank
    /**/ char jno[16]; // Joint Number
    /**/ char hide[4]; // Hide
    /**/ void (*func)(void*); // Function
    /**/ int idx; // Index
    /**/ int Dummy2; // Dummy
} Unknown1;

typedef struct BH_PWORK {
    unsigned int flg; // Flags
    unsigned short id; // ID
    unsigned short type; // Type
    char flr_no; // Floor Number
    char flr_nob; // Floor Number (Old)
    unsigned char mdlver; // Model Version
    unsigned char param; // Parameter
    unsigned char mode0; // Mode 0
    unsigned char mode1; // Mode 1
    unsigned char mode2; // Mode 2
    unsigned char mode3; // Mode 3
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    int ax; // Angle X
    int ay; // Angle Y
    int az; // Angle Z
    float ar; // Angle Radius
    float aw; // Angle Width
    float ah; // Angle Height
    float ad; // Angle Depth
    float car; // Camera Radius
    float cah; // Camera Height
    float pxb; // Position X (Backup)
    float pyb; // Position Y (Backup)
    float pzb; // Position Z (Backup)
    int axb; // Angle X (Backup)
    int ayb; // Angle Y (Backup)
    int azb; // Angle Z (Backup)
    float gpx; // Ground Position X
    float gpy; // Ground Position Y
    float gpz; // Ground Position Z
    float lox; // Look X
    float loy; // Look Y
    float loz; // Look Z
    float aox; // Angle Offset X
    float aoy; // Angle Offset Y
    float aoz; // Angle Offset Z
    float spd; // Speed
    unsigned int flg2; // Flags 2
    unsigned int mdflg; // Model Flags
    unsigned int stflg; // State Flags
    unsigned int Dummy3; // Dummy
    int draw_tp; // Draw Type
    int mdl_n; // Model Number
    void* mskp; // Mask Pointer
    unsigned int Dummy[1]; // Dummy
    int* skp[16]; // Skip
    NJS_OBJECT* mbp[16]; // Model Base Pointer
    NJS_TEXLIST* txp[16]; // Texture List Pointer
    MODEL_DATA mdl[16]; // Model Data
    MODEL_DATA* mlwP; // Model Work Pointer
    unsigned int mdl_no; // Model Number
    int lkono; // Link Object Number
    unsigned char* lkwkp; // Link Work Pointer
    unsigned char* exp0; // Expansion 0
    unsigned char* exp1; // Expansion 1
    unsigned char* exp2; // Expansion 2
    unsigned char* exp3; // Expansion 3
    unsigned char mtxbuf[64]; // Matrix Buffer
    NJS_MATRIX mtx; // Matrix
    NJS_OBJECT* obj_a; // Object A
    NJS_OBJECT* obj_b; // Object B
    float shp_ct; // Shape Counter
    char clp_jno[8]; // Clip Joint Number
    int lok_jno; // Look Joint Number
    Unknown2* mnwP; // Model Work Pointer
    Unknown2* mnwPb; // Model Work Pointer (Backup)
    unsigned int mtn_attr; // Motion Attributes
    unsigned int mtn_no; // Motion Number
    int frm_no; // Frame Number
    unsigned int frm_mode; // Frame Mode
    int hokan_rate; // Hokan Rate (Interpolation Rate)
    unsigned int hokan_count; // Hokan Count (Interpolation Count)
    unsigned int hokan_ctbak; // Hokan Count (Interpolation Count) (Backup)
    int mtn_add; // Motion Add
    unsigned int mtn_md; // Motion Mode
    unsigned char* mtn_tp; // Motion Type
    int axp; // Angle X (Previous)
    int ayp; // Angle Y (Previous)
    int azp; // Angle Z (Previous)
    short psh_ct; // Push Counter
    short psh_idx; // Push Index
    int idx_ct; // Index Counter
    int mtn_chk; // Motion Check
    float ofx; // Offset X
    float ofy; // Offset Y
    float ofz; // Offset Z
    float sx; // Scale X
    float sy; // Scale Y
    float sz; // Scale Z
    float sxb; // Scale X (Backup)
    float syb; // Scale Y (Backup)
    float szb; // Scale Z (Backup)
    float xn; // Normal X
    float yn; // Normal Y
    float zn; // Normal Z
    int ct0; // Counter 0
    int ct1; // Counter 1
    int ct2; // Counter 2
    int ct3; // Counter 3
    /**/ int wpnr_no; // Weapon Number (Right)
    /**/ int wpnl_no; // Weapon Number (Left)
    /**/ unsigned int at_flg; // Attribute Flags
    /**/ NJS_CAPSULE watr; // Weapon Attack Range
    /**/ Unknown18* cpcl; // Clip Collision
    /**/ short wax; // Weapon Angle X
    /**/ short way; // Weapon Angle Y
    /**/ short waz; // Weapon Angle Z
    /**/ short waxp; // Weapon Angle X (Previous)
    /**/ short wayp; // Weapon Angle Y (Previous)
    /**/ short wazp; // Weapon Angle Z (Previous)
    /**/ int hp; // Hit Points
    /**/ int dam[64]; // Damage
    /**/ int djnt_no; // Damage Joint Number
    /**/ int cpcl_no; // Clip Collision Number
    /**/ int dax; // Damage Angle X
    /**/ int day; // Damage Angle Y
    /**/ float dpx; // Damage Position X
    /**/ float dpy; // Damage Position Y
    /**/ float dpz; // Damage Position Z
    /**/ float dvx; // Damage Vector X
    /**/ float dvy; // Damage Vector Y
    /**/ float dvz; // Damage Vector Z
    /**/ int flr_snd; // Floor Sound
    /**/ int ko_num; // Knockout Number
    /**/ int footeff; // Foot Effect
    /**/ int src_no; // Source Number
    /**/ unsigned char* kdnp; // Knockdown Pointer
    /**/ int kdnidx; // Knockdown Index
    /**/ void* dan_ap; // Damage Animation Pointer
    /**/ unsigned int comb_flg; // Combo Flags
    /**/ unsigned int comb_wep; // Combo Weapon
    /**/ int comb_pnt; // Combo Point
    /**/ int comb_timeout; // Combo Timeout
    /**/ int total_dam; // Total Damage
    /**/ unsigned int Dummy2[2]; // Dummy
} BH_PWORK;

typedef struct BOUNDARY {
    unsigned char flg; // Flags related to the boundary entity's state
    unsigned char type; // Type identifier for the boundary (e.g., wall, floor, route)
    unsigned char id; // Unique ID for the boundary object
    char flr_no; // Floor number where the boundary is located
    unsigned int attr; // Attributes or properties of the boundary (e.g., collision, interaction type)
    float px; // Position X - X coordinate of the boundary's origin
    float py; // Position Y - Y coordinate of the boundary's origin
    float pz; // Position Z - Z coordinate of the boundary's origin
    float w; // Width of the boundary
    float h; // Height of the boundary
    float d; // Depth of the boundary
    unsigned char prm0; // Parameter 0 - additional data, purpose depends on the context
    unsigned char prm1; // Parameter 1 - additional data, purpose depends on the context
    unsigned char prm2; // Parameter 2 - additional data, purpose depends on the context
    unsigned char prm3; // Parameter 3 - additional data, purpose depends on the context
} BOUNDARY;

typedef struct SYS {
    unsigned int ssd_ver; // SSD Version
    unsigned int ssd_flg; // SSD Flags
    unsigned int ssd_reserve; // SSD Reserved
    char keytype; // Key Type
    char adjust_x; // Adjust X
    char adjust_y; // Adjust Y
    char vibration; // Vibration
    int best_tm[8]; // Best Time
    unsigned int sys_partid; // System Part ID
    unsigned int itm_partid; // Item Part ID
    unsigned int fil_partid; // File Part ID
    unsigned int dor_partid; // Door Part ID
    unsigned int ss_flg;
    int pdm_no;
    unsigned int typ_flg; // Type Flags
    unsigned short typ_md0; // Type Mode 0
    unsigned short typ_md1; // Type Mode 1
    void* typ_exp; // Type Expansion
    unsigned int tk_flg; //
    unsigned int ts_flg; //
    unsigned int gm_flg; // Game Flags
    unsigned int st_flg; // Stage Flags
    unsigned int cb_flg; // Combo Flags
    unsigned int rm_flg; // Room Flags
    unsigned int pt_flg; // Part Flags
    unsigned int sp_flg; // Special Flags
    unsigned int ef_flg; // Effect Flags
    unsigned int error; // Error
    unsigned int version; // Version                                          /* SAVEFILE */
    int save_ct; // Save Count                                                /* SAVEFILE */
    char ply_id; // Player ID                                                 /* SAVEFILE */
    char stg_no; // Stage Number                                              /* SAVEFILE */
    char rom_no; // Room Number                                               /* SAVEFILE */
    char rcase; /* SAVEFILE */
    char pos_no; // Position Number                                           /* SAVEFILE */
    char cut_no; // Cut Number                                                /* SAVEFILE */
    char flr_no; // Floor Number                                              /* SAVEFILE */
    char reserve0; // Reserved                                                /* SAVEFILE */
    int gm_mode; // Game Mode                                                 /* SAVEFILE */
    unsigned int ev_flg[32]; // Event Flags                                   /* SAVEFILE */
    unsigned int it_flg[16]; // Item Flags                                    /* SAVEFILE */
    unsigned int ic_flg[16]; // Icon Flags                                    /* SAVEFILE */
    unsigned int ed_flg[32]; // Ending Flags                                  /* SAVEFILE */
    unsigned int ky_flg[16]; // Key Flags                                     /* SAVEFILE */
    unsigned int mp_flg[8]; // Map Flags                                      /* SAVEFILE */
    unsigned int itm[384]; // Items                                           /* SAVEFILE */
    unsigned int ply_stflg[4]; // Player State Flags                          /* SAVEFILE */
    NJS_POINT3 ply_pos; /* SAVEFILE */
    int ply_ang; /* SAVEFILE */
    char ply_wno[4]; /* SAVEFILE */
    short ply_hp[4]; /* SAVEFILE */
    unsigned char evt_posno[4]; /* SAVEFILE */
    int time; /* SAVEFILE */
    int stv_tm; /* SAVEFILE */
    short spray_ct; /* SAVEFILE */
    short retry_ct; /* SAVEFILE */
    short clear_ct; /* SAVEFILE */
    short reserve1; /* SAVEFILE */
    unsigned int save_end; /* SAVEFILE */
    char stg_nob; // Stage Number (Old)
    char rom_nob; // Room Number (Old)
    char pos_nob; // Position Number (Old)
    char rcase_b; // R-Case (Old)
    unsigned int en_flg[4]; // Enemy Flags
    NJS_TEXLIST* et_lp[100][16][16]; // Enemy Texture List Pointer
    NJS_TEXLIST* ot_lp[1300]; // Object Texture List Pointer
    NJS_TEXLIST* it_lp[200]; // Item Texture List Pointer
    int eft_n; // Effect Number
    NJS_TEXLIST* eft_lp[8]; // Effect Texture List Pointer
    int loop_ct; // Loop Counter
    int loop_now; // Loop Now
    int cng_pid; // Change Player ID
    PDS_PERIPHERAL* p1per; // Player 1 Peripheral
    PDS_PERIPHERAL* p2per; // Player 2 Peripheral
    PDS_PERIPHERAL* kbper; // Keyboard Peripheral
    PDS_PERIPHERAL* msper; // Mouse Peripheral
    PDS_PERIPHERAL ms_per; // Mouse Peripheral (?)
    int pad_port; // Pad Port
    unsigned int pad_on; // Pad On
    unsigned int pad_oncpy; // Pad On Copy
    unsigned int pad_ps; // Pad Press
    unsigned int pad_rs; // Pad Release
    unsigned int pad_old; // Pad Old
    unsigned int pad_onb; // Pad On Backup
    unsigned int pad_psb; // Pad Press Backup
    unsigned int pad_oldb; // Pad Old Backup
    short pad_ax; // Pad Analog X
    short pad_ay; // Pad Analog Y
    short pad_dx; // Pad Digital X
    short pad_dy; // Pad Digital Y
    unsigned short pad_ar; // Pad Analog Range
    unsigned short pad_al; // Pad Analog Limit
    int fixcno; // Fixed Camera Number
    int fixkno; // Fixed Key Number
    unsigned int exm_attr; // Examine Attributes
    short evc_no; // Event Camera Number
    short evc_kn; // Event Camera Key Number
    short evc_ono; // Event Camera Object Number
    short evc_okn; // Event Camera Object Key Number
    int evc_sc; // Event Camera Scale
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
    int fog_ct; // Fog Counter
    int bcl_ct;
    int gfrm_ct; // Game Frame Counter
    int gframe; // Game Frame
    int eor_ct; // End of Room Counter
    unsigned int pfm_cts; // Performance Counter Start
    int evt_tmd; // Event Time Delay
    int evt_tim; // Event Timer
    int evt_tdg; // Event Time Delay Group
    int evt_fcd; // Event Fade Counter
    unsigned int evt_fcdct; // Event Fade Counter Count
    unsigned int fsize; // Font Size
    unsigned int rdtsz; // Read Text Size
    unsigned char* memp; // Memory Pointer
    unsigned char* mempb; // Memory Pointer Backup
    unsigned char* endp; // End Pointer
    unsigned char* rdtp; // Read Text Pointer
    unsigned char* plmdlp; // Player Model Pointer
    unsigned char* lmmdlp; // Light Model Pointer
    unsigned char* wrmdlp; // (Right) Weapon Model Pointer
    unsigned char* wlmdlp; // (Left) Weapon Model Pointer
    unsigned char* plmthp; // Player Motion Pointer
    unsigned char* plbmtp; // Player Bump Pointer
    unsigned char* plwmtp; // Player Weapon Motion Pointer
    unsigned char* plzmtp; // Player Zoom Motion Pointer
    unsigned char* plemtp; // Player Effect Motion Pointer
    unsigned char* plexwp; // Player Effect Weapon Pointer
    unsigned char* plhdwp; // Player Head Weapon Pointer
    unsigned char* pletcp; // Player Effect Texture Pointer
    unsigned char* subtxp; // Sub Texture Pointer
    unsigned char* doordp; // Door Data Pointer
    unsigned char* sbs_sp; // Sub Screen Pointer
    Unknown1* obwp; // Object Work Pointer
    Unknown1* itwp; // Item Work Pointer
    Unknown2* emtp[128]; // Enemy Motion Pointer
    Unknown2* rmthp; // Room Motion Pointer
    unsigned char* mspp; // Message Pointer
    unsigned char* lspp; // Last Message Pointer
    unsigned int* mes_ip; // Message Input Pointer
    unsigned int* mes_sp; // Message Stack Pointer
    void* mes_tp; // Message Table Pointer
    short txr_n; // Texture Number
    short txr_ct; // Texture Counter
    NJS_TEXLIST* txlp[256]; // Texture List Pointer
    unsigned char* txdp[256]; // Texture Data Pointer
    short txloff[256]; // Texture Offset
    short txb_ct; // Texture Buffer Counter
    short txb_n; // Texture Buffer Number
    short txb[256]; // Texture Buffer
    NJS_TEXLIST* txblp[256]; // Texture Buffer List Pointer
    TEXTURE_BUFFER txbp[256]; // Texture Buffer Pointer
    unsigned char* ef_psp; // Effect Pointer
    NJS_TEXNAME ef_tex[450]; // Effect Texture
    NJS_TEXLIST ef_tlist; // Effect Texture List
    Unknown8 ef; // Effect
    short efid[256]; // Effect ID
    MODEL_DATA efm[450]; // Effect Model
    int ef_ct; // Effect Counter
    int ef_ctb; // Effect Counter Backup
    int ef_extn; // Effect Extension Number
    int ef_tn[450]; // Effect Texture Number
    unsigned char ef_pbkb[450]; // Effect Playback
    int ef_pbnk; // Effect Playback Number
    int ef_slow;
    int ef_ctrn;
    int yk_ct;
    int mg_ct;
    int bl_ct;
    int windr; // Wind Radius
    float winds; // Wind Speed
    int windrb; // Wind Radius Backup
    float windsb; // Wind Speed Backup
    unsigned int thunder; // Thunder
    float gas_py; // Gas Position Y
    int en_objn; // Enemy Object Number
    BH_PWORK* en_obj[16]; // Enemy Object
    int ef_poln; // Effect Polygon Number
    int ef_mdfn; // Effect Model Number
    int ef_linn; // Effect Line Number
    int ef_ntxn; // Effect Texture Number
    int ef_trsn; // Effect Texture Number
    int ef_pncn;
    int ef_opqn;
    int ef_thln;
    int ef_ntx2dn;
    int ef_trs2dn;
    int ef_pnc2dn;
    int ef_fncn;
    Unknown1* ef_pol[512]; // Effect Polygon
    Unknown1* ef_mdf[128]; // Effect Model
    Unknown1* ef_lin[512]; // Effect Line
    Unknown1* ef_ntx[512]; // Effect Texture
    Unknown1* ef_trs[512]; // Effect Texture
    Unknown1* ef_pnc[512]; // Effect Polygon
    Unknown1* ef_opq[512]; // Effect Opacity
    Unknown1* ef_thl[512]; // Effect Throttle
    Unknown1* ef_ntx2d[128]; // Effect Texture 2D
    Unknown1* ef_trs2d[128]; // Effect Texture 2D
    Unknown1* ef_pnc2d[128]; // Effect Polygon 2D
    Unknown1* ef_fnc[512]; // Effect Function
    int ob_nlgn; // Object Normal Number
    int ob_hlgn; // Object Highlight Number
    int ob_spcn; // Object Specular Number
    Unknown1* ob_nlg[32]; // Object Normal (Global?)
    Unknown1* ob_hlg[32]; // Object Highlight (Global?)
    Unknown1* ob_spc[32]; // Object Specular
    unsigned int ren_gid; // Render Group ID
    NJS_TEXINFO ren_info; // Render Info
    NJS_TEXNAME ren_tex[1]; // Render Texture
    NJS_TEXLIST ren_tlist; // Render Texture List
    NJS_TEXTUREH_VTX rpb[256]; // Render Polygon Buffer
    int ren_n; // Render Number
    int ren_idx[4]; // Render Index
    int wt_nbpt; // Weight Normal Buffer Pointer
    float wt_px; // Weight Position X
    float wt_pz; // Weight Position Z
    int wt_xp; // Weight X Position
    int wt_zp; // Weight Z Position
    int wt_minx; // Weight Minimum X
    int wt_minz; // Weight Minimum Z
    int wt_maxx; // Weight Maximum X
    int wt_maxz; // Weight Maximum Z
    unsigned char* wt_wvp; // Weight Vertex Pointer
    NJS_PLANE mr_pl; // Mirror Plane
    unsigned char* zan_memp; // Zan Memory Pointer
    unsigned char* zanp; // Zan Pointer
    LIGHT* lgtp; // Light Entity Pointer
    float lg_vx; // Light Global Vector X
    float lg_vy; // Light Global Vector Y
    float lg_vz; // Light Global Vector Z
    float lg_r; // Light Global Red
    float lg_g; // Light Global Green
    float lg_b; // Light Global Blue
    int lg_pnt; // Light Point (Count?)
    LIGHT_CLEAR_PARAMETERS lg_ptb[4]; // Light Point Table
    int mes_idx; // Message Index
    unsigned int* mes_dp; // Message Data Pointer
    int mes_ct; // Message Counter
    int mes_tim; // Message Timer
    int mes_fls; // Message Flags
    int mes_sel; // Message Select
    int mes_seln; // Message Select Number
    NJS_POINT2 mes_sps[16]; // Message Speed
    int rt_sp; // RT Speed
    unsigned char* rt_wp; // RT Work Pointer
    unsigned char* rt_dp; // RT Data Pointer
    unsigned char* rt_nw; // RT New
    unsigned char* rt_nx; // RT Next
    float* rt_ln; // RT Line
    BH_PWORK* plp; // Player Pointer
    BOUNDARY* pl_htp; // Player Hit Pointer
    int costume; // Costume
    NJS_POINT3 hd_pos; // Head Position
    NJS_POINT3 apos; // Attack Position
    BOUNDARY* ahtp; // Attack Hit Pointer
    int mwal_n; // Model Weapon Number
    int metc_n; // Model Effect Number
    int mflr_n; // Model Floor Number
    BOUNDARY mwalp[64]; // Model Weapon Pointer
    BOUNDARY metcp[64]; // Model Effect Pointer
    BOUNDARY mflrp[64]; // Model Floor Pointer
    int dla_n; // DLA (Dynamic Lighting Area) Number
    BOUNDARY* htp; // Hit Pointer
    int psh_snd; // Push Sound
    int fog_cngct; // Fog Change Counter
    unsigned int fog_col; // Fog Color
    float fog_nr; // Fog Near Range
    float fog_fr; // Fog Far Range
    float fade_ct; // Fade Counter
    float fade_hkn; // Fade Hokan
    float fade_ao; // Fade Alpha
    float fade_an; // Fade Alpha New
    float fade_ap; // Fade Alpha Previous
    float fade_ro; // Fade Red
    float fade_rn; // Fade Red New
    float fade_rp; // Fade Red Previous
    float fade_go; // Fade Green
    float fade_gn; // Fade Green New
    float fade_gp; // Fade Green Previous
    float fade_bo; // Fade Blue
    float fade_bn; // Fade Blue New
    float fade_bp; // Fade Blue Previous
    unsigned int fade_pbk; // Fade Playback
    unsigned short ssv_md0; // SSV Mode 0
    unsigned short ssv_md1; // SSV Mode 1
    int ssv_tim; // SSV Timer
    float ssv_ct; // SSV Counter
    float ssv_hkn; // SSV Hokan
    float ssv_ao; // SSV Alpha
    float ssv_an; // SSV Alpha New
    float ssv_ap; // SSV Alpha Previous
    short fil_no; // Filter Number
    short fil_rt; // Filter Rate
    float rvf_sc; // RVF Scale
    float rvf_sn; // RVF Scale New
    unsigned int rvfc[4]; // RVF Color
    float cine_an; // Cine Alpha New
    float cine_ap; // Cine Alpha Previous
    unsigned int sco_flg; // Score Flags
    float amb_r[4]; // Ambient Red
    float amb_g[4]; // Ambient Green
    float amb_b[4]; // Ambient Blue
    int sb_id; // Sound Bank ID
    int sb_cmd; // Sound Bank Command
    int sb_rdid; // Sound Bank Read ID
    int sb_rdsz; // Sound Bank Read Size
    void* sb_rdp; // Sound Bank Read Pointer
    void* sb_mlb; // Sound Bank Memory Load Buffer
    void* sb_ppp; // Sound Bank Play Pointer
    NJS_TEXLIST* sb_tlist; // Sound Bank Texture List
    int ddmd; // Door Mode
    DOOR door; // Door
    int mpmd; // Map Mode
    int mp_prm[4]; // Map Parameter
    unsigned short gov_md0; // Game Over Mode 0
    unsigned short gov_md1; // Game Over Mode 1
    int gov_ct; // Game Over Counter
    void* gov_exp; // Game Over Expansion
    unsigned int com_flg; // Command Flags
    unsigned short com_md0; // Command Mode 0
    unsigned short com_md1; // Command Mode 1
    unsigned int com_num; // Command Number
    void* com_exp; // Command Expansion
    short ond_tnm; // OND Time
    short ond_ud; // OND Update
    char ond_cx; // OND Camera X
    char ond_n[3]; // OND Number
    unsigned char ufo_md; // UFO Mode
    unsigned char ufo_flg; // UFO Flags
    short ufo_oidx; // UFO Object Index
    NJS_POINT3 ufo_pos; // UFO Position
    unsigned int opt_flg; // Option Flags
    unsigned short opt_md0; // Option Mode 0
    unsigned short opt_md1; // Option Mode 1
    void* opt_exp; // Option Expansion
    unsigned int etc_idx; // ETC Index
    unsigned int flr_idx; // Floor Index
    int mvi_no; // Movie Number
    int mvi_tp; // Movie Type
    unsigned short mvi_md; // Movie Mode
    unsigned short mvi_flg; // Movie Flags
    unsigned int mvi_tsb; // Movie Time Start
    unsigned int mvi_spb; // Movie Speed
    unsigned char* mvi_memp; // Movie Memory Pointer
    unsigned int dcg_tkbak; // DCG Time Backup
    unsigned int dcg_tsbak; // DCG Time Start Backup
    unsigned int pau_spbak; // PAU Speed Backup
    unsigned int pau_pad_on; // PAU Pad On
    unsigned int pau_pad_ps; // PAU Pad Press
    unsigned int pau_pad_old; // PAU Pad Old
    unsigned char* pdm_dp; // PDM Data Pointer
    unsigned char* pdm_pd; // PDM Pointer
    int pdm_keytpb; // PDM Key Type Backup
    int gat_ct; // GAT Counter
    Unknown16 gatc[16]; // GAT Counter
    int ght_ct; // GHT Counter
    unsigned int ghtc[32]; // GHT Counter
    NJS_POINT3 ghtp[32]; // GHT Position
    unsigned short db_md0; // Debug Mode 0
    unsigned short db_md1; // Debug Mode 1
    char db_stgno; // Debug Stage Number
    char db_romno; // Debug Room Number
    char db_rcase; // Debug R-Case
    char db_muteki; // Debug Muteki
    short db_px; // Debug Position X
    short db_py; // Debug Position Y
    int db_mes; // Debug Message
    int calc_v; // Calculation V
    unsigned int brkfg; // Break Flag
    char brkfg_typ[32]; // Break Flag Type
    short brkfg_bit[32]; // Break Flag Bit
    unsigned int brkfg_tkb; // Break Flag Time Backup
    unsigned int brkfg_tsb; // Break Flag Time Start
    int brkfg_ct; // Break Flag Counter
    unsigned int bmt_size; // BMT Size
    unsigned int lmt_size; // LMT Size
    unsigned int emt_size; // EMT Size
    unsigned int wmt_size; // WMT Size
    char mes[256]; // Message
    float sfx; // Scale Factor X
    float sfy; // Scale Factor Y
    float sfxn; // Scale Factor X New
    float sfyn; // Scale Factor Y New
    float sfct; // Scale Factor Counter
} SYS;

typedef struct MOVIE_INFO {
    unsigned char* mmp;
    float Vol;
    float VolSpeed;
    float Fade;
    float FadeSpeed;
    short FrameCnt;
    char ExecMovieSystemFlag;
    char MovieCancelFlag;
    char MovieFadeFlag;
    char MovieFadeMode;
    char MovieSystemLastError;
} MOVIE_INFO;

typedef struct PS2_PAD_WORK {
    unsigned short on;
    unsigned short old;
    unsigned short push;
    unsigned short release;
    short send;
    unsigned short ad_flag;
    unsigned char buff[2];
    unsigned short onon;
    unsigned short repeat;
    char time1[16];
    char time2[16];
    unsigned char rh;
    unsigned char rv;
    unsigned char lh;
    unsigned char lv;
    unsigned char au;
    unsigned char ad;
    unsigned char al;
    unsigned char ar;
    unsigned char abu;
    unsigned char abd;
    unsigned char abl;
    unsigned char abr;
    unsigned char al1;
    unsigned char al2;
    unsigned char ar1;
    unsigned char ar2;
} PS2_PAD_WORK;

typedef struct PS2_PADS {
    PS2_PAD_WORK pad1;
    PS2_PAD_WORK pad2;
} PS2_PADS;

typedef struct PS2_PAD_STATUS {
    unsigned short routine_0; // Routine 0
    unsigned short type; // Type
    unsigned short act_lv[2]; // Active Level
    unsigned short be_flag; // BE Flag
    unsigned char act_data[8]; // Active Data
} PS2_PAD_STATUS;

typedef struct PAD_ACTION {
    unsigned char be_flag; // BE Flag
    unsigned char level; // Level
    unsigned char start; // Start
    unsigned char end; // End
    unsigned short delay; // Delay
    unsigned short time; // Time
    unsigned short add; // Add
    short f_level; // Flag Level
    short f_add; // Flag Add
    char data[2]; // Data
} PAD_ACTION;

typedef struct ANIMATION_KEYFRAME // Keyframe data
{
    unsigned short flg; // Keyframe flag (e.g., keyframe type)
    short frame; // Frame number where this keyframe occurs
    float px; // Position X at the keyframe
    float py; // Position Y at the keyframe
    float pz; // Position Z at the keyframe
    short ax; // Rotation/Angle X at the keyframe
    short ay; // Rotation/Angle Y at the keyframe
    short az; // Rotation/Angle Z at the keyframe
    short pers; // Perspective parameter at the keyframe
    unsigned int hidobj[8]; // Array of hidden objects at this keyframe
    unsigned int hidlgt[4]; // Array of hidden lights at this keyframe
    unsigned int fog_col; // Fog color at this keyframe
    float fog_nr; // Near fog distance at this keyframe
    float fog_fr; // Far fog distance at this keyframe
    short lkflg; // Link flag indicating whether this keyframe is linked to another
    short lkno; // Link number for the linked keyframe
    short lkono; // Link object number if related to an object
    short nxt_no; // Number for the next keyframe in the sequence
    float lx; // Link X position
    float ly; // Link Y position
    float lz; // Link Z position
    float prm_0; // Additional parameter 0
    float prm_1; // Additional parameter 1
    float prm_2; // Additional parameter 2
    float prm_3; // Additional parameter 3
    float prm_4; // Additional parameter 4
    unsigned char* recp; // Pointer to recorded data or metadata
} ANIMATION_KEYFRAME;

typedef struct ANIMATION_SEQUENCE {
    unsigned short flg; // Sequence flag (e.g., active/inactive)
    unsigned short type; // Sequence type (e.g., camera or object)
    short nxt_no; // Number for the next sequence in the chain
    short keyf_n; // Number of keyframes in the sequence
    ANIMATION_KEYFRAME keyf[16]; // Array of keyframes
} ANIMATION_SEQUENCE;

typedef struct PAD_BUTTON_INFO {
    int Type;
    unsigned int Button;
} PAD_BUTTON_INFO;

typedef struct CAMERA {
    unsigned short flg; // Flag
    unsigned char lgtclip; // Light clip
    char spd; // Speed
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    float ln; // Length
    float w; // Width
    float h; // Height
    float d; // Depth
    float y0; // Y0
    float y1; // Y1
    float y2; // Y2
    float y3; // Y3
    float am_spd; // Ambient speed
    int ax; // Angle X
    int ay; // Angle Y
    int az; // Angle Z
    int lax; // Light angle X
    int lay; // Light angle Y
    short laz0; // Light angle Z0
    short laz1; // Light angle Z1
    short laz2; // Light angle Z2
    short laz3; // Light angle Z3
    char aa_spd; // Ambient angle speed
    char fil_no; // Filter number
    char fil_rt; // Filter rate
    char reserve; // Reserve
    int pers; // Perspective
    unsigned int hidobj[16]; // Hidden objects
    unsigned int hidlgt[8]; // Hidden lights
    unsigned int fog_col; // Fog color
    float fog_nr; // Near fog
    float fog_fr; // Far fog
} CAMERA;

typedef struct CUTSCENE_TRIGGER {
    unsigned int attr; // Attribute
    char flr_no; // Floor Number
    char reserve0; // Reserved
    char reserve1; // Reserved
    char atr_tp; // Attribute Type
    float h; // Height
    float dmy; // Dummy
    float minx; // Minimum X
    float minz; // Minimum Z
    float maxx; // Maximum X
    float maxz; // Maximum Z
} CUTSCENE_TRIGGER;

typedef struct CUTSCENE {
    unsigned char flg; // Flag
    unsigned char type; // Type
    char flr_no; // Floor Number
    unsigned char ctab_n; // Cutscene table number
    CUTSCENE_TRIGGER* cuttp; // Cutscene trigger pointer (bounding box)
    float cx; // Center X
    float cy; // Center Y
    float cz; // Center Z
    float cw; // Center Width
    float ch; // Center Height
    float cd; // Center Depth
    CAMERA cam[2]; // Camera array
    unsigned char exd[256]; // Extra data
} CUTSCENE;

typedef struct ENEMY {
    unsigned int flg; // Flag
    unsigned short id; // Enemy ID
    unsigned short type; // Enemy type
    char flr_no; // Floor number
    unsigned char mdlver; // Model version
    unsigned char wrk_no; // Work number
    char prm1; // Parameter 1
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    short ax; // Angle X
    short az; // Angle Z
    short ay; // Angle Y
    short aspd; // Angle speed
    char hide[4]; // Hide (unknown purpose, potentially hiding flags or conditions)
} ENEMY;

typedef struct EFFECT {
    unsigned int flg; // Flag
    unsigned short id; // Effect ID
    unsigned short type; // Effect type
    short flr_no; // Floor number
    unsigned short mdlver; // Model version
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    float sx; // Scale X
    float sy; // Scale Y
    float sz; // Scale Z
    short ay; // Angle Y
    short ax; // Angle X
    int lkflg; // Link flag
    int lkno; // Link number
    int lkono; // Link object number
    float lx; // Linked position X
    float ly; // Linked position Y
    float lz; // Linked position Z
    int param; // Parameters
} EFFECT;


typedef struct POSITION {
    float px; // Position X - X coordinate of the position
    float py; // Position Y - Y coordinate of the position
    float pz; // Position Z - Z coordinate of the position
    int ay; // Angle Y - Rotation or orientation on the Y-axis
} POSITION;

typedef struct ENTITY {
    unsigned int flg; // Entity flag
    unsigned short id; // Entity ID
    unsigned short type; // Entity type (enemy, object, item, etc.)
    char flr_no; // Floor number
    unsigned char mdlver; // Model version
    unsigned char wrk_no; // Work number (instance or reference number)
    char prm1; // Parameter 1 (custom entity data)
    float px; // Position X
    float py; // Position Y
    float pz; // Position Z
    short ax; // Rotation angle X
    short az; // Rotation angle Z
    short ay; // Rotation angle Y
    short aspd; // Angle speed (rotation speed)
    char hide[4]; // Hidden flags (visibility or interaction)
} ENTITY;

typedef struct EVT_DATA {
    unsigned short* scd0; // Pointer to first script data
    unsigned short* scd1; // Pointer to second script data
    unsigned short* evd; // Pointer to event data
} EVT_DATA;

typedef struct ROOM {
    CUTSCENE* cutp; // Pointer to cutscene data
    LIGHT* lgtp; // Pointer to light data
    ENTITY* enep; // Pointer to enemy data
    ENTITY* objp; // Pointer to object data
    ENTITY* itmp; // Pointer to item data
    EFFECT* effp; // Pointer to effect data
    BOUNDARY* walp; // Pointer to wall data
    BOUNDARY* etcp; // Pointer to miscellaneous data
    BOUNDARY* flrp; // Pointer to floor data
    POSITION* posp; // Pointer to position data
    BOUNDARY* rutp; // Pointer to route data
    unsigned char* ruttp; // Pointer to route table
    EVT_DATA* evtp; // Pointer to event data
    ANIMATION_SEQUENCE* evcp; // Pointer to event camera data
    unsigned int* mesp; // Pointer to message data
    LIGHT* evlp; // Pointer to event light data
    unsigned char* dmp00; // Reserved or unused
    unsigned char* dmp01; // Reserved or unused
    unsigned char* dmp02; // Reserved or unused
    unsigned char* dmp03; // Reserved or unused
    unsigned char* dmp04; // Reserved or unused
    unsigned char* dmp05; // Reserved or unused
    unsigned char* dmp06; // Reserved or unused
    unsigned char* dmp07; // Reserved or unused
    unsigned char* dmp08; // Reserved or unused
    unsigned char* dmp09; // Reserved or unused
    unsigned char* dmp10; // Reserved or unused
    unsigned char* dmp11; // Reserved or unused
    unsigned char* dmp12; // Reserved or unused
    unsigned char* dmp13; // Reserved or unused
    unsigned char* dmp14; // Reserved or unused
    unsigned char* dmp15; // Reserved or unused
    int cut_n; // Number of cutscenes
    int lgt_n; // Number of lights
    int ene_n; // Number of enemies
    int obj_n; // Number of objects
    int itm_n; // Number of items
    int eff_n; // Number of effects
    int wal_n; // Number of walls
    int etc_n; // Number of miscellaneous entities
    int flr_n; // Number of floors
    int pos_n; // Number of positions
    int rut_n; // Number of routes
    int evc_n; // Number of event cameras
    int mes_n; // Number of messages
    int evl_n; // Number of event lights
    int dmy00; // Dummy or reserved field
    int dmy01; // Dummy or reserved field
    int dmy02; // Dummy or reserved field
    int dmy03; // Dummy or reserved field
    int dmy04; // Dummy or reserved field
    int dmy05; // Dummy or reserved field
    int dmy06; // Dummy or reserved field
    int dmy07; // Dummy or reserved field
    int dmy08; // Dummy or reserved field
    int dmy09; // Dummy or reserved field
    int dmy10; // Dummy or reserved field
    int dmy11; // Dummy or reserved field
    int dmy12; // Dummy or reserved field
    int dmy13; // Dummy or reserved field
    int dmy14; // Dummy or reserved field
    int dmy15; // Dummy or reserved field
    int dmy16; // Dummy or reserved field
    int dmy17; // Dummy or reserved field
    unsigned int flg; // General flag for the scene
    unsigned int bak_col; // Background color
    unsigned int fog_col; // Fog color
    float fog_nr; // Near fog distance
    float fog_fr; // Far fog distance
    float w; // Width
    float h; // Height
    float d; // Depth
    float grand[32]; // Grand data array
    MODEL_DATA mdl; // Model data
    float fog[128]; // Fog data
    char amb_rom; // Ambient ROM
    char amb_chr; // Ambient character
    char amb_obj; // Ambient object
    char amb_itm; // Ambient item
    float amb_r[4]; // Ambient red values
    float amb_g[4]; // Ambient green values
    float amb_b[4]; // Ambient blue values
} ROOM;

typedef struct SND_QUEUE_DATA {
    int cmd; // Command ID, representing the specific sound operation
    char data[4]; // Command-specific data (could represent parameters or sound details)
} SND_QUEUE_DATA;

typedef struct GFX_FADE {
    int flg; // Fade flag
    float alpha; // Alpha value
    float alphaset; // Alpha set value
    float cnt00; // Counter 00
    float cnt01; // Counter 01
    float cnt02; // Counter 02
} GFX_FADE;

typedef struct WEAPON
{
	unsigned int flg; 
	unsigned int atack_ct;
	unsigned int fend_ct;
	unsigned int at_cct;
	short ef_yct;
	short act_ct0;
	short act_ct1;
	short act_ct2;
	float r;
	float l;
	float rn;
	float rmax;
	NJS_POINT3 wp_fps1;
	NJS_POINT3 wp_fps2;
	NJS_POINT3 wp_cps;
	unsigned char ltp;
	unsigned char lr;
	unsigned char lg;
	unsigned char lb;
	unsigned short lnr;
	unsigned short lfr;
	float hrate;
	float ef_scale;
	short snd_wpno;
	short hiteff;
	unsigned short seno0;
	unsigned short seno1;
	char vib_tp;
	char vib_ct;
	char reserve1;
	char reserve2;
} WEAPON;

typedef struct tagNJS_SCRVECTOR {
    float x; // X coordinate
    float y; // Y coordinate
    float z; // Z coordinate
    float iz; // Inverted Z coordinate
    float fog; // Fog distance
} NJS_SCRVECTOR;


typedef struct NJS_MATRIX_WRAP {
    NJS_MATRIX m; // Matrix
} NJS_MATRIX_WRAP;