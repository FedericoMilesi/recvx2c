


int SoundMode;

int syCfgExit();
int syCfgGetSoundMode(int* pnMode);
int syCfgInit();
int syCfgSetSoundMode(int nMode);

/* empty */
int syCfgExit() { } // Line 7, Address: 0x2ddf00

// 
// Start address: 0x2ddf10
int syCfgGetSoundMode(int* pnMode)
{
	// Line 11, Address: 0x2ddf10, Func Offset: 0
	// Line 13, Address: 0x2ddf18, Func Offset: 0x8
	// Line 14, Address: 0x2ddf1c, Func Offset: 0xc
	// Func End, Address: 0x2ddf24, Func Offset: 0x14
}

/* empty */
int syCfgInit() { } // Line 18, Address: 0x2ddf30

/* 100% match */
int syCfgSetSoundMode(int nMode) { // Line 22, Address: 0x2ddf40
    SoundMode = nMode; // Line 23, Address: 0x2ddf44
}
