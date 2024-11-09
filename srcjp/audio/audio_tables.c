#include "sys.h"
#include "sf64audio_provisional.h"

// AudioTable gSampleBankTableInit = {
AudioTable D_800C0760 = {
    { 4, 0, 0 },
    {
        { 0x000000, 0x0DF120, MEDIUM_CART, CACHEPOLICY_4 },
        { 0x0DF120, 0x0D1D80, MEDIUM_CART, CACHEPOLICY_4 },
        { 0x1B0EA0, 0x48C480, MEDIUM_CART, CACHEPOLICY_4 },
        { 0x63D320, 0x0C3900, MEDIUM_CART, CACHEPOLICY_4 },
    },
};

// AudioTable gSeqTableInit = {
AudioTable D_800C07B0 = {
    { SEQ_ID_MAX, 0, 0 },
    {
        { 0x00000, 0x3AF0, MEDIUM_CART, CACHEPOLICY_0 },     { 0x03AF0, 0x5990, MEDIUM_CART, CACHEPOLICY_0 },
        { 0x09480, 0x2D80, MEDIUM_CART, CACHEPOLICY_3 },     { 0x0C200, 0x1410, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x0D610, 0x1600, MEDIUM_CART, CACHEPOLICY_3 },     { 0x0EC10, 0xF20, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x0FB30, 0x13A0, MEDIUM_CART, CACHEPOLICY_3 },     { 0x10ED0, 0x1100, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x11FD0, 0x19E0, MEDIUM_CART, CACHEPOLICY_3 },     { 0x139B0, 0x13E0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x14D90, 0x12F0, MEDIUM_CART, CACHEPOLICY_3 },     { SEQ_ID_SECTOR_Y, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x16080, 0xB70, MEDIUM_CART, CACHEPOLICY_3 },      { 0x16BF0, 0x2460, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x19050, 0xD40, MEDIUM_CART, CACHEPOLICY_3 },      { SEQ_ID_FORTUNA, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_TITANIA, 0, MEDIUM_CART, CACHEPOLICY_3 },   { 0x19D90, 0x7F0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x1A580, 0x1440, MEDIUM_CART, CACHEPOLICY_3 },     { 0x1B9C0, 0x1B20, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },   { SEQ_ID_BOSS_CO_1, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_CO_1, 0, MEDIUM_CART, CACHEPOLICY_3 }, { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },   { 0x1D4E0, 0x1B30, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_CO_1, 0, MEDIUM_CART, CACHEPOLICY_3 }, { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x1F010, 0x10B0, MEDIUM_CART, CACHEPOLICY_3 },     { SEQ_ID_BOSS_BO, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },   { SEQ_ID_BOSS_BO, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },   { 0x200C0, 0x1410, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x214D0, 0xF30, MEDIUM_CART, CACHEPOLICY_3 },      { 0x22400, 0x2B30, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x24F30, 0x7F0, MEDIUM_CART, CACHEPOLICY_3 },      { 0x25720, 0x13B0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x26AD0, 0xC70, MEDIUM_CART, CACHEPOLICY_3 },      { 0x27740, 0x180, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x278C0, 0x5C0, MEDIUM_CART, CACHEPOLICY_3 },      { SEQ_ID_TITLE, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x27E80, 0x4E40, MEDIUM_CART, CACHEPOLICY_3 },     { 0x2CCC0, 0x14E0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x2E1A0, 0x400, MEDIUM_CART, CACHEPOLICY_3 },      { 0x2E5A0, 0x800, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x2EDA0, 0x1AB0, MEDIUM_CART, CACHEPOLICY_3 },     { 0x30850, 0x1AA0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_BOSS_ME, 0, MEDIUM_CART, CACHEPOLICY_3 },   { 0x322F0, 0x1370, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x33660, 0xB80, MEDIUM_CART, CACHEPOLICY_3 },      { 0x341E0, 0x5C0, MEDIUM_CART, CACHEPOLICY_3 },
        { SEQ_ID_CO_INTRO, 0, MEDIUM_CART, CACHEPOLICY_3 },  { SEQ_ID_CO_INTRO, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x347A0, 0x550, MEDIUM_CART, CACHEPOLICY_3 },      { 0x34CF0, 0x360, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x35050, 0x620, MEDIUM_CART, CACHEPOLICY_3 },      { SEQ_ID_VS_MENU, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x35670, 0xA70, MEDIUM_CART, CACHEPOLICY_3 },      { SEQ_ID_STAR_WOLF, 0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x360E0, 0xAB0, MEDIUM_CART, CACHEPOLICY_3 },      { 0x36B90, 0x13D0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x37F60, 0x250, MEDIUM_CART, CACHEPOLICY_3 },      { 0x381B0, 0x6F0, MEDIUM_CART, CACHEPOLICY_3 },
        { 0x388A0, 0xFB0, MEDIUM_CART, CACHEPOLICY_3 },      { 0x39850, 0x1780, MEDIUM_CART, CACHEPOLICY_3 },
    },
};
#define SOUNDFONT_ENTRY(offset, size, medium, cachePolicy, bank1, bank2, numInst, numDrums) \
    {                                                                                       \
        offset, size, medium, cachePolicy, (((bank1) &0xFF) << 8) | ((bank2) &0xFF),        \
            (((numInst) &0xFF) << 8) | ((numDrums) &0xFF)                                   \
    }

