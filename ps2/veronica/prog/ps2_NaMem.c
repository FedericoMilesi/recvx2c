void njMemCopy(void* vpDst, void* vpSrc, int lNum);
void njMemCopy4(void* vpDst, void* vpSrc, int lNum);

// 
// Start address: 0x2e3100
void njMemCopy(void* vpDst, void* vpSrc, int lNum)
{
	char* cpDst;
	char* cpSrc;
	// Line 66, Address: 0x2e3100, Func Offset: 0
	// Line 77, Address: 0x2e3128, Func Offset: 0x28
	// Func End, Address: 0x2e3130, Func Offset: 0x30
}

/* 100% match */
void njMemCopy4(void* vpDst, void* vpSrc, int lNum) { // Line 106, Address: 0x2e3130
    int* lpDst;
	int* lpSrc;
    
    for (lpSrc = vpSrc, lpDst = vpDst; lNum != 0; lpSrc++, lpDst++) { 
        lNum--;
        *lpDst = *lpSrc;
    } 
    
    
    
} // Line 117, Address: 0x2e3158

