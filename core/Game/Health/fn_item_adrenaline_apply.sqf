/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_adrenaline isEqualTo 0) then
{
	g_adrenaline = getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "seringue_amount");
	[] spawn
	{
		while {g_adrenaline > 0} do
		{
			g_adrenaline = g_adrenaline - getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "tick_amount");
			sleep getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "tick_timer");
		};
	};
} else {
	g_adrenaline = g_adrenaline + getNumber(missionConfigFile >> "ALYSIA_MEDICAL" >> "adrenaline" >> "seringue_amount");
};
