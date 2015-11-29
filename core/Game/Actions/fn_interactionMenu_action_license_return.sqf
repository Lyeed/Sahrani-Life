/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl"];

if (!params [
		["_licenses", [], [[]]]
	]) exitWith {};

if (!(createDialog "RscDisplayPlayerRevokeLicense")) exitWith {};

disableSerialization;
_display = findDisplay 18000;
if (isNull _display) exitWith {};

_ctrl = _display displayCtrl 18001;
lbClear _ctrl;

{
	_index = _ctrl lbAdd ([_x] call public_fnc_licenseGetName);
	_ctrl lbSetData [_index, _x];
} forEach (_licenses);
if ((lbSize _ctrl) isEqualTo 0) then
{
	_ctrl lbAdd "Aucune";
	ctrlShow[18002, false];
	ctrlShow[18003, false];
};

_ctrl lbSetCurSel 0;

while {!(isNull _display)} do
{
	if (player getVariable ["is_coma", false]) exitWith {
		closeDialog 0;
	};
	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2)) exitWith {
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
	if (g_interaction_target getVariable ["is_coma", false]) exitWith {
		closeDialog 0;
	};
	if (!(g_interaction_target getVariable ["restrained", false]) && !(g_interaction_target getVariable ["surrender", false])) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};