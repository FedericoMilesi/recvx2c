#pragma once

#ifndef _SELECTFILEWINDOW_H_
#define _SELECTFILEWINDOW_H_

#include "selectfileinfo.h"

typedef struct tagSELECTFILEWINDOW {
    unsigned int ulFileState;
    SELECTFILEINFO* pRecordTop;
    int lRecordMax;
    short slDispTopNumber;
    short slDispRecordNumber;
    short sMesCur;
    short sCursol;
    short sWaitMesTimer;
    float slLineNumber;
    int slDispWriteMesMax;
    int slDispWriteMes;
    unsigned int ulfoundationColor;
} SELECTFILEWINDOW;

#endif // _SELECTFILEWINDOW_H_
