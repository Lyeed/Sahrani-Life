/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_isCar"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (!(isNull _target)) then {
	g_interaction_target = _target;
};

if (isNull g_interaction_target) exitWith {};
if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Le coffre est déjà en cours d'utilisation"] call public_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_isCar = true;
g_interaction_target_trunk = g_interaction_target getVariable ["Trunk", []];
g_interaction_target_trunk_weight_actual = [g_interaction_target_trunk] call public_fnc_weightGenerate;
g_interaction_target_trunk_transfer = false;

g_interaction_target_trunk_weight_max = switch (true) do
{
	case (typeOf(g_interaction_target) in ["Bank_Sahrani_N", "Bank_Sahrani_S"]):
	{
		_isCar = false;
		5000
	};
	case (isClass(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(g_interaction_target))):
	{
		_isCar = false;
		getNumber(missionConfigFile >> "ALYSIA_STORAGES" >> typeOf(g_interaction_target) >> "inventory")
	};
	default {[typeOf(g_interaction_target)] call public_fnc_getVehVirtual};
};

if (g_interaction_target_trunk_weight_max isEqualTo 0) exitWith {
	["Impossible de déterminer l'inventaire du véhicule"] call public_fnc_error;
};

if (!(createDialog "RscDisplayVirtualExhange")) exitWith {};

disableSerialization;
_display = findDisplay 500;
if (isNull _display) exitWith {};

if ((vehicle player) isEqualTo player) then {player playAction "Gear";};

g_interaction_target setVariable ["trunk_in_use_ID", (getPlayerUID player), true];

if (!_isCar) then
{
	ctrlShow[19503, false];
	ctrlShow[19504, false];
	ctrlShow[19505, false];
	ctrlShow[19506, false];
};

(_display displayCtrl 501) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")];
(_display displayCtrl 515) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_maxWeight];
(_display displayCtrl 514) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_interaction_target_trunk_weight_max];

[] call public_fnc_virtual_menu_exhange_update;

while {!(isNull _display)} do
{
	if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != (getPlayerUID player)) exitWith {
		closeDialog 0;
	};
	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2)) exitWith {
		closeDialog 0;
	};
	if (((locked g_interaction_target) isEqualTo 2) && !(g_interaction_target in g_vehicles)) exitWith {
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

if (!((g_interaction_target getVariable ["Trunk", []]) isEqualTo g_interaction_target_trunk)) then {
	g_interaction_target setVariable ["Trunk", g_interaction_target_trunk, true];
};

if (_isCar) then {
	[g_interaction_target, "trunk_close", 20] call CBA_fnc_globalSay3d;
};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) isEqualTo (getPlayerUID player)) then {
	g_interaction_target setVariable ["trunk_in_use_ID", "", true];
};
