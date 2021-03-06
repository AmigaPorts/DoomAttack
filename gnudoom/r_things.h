/* Emacs style mode select   -*- C++ -*- */
/*-----------------------------------------------------------------------------*/
/**/
/* $Id:$*/
/**/
/* Copyright (C) 1993-1996 by id Software, Inc.*/
/**/
/* This source is available for distribution and/or modification*/
/* only under the terms of the DOOM Source Code License as*/
/* published by id Software. All rights reserved.*/
/**/
/* The source is distributed in the hope that it will be useful,*/
/* but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/* FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License*/
/* for more details.*/
/**/
/* DESCRIPTION:*/
/*	Rendering of moving objects, sprites.*/
/**/
/*-----------------------------------------------------------------------------*/

#ifndef __R_THINGS__
#define __R_THINGS__

#ifdef __GNUG__
#pragma interface
#endif

#include "doomdef.h"

#define MAXVISSPRITES 128

/*extern vissprite_t	vissprites[MAXVISSPRITES];*/
extern vissprite_t* vissprites;
extern vissprite_t* vissprite_p;
extern vissprite_t vsprsortedhead;

/* Constant arrays used for psprite clipping*/
/*  and initializing clipping.*/
extern short negonearray[MAXSCREENWIDTH];
extern short screenheightarray[MAXSCREENWIDTH];

/* vars for R_DrawMaskedColumn*/
extern short* mfloorclip;
extern short* mceilingclip;
extern fixed_t spryscale;
extern fixed_t sprtopscreen;

extern fixed_t pspritescale;
extern fixed_t pspriteiscale;

extern fixed_t pspritescale2;
extern fixed_t pspriteiscale2;
extern fixed_t skyspriteiscale;

void R_DrawMaskedColumn(column_t* column);

void R_SortVisSprites(void);

void R_AddSprites(sector_t* sec);
void R_AddPSprites(void);
void R_DrawSprites(void);
void R_DrawSprite(vissprite_t* spr);
void R_InitSprites(const char* const* namelist);
void R_ClearSprites(void);
void R_DrawMasked(void);

void R_ClipVisSprite(vissprite_t* vis, int xl, int xh);

#endif
/*-----------------------------------------------------------------------------*/
/**/
/* $Log:$*/
/**/
/*-----------------------------------------------------------------------------*/
