#pragma once

#ifndef _PS2_PXLCONV_H_
#define _PS2_PXLCONV_H_

extern unsigned char* Ps2_PXLCONV;

void Tim2_Format_Check(void* tim2_ptr);
int BlockConv4to32(unsigned char* p_input, unsigned char* p_output);
int BlockConv8to32(unsigned char* p_input, unsigned char* p_output);
int PageConv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int PageConv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int Conv4to32(int width, int height, unsigned char* p_input, unsigned char* p_output);
int Conv8to32(int width, int height, unsigned char* p_input, unsigned char* p_output);

#endif // _PS2_PXLCONV_H_