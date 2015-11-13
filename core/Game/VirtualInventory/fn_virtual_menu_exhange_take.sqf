/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_type", "_item", "_amount", "_res", "_index"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};

_sel = lbCurSel 503;
if (_sel isEqualTo -1) exitWith {};
if (g_interaction_target_trunk_transfer) exitWith {};

g_interaction_target_trunk_transfer = true;
if (_type) then {
	_amount = lbValue[503, _sel];
} else {
	_amount = 1;
};

_item = lbData[503, _sel];
_res = [_item, _amount, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
if (_res > 0) then
{
	_index = [_item, g_interaction_target_trunk_stock] call public_fnc_index;
	if (_index != -1) then
	{
		if ([true, _item, _res] call public_fnc_handleInv) then
		{
			if (_res isEqualTo ((g_interaction_target_trunk_stock select _index) select 1)) then {
				g_interaction_target_trunk_stock deleteAt _index;
			} else {
				g_interaction_target_trunk_stock set [_index, [_item, ((g_interaction_target_trunk_stock select _index) select 1) - _res]];
			};
			g_interaction_target_trunk_weight_actual = g_interaction_target_trunk_weight_actual - (([_item] call public_fnc_itemGetWeight) * _res);
		};
	};
} else {
	["Vous n'avez pas assez de place"] call public_fnc_error;
};

[] call public_fnc_virtual_menu_exhange_update;
g_interaction_target_trunk_transfer = false;