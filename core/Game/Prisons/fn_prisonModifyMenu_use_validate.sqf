/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_prison","_prisonName","_cell","_time","_bail","_reason","_timeMin","_timeMax","_bailMin","_bailMax","_bailEnable","_checkBox","_cells","_error","_infos"];

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["arrested", false])) exitWith {["Cette personne n'est plus en prison"] call public_fnc_error};

disableSerialization;
_display = findDisplay 18000;
if (isNull _display) exitWith {};

_infos = [];
_error = false;
_cell = parseNumber (ctrlText 15044);
_time = parseNumber (ctrlText 15045);
_bail = parseNumber (ctrlText 15046);
_reason = ctrlText 19049;
_timeMin = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "min");
_timeMax = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "max");
_bailMin = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "min");
_bailMax = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "max");
_bailEnable = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "enable");
_checkBox = ctrlChecked (_display displayCtrl 19051);

if (!(_checkBox)) exitWith {
	["Vous devez comfirmer les modifications."] call public_fnc_error;
	(_display displayCtrl 16008) ctrlSetStructuredText parseText "<t align='left' size='0.8' color='#8A0808'>Comfirmer les modifications</t>";
};

if (_amount <= 0) exitWith {_error = true};
{
	if (!([ctrlText _x] call public_fnc_isNumber)) then {
		(_display displayCtrl _x) ctrlSetBackgroundColor {153, 0, 0, 0.5};
		_error = true;
	};
} forEach [19044, 19045, 19046];

{
	_cells = _cells + 1;
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "cells"));

if ((_cell < 1) || (_cell > _cells)) then {
	(_display displayCtrl 15044) ctrlSetBackgroundColor = {153, 0, 0, 0.5};
	_error = true;
};
if ((_time < _timeMin) || (_time > _timeMax)) then {
	(_display displayCtrl 15045) ctrlSetBackgroundColor = {153, 0, 0, 0.5};
	_error = true;
};
if (_bailEnable) then {
	if ((_amount < _bailMin) || (_amount > _bailMax)) then {
		(_display displayCtrl 15046) ctrlSetBackgroundColor = {153, 0, 0, 0.5};
		_error = true;
	};
};

if (_error != "") exitWith {["Erreur dans le montant."] call public_fnc_error};
if (!(g_interaction_target getVariable ["arrested", false])) exitWith {["Cette personne n'est plus en prison"] call public_fnc_error};

_infos = [_cell, _time, _bail, _reason];
[player, _infos] remoteExecCall ["public_fnc_prisonModifyMenu_use_validate_send", g_interaction_target];