/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_position","_dir"];
_position = [_this, 0, [], [[]]] call BIS_fnc_param;

[] call AlysiaClient_fnc_init_actions;

if (player getVariable ["arrested", false]) then {
	_position = getArray (missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "cells" >> g_arrest_Cellule >> "position");
	_dir = getNumber (missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "cells" >> g_arrest_Cellule >> "dir");
	player setPosATL _position;
	player setDir _dir;
} else {
	if (!g_is_alive || ((count _position) != 3)) then
	{
		private["_pos", "_randPos"];
		if (playerSide isEqualTo civilian) then {
			_pos = getMarkerPos (format["civ_spawn_%1", g_choice]);
		} else {
			_pos = getMarkerPos getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_marker");
		};
		_randPos = [_pos, 2] call CBA_fnc_randPos;
		player setPosATL [(_randPos select 0), (_randPos select 1), (_pos select 2)];
	} else {
		if (surfaceIsWater _position) then {
			player setPosASL (ATLToASL _position);
		} else {
			player setPosATL _position;
		};
	};
};

cutText ["", "BLACK IN", 6, false];

[
	[
		["Archipel de Sibranak", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
		[([] call AlysiaClient_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
		[([] call AlysiaClient_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
	]
] spawn BIS_fnc_typeText;

player setVariable ["tf_globalVolume", 1];
player setVariable ["realname", profileName, true];
[] spawn AlysiaClient_fnc_init_hud;

g_connected = true;
g_is_alive = true;
player allowDamage true;
