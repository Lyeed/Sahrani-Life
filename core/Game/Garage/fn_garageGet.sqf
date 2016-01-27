/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_spawnPos", "_PNJ"];
_PNJ = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_garage = [_this, 3, "", [""]] call BIS_fnc_param;

if ((_garage isEqualTo "") || (isNull _PNJ)) exitWith {};
if (!(isClass (missionConfigFile >> "ALYSIA_GARAGES" >> _garage))) exitWith {
	[format["Impossible de trouver les informations concernant le garage [%1]", _garage]] call public_fnc_error;
};
if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br/>Revenez plus tard"] call public_fnc_error;
};

g_action_inUse = true;
g_garage_info = 
[
	getText(missionConfigFile >> "ALYSIA_GARAGES" >> _garage >> "name"),
	getArray(missionConfigFile >> "ALYSIA_GARAGES" >> _garage >> "types"),
	getArray(missionConfigFile >> "ALYSIA_GARAGES" >> _garage >> "spawns")
];

[player, (g_garage_info select 1)] remoteExec ["TON_fnc_garageVehicles", 2];
