#ifndef TEXT_OPTIONS_STRINGS_H
#define TEXT_OPTIONS_STRINGS_H

/* Extended options menu text */

// Menu title strings

#define TEXT_OPT_OPTIONS   0x18,0x19,0x1D,0x12,0x18,0x17,0x1C,0xFF
#define TEXT_OPT_CAMERA    0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0xFF
#define TEXT_OPT_CONTROLS  0x0C,0x18,0x17,0x1D,0x1B,0x18,0x15,0x1C,0xFF
#define TEXT_OPT_VIDEO     0x0D,0x12,0x1C,0x19,0x15,0x0A,0x22,0xFF
#define TEXT_OPT_AUDIO     0x1C,0x18,0x1E,0x17,0x0D,0xFF
#define TEXT_OPT_CHEATS    0x0C,0x11,0x0E,0x0A,0x1D,0x1C,0xFF

// Markers

#define TEXT_OPT_L_HIGHLIGHT 0x53,0xFF
#define TEXT_OPT_R_HIGHLIGHT 0x52,0xFF
#define TEXT_OPT_UNBOUND   0x17,0x18,0x17,0x0E,0xFF

// Language specific strings

#if defined(VERSION_JP) || defined(VERSION_SH)

// TODO: Actually translate this to JP

// No . in JP

#define TEXT_OPT_PRESSKEY  0xFC,0xFC,0xFC,0xFF

// Option strings

#define TEXT_OPT_BUTTON1   0x1B,0x9E,0x18,0x19,0x1D,0x12,0x18,0x17,0x1C,0xFF
#define TEXT_OPT_BUTTON2   0x1B,0x9E,0x1B,0x0E,0x1D,0x1E,0x1B,0x17,0xFF
#define TEXT_OPT_ENABLED   0x0E,0x17,0x0A,0x0B,0x15,0x0E,0x0D,0xFF
#define TEXT_OPT_DISABLED  0x0D,0x12,0x1C,0x0A,0x0B,0x15,0x0E,0x0D,0xFF
#define TEXT_OPT_CAMX      0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x21,0x9E,0x1C,0x0E,0x17,0x1C,0x12,0x1D,0x12,0x1F,0x12,0x1D,0x22,0xFF
#define TEXT_OPT_CAMY      0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x22,0x9E,0x1C,0x0E,0x17,0x1C,0x12,0x1D,0x12,0x1F,0x12,0x1D,0x22,0xFF
#define TEXT_OPT_INVERTX   0x12,0x17,0x1F,0x0E,0x1B,0x1D,0x9E,0x21,0x9E,0x0A,0x21,0x12,0x1C,0xFF
#define TEXT_OPT_INVERTY   0x12,0x17,0x1F,0x0E,0x1B,0x1D,0x9E,0x22,0x9E,0x0A,0x21,0x12,0x1C,0xFF
#define TEXT_OPT_CAMC      0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x0C,0x0E,0x17,0x1D,0x1B,0x0E,0x9E,0x0A,0x10,0x10,0x1B,0x0E,0x1C,0x1C,0x12,0x18,0x17,0xFF
#define TEXT_OPT_CAMP      0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x19,0x0A,0x17,0x9E,0x15,0x0E,0x1F,0x0E,0x15,0xFF
#define TEXT_OPT_CAMD      0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0x9E,0x0D,0x0E,0x0C,0x0E,0x15,0x0E,0x1B,0x0A,0x1D,0x12,0x18,0x17,0xFF
#define TEXT_OPT_CAMON     0x0F,0x1B,0x0E,0x0E,0x9E,0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0xFF
#define TEXT_OPT_ANALOGUE  0x0A,0x17,0x0A,0x15,0x18,0x10,0x1E,0x0E,0x9E,0x0C,0x0A,0x16,0x0E,0x1B,0x0A,0xFF
#define TEXT_OPT_MOUSE     0x16,0x18,0x1E,0x1C,0x0E,0x9E,0x15,0x18,0x18,0x14,0xFF
#define TEXT_OPT_TEXFILTER 0x1D,0x0E,0x21,0x1D,0x1E,0x1B,0x0E,0x9E,0x0F,0x12,0x15,0x1D,0x0E,0x1B,0x12,0x17,0x10,0xFF
#define TEXT_OPT_FSCREEN   0x0F,0x1E,0x15,0x15,0x1C,0x0C,0x1B,0x0E,0x0E,0x17,0xFF
#define TEXT_OPT_NEAREST   0x17,0x0E,0x0A,0x1B,0x0E,0x1C,0x1D,0xFF
#define TEXT_OPT_LINEAR    0x15,0x12,0x17,0x0E,0x0A,0x1B,0xFF
#define TEXT_OPT_MVOLUME   0x16,0x0A,0x1C,0x1D,0x0E,0x1B,0x9E,0x1F,0x18,0x15,0x1E,0x16,0x0E,0xFF
#define TEXT_OPT_MUSVOLUME 0x16,0x1E,0x1C,0x12,0x0C,0x9E,0x1F,0x18,0x15,0x1E,0x16,0x0E,0xFF
#define TEXT_OPT_SFXVOLUME 0x1C,0x0F,0x21,0x9E,0x1F,0x18,0x15,0x1E,0x16,0x0E,0xFF
#define TEXT_OPT_ENVVOLUME 0x0E,0x17,0x1F,0x9E,0x1F,0x18,0x15,0x1E,0x16,0x0E,0xFF
#define TEXT_OPT_VSYNC     0x1F,0x0E,0x1B,0x1D,0x12,0x0C,0x0A,0x15,0x9E,0x1C,0x22,0x17,0x0C,0xFF
#define TEXT_OPT_AUTO      0x0A,0x1E,0x1D,0x18,0xFF
#define TEXT_OPT_HUD       0x11,0x1E,0x0D,0xFF
#define TEXT_OPT_THREEPT   0x1D,0x11,0x1B,0x0E,0x0E,0x9E,0x19,0x18,0x12,0x17,0x1D,0xFF
#define TEXT_OPT_APPLY     0x0A,0x19,0x19,0x15,0x22,0xFF
#define TEXT_OPT_RESETWND  0x1B,0x0E,0x1C,0x0E,0x1D,0x9E,0x20,0x12,0x17,0x0D,0x18,0x20,0xFF

