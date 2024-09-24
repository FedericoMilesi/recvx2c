#pragma once

#ifndef _TIM2_H_
#define _TIM2_H_

typedef struct TIM2_PICTUREHEADER
{
	unsigned int TotalSize;
	unsigned int ClutSize;
	unsigned int ImageSize;
	unsigned short HeaderSize;
	unsigned short ClutColors;
	unsigned char PictFormat;
	unsigned char MipMapTextures;
	unsigned char ClutType;
	unsigned char ImageType;
	unsigned short ImageWidth;
	unsigned short ImageHeight;
	unsigned int GsTex0[2];
	unsigned int GsTex1[2];
	unsigned int GsRegs;
	unsigned int GsTexClut;
} TIM2_PICTUREHEADER;

typedef struct TIM2_FILEHEADER
{
	char FileId[4];
	unsigned char FormatVersion;
	unsigned char FormatId;
	unsigned short Pictures;
	char Reserved[8];
} TIM2_FILEHEADER;

unsigned char* Ps2_PXLCONV;

void Tim2_Format_Check(void* tim2_ptr);
int BlockConv4to32(unsigned char* p_input, unsigned char* p_output);
int BlockConv8to32(unsigned char* p_input, unsigned char* p_output);
int PageConv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int PageConv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int Conv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int Conv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output);

#endif // _TIM2_H_