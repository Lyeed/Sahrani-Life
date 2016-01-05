/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_type", "_item", "_amount", "_res", "_storeType"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};

_sel = lbCurSel 505;
if (_sel isEqualTo -1) exitWith {};

_item = lbData[505, _sel];
_storeType = getArray(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "store");
if (!(_storeType isEqualTo []) && !(typeOf(g_interaction_target) in _storeType)) exitWith {
	[format["%1 ne peut pas être entreposer dans %2", ([_item] call public_fnc_itemGetName), getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")]] call public_fnc_error;
};

if (g_interaction_target_trunk_transfer) exitWith {};

g_interaction_target_trunk_transfer = true;
if (_type) then {
	_amount = lbValue[505, _sel];
} else {
	_amount = 1;
};

_res = [_item, _amount, g_interaction_target_trunk_weight_actual, g_interaction_target_trunk_weight_max] call public_fnc_calWeightDiff;
if (_res > 0) then
{
	if ([false, _item, _res] call public_fnc_handleInv) then
	{
		g_interaction_target_trunk_stock = [true, g_interaction_target_trunk_stock, _item, _res] call public_fnc_handleTrunk;
		g_interaction_target_trunk_weight_actual = g_interaction_target_trunk_weight_actual + (([_item] call public_fnc_itemGetWeight) * _res);
	};
} else {
	["Il n'y a pas assez de place dans le coffre"] call public_fnc_error;
};

[] call public_fnc_virtual_menu_exhange_update;
g_interaction_target_trunk_transfer = false;
