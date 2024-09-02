int SoundMode;
int syCfgExit();
int syCfgGetSoundMode(int* pnMode);
int syCfgInit();
int syCfgSetSoundMode(int nMode);
/* empty */
int syCfgExit() { } // Line 7, Address: 0x2ddf00


/* 100% match */
int syCfgGetSoundMode(int* pnMode) { // Line 11, Address: 0x2ddf10
    *pnMode = SoundMode; 
    return 0; // Line 13, Address: 0x2ddf18
} // Line 14, Address: 0x2ddf1c


/* empty */
int syCfgInit() { } // Line 18, Address: 0x2ddf30


/* 100% match */
int syCfgSetSoundMode(int nMode) { // Line 22, Address: 0x2ddf40
    SoundMode = nMode; // Line 23, Address: 0x2ddf44
}