#define TEXT_BIND_A        0x0A,0x9E,0x0B,0x1E,0x1D,0x1D,0x18,0x17,0xFF
#define TEXT_BIND_B        0x0B,0x9E,0x0B,0x1E,0x1D,0x1D,0x18,0x17,0xFF
#define TEXT_BIND_START    0x1C,0x1D,0x0A,0x1B,0x1D,0x9E,0x0B,0x1E,0x1D,0x1D,0x18,0x17,0xFF
#define TEXT_BIND_L        0x15,0x9E,0x1D,0x1B,0x12,0x10,0x10,0x0E,0x1B,0xFF
#define TEXT_BIND_R        0x1B,0x9E,0x1D,0x1B,0x12,0x10,0x10,0x0E,0x1B,0xFF
#define TEXT_BIND_Z        0x23,0x9E,0x1D,0x1B,0x12,0x10,0x10,0x0E,0x1B,0xFF
#define TEXT_BIND_C_UP     0x0C,0x9F,0x1E,0x19,0xFF
#define TEXT_BIND_C_DOWN   0x0C,0x9F,0x0D,0x18,0x20,0x17,0xFF
#define TEXT_BIND_C_LEFT   0x0C,0x9F,0x15,0x0E,0x0F,0x1D,0xFF
#define TEXT_BIND_C_RIGHT  0x0C,0x9F,0x1B,0x12,0x10,0x11,0x1D,0xFF
#define TEXT_BIND_UP       0x1C,0x1D,0x12,0x0C,0x14,0x9E,0x1E,0x19,0xFF
#define TEXT_BIND_DOWN     0x1C,0x1D,0x12,0x0C,0x14,0x9E,0x0D,0x18,0x20,0x17,0xFF
#define TEXT_BIND_LEFT     0x1C,0x1D,0x12,0x0C,0x14,0x9E,0x15,0x0E,0x0F,0x1D,0xFF
#define TEXT_BIND_RIGHT    0x1C,0x1D,0x12,0x0C,0x14,0x9E,0x1B,0x12,0x10,0x11,0x1D,0xFF
#define TEXT_OPT_DEADZONE  0x1C,0x1D,0x12,0x0C,0x14,0x9E,0x0D,0x0E,0x0A,0x0D,0x23,0x18,0x17,0x0E,0xFF
#define TEXT_OPT_RUMBLE    0x1B,0x1E,0x16,0x0B,0x15,0x0E,0x9E,0x1C,0x1D,0x1B,0x0E,0x17,0x10,0x1D,0x11,0xFF

