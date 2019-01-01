/*
======================= Jedi Knight Plus Mod ========================
By Tr!Force. Work copyrighted (C) with holder attribution 2005 - 2018
=====================================================================
[Description]: Local definitions for game module
=====================================================================
*/

#undef	GAMEVERSION

#define JKPLUS_LONGNAME			"Jedi Knight Plus"
#define JKPLUS_SHORTNAME   		"JKPlus"
#define JKPLUS_PHASE   			"Beta"
#define JKPLUS_RELEASE 			"1"
#define JKPLUS_DEVELOP 			"0-rev2"
#define GAMEVERSION				S_COLOR_CYAN JKPLUS_SHORTNAME " " JKPLUS_RELEASE "." JKPLUS_DEVELOP " " JKPLUS_PHASE

/*
=====================================================================
Player / world information struct and flags
=====================================================================
*/

/*typedef struct {

	int			something1;					// Info 1
	int			something2;					// Info 2

} someInfo_t;*/

/*typedef enum {

	EFFECT_SOMETHING1 = 0,					// Effect 1
	EFFECT_SOMETHING2,						// Effect 2

} someEffects_t;*/

/*
=====================================================================
Global definitions
=====================================================================
*/

#define	MAX_IP						22

#define ClientCommand				JKPlus_ClientCommand
#define ClientThink_real			JKPlus_ClientThink_real
#define G_RegisterCvars 			JKPlus_G_RegisterCvars
#define G_UpdateCvars				JKPlus_G_UpdateCvars
#define ClientConnect				JKPlus_ClientConnect
#define ClientBegin					JKPlus_ClientBegin
#define ClientSpawn					JKPlus_ClientSpawn
#define G_Damage					JKPlus_G_Damage
#define ConsoleCommand				JKPlus_ConsoleCommand

/*
=====================================================================
Cvar registration
=====================================================================
*/

extern	vmCvar_t					jkplus_test1;
extern	vmCvar_t					jkplus_test2;

extern	vmCvar_t					jkplus_serverClosed;
extern	vmCvar_t					jkplus_serverClosedAllow;
extern	vmCvar_t					jkplus_serverClosedBroadcast;

extern	vmCvar_t					jkplus_emotesBreak;
extern	vmCvar_t					jkplus_emotesFreeze;
extern	vmCvar_t					jkplus_emotesEnabled;
extern	vmCvar_t					jkplus_emotesPunchDMG;

/*
=====================================================================
Common / new functions
=====================================================================
*/

// g_client.c
char		*BaseJK2_ClientConnect(int clientNum, qboolean firstTime, qboolean isBot);

// jkplus_active.c
void		JKPlus_ClientThink_real(gentity_t *ent);

// jkplus_emotes.c
int			JKPlus_emoteCheck(char *cmd, gentity_t *ent);
int			JKPlus_emoteIn(gentity_t *ent, int type);
void		JKPlus_emoteDo(gentity_t *ent, int emoteIndex);
void		JKPlus_emoteDoHug(gentity_t *ent);
void		JKPlus_emoteDoKiss(gentity_t *ent);
void		JKPlus_emoteDoPunch(gentity_t *ent);

// jkplus_common.c
int			JKPlus_compareCmd(char *cmd, char *required);
void		JKPlus_stringEscape(char *in, char *out);
void		JKPlus_cleanString(char *in, char *out);
void		JKPlus_dropPlayer(gentity_t *ent, char *msg);
void		JKPlus_sendCommand(int target, char *cmd, char *string);
