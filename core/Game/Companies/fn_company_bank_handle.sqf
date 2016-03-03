/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value", "_type", "_amount", "_ret"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, false, [false]] call BIS_fnc_param;
_value = round([_this, 2, 0, [0]] call BIS_fnc_param);
_ret = false;

if (isNull _company) exitWith {false};
if (_value isEqualTo 0) exitWith {true};

_amount = _company getVariable ["company_bank", 0];
if (_type) then
{
	_amount = _amount + _value;
	_ret = true;
} else {
	if (_value <= _amount) then
	{
		_amount = _amount - _value;
		_ret = true;
	};
};

if (_ret) then {
	_company setVariable ["company_bank", _amount, true];
};

_ret;