#define TEXT_OPT_CHEAT1    0x0E,0x17,0x0A,0x0B,0x15,0x0E,0x9E,0x0C,0x11,0x0E,0x0A,0x1D,0x1C,0xFF
#define TEXT_OPT_CHEAT2    0x16,0x18,0x18,0x17,0x13,0x1E,0x16,0x19,0x9E,0xE1,0x19,0x1B,0x0E,0x1C,0x1C,0x9E,0x15,0xE3,0xFF
#define TEXT_OPT_CHEAT3    0x12,0x17,0x1F,0x12,0x17,0x0C,0x12,0x0B,0x15,0x0E,0x9E,0x16,0x0A,0x1B,0x12,0x18,0xFF
#define TEXT_OPT_CHEAT4    0x12,0x17,0x0F,0x12,0x17,0x12,0x1D,0x0E,0x9E,0x15,0x12,0x1F,0x0E,0x1C,0xFF
#define TEXT_OPT_CHEAT5    0x1C,0x1E,0x19,0x0E,0x1B,0x9E,0x1C,0x19,0x0E,0x0E,0x0D,0xFF
#define TEXT_OPT_CHEAT6    0x1C,0x1E,0x19,0x0E,0x1B,0x9E,0x1B,0x0E,0x1C,0x19,0x18,0x17,0x1C,0x12,0x1F,0x0E,0x9E,0x0C,0x18,0x17,0x1D,0x1B,0x18,0x15,0x1C,0xFF
#define TEXT_OPT_CHEAT7    0x0E,0x21,0x12,0x1D,0x9E,0x0C,0x18,0x1E,0x1B,0x1C,0x0E,0x9E,0x0A,0x1D,0x9E,0x0A,0x17,0x22,0x9E,0x1D,0x12,0x16,0x0E,0xFF
#define TEXT_OPT_CHEAT8    0x11,0x1E,0x10,0x0E,0x9E,0x16,0x0A,0x1B,0x12,0x18,0xFF
#define TEXT_OPT_CHEAT9    0x1D,0x12,0x17,0x22,0x9E,0x16,0x0A,0x1B,0x12,0x18,0xFF

#else // VERSION

// Markers

#define TEXT_OPT_PRESSKEY  0x3F,0x3F,0x3F,0xFF

// Option strings

