/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_value", "_vehicle", "_find"];

if (g_interaction_trade_active) exitWith {};

_sel = lbCurSel 10016;
if (_sel isEqualTo -1) exitWith {};

g_interaction_trade_active = true;

_value = lbValue[10005, _sel];
_vehicle = g_vehicles select _value;

if (_vehicle in g_interaction_trade_keys) exitWith {};

g_interaction_trade_keys pushBack _vehicle;
[] call public_fnc_interactionMenu_action_trade_update;
g_interaction_trade_active = false;