#ifndef _PS2_MOVIEFUNC_H_
#define _PS2_MOVIEFUNC_H_

#pragma once

#include "ps2_prefix.h"
#include "libmpeg.h"
#include "libgraph.h"

// Define constants
#define UNCMASK 0x0fffffff
#define UNCBASE 0x20000000

// Structure representing the data buffer for video output buffer
typedef struct VIDEO_OUTPUT_BUFFER_DATA {
    unsigned char v[450560]; // Video buffer data
} VIDEO_OUTPUT_BUFFER_DATA;

// Structure representing the tags in video output buffer
typedef struct VIDEO_OUTPUT_BUFFER_TAG {
    int status; // Status of the buffer
    int dummy[15]; // Padding or reserved
} VIDEO_OUTPUT_BUFFER_TAG;

// Video output buffer structure
typedef struct VIDEO_OUTPUT_BUFFER {
    VIDEO_OUTPUT_BUFFER_DATA* data; // Pointer to data buffer
    VIDEO_OUTPUT_BUFFER_TAG* tag; // Pointer to tag buffer
    int write; // Write position
    int count; // Number of data elements
    int size; // Size of the buffer
} VIDEO_OUTPUT_BUFFER;

// Union for 128-bit data
typedef union DATA128_UNION {
    long128 q; // 128-bit data
    unsigned long l[2]; // 64-bit data
    unsigned int i[4]; // 32-bit data
    unsigned short s[8]; // 16-bit data
    unsigned char c[16]; // 8-bit data
} DATA128_UNION;

// Environment settings for the video input buffer
typedef struct VIDEO_INPUT_BUFFER_ENVIRONMENT {
    unsigned int d4madr; // DMA4 MADR register
    unsigned int d4tadr; // DMA4 TADR register
    unsigned int d4qwc; // DMA4 QWC register
    unsigned int d4chcr; // DMA4 CHCR register
    unsigned int d3madr; // DMA3 MADR register
    unsigned int d3qwc; // DMA3 QWC register
    unsigned int d3chcr; // DMA3 CHCR register
    unsigned int ipubp; // IPU base pointer
    unsigned int ipuctrl; // IPU control register
} VIDEO_INPUT_BUFFER_ENVIRONMENT;

// Timestamp information for MPEG decoding
typedef struct TIMESTAMP_INFO {
    long pts; // Presentation time stamp
    long dts; // Decoding time stamp
    int pos; // Position in the buffer
    int len; // Length of data
} TIMESTAMP_INFO;

// Video input buffer structure
typedef struct VIDEO_INPUT_BUFFER {
    long128* data; // Pointer to data buffer
    long128* tag; // Pointer to DMA tags
    int n; // Number of DMA transfers
    int dmaStart; // DMA start position
    int dmaN; // Number of DMA transfers in progress
    int readBytes; // Number of bytes read
    int buffSize; // Size of the buffer
    VIDEO_INPUT_BUFFER_ENVIRONMENT env; // Environment settings
    int sema; // Semaphore ID
    int isActive; // Active flag
    long totalBytes; // Total bytes processed
    TIMESTAMP_INFO* ts; // Pointer to timestamp information
    int n_ts; // Number of timestamps
    int count_ts; // Timestamp counter
    int wt_ts; // Timestamp write counter
} VIDEO_INPUT_BUFFER;

// IPU header structure
typedef struct IPU_HEADER {
    int Frame_rate; // Frame rate
    int Data_size; // Data size
    short Width; // Frame width
    short Height; // Frame height
    int Nframe; // Number of frames
} IPU_HEADER;

// Read buffer structure
typedef struct READ_BUFFER {
    unsigned char data[16384]; // Data buffer
    IPU_HEADER Ipu_header; // IPU header
    int status; // Buffer status
    int put; // Put position
    int count; // Data count
    int size; // Buffer size
} READ_BUFFER;

// Video decoder structure
typedef struct VIDEO_DECODER {
    sceMpeg mpeg; // MPEG decoder handle
    VIDEO_INPUT_BUFFER vibuf; // Video input buffer
    unsigned int state; // Decoder state
    int sema; // Semaphore ID
    int hid_vblank; // Vblank handler ID
} VIDEO_DECODER;

// Sound stream header structure
typedef struct SOUND_STREAM_HEADER {
    char id[4]; // Identifier
    int size; // Size of the header
    int type; // Stream type
    int rate; // Sampling rate
    int ch; // Number of channels
    int interSize; // Interleave size
    int loopStart; // Loop start position
    int loopEnd; // Loop end position
} SOUND_STREAM_HEADER;

// Sound stream body header structure
typedef struct SOUND_STREAM_BODY_HEADER {
    char id[4]; // Identifier
    int size; // Size of the body
} SOUND_STREAM_BODY_HEADER;

// Audio decoder structure
typedef struct AUDIO_DECODER {
    int state; // Decoder state
    SOUND_STREAM_HEADER sshd; // Sound stream header
    SOUND_STREAM_BODY_HEADER ssbd; // Sound stream body header
    int hdrCount; // Header count
    unsigned char* data; // Data buffer
    int put; // Put position
    int count; // Data count
    int size; // Buffer size
    int totalBytes; // Total bytes processed
    int iopBuff; // IOP buffer
    int iopBuffSize; // IOP buffer size
    int iopLastPos; // Last position in IOP buffer
    int iopPausePos; // Pause position in IOP buffer
    int totalBytesSent; // Total bytes sent
    int iopZero; // IOP zero flag
} AUDIO_DECODER;

