/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_trunk", "_type", "_item", "_amount", "_ret", "_index"];
_type = [_this, 0, true, [true]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;
_variable = [_this, 2, "", [""]] call BIS_fnc_param;
_item = [_this, 3, "", [""]] call BIS_fnc_param;
_amount = [_this, 4, 1, [1]] call BIS_fnc_param;
_apply = [_this, 5, true, [true]] call BIS_fnc_param;
_ret = false;

if (_variable isEqualTo "") exitWith {false};
if (_item isEqualTo "") exitWith {false};
if (isNull _target) exitWith {false};

_trunk = _target getVariable [_variable, []];
_index = [_item, _trunk] call AlysiaClient_fnc_index;
if (_type) then
{
	if (([_item, _amount, ([_trunk] call AlysiaClient_fnc_weightGenerate), ([_target] call AlysiaClient_fnc_getVehicleWeightMax)] call AlysiaClient_fnc_calWeightDiff) isEqualTo _amount) then
	{
		if (_index isEqualTo -1) then {
			_trunk pushBack [_item, _amount];
		} else {
			_trunk set [_index, [_item, (_amount + ((_trunk select _index) select 1))]];
		};
		_ret = true;
	};
} else {
	if (_index != -1) then
	{
		if (_amount isEqualTo ((_trunk select _index) select 1)) then {
			_trunk deleteAt _index;
		} else {
			_trunk set [_index, [_item, ((_trunk select _index) select 1) - _amount]];
		};
		_ret = true;
	};
};

if (_ret) then {
	_target setVariable [_variable, _trunk, _apply];
};

_ret;
