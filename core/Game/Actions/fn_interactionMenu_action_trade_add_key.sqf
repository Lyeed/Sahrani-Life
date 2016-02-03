/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_vehicle", "_find"];

if (g_interaction_trade_active) exitWith {};

_sel = lbCurSel 10019;
if (_sel isEqualTo -1) exitWith {};

_vehicle = g_vehicles select (lbValue[10005, _sel]);
if (_vehicle in g_interaction_trade_keys) exitWith {};

g_interaction_trade_active = true;
g_interaction_trade_keys pushBack _vehicle;
[] call AlysiaClient_fnc_interactionMenu_action_trade_update;
g_interaction_trade_active = false;
