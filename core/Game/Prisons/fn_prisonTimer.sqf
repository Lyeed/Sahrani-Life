/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_prison";
_prison = call compile g_arrest_Prison;

if (isNil "_prison") exitWith {};

while {g_arrest_Time >= 1} do
{
	if ((player distance _prison) > getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "escape_distance")) then
	{
		g_arrest_Escape = true;
		player setVariable ["arrested", false, true];
	};

	g_arrest_Time = g_arrest_Time - 1;
	sleep 1;
};

g_arrest_Escape;
