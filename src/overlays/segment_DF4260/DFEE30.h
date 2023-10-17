#ifndef OVL_DFEE30_H
#define OVL_DFEE30_H

#include "global.h"

typedef struct {
    /* 0x00 */ char pad_0[0xC];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ char pad_10[0x38];
    /* 0x48 */ s32 unk48;
} UnkStruct_func_801924A8_DFF1E8;

typedef struct {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 unk7C;
} UnkStruct_D_80178280;

extern s8 D_80177A98;
extern s8 D_80177AB0;
extern UnkStruct_D_80178280* D_80178280;

#endif