// AudioTable gSoundFontTableInit
s32 D_800C0BE0[] = {
    0x00210000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00002F00, 0x020000FF, 0x7F000000, 0x00002F00,
    0x00000820, 0x020101FF, 0x7F000000, 0x00003720, 0x000006E0, 0x020002FF, 0x7F000000, 0x00003E00, 0x000015E0,
    0x020002FF, 0x7F000000, 0x000053E0, 0x00000C20, 0x020002FF, 0x7F000000, 0x00006000, 0x00000FE0, 0x020002FF,
    0x7F000000, 0x00006FE0, 0x00001360, 0x020002FF, 0x7F000000, 0x00008340, 0x00001120, 0x020002FF, 0x7F000000,
    0x00009460, 0x00000EA0, 0x020002FF, 0x7F000000, 0x0000A300, 0x00000CE0, 0x020002FF, 0x7F000000, 0x0000AFE0,
    0x00001BA0, 0x020002FF, 0x7F000000, 0x0000CB80, 0x00000AC0, 0x020002FF, 0x7F000000, 0x0000D640, 0x00000AC0,
    0x020002FF, 0x7F000000, 0x0000E100, 0x00000EE0, 0x020002FF, 0x7F000000, 0x0000EFE0, 0x00000C00, 0x020002FF,
    0x7F000000, 0x0000FBE0, 0x000010A0, 0x020002FF, 0x7F000000, 0x00010C80, 0x00000F80, 0x020002FF, 0x7F000000,
    0x00011C00, 0x000010C0, 0x020002FF, 0x7F000000, 0x00012CC0, 0x00001380, 0x020002FF, 0x7F000000, 0x00014040,
    0x00002B20, 0x020002FF, 0x7F000000, 0x00016B60, 0x000009A0, 0x020002FF, 0x7F000000, 0x00017500, 0x00001220,
    0x020303FF, 0x10400000, 0x00018720, 0x00000180, 0x020303FF, 0x03000000, 0x000188A0, 0x000011C0, 0x020303FF,
    0x10400000, 0x00019A60, 0x00000940, 0x020303FF, 0x0A400000, 0x0001A3A0, 0x000009E0, 0x020303FF, 0x0A400000,
    0x0001AD80, 0x00000920, 0x020303FF, 0x0A400000, 0x0001B6A0, 0x000009E0, 0x020303FF, 0x0A400000, 0x0001C080,
    0x000009E0, 0x020303FF, 0x0A400000, 0x0001CA60, 0x00000A10, 0x020303FF, 0x0A400000, 0x0001D470, 0x000009E0,
    0x020303FF, 0x0A400000, 0x0001DE50, 0x00000A00, 0x020303FF, 0x0A400000, 0x0001E850, 0x000008D0, 0x020303FF,
    0x0A400000,
};
/*
AudioTable gSoundFontTableInit = {
    { 33, 0, 0 },
    {
        SOUNDFONT_ENTRY(0x00000, 0x2F00, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_SFX, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x02F00, 0x0FE0, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_MAP, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x03EE0, 0x0640, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x04520, 0x1560, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x05A80, 0x0C00, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x06680, 0x0DE0, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x07460, 0x1200, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x08660, 0x1040, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x096A0, 0x0E40, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0A4E0, 0x0C20, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0B100, 0x1920, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0CA20, 0x0A20, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0D440, 0x0A00, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0DE40, 0x0D60, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0EBA0, 0x0C20, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x0F7C0, 0x0F00, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x106C0, 0x0F20, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x115E0, 0x0E20, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x12400, 0x10A0, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x134A0, 0x2580, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x15A20, 0x09E0, MEDIUM_CART, CACHEPOLICY_0, SAMPLES_VOICE, SAMPLES_NONE, 127, 0),
        SOUNDFONT_ENTRY(0x16400, 0x1220, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 16, 64),
        SOUNDFONT_ENTRY(0x17620, 0x0180, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 3, 0),
        SOUNDFONT_ENTRY(0x177A0, 0x11C0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 16, 64),
        SOUNDFONT_ENTRY(0x18960, 0x0940, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x192A0, 0x09E0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x19C80, 0x0920, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1A5A0, 0x09E0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1AF80, 0x09E0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1B960, 0x0A10, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1C370, 0x09E0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1CD50, 0x0A00, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
        SOUNDFONT_ENTRY(0x1D750, 0x08D0, MEDIUM_CART, CACHEPOLICY_3, SAMPLES_INST, SAMPLES_NONE, 10, 64),
    },
};
*/

