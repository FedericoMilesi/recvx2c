#pragma once

#ifndef _ADV_H_
#define _ADV_H_

#include "types.h"


struct _anon11 {
    char ppStrPvpl[4];
    unsigned int ppNextTag;
    unsigned short ppCategoryCode;
    unsigned short ppBankId;
    unsigned short ppEntryOffset;
    unsigned short ppEntryCount;
};

struct _anon28 {
    unsigned int col1;
    unsigned int col2;
};





typedef struct tagOPTION_DEFINTION {
    char Item;
    char MaxItem;
    char Item2;
    char MaxItem2;
    char SelectFlag;
    char NextLevel;
    char ReturnLevel;
    char Switch;
    char NextFadeType;
} OPTION_DEFINTION;

#endif // _ADV_H_