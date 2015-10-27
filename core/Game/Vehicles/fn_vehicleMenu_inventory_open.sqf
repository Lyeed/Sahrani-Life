/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_trunk", "_isCar"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (!(isNull _target)) then {
	g_interaction_target = _target;
};

if (isNull g_interaction_target) exitWith {};
if ((g_interaction_target getVariable["trunk_in_use_ID", ""]) != "") exitWith {
	["Le coffre est déjà en cours d'utilisation"] call public_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_isCar = true;
_trunk = g_interaction_target getVariable ["Trunk", [[], 0]];
g_interaction_target_trunk_stock = _trunk select 0;
g_interaction_target_trunk_weight_actual = _trunk select 1;
g_interaction_target_trunk_transfer = false;
g_interaction_target_trunk_weight_max = [typeOf(g_interaction_target)] call public_fnc_getVehVirtual;

if (g_interaction_target_trunk_weight_max isEqualTo 0) then
{
	if (isClass(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(g_interaction_target))) then
	{
		g_interaction_target_trunk_weight_max = getNumber(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(g_interaction_target) >> "inventory");
		_isCar = false;
	};
};
if (g_interaction_target_trunk_weight_max isEqualTo 0) exitWith {
	["Impossible de déterminer l'inventaire du véhicule"] call public_fnc_error;
};

if (!(createDialog "RscDisplayVehicleTrunk")) exitWith {};

disableSerialization;
_display = findDisplay 500;
if (isNull _display) exitWith {};

if ((vehicle player) isEqualTo player) then {player playAction "Gear";};
g_interaction_target setVariable ["trunk_in_use_ID", (getPlayerUID player), true];

(_display displayCtrl 501) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")];
(_display displayCtrl 515) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_maxWeight];
(_display displayCtrl 514) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_interaction_target_trunk_weight_max];

[] call public_fnc_vehicleMenu_inventory_update;

while {!(isNull _display)} do
{
	if ((g_interaction_target getVariable["trunk_in_use_ID", ""]) != (getPlayerUID player)) exitWith {
		closeDialog 0;
	};
	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2)) exitWith {
		closeDialog 0;
	};
	if ((locked g_interaction_target) isEqualTo 2) exitWith {
		closeDialog 0;
	};
	if (g_coma) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith {
		closeDialog 0;
	};
	if (isNull g_interaction_target) exitWith {
		closeDialog 0;
	};
	if (!(alive g_interaction_target)) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};

if (((g_interaction_target getVariable ["Trunk", [[], 0]]) select 1) != g_interaction_target_trunk_weight_actual) then {
	g_interaction_target setVariable ["Trunk", [g_interaction_target_trunk_stock, g_interaction_target_trunk_weight_actual], true];
};

if (_isCar) then {
	[g_interaction_target, "trunk_close", 20] call CBA_fnc_globalSay3d;
};

g_interaction_target setVariable ["trunk_in_use_ID", "", true];