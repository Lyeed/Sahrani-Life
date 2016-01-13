/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_prison","_prisonName","_cells","_index","_list"];
_prison = (([player] call public_fnc_prisonNearest) select 0);
_prisonName = vehicleVarName _prison;
_cells = 0;

if (isNull g_interaction_target) exitWith {};
if (_prison isEqualTo []) exitWith {["Vous n'êtes pas dans une prison"] call public_fnc_error};
if (g_interaction_target getVariable ["arrested", false]) exitWith {["Cette personne est déjà en prison."] call public_fnc_error};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayArrest")) exitWith {};

disableSerialization;
_display = findDisplay 20000;
if (isNull _display) exitWith {};

if (!(getNumber (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "enable"))) then {
	(_display displayCtrl 20011) ctrlEnable false;
};

_list = _display displayCtrl 20006;
{
	_index = _list lbAdd getText(_x >> "name");
	_list lbSetData [_index, (configName _x)];
	//_list lbSetPicture [_index, getText(_x >> "picture")];
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "cells"));
_list lbSetCurSel 0;

(_display displayCtrl 20004) ctrlSetStructuredText parseText format["<t align='center' size='1.2'>%1</t>", (g_interaction_target getVariable ["realname", "Erreur"])];
(_display displayCtrl 20010) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getNumber (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "min"))];
(_display displayCtrl 20011) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getNumber (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "min"))];
(_display displayCtrl 20012) ctrlSetStructuredText parseText "<t align='right'>Aucune</t>";