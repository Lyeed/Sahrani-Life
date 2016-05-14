/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_target", "_inventory", "_can_store", "_can_take", "_playSound", "_back_button"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_inventory = [_this, 1, "Trunk", ["Trunk"]] call BIS_fnc_param;
_can_store = [_this, 2, true, [true]] call BIS_fnc_param;
_can_take = [_this, 3, true, [true]] call BIS_fnc_param;
_playSound = [_this, 4, true, [true]] call BIS_fnc_param;
_back_button = [_this, 5, true, [true]] call BIS_fnc_param;
_delete_on_empty = [_this, 6, false, [false]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (g_action_inUse) exitWith {};
if (dialog) then {closeDialog 0};

g_action_inUse = true;
uiSleep((random(1)) + 0.5);
g_action_inUse = false;

_inUse = _target getVariable ["trunk_in_use_ID", ""];
if ((_inUse != "") && !(_inUse isEqualTo (getPlayerUID player))) exitWith {
	["Le coffre est déjà en cours d'utilisation."] call AlysiaClient_fnc_error;
};

g_interaction_target = _target;
g_interaction_target_trunk_weight_max = [g_interaction_target] call AlysiaClient_fnc_getVehicleWeightMax;
if (g_interaction_target_trunk_weight_max isEqualTo 0) exitWith {
	["Impossible de déterminer l'inventaire maximum de la cible."] call AlysiaClient_fnc_error;
};

createDialog "RscDisplayVirtualExhange";

disableSerialization;
_display = findDisplay 500;
if (isNull _display) exitWith {};

if ((vehicle player) isEqualTo player) then {
	player playAction "Gear";
};

g_interaction_target_trunk_type = _inventory;
g_interaction_target_trunk_store = _can_store;
g_interaction_target_trunk_take = _can_take;
g_interaction_target_trunk_delete = _delete_on_empty;
g_interaction_target_trunk_transfer = false;
g_interaction_target setVariable ["trunk_in_use_ID", (getPlayerUID player), true];

if (!_back_button) then
{
	ctrlShow[19503, false];
	ctrlShow[19504, false];
	ctrlShow[19505, false];
	ctrlShow[19506, false];
};

(_display displayCtrl 501) ctrlSetStructuredText parseText format
[
	"<t align='center' size='1.8'>%1</t>",
	getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")
];

(_display displayCtrl 515) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	g_maxWeight
];

(_display displayCtrl 514) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	g_interaction_target_trunk_weight_max
];

[] call AlysiaClient_fnc_virtual_menu_exhange_update_lists;

while {!(isNull _display)} do
{
	if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != (getPlayerUID player)) exitWith {
		closeDialog 0;
	};
	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5)) exitWith {
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

	uiSleep 0.5;
};

g_interaction_target setVariable [g_interaction_target_trunk_type, (g_interaction_target getVariable [g_interaction_target_trunk_type, []]), true];

if (_playSound) then {
	[g_interaction_target, "trunk_close", 20] call CBA_fnc_globalSay3d;
};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) isEqualTo (getPlayerUID player)) then {
	g_interaction_target setVariable ["trunk_in_use_ID", "", true];
};
