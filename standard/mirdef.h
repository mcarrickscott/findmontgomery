/*
 *   MIRACL compiler/hardware definitions - mirdef.h
 */
#include <stdint.h>

#define MR_LITTLE_ENDIAN
#define MIRACL 64
#define mr_utype long long
#define MR_IBITS 32
#define MR_LBITS 64
#define mr_unsign32 unsigned int
#define mr_unsign64 unsigned long long
#define mr_dltype __int128_t
#define MR_NOASM
#define MR_ALWAYS_BINARY
#define MAXBASE ((mr_small)1<<(MIRACL-1))
#define MR_BITSINCHAR 8
#define MR_NO_INTRINSICS
