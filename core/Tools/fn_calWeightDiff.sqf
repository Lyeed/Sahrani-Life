/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_value", "_cWeight", "_mWeight", "_weight"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;
_value = [_this, 1, -1, [0]] call BIS_fnc_param;
_cWeight = [_this, 2, -1, [0]] call BIS_fnc_param;
_mWeight = [_this, 3, -1, [0]] call BIS_fnc_param;

if ((_item isEqualTo "") || (_value isEqualTo -1) || (_cweight isEqualTo -1) || (_mWeight isEqualTo -1)) exitWith {0};

_weight = ([_item] call public_fnc_itemGetWeight);
_cWeight = _cweight + (_weight * _value);
while {(_cweight > _mWeight)} do
{
	_cweight = _cweight - _weight;
	_value = _value - 1;
};

_value;