/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["typeRefuel", ""]) != "") exitWith
{
	["Plein annulé."] call AlysiaClient_fnc_info;
	player setVariable ["typeRefuel", ""];
};

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_station",
	[
		["refuel_veh", "Véhicule", "[g_interaction_target] call AlysiaClient_fnc_fuelStation_refuel_open;", "true"],
		["refuel_jerry", "Jerrycan", "[g_interaction_target] spawn AlysiaClient_fnc_fuelStation_jerrycan_open;", "('Alysia_jerrycan_empty' in (magazines player))"]
	],
	"Station Essence",
	"lyeed_IMG\data\vehicle\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