// Remote input structure
typedef struct REMOTE_INPUT {
    unsigned char* put_ptr; // Put pointer
    unsigned char* get_ptr; // Get pointer
    int putsize; // Size of data to put
    int getsize; // Size of data to get
    int readrest; // Remaining read size
    int writerest; // Remaining write size
    int count; // Data count
    int proceed; // Proceed flag
    unsigned int button_old; // Previous button state
    unsigned char cdata[32]; // Controller data
    int iMovieState; // Movie state
    int iMovieFrame; // Movie frame count
    unsigned int uiContFlag; // Controller flag
    unsigned int MVCancelButton; // Cancel button mask
} REMOTE_INPUT;

// File information structure -- todo: sceCdlFILE without the pad field
typedef struct FILE_INFO { // 
    unsigned int lsn; // Logical sector number
    unsigned int size; // Size of the file
    char name[16]; // Name of the file
    unsigned char date[8]; // Date of the file
} FILE_INFO;

// File descriptor structure
typedef struct FILE_DESCRIPTOR {
    int isOnCD; // Is the file on the CD?
    int size; // Size of the file
    FILE_INFO fp; // File information
    unsigned char* iopBuf; // IOP buffer
    int fd; // File descriptor
} FILE_DESCRIPTOR;

// Video size structure
typedef struct VIDEO_SIZE {
    short sWidth; // Screen width
    short sHeight; // Screen height
    short sDispX; // Display X position
    short sDispY; // Display Y position
} VIDEO_SIZE;

// Transfer data structure
typedef struct TRANSFER_DATA {
    unsigned int data; // Data
    unsigned int addr; // Address
    unsigned int size; // Size
    unsigned int mode; // Mode
} TRANSFER_DATA;

// Callback function definitions
// extern int (*pcmCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
// extern int (*videoCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
// extern int (*mpegTS)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
// extern int (*mpegRestartDMA)(sceMpeg*, sceMpegCbData*, void*); // MPEG restart DMA callback
// extern int (*mpegStopDMA)(sceMpeg*, sceMpegCbData*, void*); // MPEG stop DMA callback
// extern int (*mpegNodata)(sceMpeg*, sceMpegCbData*, void*); // MPEG no data callback
// extern int (*mpegError)(sceMpeg*, sceMpegCbDataError*, void*); // MPEG error callback

extern unsigned char* mpegWork;
extern int frd;
extern VIDEO_SIZE mdSize;
extern int movie_draw;
extern char sound_flag;
extern char ADX_STREAM_BUFFER[471040];
extern unsigned char* Ps2_MOVIE;
extern long128 test_tag[1400];
extern sceGsDBuff db;
extern unsigned int Ps2_vcount;

// Function declarations
void initAll();
void readMpeg();
int readBufEndGet(READ_BUFFER* b, int size);
void setImageTag(unsigned int* tags, void* image);
void vbrank_draw();
// void videoDecMain(VIDEO_DECODER* vd);
int decBs0(VIDEO_DECODER* vd);
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);
int audioDecSendToIOP(AUDIO_DECODER* ad);
void iopGetArea(int* pd0, int* d0, int* pd1, int* d1, AUDIO_DECODER* ad, int pos);
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);
int sendToIOP(int dst, unsigned char* src, int size);
void changeInputVolume(unsigned int val);
void setD3_CHCR(unsigned int val);
void setD4_CHCR(unsigned int val);
void scTag2(DATA128_UNION* q, void* addr, unsigned int id, unsigned int qwc);
int viBufReset(VIDEO_INPUT_BUFFER* f);
void viBufBeginPut(VIDEO_INPUT_BUFFER* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void viBufEndPut(VIDEO_INPUT_BUFFER* f, int size);
int viBufModifyPts(VIDEO_INPUT_BUFFER* f, TIMESTAMP_INFO* new_ts);
int IsPtsInRegion(int tgt, int pos, int len, int size);
int viBufPutTs(VIDEO_INPUT_BUFFER* f, TIMESTAMP_INFO* ts);
void voBufIncCount(VIDEO_OUTPUT_BUFFER* f);
void audioDecResume(AUDIO_DECODER* ad);
int getFIFOindex(VIDEO_INPUT_BUFFER* f, void* addr);
int videoDecPutTs(VIDEO_DECODER* vd, long pts_val, long dts_val, unsigned char* start, int len);
void audioDecBeginPut(AUDIO_DECODER* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void termAll();
int viBufDelete(VIDEO_INPUT_BUFFER* f);
int videoDecDelete(VIDEO_DECODER* vd);
int audioDecDelete();
int GetAllWorkMemory();
void OutPutCdErrorCode(unsigned int* err);
// int videoCallback(sceMpegCbDataStr* str, void* data);
// int pcmCallback(sceMpegCbDataStr* str, void* data);
// int mpegError(sceMpegCbDataError* cberror);
// int mpegNodata();
// int mpegStopDMA();
// int mpegRestartDMA();
// int mpegTS(sceMpegCbDataTimeStamp* cbts);

/* 100% match */
static inline void* DmaAddr(void* val)
{
    return ((void*)((unsigned int)(val)&UNCMASK));
}

#endif // _PS2_MOVIEFUNC_H_
