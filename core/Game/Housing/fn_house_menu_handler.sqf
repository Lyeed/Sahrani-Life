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

if (_target in g_houses) then {
	[_target] call AlysiaClient_fnc_interactions_player_to_house_owner;
} else {
	if ((_target getVariable ["house_owner", []]) isEqualTo []) then {
		if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _target) >> "sides")) then {
			if (g_choice isEqualTo ([] call AlysiaClient_fnc_getRegion)) then {
				[_target] call AlysiaClient_fnc_house_menu_open_buy;
			} else {
				["Vous devez avoir le passeport de la région pour acheter ce bâtiment."] call AlysiaClient_fnc_info;
			};
		} else {
			["Vous n'êtes pas autorisé à acheter ce type de bâtiment."] call AlysiaClient_fnc_info;
		};
	} else {
		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "house_search") isEqualTo 1) then {
			[_target] spawn AlysiaClient_fnc_interactions_player_to_house_search;
		} else {
			["Ce bâtiment n'est pas en vente."] call AlysiaClient_fnc_error;
		};
	};
};
