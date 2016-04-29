/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_prison", "_data", "_handle", "_config_prison", "_config_cell"];
_prison = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_data = [_this, 1, [], [[]]] call BIS_fnc_param;

if (isNull _prison) exitWith {};

player setVariable ["arrested", true, true];
g_arrest_Escape = false;
g_arrest_Prison = _prison;
g_arrest_Cellule = _data select 0;
g_arrest_Time = round((_data select 1) * 60);
g_arrest_Caution = _data select 2;
g_arrest_Reason = _data select 3;
if (g_arrest_Gear isEqualTo []) then {
	g_arrest_Gear = [g_cash, ([player] call AlysiaClient_fnc_getGear), ([player] call AlysiaClient_fnc_getInv)];
};

[13] call AlysiaDB_fnc_query_update_partial;	

{
    missionNamespace setVariable [format["inv_%1", (_x select 0)], 0];
} forEach ([] call AlysiaClient_fnc_getInv);

g_cash = 0;

_handle = [] spawn AlysiaClient_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_config_prison = missionConfigFile >> "ALYSIA_PRISONS" >> typeof(_prison);
_config_cell = _config_prison >> "cells" >> g_arrest_Cellule;

player setPosATL (g_arrest_Prison modelToWorld getArray(_config_cell >> "pos"));
player setDir getNumber(_config_cell >> "dir");
player forceAddUniform getText(_config_prison >> "uniform");

[] spawn AlysiaClient_fnc_prison_loop;
