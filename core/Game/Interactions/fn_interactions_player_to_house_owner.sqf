/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	g_interaction_target,
	"player_to_house",
	[
		["sell", "Vendre", "closeDialog 0; [] spawn public_fnc_house_menu_action_sell;", "(((g_interaction_target getVariable [""house_owner"", ["""", """"]]) select 0) isEqualTo (getPlayerUID player))"],
		["storage", "Coffre", "closeDialog 0; [g_interaction_target] call public_fnc_house_menu_action_storage;", "(!(isNil {(g_interaction_target getVariable ""house_storage_out"")}) && (isNil ""gServer_soonReboot""))"],
		["garage", "Garage", "closeDialog 0; [] call public_fnc_house_menu_action_garage;", "(getNumber(missionConfigFile >> ""ALYSIA_HOUSES"" >> typeOf(g_interaction_target) >> ""garage"") isEqualTo 1)"],
		["store", "Rentrer", "closeDialog 0; [] spawn public_fnc_house_menu_action_store;", "(getNumber(missionConfigFile >> ""ALYSIA_HOUSES"" >> typeOf(g_interaction_target) >> ""garage"") isEqualTo 1)"],
		["light", "Lumière", "[] call public_fnc_house_menu_action_light;", "true"],
		["search", "Proprio.", "", "true"]
	],
	"Chez vous"
] spawn public_fnc_interactions_create;
