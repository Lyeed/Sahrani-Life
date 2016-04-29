/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_ret"];
_unit = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {objNull};

_ret = objNull;

{
	if ((_unit distance (_x modelToWorld getArray(missionConfigFile >> "ALYSIA_PRISONS" >> typeOf(_x) >> "arrest_pos")))) exitWith {_ret = _x};
} forEach ([prison_n, prison_s]);

_ret;
