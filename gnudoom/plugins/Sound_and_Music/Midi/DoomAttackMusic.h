#ifndef DOOMATTACKMUSIC_H
#define DOOMATTACKMUSIC_H

#ifdef   __MAXON__
#ifndef  EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif
#else
#ifndef  EXEC_LIBRARIES
#include <exec/libraries.h>
#endif /* EXEC_LIBRARIES_H */
#endif

struct DAMInitialization
{
	/* Routines */

	void (*I_Error) (char *error, ...);
	int (*M_CheckParm) (char *check);

	/* Vars */

	struct ExecBase *SysBase;
	struct Library *DOSBase;
	struct Library *IntuitionBase;
	struct Library *GfxBase;
	struct Library *KeymapBase;
	struct Device  *TimerBase;
		
	int *gametic;				// pointer to variable!!!
	int *snd_MusicVolume;	// pointer to variable!!!
	
	char	**myargv;
	int	myargc;
	
	/* The plugin has to fill in <numchannels> so that
	   DoomAttack knows how many audio.device channels
	   the plugin is going to use */
	
	int	numchannels;
};

/* If the plugin does both music and sound FX then */
/* OR DAMF_SOUNDFX to numchannels!                 */

#define DAMF_SOUNDFX 0x80000000

/* If the sounds effects can be in FAST RAM then   */
/* OR DAMF_FASTRAM to numchannels!                 */

#define DAMF_FASTRAM 0x40000000



#endif /* DOOMATTACKMUSIC_H */
