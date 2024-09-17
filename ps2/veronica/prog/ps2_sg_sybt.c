#include "types.h"

void syBtExit();
int syBtGetBootSystemID(SYS_BT_SYSTEMID* pData);

























































/* empty */
void syBtExit() { } // Line 63, Address: 0x2dde90























/* 100% match */
int syBtGetBootSystemID(SYS_BT_SYSTEMID* pData) { // Line 88, Address: 0x2ddea0
    int i;
    if (pData == NULL) return 0; // Line 90, Address: 0x2ddea8





    
    pData->nNo = 1; // Line 97, Address: 0x2ddeb0
    pData->nAll = 2; // Line 98, Address: 0x2ddeb8
    for (i = 0; i < 16; i++) { // Line 99, Address: 0x2ddec0
        
        pData->szProduct[i] = 0; // Line 101, Address: 0x2ddec4, 0x2ddecc
    } // Line 102, Address: 0x2ddec8, 0x2dded0
    return 1; // Line 103, Address: 0x2ddee0
    
} // Line 105, Address: 0x2ddee4
