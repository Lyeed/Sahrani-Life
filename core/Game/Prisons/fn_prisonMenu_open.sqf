/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_prison","_list"];

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (isNull g_interaction_target) exitWith {};
if (g_interaction_target getVariable ["arrested", false]) exitWith {
	["Cette personne est déjà en prison."] call AlysiaClient_fnc_error
};

_prison = [g_interaction_target] call AlysiaClient_fnc_prisonNearest;
if (isNull _prison) exitWith {
	["Vous n'êtes près d'aucune prison."] call AlysiaClient_fnc_error;
};

if (!(createDialog "RscDisplayArrest")) exitWith {};

disableSerialization;
_display = findDisplay 20000;
if (isNull _display) exitWith {};

_config = missionConfigFile >> "ALYSIA_PRISONS" >> (vehicleVarName _prison);
if (isClass(_config)) then
{
	if (getNumber(_config >> "bail" >> "enable") isEqualTo 0) then
	{
		(_display displayCtrl 20011) ctrlEnable false;

		_list = _display displayCtrl 20006;
		lbClear _list;
		
		{
			_index = _list lbAdd getText(_x >> "name");
			_list lbSetData [_index, (configName _x)];
		} forEach ("true" configClasses (_config >> "cells"));
		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Aucune";
		};

		_list lbSetCurSel 0;

		(_display displayCtrl 20004) ctrlSetStructuredText parseText format
		[
			"<t align='center' size='1.2'>%1</t>",
			(g_interaction_target getVariable ["realname", (name g_interaction_target)])
		];

		(_display displayCtrl 20010) ctrlSetText format["%1", getNumber(_config >> "time" >> "min")];
		(_display displayCtrl 20011) ctrlSetText format["%1", getNumber(_config >> "bail" >> "min")];
		(_display displayCtrl 20012) ctrlSetText "Aucune";
	};
};
