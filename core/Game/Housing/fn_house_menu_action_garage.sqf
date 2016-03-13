/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br/>Revenez plus tard"] call AlysiaClient_fnc_error;
};

g_action_inUse = true;
g_garage_info = ["Chez vous", getArray(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_target) >> "garage" >> "types"), []];
[player, (g_garage_info select 1)] remoteExec ["AlysiaServer_fnc_garageVehicles", 2];
