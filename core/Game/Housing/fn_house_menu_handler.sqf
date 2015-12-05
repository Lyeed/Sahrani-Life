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

g_interaction_target = _target;

if (g_interaction_target in g_houses) then {
	[] call public_fnc_house_menu_open_owner;
} else {
	if ((g_interaction_target getVariable ["house_owner", []]) isEqualTo []) then {
		if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf g_interaction_target) >> "sides")) then {
			[] call public_fnc_house_menu_open_buy;
		} else {
			["Vous n'êtes pas autorisé à acheter ce type de bâtiment"] call public_fnc_info;
		};
	} else {
		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "house_can_search") isEqualTo 1) then {
			[] call public_fnc_house_menu_open_search;
		} else {
			["Ce bâtiment n'est pas en vente"] call public_fnc_error;
		};
	};
};
