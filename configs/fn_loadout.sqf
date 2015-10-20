/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle"];
_handle = [] spawn public_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

[(getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "uniform")), true] call public_fnc_handleItem;
{
	[_x, true] call public_fnc_handleItem;
} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "items"));