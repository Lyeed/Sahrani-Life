/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_sel", "_amount", "_item", "_index"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;

if (g_interaction_trade_active) exitWith {};

_sel = lbCurSel 10016;
if (_sel isEqualTo -1) exitWith {};

g_interaction_trade_active = true;
if (_type) then {
	_amount = lbValue[10016, _sel];
} else {
	_amount = 1;
};

_item = lbData[10016, _sel];
if ([false, _item, _amount] call public_fnc_handleInv) then
{
	_index = [_item, g_interaction_trade_inventory] call public_fnc_index;
	if (_index isEqualTo -1) then {
		g_interaction_trade_inventory pushBack [_item, _amount];
	} else {
		(g_interaction_trade_inventory select _index) set [1, ((g_interaction_trade_inventory select _index) select 1) + _amount];
	};
};

[] call public_fnc_interactionMenu_action_trade_update;
g_interaction_trade_active = false;