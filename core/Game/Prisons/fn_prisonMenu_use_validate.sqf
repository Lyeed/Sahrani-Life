/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_prison", "_time", "_timeMin", "_timeMax", "_bailMin", "_bailMax", "_bailEnable", "_error"];

if (isNull g_interaction_target) exitWith {};
if (g_interaction_target getVariable ["arrested", false]) exitWith {
	["Cette personne est déjà en prison."] call AlysiaClient_fnc_error
};

_prison = [g_interaction_target] call AlysiaClient_fnc_prisonNearest;
if (isNull _prison) exitWith {
	["Vous n'êtes près d'aucune prison."] call AlysiaClient_fnc_error;
};

_config = missionConfigFile >> "ALYSIA_PRISONS" >> (vehicleVarName _prison);
if (isClass(_config)) then
{
	_timeMin = getNumber(_config >> "time" >> "min");
	_timeMax = getNumber(_config >> "time" >> "max");
	_bailMin = getNumber(_config >> "bail" >> "min");
	_bailMax = getNumber(_config >> "bail" >> "max");
	_bailEnable = getNumber(_config >> "bail" >> "enable");

	disableSerialization;
	_display = findDisplay 20000;
	if (isNull _display) exitWith {};

	_error = false;

	if (!([ctrlText 20010] call AlysiaClient_fnc_isNumber)) then {_error = true};
	if (!([ctrlText 20011] call AlysiaClient_fnc_isNumber)) then {_error = true};

	_time = parseNumber(ctrlText 20010);
	_bails = parseNumber(ctrlText 20011);

	if ((_time < _timeMin) || (_time > _timeMax)) then {_error = true};
	if ((_bailEnable isEqualTo 1) && ((_bails < _bailMin) || (_bails > _bailMax))) then {_error = true};

	if (_error) then
	{
		[
			format
			[
				"Temps minimum: %1<br/>Temps maximum: %2<br/>Caution: %3<br/>Caution minimum: %4<br/>Caution maximum: %5",
				_timeMin,
				_timeMax,
				if (_bailEnable isEqualTo 1) then {"Autorisée"} else {"Prohibée"},
				if (_bailEnable isEqualTo 1) then {_bailMin} else {"-"},
				if (_bailEnable isEqualTo 1) then {_bailMax} else {"-"}
			]
		] call AlysiaClient_fnc_error;
	} else {
		[(vehicleVarName _prison), [lbData[20006, (lbCurSel 20006)], _time, (parseNumber (ctrlText 20011)), (ctrlText 20012)]] remoteExec ["AlysiaClient_fnc_prisonPutInJail", g_interaction_target];
		closeDialog 0;
	};
};
