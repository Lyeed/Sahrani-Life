/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_infos","_prison","_prisonName","_cells"];
_infos = [_this, 0, [], [[]]] call BIS_fnc_param;
_prison = [player] call public_fnc_prisonNearest;
_prisonName = vehicleVarName _prison;
_cells = 0;

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["arrested", false])) exitWith {["Cette personne n'est plus en prison"] call public_fnc_error};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

disableSerialization;
_display = findDisplay 18000;
if (isNull _display) exitWith {};

if (!(createDialog "RscDisplayArrest")) exitWith {};

{
	_cells = _cells + 1;
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "cells"));

(_display displayCtrl 18012) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", getText(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "name")];
(_display displayCtrl 18013) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", getArray(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "side")];
(_display displayCtrl 18014) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", _cells];
(_display displayCtrl 18015) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1 M.</t>", getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "min") / 60];
(_display displayCtrl 18016) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1 M.</t>", getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "max")];
(_display displayCtrl 18017) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", (if (getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "enable")) then {"<t color='#688A08'>Oui</t>"} else {"<t color='#8A0808'>Non</t>"})];
(_display displayCtrl 18018) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1Kn</t>", getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "min")];
(_display displayCtrl 18019) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1Kn</t>", getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "max")];
(_display displayCtrl 18029) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", _infos select 0];
(_display displayCtrl 18030) ctrlSetStructuredText parseText format["<t align='right' size='1'>(%1) %2</t>", _infos select 1, _info select 2];
(_display displayCtrl 18031) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", _infos select 3];
(_display displayCtrl 18032) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", _info select 4];
(_display displayCtrl 18033) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1 M.</t>", _info select 5];
(_display displayCtrl 18034) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1Kn</t>", _infos select 6];
(_display displayCtrl 18037) ctrlSetStructuredText parseText format["<t align='right' size='1'>%1</t>", _info select 7];