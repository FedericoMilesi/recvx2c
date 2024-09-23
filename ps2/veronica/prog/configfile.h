#pragma once

#ifndef _CONFIGFILE_H_
#define _CONFIGFILE_H_

typedef struct tagCONFIGFILE {
    unsigned int ssd_ver; // Version
    unsigned int ssd_flg; // Flag
    unsigned int ssd_reserve; // Reserved
    char keytype; // Key type
    char adjust_x; // Adjust X
    char adjust_y; // Adjust Y
    char vibration; // Vibration
    int best_tm[8]; // Best time
    unsigned int Check_Sam; // Checksum
} CONFIGFILE;

#endif // _CONFIGFILE_H_