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
_res = [_item, _amount, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
if (_res > 0) then
{
	if ([true, _item, _res] call AlysiaClient_fnc_handleInv) then
	{
		[false, g_interaction_target_trunk, _item, _res] call AlysiaClient_fnc_handleTrunk;
		g_interaction_target_trunk_weight_actual = g_interaction_target_trunk_weight_actual - (([_item] call AlysiaClient_fnc_itemGetWeight) * _res);
	};
} else {
	["Vous n'avez pas assez de place"] call AlysiaClient_fnc_error;
};

[] call AlysiaClient_fnc_virtual_menu_exhange_update;
g_interaction_target_trunk_transfer = false;
