/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_type", "_item", "_amount", "_res"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};

_sel = lbCurSel 505;
if (_sel isEqualTo -1) exitWith {};
if (g_interaction_target_trunk_transfer) exitWith {};

g_interaction_target_trunk_transfer = true;
if (_type) then {
	_amount = lbValue[505, _sel];
} else {
	_amount = 1;
};

_item = lbData[505, _sel];
_res = [_item, _amount, g_interaction_target_trunk_weight_actual, g_interaction_target_trunk_weight_max] call public_fnc_calWeightDiff;
if (_res > 0) then
{
	if ([false, _item, _res] call public_fnc_handleInv) then
	{
		_index = [_item, g_interaction_target_trunk_stock] call public_fnc_index;
		if (_index isEqualTo -1) then {
			g_interaction_target_trunk_stock pushBack [_item, _res];
		} else {
			g_interaction_target_trunk_stock set [_index, [_item, (_res + ((g_interaction_target_trunk_stock select _index) select 1))]];
		};
		g_interaction_target_trunk_weight_actual = g_interaction_target_trunk_weight_actual + (([_item] call public_fnc_itemGetWeight) * _res);
	};
} else {
	["Il n'y a pas assez de place dans le coffre"] call public_fnc_error;
};

[] call public_fnc_vehicleMenu_inventory_update;
g_interaction_target_trunk_transfer = false;