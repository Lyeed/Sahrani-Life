/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_wd_item", "_wd_value", "_wd_current_weight", "_wd_max_weight", "_wd_tmp_weight"];
_wd_item = [_this, 0, "", [""]] call BIS_fnc_param;
_wd_value = [_this, 1, -1, [0]] call BIS_fnc_param;
_wd_current_weight = [_this, 2, -1, [0]] call BIS_fnc_param;
_wd_max_weight = [_this, 3, -1, [0]] call BIS_fnc_param;

if ((_wd_item isEqualTo "") || (_wd_value isEqualTo -1) || (_wd_current_weight isEqualTo -1) || (_wd_max_weight isEqualTo -1)) exitWith {0};

_wd_item_weight = ([_wd_item] call AlysiaClient_fnc_itemGetWeight);
_wd_current_weight = _wd_current_weight + (_wd_item_weight * _wd_value);
while {(_wd_current_weight > _wd_max_weight)} do
{
	_wd_current_weight = _wd_current_weight - _wd_item_weight;
	_wd_value = _wd_value - 1;
};

_wd_value;
