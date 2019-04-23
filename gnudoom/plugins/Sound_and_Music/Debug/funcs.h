extern void DAM_Init(struct DAMInitialization *daminit);
extern int  DAM_InitMusic(void);
extern void DAM_ShutdownMusic(void);
extern void DAM_SetMusicVolume(int volume);
extern void DAM_PauseSong(int handle);
extern void DAM_ResumeSong(int handle);
extern void DAM_StopSong(int handle);
extern  int DAM_RegisterSong(void *data,int songnum);
extern void DAM_PlaySong(int handle,int looping);
extern void DAM_UnRegisterSong(int handle);
extern int  DAM_QrySongPlaying(int handle);

