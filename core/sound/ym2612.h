/*
**
** software implementation of Yamaha FM sound generator (YM2612/YM3438)
**
** Original code (MAME fm.c)
**
** Copyright (C) 2001, 2002, 2003 Jarek Burczynski (bujar at mame dot net)
** Copyright (C) 1998 Tatsuyuki Satoh , MultiArcadeMachineEmulator development
**
** Version 1.4 (final beta) 
**
** Additional code & fixes by Eke-Eke for Genesis Plus GX
**
** AtGenesis-BETA: Modified for AtGames/Clone Genesis characteristics
** - Default to YM2612_INTEGRATED (YM3438 ASIC chip)
** - Cheaper clone console FM sound emulation
*/

#ifndef _H_YM2612_
#define _H_YM2612_

/* AtGenesis-BETA: Clone consoles typically use YM3438 ASIC (INTEGRATED)
 * YM2612_DISCRETE  = Original Model 1 Genesis (warm sound, ladder effect)
 * YM2612_INTEGRATED = Model 2+ Genesis & AtGames clones (cleaner but cheaper)
 * YM2612_ENHANCED  = High quality mode (no DAC quantization) */
enum {
  YM2612_DISCRETE = 0,
  YM2612_INTEGRATED,
  YM2612_ENHANCED
};


extern void YM2612Init(void);
extern void YM2612Config(int type);
extern void YM2612ResetChip(void);
extern void YM2612Update(int *buffer, int length);
extern void YM2612Write(unsigned int a, unsigned int v);
extern unsigned int YM2612Read(void);
extern int YM2612LoadContext(unsigned char *state);
extern int YM2612SaveContext(unsigned char *state);

#endif /* _YM2612_ */
