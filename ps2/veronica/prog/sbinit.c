

typedef unsigned char type_0[49184];
typedef unsigned char type_1[49184];

unsigned char gMapleSendBuf[49184];
unsigned char gMapleRecvBuf[49184];
unsigned char* _BSG_END;

void sbInitSystem(int mode, int frame, int count);
void sbExitSystem();

// 
// Start address: 0x12b530
void sbInitSystem(int mode, int frame, int count)
{
	// Line 99, Address: 0x12b530, Func Offset: 0
	// Line 108, Address: 0x12b548, Func Offset: 0x18
	// Line 111, Address: 0x12b558, Func Offset: 0x28
	// Line 114, Address: 0x12b560, Func Offset: 0x30
	// Line 122, Address: 0x12b594, Func Offset: 0x64
	// Line 125, Address: 0x12b59c, Func Offset: 0x6c
	// Line 128, Address: 0x12b5ac, Func Offset: 0x7c
	// Line 131, Address: 0x12b5b4, Func Offset: 0x84
	// Line 134, Address: 0x12b5cc, Func Offset: 0x9c
	// Line 137, Address: 0x12b5d4, Func Offset: 0xa4
	// Line 145, Address: 0x12b5dc, Func Offset: 0xac
	// Line 146, Address: 0x12b5ec, Func Offset: 0xbc
	// Line 147, Address: 0x12b5f4, Func Offset: 0xc4
	// Line 171, Address: 0x12b5fc, Func Offset: 0xcc
	// Func End, Address: 0x12b614, Func Offset: 0xe4
}

/* 100% match */
void sbExitSystem() { // Line 179, Address: 0x12b620


    
    ExitGdSystem(); // Line 183, Address: 0x12b628






    
    syRtcFinish(); // Line 191, Address: 0x12b630

    
    pdExitPeripheral(); // Line 194, Address: 0x12b638

    
    njExitSystem(); // Line 197, Address: 0x12b640






    
    syMallocFinish(); // Line 205, Address: 0x12b648

    
    syHwFinish(); // Line 208, Address: 0x12b650

    
    _builtin_set_imask(0xF); // Line 211, Address: 0x12b658
} // Line 212, Address: 0x12b660
