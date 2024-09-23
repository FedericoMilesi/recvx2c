#pragma once

#ifndef _SELECTFILEINFO_H_
#define _SELECTFILEINFO_H_

typedef struct tagSELECTFILEINFO {
    int FileNumber;
    int save_ct;
    int gm_mode;
    char ply_id;
    char saveroom;
} SELECTFILEINFO;

#endif // _SELECTFILEINFO_H_