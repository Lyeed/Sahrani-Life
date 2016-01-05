/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_trunk", "_type", "_item", "_amount"];
_type = [_this, 0, true, [true]] call BIS_fnc_param;
_trunk = [_this, 1, [], [[]]] call BIS_fnc_param;
_item = [_this, 2, "", [""]] call BIS_fnc_param;
_amount = [_this, 3, 1, [1]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};

_index = [_item, _trunk] call public_fnc_index;
if (_type) then
{
	if (_index isEqualTo -1) then {
		_trunk pushBack [_item, _amount];
	} else {
		_trunk set [_index, [_item, (_amount + ((_trunk select _index) select 1))]];
	};
} else {
	if (_index != -1) then
	{
		if (_amount isEqualTo ((_trunk select _index) select 1)) then {
			_trunk deleteAt _index;
		} else {
			_trunk set [_index, [_item, ((_trunk select _index) select 1) - _amount]];
		};
	};
};

_trunk;
