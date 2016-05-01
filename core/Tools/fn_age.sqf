/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_year", "_day", "_month", "_ret"];
_day = [_this, 0, 1, [1]] call BIS_fnc_param;
_month = [_this, 1, 1, [1]] call BIS_fnc_param;
_year = [_this, 2, ((date select 0) - 18), [1]] call BIS_fnc_param;

_ret = (date select 0) - _year;
if (_month isEqualTo (date select 1)) then
{
	if ((date select 2) >= _day) then {
		_ret = _ret + 1;
	};
} else {
	if ((date select 1) > _month) then {
		_ret = _ret + 1;
	};
};

_ret;
