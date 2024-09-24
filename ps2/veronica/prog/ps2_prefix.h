#ifndef __PREFIX_PS2__
#define __PREFIX_PS2__

#if __option(ANSI_strict)
#pragma ANSI_strict off
#endif

#ifdef __cplusplus
#pragma wchar_type on
#pragma cpp_extensions on
#endif

/* Section definition */
#pragma define_section indata ".indata" far_absolute RW

/* MIPS definitions */
#define mips
#define _mips
#define __mips__
#define MIPSEL
#define _MIPSEL
#define __MIPSEL__
#define R5900
#define _R5900
#define __R5900__
#define __ee__

/* Character type */
#if __option(unsigned_char)
    #define __CHAR_UNSIGNED__
#endif

/* Floating point */
#define __mips_single_float

/* Language type */
#define __STDC__

#ifdef __cplusplus
    #define LANGUAGE_C_PLUS_PLUS
    #define _LANGUAGE_C_PLUS_PLUS
    #define __LANGUAGE_C_PLUS_PLUS
#else
    #define LANGUAGE_C
    #define _LANGUAGE_C
    #define __LANGUAGE_C
#endif

/* Typedefs */
#ifndef long128
typedef signed __int128 long128;
#endif

#ifndef u_long128
typedef unsigned __int128 u_long128;
#endif

#endif /* __PREFIX_PS2__ */
