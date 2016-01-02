/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_from","_infos"];
_from = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
  
if (isNull _from) exitWith {};
if (!(player getVariable ["arrested", false])) exitWith {};

_infos =
[
	_from getVariable ["realname", "Erreur"],
	g_sexe,
	[g_birth] call public_fnc_age,
	g_nationality,
	g_arrest_Cellule,
	g_arrest_Time,
	g_arrest_Caution,
	g_arrest_Reason
]

[_array] remoteExecCall ["public_fnc_prisonModifyMenu_open", _from];

