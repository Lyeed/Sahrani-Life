/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle"];

_vehicle = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_vehicle") createVehicle (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_start") call BIS_fnc_selectRandom);
[_vehicle] call public_fnc_clearVehicleAmmo;

// getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "missions_items")