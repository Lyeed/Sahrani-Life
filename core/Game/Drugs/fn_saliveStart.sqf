/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull cursorTarget) exitWith {};
if ([false, "salive", 1] call life_fnc_handleInv) then {
	if (!(["Analyses", 7, false, "", false, _target] call ALYSIA_fnc_showProgress)) exitWith {};
	[[player], "ALYSIA_fnc_copSaliveProcess", _target] spawn life_fnc_MP;
};