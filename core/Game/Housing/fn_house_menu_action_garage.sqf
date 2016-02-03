/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br/>Revenez plus tard"] call AlysiaClient_fnc_error;
};

g_action_inUse = true;
g_garage_info = ["Chez vous", getArray(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "garage_type"), []];
[player, (g_garage_info select 1)] remoteExec ["AlysiaServer_fnc_garageVehicles", 2, false];