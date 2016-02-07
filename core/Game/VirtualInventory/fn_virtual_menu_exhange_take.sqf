/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_type", "_amount"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};

_sel = lbCurSel 503;
if (_sel isEqualTo -1) exitWith {};
if (g_interaction_target_trunk_transfer) exitWith {};
if (!g_interaction_target_trunk_take) exitWith {};

g_interaction_target_trunk_transfer = true;

if (_type) then {
	_amount = lbValue[503, _sel];
} else {
	_amount = 1;
};

[g_interaction_target, player, g_interaction_target_trunk_type, (lbData[503, _sel]), _amount, false] call AlysiaClient_fnc_transfertVirtualItem;
[] call AlysiaClient_fnc_virtual_menu_exhange_update_lists;

g_interaction_target_trunk_transfer = false;
