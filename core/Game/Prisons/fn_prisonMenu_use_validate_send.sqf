/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_from","_infos","_prison","_prisonName"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_infos = [_this, 1, [], [[]]] call BIS_fnc_param;
_prison = (([player] call public_fnc_prisonNearest) select 0);
_prisonName = vehicleVarName _prison;

player setVariable ["arrested", true, true];

g_arrest_Prison = _prisonName;
g_arrest_Cellule = _infos select 0;
g_arrest_Time = _infos select 1;
g_arrest_Caution = _infos select 2;
g_arrest_Reason = _infos select 3;
g_arrest_Gear = [[g_cash, ([player] call public_fnc_saveGear), ([player] call public_fnc_getInv)]];

removeHeadgear player;
removeGoggles player;
removeVest player;
removeBackpack player;
removeUniform player;
removeAllWeapons player;
removeAllAssignedItems player;

["Vous devez à présent fournir une tenue de la prison au prisonnier et l'enfermer dans sa cellule."] remoteExecCall ["public_fnc_info", _from];