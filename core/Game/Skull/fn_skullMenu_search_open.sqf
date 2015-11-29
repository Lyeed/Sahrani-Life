/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];

if (isNull g_interaction_target) exitWith {};
if ((g_interaction_target getVariable ["inventory_in_use_UID", ""]) != "") exitWith {
	["Quelqu'un est déjà en train de fouiller ce corps"] call public_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplaySkullInventory")) exitWith {};

disableSerialization;
_display = findDisplay 69000;
if (isNull _display) exitWith {};

if ((vehicle player) isEqualTo player) then {player playAction "Gear";};
g_interaction_target setVariable ["inventory_in_use_UID", (getPlayerUID player), true];

g_interaction_target_inv = g_interaction_target getVariable ["inv", []];
g_interaction_target_inv_active = false;

[] call public_fnc_skullMenu_search_update;

while {!(isNull _display)} do
{
	if ((g_interaction_target getVariable ["inventory_in_use_UID", ""]) != (getPlayerUID player)) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (isNull g_interaction_target) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};

if (!((g_interaction_target getVariable ["inv", []]) isEqualTo g_interaction_target_inv)) then {
	g_interaction_target setVariable ["inv", g_interaction_target_inv, true];
};

g_interaction_target setVariable ["inventory_in_use_UID", "", true];