/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (missionNamespace getVariable ["g_connected", false]) then
{
	[
		(getPlayerUID player),
		playerSide,
		missionNamespace getVariable ["g_cash", 0],
		missionNamespace getVariable ["g_atm", 0],
		([] call public_fnc_getInv),
		missionNamespace getVariable ["g_is_alive", false],
		missionNamespace getVariable ["g_blood", 4000],
		missionNamespace getVariable ["g_bleed", 0],
		missionNamespace getVariable ["g_hunger", 100],
		missionNamespace getVariable ["g_thirst", 100],
		missionNamespace getVariable ["g_phone_forfait", "none"],
		([] call public_fnc_getLicenses)
	] remoteExec ["TON_fnc_query_update_usual", 2];
};
