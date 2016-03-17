/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_interaction_trade_active) exitWith {};
if (isNull g_interaction_target) exitWith {};

g_interaction_trade_active = true;
["Echange proposé"] call AlysiaClient_fnc_info;
[player, g_interaction_trade_inventory, g_interaction_trade_keys_vehicles, g_interaction_trade_money, g_interaction_trade_keys_buildings] remoteExec ["AlysiaClient_fnc_interactionMenu_action_trade_receive", g_interaction_target];
g_interaction_trade_inventory = [];
g_interaction_trade_keys_vehicles = [];
g_interaction_trade_keys_buildings = [];
g_interaction_trade_money = 0;
closeDialog 0;
