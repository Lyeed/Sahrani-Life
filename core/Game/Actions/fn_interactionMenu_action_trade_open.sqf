/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];

if (isNull g_interaction_target) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayPlayerTrade")) exitWith {};

disableSerialization;
_display = findDisplay 10000;
if (isNull _display) exitWith {};

g_interaction_trade_inventory = [];
g_interaction_trade_keys_vehicles = [];
g_interaction_trade_keys_buildings = [];
g_interaction_trade_money = 0;
g_interaction_trade_active = false;

[] call AlysiaClient_fnc_interactionMenu_action_trade_update;

while {!(isNull _display)} do
{
	if (player getVariable ["is_coma", false]) exitWith {closeDialog 0};
	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5)) exitWith {closeDialog 0};
	if (player getVariable ["restrained", false]) exitWith {closeDialog 0};
	if (player getVariable ["surrender", false]) exitWith {closeDialog 0};
	if (isNull g_interaction_target) exitWith {closeDialog 0};
	if (g_interaction_target getVariable ["is_coma", false]) exitWith {closeDialog 0};
	uiSleep 0.5;
};

{
	[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
} forEach g_interaction_trade_inventory;
[true, g_interaction_trade_money] call AlysiaClient_fnc_handleCash;
