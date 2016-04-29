/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_prison","_list", "_target", "_display"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (_target getVariable ["arrested", false]) exitWith {
	["Cette personne est déjà en prison."] call AlysiaClient_fnc_error;
};

_prison = [_target] call AlysiaClient_fnc_prison_near;
if (isNull _prison) exitWith {
	["Vous n'êtes près d'aucun lieu permettant l'arrestation."] call AlysiaClient_fnc_error;
};

g_interaction_target = _target;
g_interaction_prison = _prison;

createDialog "RscDisplayArrest";

disableSerialization;
_display = findDisplay 20000;
_config = missionConfigFile >> "ALYSIA_PRISONS" >> typeOf(_prison);

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
	(_target getVariable "realname")
];

(_display displayCtrl 20010) ctrlSetText str(getNumber(_config >> "time" >> "min"));
(_display displayCtrl 20011) ctrlSetText str(getNumber(_config >> "bail" >> "min"));
(_display displayCtrl 20012) ctrlSetText "Aucune";

if (getNumber(_config >> "bail" >> "enable") isEqualTo 0) then
{
	(_display displayCtrl 20011) ctrlEnable false;
};
