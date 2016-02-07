/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_target", "_target_variable", "_item", "_amount", "_apply", "_ret"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;
_target_variable = [_this, 2, "", [""]] call BIS_fnc_param;
_item = [_this, 3, "", [""]] call BIS_fnc_param;
_amount = [_this, 4, 1, [1]] call BIS_fnc_param;
_apply = [_this, 5, true, [true]] call BIS_fnc_param;
_ret = false;

if (_target_variable isEqualTo "") exitWith {false};
if (_item isEqualTo "") exitWith {false};
if (isNull _target) exitWith {false};

if (_from isEqualTo player) then
{
	if ([false, _item, _amount] call AlysiaClient_fnc_handleInv) then
	{
		if ([true, _target, _target_variable, _item, _amount, _apply] call AlysiaClient_fnc_handleTrunk) then {
			_ret = true;
		} else {
			[true, _item, _amount] call AlysiaClient_fnc_handleInv;
		};
	};
} else {
	if ([false, _from, _target_variable, _item, _amount, _apply] call AlysiaClient_fnc_handleTrunk) then
	{
		if ([true, _item, _amount] call AlysiaClient_fnc_handleInv) then {
			_ret = true;
		} else {
			[true, _from, _target_variable, _item, _amount, _apply] call AlysiaClient_fnc_handleTrunk;
		};
	};
};

_ret;
