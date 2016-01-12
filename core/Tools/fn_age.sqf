/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_birth", "_step", "_year", "_res", "_day", "_month"];
_day = [_this, 0, 1, [1]] call BIS_fnc_param;
_month = [_this, 1, 1, [1]] call BIS_fnc_param;
_year = [_this, 2, ((date select 0) - 18), [1]] call BIS_fnc_param;

_age = (date select 0) - _year;
if (_month isEqualTo (date select 1)) then
{
	if (_day >= (date select 2)) then {
		_age = _age + 1;
	};
} else {
	if (_month > (date select 1)) then {
		_age = _age + 1;
	};
};

_age;
