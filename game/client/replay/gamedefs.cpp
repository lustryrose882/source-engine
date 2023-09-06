//========= Copyright Valve Corporation, All rights reserved. ============//
//
//----------------------------------------------------------------------------------------

#include "cbase.h"
#include "gamedefs.h"

//----------------------------------------------------------------------------------------

StatInfo_t g_pReplayDisplayGameStats[REPLAY_MAX_DISPLAY_GAMESTATS] =
{
#if defined( CSTRIKE_DLL )

	{ CSSTAT_SHOTS_HIT,			"#Stat_ShotsHit" },
	{ CSSTAT_SHOTS_FIRED,		"#Stat_ShotsFired" },
	{ CSSTAT_DAMAGE,			"#Stat_Damage" },

#endif
};