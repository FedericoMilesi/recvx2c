void njMemCopy(void* vpDst, void* vpSrc, int lNum);
void njMemCopy4(void* vpDst, void* vpSrc, int lNum);






























































/* 100% match */
void njMemCopy(void* vpDst, void* vpSrc, int lNum) { // Line 66, Address: 0x2e3100
    char* cpDst;
	char* cpSrc;
    
    for (cpSrc = vpSrc, cpDst = vpDst; lNum != 0; cpSrc++, cpDst++) { 
        lNum--;
        *cpDst = *cpSrc;
    } 
    
    
    
} // Line 77, Address: 0x2e3128



























/* 100% match */
void njMemCopy4(void* vpDst, void* vpSrc, int lNum) { // Line 106, Address: 0x2e3130
    int* lpDst;
	int* lpSrc;
    
    for (lpSrc = vpSrc, lpDst = vpDst; lNum != 0; lpSrc++, lpDst++) { 
        lNum--;
        *lpDst = *lpSrc;
    } 
    
    
    
} // Line 117, Address: 0x2e3158
