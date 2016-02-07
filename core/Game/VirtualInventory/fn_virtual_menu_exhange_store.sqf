/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_type", "_item", "_amount", "_storeType"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};

_sel = lbCurSel 505;
if (_sel isEqualTo -1) exitWith {};


if (g_interaction_target_trunk_transfer) exitWith {};
if (!g_interaction_target_trunk_store) exitWith {};

_item = lbData[505, _sel];
_storeType = getArray(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "store");
if (!(_storeType isEqualTo []) && !(typeOf(g_interaction_target) in _storeType)) exitWith {
	[format["%1 ne peut pas être entreposer dans %2", ([_item] call AlysiaClient_fnc_itemGetName), getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")]] call AlysiaClient_fnc_error;
};

g_interaction_target_trunk_transfer = true;

if (_type) then {
	_amount = lbValue[505, _sel];
} else {
	_amount = 1;
};

[player, g_interaction_target, g_interaction_target_trunk_type, _item, _amount, false] call AlysiaClient_fnc_transfertVirtualItem;
[] call AlysiaClient_fnc_virtual_menu_exhange_update_lists;

g_interaction_target_trunk_transfer = false;
