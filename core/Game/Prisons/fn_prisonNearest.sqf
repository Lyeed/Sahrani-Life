/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_unit","_prison","_dist","_classes"];
_unit = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_prison = ObjNull;
_classes = [];

if (isNull _unit) exitWith {};

{
	_classes pushBack (ConfigName _x);
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_PRISONS"));

{
	if ((vehicleVarName _x) in _classes) exitWith {_prison = _x};
} forEach (_unit nearObjects 25);

if (isNull _prison) exitWith {[]};
[_prison, (player distance _prison)]