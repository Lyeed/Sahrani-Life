/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_birth", "_step", "_year", "_res", "_day", "_month"];
_birth = [_this, 0, "", [""]] call BIS_fnc_param;
_step = 0;
_year = "";
_month = "";
_day = "";

{
	if (_x isEqualTo 47) then {
		_step = _step + 1;
	} else {
		switch (_step) do
		{
			case 0: {_day = format["%1%2", _day, toString([_x])];};
			case 1: {_month = format["%1%2", _month, toString([_x])];};
			case 2: {_year = format["%1%2", _year, toString([_x])];};
		};
	};
} forEach (toArray(_birth));

if ((_month isEqualTo "") || (_day isEqualTo "") || (_year isEqualTo "")) exitWith {0};

_month = parseNumber _month;
_res = (date select 0) - (parseNumber _year);

if (_month > (date select 1)) then {
	_res = _res + 1;
};
if (_month isEqualTo (date select 1)) then {
	if ((parseNumber _day) >= (date select 2)) then {
		_res = _res + 1;
	};
};

if (_res < 0) then {
	0;
} else {
	_res;	
};

/*

calcul = 
{
	private["_birth", "_step", "_year", "_res", "_day", "_month"];
	_birth = [_this, 0, "", [""]] call BIS_fnc_param;
	_step = 0;
	_year = "";
	_month = "";
	_day = "";

	{
		if (_x isEqualTo 47) then {
			_step = _step + 1;
		} else {
			switch (_step) do
			{
				case 0: {_day = format["%1%2", _day, toString([_x])];};
				case 1: {_month = format["%1%2", _month, toString([_x])];};
				case 2: {_year = format["%1%2", _year, toString([_x])];};
			};
		};
	} forEach (toArray(_birth));

	if ((_month isEqualTo "") || (_day isEqualTo "") || (_year isEqualTo "")) exitWith {0};

	_month = parseNumber _month;
	_res = (date select 0) - (parseNumber _year);

	if (_month > (date select 1)) then {
		_res = _res + 1;
	};
	if (_month isEqualTo (date select 1)) then {
		if ((parseNumber _day) >= (date select 2)) then {
			_res = _res + 1;
		};
	};

	if (_res < 0) then {
		0;
	} else {
		_res;	
	};
};


calcul =
{
	private["_birth", "_step", "_day", "_month", "_year"];
	_birth = [_this, 0, "", [""]] call BIS_fnc_param;
	_step = 0;
	_day = "";
	_month = "";
	_year = "";
	{
		if (_x isEqualTo 47) then {
			_step = _step + 1;
		} else {
			switch (_step) do
			{
				case 0: {_day = format["%1%2", _day, toString([_x])];};
				case 1: {_month = format["%1%2", _month, toString([_x])];};
				case 2: {_year = format["%1%2", _year, toString([_x])];};
			};
		};
	} forEach (toArray(_birth));
	diag_log format["%1 %2 %3", _day, _month, _year];
	_year = parseNumber _year;
	_month = parseNumber _month;
	_day = parseNumber _day;
	hint format["[%2] Vous avez %1 ans", (date select 0) - _year, date];
	if ((_month isEqualTo (date select 1)) && (_day isEqualTo (date select 2))) then {
		hint format["C'est votre anniversaire !"];
	};
};

*/