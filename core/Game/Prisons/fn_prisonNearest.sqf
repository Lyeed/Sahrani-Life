/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_unit";
_unit = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {objNull};

switch (true) do
{
	case ((_unit distance prison_n) < 25): {prison_n};
	case ((_unit distance prison_s) < 25): {prison_s};
	default {objNull};
};