#define AS_BYTES(x) (((x) >> 8) & 0xFF), ((x) &0xFF)

// u8 gSeqFontTableInit[283]
s32 D_800C0E00[] = {
    0x00840086, 0x009B009D, 0x009F00A1, 0x00A300A5, 0x00A700A9, 0x00AB00AD, 0x00AF00B1, 0x00B300B5, 0x00B700B9,
    0x00BB00BD, 0x00BF00C1, 0x00C300C5, 0x00C700C9, 0x00CB00CD, 0x00CF00D1, 0x00D300D5, 0x00D700D9, 0x00DB00DD,
    0x00DF00E1, 0x00E300E5, 0x00E700E9, 0x00EB00ED, 0x00EF00F1, 0x00F300F5, 0x00F700F9, 0x00FB00FD, 0x00FF0101,
    0x01030105, 0x01070109, 0x010B010D, 0x010F0111, 0x01130115, 0x01170119, 0x01001414, 0x13121110, 0x0F0E0D0C,
    0x0B0A0908, 0x07060504, 0x03010201, 0x18011D01, 0x19011A01, 0x1C011901, 0x19011D01, 0x18011D01, 0x1C011901,
    0x1E011801, 0x19011C01, 0x1C011F01, 0x1F011C01, 0x1C011F01, 0x1F011F01, 0x1C011F01, 0x1F011F01, 0x1F011F01,
    0x1F012001, 0x15011501, 0x16011501, 0x15011501, 0x15011501, 0x17011901, 0x15011501, 0x1D011901, 0x1F011501,
    0x15011501, 0x15011501, 0x15011501, 0x15011501, 0x1B011901, 0x15011901, 0x19011901, 0x15011F00, 0x00000000,
};

// clang-format off
/*
u8 gSeqFontTableInit[283] = {
    // Offset into this table for sequence sound font list
    AS_BYTES(132), AS_BYTES(134), AS_BYTES(155), AS_BYTES(157), AS_BYTES(159), AS_BYTES(161), AS_BYTES(163),
    AS_BYTES(165), AS_BYTES(167), AS_BYTES(169), AS_BYTES(171), AS_BYTES(173), AS_BYTES(175), AS_BYTES(177),
    AS_BYTES(179), AS_BYTES(181), AS_BYTES(183), AS_BYTES(185), AS_BYTES(187), AS_BYTES(189), AS_BYTES(191),
    AS_BYTES(193), AS_BYTES(195), AS_BYTES(197), AS_BYTES(199), AS_BYTES(201), AS_BYTES(203), AS_BYTES(205),
    AS_BYTES(207), AS_BYTES(209), AS_BYTES(211), AS_BYTES(213), AS_BYTES(215), AS_BYTES(217), AS_BYTES(219),
    AS_BYTES(221), AS_BYTES(223), AS_BYTES(225), AS_BYTES(227), AS_BYTES(229), AS_BYTES(231), AS_BYTES(233),
    AS_BYTES(235), AS_BYTES(237), AS_BYTES(239), AS_BYTES(241), AS_BYTES(243), AS_BYTES(245), AS_BYTES(247),
    AS_BYTES(249), AS_BYTES(251), AS_BYTES(253), AS_BYTES(255), AS_BYTES(257), AS_BYTES(259), AS_BYTES(261),
    AS_BYTES(263), AS_BYTES(265), AS_BYTES(267), AS_BYTES(269), AS_BYTES(271), AS_BYTES(273), AS_BYTES(275),
    AS_BYTES(277), AS_BYTES(279), AS_BYTES(281),

    // sound font for SFX sequence
    1,  0,
    // sound fonts voice sequence
    20, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,  8, 7,  6, 5,  4, 3,  1, 2,
    // sound fonts for BGM sequences. Each sequence has a single sound font.
    1, 24, 1, 29, 1, 25, 1, 26, 1, 28, 1, 25, 1, 25, 1, 29, 1, 24, 1, 29, 1, 28, 1, 25, 1, 30, 1, 24, 1, 25, 1, 28,
    1, 28, 1, 31, 1, 31, 1, 28, 1, 28, 1, 31, 1, 31, 1, 31, 1, 28, 1, 31, 1, 31, 1, 31, 1, 31, 1, 31, 1, 31, 1, 32,
    1, 21, 1, 21, 1, 22, 1, 21, 1, 21, 1, 21, 1, 21, 1, 21, 1, 23, 1, 25, 1, 21, 1, 21, 1, 29, 1, 25, 1, 31, 1, 21,
    1, 21, 1, 21, 1, 21, 1, 21, 1, 21, 1, 21, 1, 21, 1, 21, 1, 27, 1, 25, 1, 21, 1, 25, 1, 25, 1, 25, 1, 21, 1, 31
};
*/
// clang-format on
