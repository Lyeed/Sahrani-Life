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
		["storage", "Coffre", "closeDialog 0; [g_interaction_target] call public_fnc_house_menu_action_storage;", "(!(isNil {(g_interaction_target getVariable ""house_storage_out"")}) && (isNil ""gServer_soonReboot""))"],
		["search", "Propriétaire", "[] call public_fnc_house_menu_action_owner;", "true"],
		["light", "Lumière", "[] call public_fnc_house_menu_action_light;", "true"]
	],
	"Perquisition"
] spawn public_fnc_interactions_create;
