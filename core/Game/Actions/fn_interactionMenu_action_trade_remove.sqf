/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel"];

if (g_interaction_trade_active) exitWith {};

_sel = lbCurSel 10011;
if (_sel isEqualTo -1) exitWith {};

g_interaction_trade_active = true;

switch (lbData[10011, _sel]) do
{
	case "money":
	{
		[true, g_interaction_trade_money] call AlysiaClient_fnc_handleCash;
		g_interaction_trade_money = 0;
	};
	case "inventory":
	{
		_value = lbValue[10011, _sel];
		_inv = g_interaction_trade_inventory select _value;
		[true, (_inv select 0), (_inv select 1)] call AlysiaClient_fnc_handleInv;
		g_interaction_trade_inventory deleteAt _value;
	};
	case "key":
	{
		_value = lbValue[10011, _sel];
		g_interaction_trade_keys deleteAt _value;
	};
};

[] call AlysiaClient_fnc_interactionMenu_action_trade_update;
g_interaction_trade_active = false;
