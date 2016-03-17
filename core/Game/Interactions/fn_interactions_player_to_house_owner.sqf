/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_house",
	[
		["sell", "Vendre", "[g_interaction_target] spawn AlysiaClient_fnc_house_menu_action_sell;", "(((g_interaction_target getVariable ['house_owner', ['', '']]) select 0) isEqualTo (getPlayerUID player))"],
		["storage", "Coffre", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_storage;", "(!(isNil {(g_interaction_target getVariable 'house_storage_out')}) && (isNil 'gServer_soonReboot'))"],
		["garage", "Garage", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_garage;", "isClass(missionConfigFile >> 'ALYSIA_HOUSES' >> typeOf(g_interaction_target) >> 'garage')"],
		["store", "Rentrer", "[g_interaction_target] spawn AlysiaClient_fnc_house_menu_action_store;", "isClass(missionConfigFile >> 'ALYSIA_HOUSES' >> typeOf(g_interaction_target) >> 'garage')"],
		["light", "Lumière", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_light;", "isClass(missionConfigFile >> 'ALYSIA_HOUSES' >> typeOf(g_interaction_target) >> 'lights')"],
		["lock", "Changer serrure", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_keys_change;", "(((g_interaction_target getVariable ['house_owner', ['', '']]) select 0) isEqualTo (getPlayerUID player))"]
	],
	"Chez vous"
] spawn AlysiaClient_fnc_interactions_create;
