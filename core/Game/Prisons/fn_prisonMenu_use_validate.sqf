/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_prison","_prisonName","_infos","_cellule","_time","_timeMin","_timeMax","_bail","_bailMin","_bailMax","_bailEnable","_reason","_error"];
_prison = (([player] call public_fnc_prisonNearest) select 0);
_prisonName = vehicleVarName _prison;
_timeMin = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "min");
_timeMax = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "time" >> "max");
_bailMin = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "min");
_bailMax = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "max");
_bailEnable = getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> _prisonName >> "bail" >> "enable");
_cellule = lbData[20006, (lbCurSel 20006)];
_time = parseNumber (ctrlText 20010);
_bail = parseNumber (ctrlText 20011);

if (isNull g_interaction_target) exitWith {};
if (_prison isEqualTo []) exitWith {["Vous n'êtes pas dans une prison"] call public_fnc_error};
if (g_interaction_target getVariable ["arrested", false]) exitWith {["Cette personne est déjà en prison."] call public_fnc_error};

disableSerialization;
_display = findDisplay 18000;
if (isNull _display) exitWith {};

{
	if (!([ctrlText _x] call public_fnc_isNumber)) then {
		(_display displayCtrl _x) ctrlSetBackgroundColor {153, 0, 0, 0.5};
		_error = true;
	};
} forEach [20010, 20011];

if ((_time < _timeMin) || (_time > _timeMax)) then {
	(_display displayCtrl 20010) ctrlSetBackgroundColor {153, 0, 0, 0.5};
	_error = true;
};
if (_bailEnable) then {
	if ((_amount < _bailMin) || (_amount > _bailMax)) then {
		(_display displayCtrl 20011) ctrlSetBackgroundColor {153, 0, 0, 0.5};
		_error = true;
	};
};

if (_error != "") exitWith {[(format ["Erreur dans le montant.<br/>Temps minimum: %1<br/>Temps maximum: %2<br/>Caution: %3<br/>Caution minimum: %4<br/>Caution maximum :%5", _timeMin, _timeMax, (if (_bailEnable) then {"Autorisée"} else {"Prohibée"}), _bailMin, _bailMax])] call public_fnc_error};
if (g_interaction_target getVariable ["arrested", false]) exitWith {["Cette personne est déjà en prison"] call public_fnc_error};

_infos = [_cellule, _time, _bail, _reason];
[player, _infos] remoteExecCall ["public_fnc_prisonMenu_use_validate_send", g_interaction_target];

