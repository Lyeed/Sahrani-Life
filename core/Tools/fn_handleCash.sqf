/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;
_value = round([_this, 1, 0, [0]] call BIS_fnc_param);

if (_value isEqualTo 0) exitWith {};

if (_type) then {
	g_cash = g_cash + _value;
} else {
	g_cash = g_cash - _value;
	if (g_cash < 0) then
	{
		g_cash = 0;
	};
};
