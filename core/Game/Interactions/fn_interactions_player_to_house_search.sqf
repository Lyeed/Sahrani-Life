/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (_target getVariable ["perquisition", false]) then
{
	[
		_target,
		"player_to_house",
		[
			["storage", "Coffre", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_storage;", "(!(isNil {(g_interaction_target getVariable ""house_storage_out"")}) && (isNil ""gServer_soonReboot""))"],
			["search", "Propriétaire", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_owner;", "true"],
			["light", "Lumière", "[g_interaction_target] call AlysiaClient_fnc_house_menu_action_light;", "true"]
		],
		"Perquisition"
	] spawn AlysiaClient_fnc_interactions_create;	
} else {
	["Ce bâtiment n'est pas en train d'être perquisitionné."] call AlysiaClient_fnc_error;
};