#define TEXT_OPT_BUTTON1   0x58,0x9E,0x18,0x33,0x37,0x2C,0x32,0x31,0x36,0xFF
#define TEXT_OPT_BUTTON2   0x58,0x9E,0x1B,0x28,0x37,0x38,0x35,0x31,0xFF
#define TEXT_OPT_ENABLED   0x0E,0x31,0x24,0x25,0x2F,0x28,0x27,0xFF
#define TEXT_OPT_DISABLED  0x0D,0x2C,0x36,0x24,0x25,0x2F,0x28,0x27,0xFF
#define TEXT_OPT_CAMX      0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x21,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define TEXT_OPT_CAMY      0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x22,0x9E,0x1C,0x28,0x31,0x36,0x2C,0x37,0x2C,0x39,0x2C,0x37,0x3C,0xFF
#define TEXT_OPT_INVERTX   0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x21,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define TEXT_OPT_INVERTY   0x12,0x31,0x39,0x28,0x35,0x37,0x9E,0x22,0x9E,0x0A,0x3B,0x2C,0x36,0xFF
#define TEXT_OPT_CAMC      0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x0C,0x28,0x31,0x37,0x35,0x28,0x9E,0x0A,0x2A,0x2A,0x35,0x28,0x36,0x36,0x2C,0x32,0x31,0xFF
#define TEXT_OPT_CAMP      0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x19,0x24,0x31,0x9E,0x15,0x28,0x39,0x28,0x2F,0xFF
#define TEXT_OPT_CAMD      0x0C,0x24,0x30,0x28,0x35,0x24,0x9E,0x0D,0x28,0x26,0x28,0x2F,0x28,0x35,0x24,0x37,0x2C,0x32,0x31,0xFF
#define TEXT_OPT_CAMON     0x0F,0x35,0x28,0x28,0x9E,0x0C,0x24,0x30,0x28,0x35,0x24,0xFF
#define TEXT_OPT_ANALOGUE  0x0A,0x31,0x24,0x2F,0x32,0x2A,0x38,0x28,0x9E,0x0C,0x24,0x30,0x28,0x35,0x24,0xFF
#define TEXT_OPT_MOUSE     0x16,0x32,0x38,0x36,0x28,0x9E,0x15,0x32,0x32,0x2E,0xFF
#define TEXT_OPT_TEXFILTER 0x1D,0x28,0x3B,0x37,0x38,0x35,0x28,0x9E,0x0F,0x2C,0x2F,0x37,0x28,0x35,0x2C,0x31,0x2A,0xFF
#define TEXT_OPT_FSCREEN   0x0F,0x38,0x2F,0x2F,0x36,0x26,0x35,0x28,0x28,0x31,0xFF
#define TEXT_OPT_NEAREST   0x17,0x28,0x24,0x35,0x28,0x36,0x37,0xFF
#define TEXT_OPT_LINEAR    0x15,0x2C,0x31,0x28,0x24,0x35,0xFF
#define TEXT_OPT_MVOLUME   0x16,0x24,0x36,0x37,0x28,0x35,0x9E,0x1F,0x32,0x2F,0x38,0x30,0x28,0xFF
#define TEXT_OPT_MUSVOLUME 0x16,0x38,0x36,0x2C,0x26,0x9E,0x1F,0x32,0x2F,0x38,0x30,0x28,0xFF
#define TEXT_OPT_SFXVOLUME 0x1C,0x29,0x3B,0x9E,0x1F,0x32,0x2F,0x38,0x30,0x28,0xFF
#define TEXT_OPT_ENVVOLUME 0x0E,0x31,0x39,0x9E,0x1F,0x32,0x2F,0x38,0x30,0x28,0xFF
#define TEXT_OPT_VSYNC     0x1F,0x28,0x35,0x37,0x2C,0x26,0x24,0x2F,0x9E,0x1C,0x3C,0x31,0x26,0xFF
#define TEXT_OPT_AUTO      0x0A,0x38,0x37,0x32,0xFF
#define TEXT_OPT_HUD       0x11,0x1E,0x0D,0xFF
#define TEXT_OPT_THREEPT   0x1D,0x2B,0x35,0x28,0x28,0x9F,0x33,0x32,0x2C,0x31,0x37,0xFF
#define TEXT_OPT_APPLY     0x0A,0x33,0x33,0x2F,0x3C,0xFF
#define TEXT_OPT_RESETWND  0x1B,0x28,0x36,0x28,0x37,0x9E,0x20,0x2C,0x31,0x27,0x32,0x3A,0xFF

