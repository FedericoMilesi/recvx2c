#pragma once

#ifndef _SAVEFILE_H_
#define _SAVEFILE_H_

#include <shinobi.h>

typedef struct tagSAVEFILE {
    unsigned int version; // Version
    int save_ct; // Save count (Times the player has saved)
    char ply_id; // Player ID
    char stg_no; // Stage number
    char rom_no; // Room number
    char rcase; // Case number
    char pos_no; // Position number
    char cut_no; // Cut number
    char flr_no; // Floor number
    char reserve0; // /!\ Unused
    int gm_mode; // Game mode
    unsigned int ev_flg[32]; // Event flag
    unsigned int it_flg[16]; // Item flag
    unsigned int ic_flg[16]; // Icon flag
    unsigned int ed_flg[32]; // Effect flag
    unsigned int ky_flg[16]; // Key flag
    unsigned int mp_flg[8]; // Map flag
    unsigned int itm[384]; // Item
    unsigned int ply_stflg[4]; // Player status flag
    NJS_POINT3 ply_pos; // Player position
    int ply_ang; // Player angle
    char ply_wno[4]; // Player weapon number
    short ply_hp[4]; // Player HP
    unsigned char evt_posno[4]; // Event position number
    int time; // Time
    int stv_tm; // (Unknown)
    short spray_ct; // Spray count (Times the player has used a spray)
    short retry_ct; // Retry count (Times the player has retried)
    short clear_ct; // Clear count (Times the player has cleared the game)
    short reserve1; // /!\ Unused
    unsigned int CheckSam; // Checksum
} SAVEFILE;

#endif // _SAVEFILE_H_