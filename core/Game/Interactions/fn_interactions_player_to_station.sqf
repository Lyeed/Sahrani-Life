/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	([_this, 0, objNull, [objNull]] call BIS_fnc_param),
	"player_to_station",
	[
		["refuel_veh", "Plein Véhicule", "[g_interaction_target] spawn public_fnc_fuelStation_use_refuel_veh;", "true"],
		["refuel_jerry", "Plein Jerrican", "[g_interaction_target] spawn public_fnc_fuelMenu_use_refuel_jerry;", "(""Fuel_E"" in (magazines player))"]
	],
	"Station Essence"
] spawn public_fnc_interactions_create;