#define TEXT_BIND_A        0x0A,0x9E,0x0B,0x38,0x37,0x37,0x32,0x31,0xFF
#define TEXT_BIND_B        0x0B,0x9E,0x0B,0x38,0x37,0x37,0x32,0x31,0xFF
#define TEXT_BIND_START    0x1C,0x37,0x24,0x35,0x37,0x9E,0x0B,0x38,0x37,0x37,0x32,0x31,0xFF
#define TEXT_BIND_L        0x15,0x9E,0x1D,0x35,0x2C,0x2A,0x2A,0x28,0x35,0xFF
#define TEXT_BIND_R        0x1B,0x9E,0x1D,0x35,0x2C,0x2A,0x2A,0x28,0x35,0xFF
#define TEXT_BIND_Z        0x23,0x9E,0x1D,0x35,0x2C,0x2A,0x2A,0x28,0x35,0xFF
#define TEXT_BIND_C_UP     0x0C,0x9F,0x1E,0x33,0xFF
#define TEXT_BIND_C_DOWN   0x0C,0x9F,0x0D,0x32,0x3A,0x31,0xFF
#define TEXT_BIND_C_LEFT   0x0C,0x9F,0x15,0x28,0x29,0x37,0xFF
#define TEXT_BIND_C_RIGHT  0x0C,0x9F,0x1B,0x2C,0x2A,0x2B,0x37,0xFF
#define TEXT_BIND_UP       0x1C,0x37,0x2C,0x26,0x2E,0x9E,0x1E,0x33,0xFF
#define TEXT_BIND_DOWN     0x1C,0x37,0x2C,0x26,0x2E,0x9E,0x0D,0x32,0x3A,0x31,0xFF
#define TEXT_BIND_LEFT     0x1C,0x37,0x2C,0x26,0x2E,0x9E,0x15,0x28,0x29,0x37,0xFF
#define TEXT_BIND_RIGHT    0x1C,0x37,0x2C,0x26,0x2E,0x9E,0x1B,0x2C,0x2A,0x2B,0x37,0xFF
#define TEXT_OPT_DEADZONE  0x1C,0x37,0x2C,0x26,0x2E,0x9E,0x0D,0x28,0x24,0x27,0x3D,0x32,0x31,0x28,0xFF
#define TEXT_OPT_RUMBLE    0x1B,0x38,0x30,0x25,0x2F,0x28,0x9E,0x1C,0x37,0x35,0x28,0x31,0x2A,0x37,0x2B,0xFF

#define TEXT_OPT_CHEAT1    0x0E,0x31,0x24,0x25,0x2F,0x28,0x9E,0x26,0x2B,0x28,0x24,0x37,0x36,0xFF
#define TEXT_OPT_CHEAT2    0x16,0x32,0x32,0x31,0x2D,0x38,0x30,0x33,0x9E,0xE1,0x19,0x35,0x28,0x36,0x36,0x9E,0x15,0xE3,0xFF
#define TEXT_OPT_CHEAT3    0x12,0x31,0x39,0x2C,0x31,0x26,0x2C,0x25,0x2F,0x28,0x9E,0x16,0x24,0x35,0x2C,0x32,0xFF
#define TEXT_OPT_CHEAT4    0x12,0x31,0x29,0x2C,0x31,0x2C,0x37,0x28,0x9E,0x2F,0x2C,0x39,0x28,0x36,0xFF
#define TEXT_OPT_CHEAT5    0x1C,0x38,0x33,0x28,0x35,0x9E,0x36,0x33,0x28,0x28,0x27,0xFF
#define TEXT_OPT_CHEAT6    0x1C,0x38,0x33,0x28,0x35,0x9E,0x35,0x28,0x36,0x33,0x32,0x31,0x36,0x2C,0x39,0x28,0x9E,0x26,0x32,0x31,0x37,0x35,0x32,0x2F,0x36,0xFF
#define TEXT_OPT_CHEAT7    0x0E,0x3B,0x2C,0x37,0x9E,0x26,0x32,0x38,0x35,0x36,0x28,0x9E,0x24,0x37,0x9E,0x24,0x31,0x3C,0x9E,0x37,0x2C,0x30,0x28,0xFF
#define TEXT_OPT_CHEAT8    0x11,0x38,0x2A,0x28,0x9E,0x16,0x24,0x35,0x2C,0x32,0xFF
#define TEXT_OPT_CHEAT9    0x1D,0x2C,0x31,0x3C,0x9E,0x16,0x24,0x35,0x2C,0x32,0xFF

#endif // VERSION

#endif // TEXT_OPTIONS_STRINGS_H