#ifndef DOOMATTACKNET_H
#define DOOMATTACKNET_H

#ifdef   __MAXON__
#ifndef  EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif
#else
#ifndef  EXEC_LIBRARIES
#include <exec/libraries.h>
#endif /* EXEC_LIBRARIES_H */
#endif
#include <dos/dos.h>

struct DANInitialization
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
	
	doomdata_t	**netbuffer;
	doomcom_t	*doomcom;
	
	char	**myargv;
	int	myargc;
};

struct DANFile
{
    BPTR NextSeg;
    WORD moveqcode;
    WORD rtscode;
    char id[4];
    void (*DAN_Init)(struct DANInitialization *daninit); /* a0 */
    int (*DAN_InitNetwork)(void);
    void (*DAN_NetCmd)(void);
    void (*DAN_CleanupNetwork)(void);
    ULONG reserved[8];
};

#endif /* DOOMATTACKNET_H */
