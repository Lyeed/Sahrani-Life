/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_station", "_type", "_bill", "_display", "_fuelmax", "_liters", "_currentLiters", "_fill", "_maxDistance", "_distanceBegin", "_progressLiters"];
_veh = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_station = [_this, 1, ObjNull, [ObjNull]] call BIS_fnc_param;

closeDialog 0;

_type = player getVariable ["typeRefuel", ""];
if ((isNull _station) || (isNull _veh)) exitWith {["Plein impossible.<br/>Cible invalide"] call AlysiaClient_fnc_error};
if (_type isEqualTo "") exitWith {["Plein impossible.<br/>Impossible de trouver l'essence que vous avez selectionné."] call AlysiaClient_fnc_error};
if ((fuel _veh) isEqualTo 1) exitWith {["Plein impossible.<br/>Le réservoir du véhicule est déjà plein."] call AlysiaClient_fnc_error};
if (isEngineOn _veh) exitWith {["Plein impossible.<br/>Le véhicule doit avoir le moteur éteint pour effectuer un plein."] call AlysiaClient_fnc_error};
if (((locked _veh) isEqualTo 2)) exitWith {["Plein impossible.<br/>Le véhicule doit être ouvert pour effectuer un plein."] call AlysiaClient_fnc_error};
if (_veh getVariable ["refueling", false]) exitWith {["Plein impossible.<br/>Une autre personne effectue actuellement le plein du véhicule."] call AlysiaClient_fnc_error};

_maxDistance = getNumber(missionConfigFile >> "ALYSIA_FUEL_STATION" >> typeOf(_station) >> "max_distance_allowed");
if ((player distance _station) > _maxDistance) exitWith {
	["Plein impossible.<br/>Vous êtes trop loin de la station."] call AlysiaClient_fnc_error;
};

_currentLiters = [_station, _type] call AlysiaClient_fnc_fuelStation_fuel_getStock;
if (_currentLiters < 1) exitWith
{
	[
		format
		[
			"Cette station ne possède pas assez de <t color='#3ADF00'>%1</t> pour commencer un plein.<br/>Il faut au minimum 1 litre et il en reste <t color='#FF8000'>%2</t>.",
			getText(missionConfigFile >> "ALYSIA_FUEL" >> _type >> "name"),
			_currentLiters
		]
	] call AlysiaClient_fnc_error;
};

if (_station getVariable ["fuel_inUse", false]) exitWith {["Plein impossible.<br/>Quelqu'un est déjà en train d'utiliser la pompe."] call AlysiaClient_fnc_error};
_station setVariable ["fuel_inUse", true, true];

if (!(createDialog "RscDisplayFuelRefuel")) exitWith {};

disableSerialization;
_display = findDisplay 17000;
if (isNull _display) exitWith {};

(_display displayCtrl 17006) ctrlSetStructuredText parseText getText(missionConfigFile >> "ALYSIA_FUEL" >> _type >> "name");
_veh setVariable ["refueling", true, true];

_bill = 0;
_liters = 0;
_fuelmax = getNumber(configFile >> "CfgVehicles" >> (typeOf _veh) >> "fuelCapacity");
_fill = false;
_distanceBegin = (player distance _veh) + 2;

if (_veh isKindOf "Air") then {
	_progressLiters = 20;
} else {
	_progressLiters = 1;
};

while {true} do
{
	if (_bill > g_atm) exitWith {
		["Plein interrompu.<br/>Vous n'avez pas assez d'argent sur votre compte pour payer le plein d'un jerrycan."] call AlysiaClient_fnc_error;
	};
	if ((player distance _station) > _maxDistance) exitWith {
		["Plein interrompu.<br/>Vous êtes trop loin de la station."] call AlysiaClient_fnc_error;
	};
	if ((player distance _veh) > _distanceBegin) exitWith {
		["Plein interrompu.<br/>Vous êtes trop loin du véhicule."] call AlysiaClient_fnc_error;
	};
	if ((locked _veh) isEqualTo 2) exitWith {
		["Plein interrompu.<br/>Le véhicule doit rester dévérrouillé pendant le plein."] call AlysiaClient_fnc_error;
	};
	if (isEngineOn _veh) exitWith {
		["Plein interrompu.<br/>Le véhicule doit garder le moteur éteint pendant le plein."] call AlysiaClient_fnc_error;
	};

	if (((fuel _veh) + (_liters / _fuelmax)) >= 1) exitWith {_fill = true};
	if ((_currentLiters - _liters) <= 0) exitWith {_fill = true};
	if ((isNull _display) && (_liters > 0)) exitWith {_fill = true};

	if (isNull _display) exitWith {
		["Plein interrompu.<br/>Fenêtre d'intéraction fermée."] call AlysiaClient_fnc_error;
	};

	_liters = _liters + _progressLiters;
	_station setVariable [_type, (_currentLiters - _liters)];
	_bill = _bill + (([_station, _type] call AlysiaClient_fnc_fuelStation_fuel_getPrice) * _progressLiters);
	
	(_display displayCtrl 17008) ctrlSetStructuredText parseText format
	[
		"<t size='2' align='center'>%1</t>",
		[_bill] call AlysiaClient_fnc_numberText
	];
	
	(_display displayCtrl 17010) ctrlSetStructuredText parseText format
	[
		"<t align='right'>%1L</t>",
		(_currentLiters - _liters)
	];

	(_display displayCtrl 17013) progressSetPosition ((fuel _veh) + (_liters / _fuelmax));
	
	(_display displayCtrl 17014) ctrlSetStructuredText parseText format
	[
		"<t size='1.5' align='center>%1/%2 Litres</t>",
		((fuel _veh) * _fuelmax) + _liters,
		_fuelmax
	];

	uiSleep 0.5;
};

if (dialog) then {closeDialog 0};
if (_fill) then
{
	_station setVariable [_type, (_currentLiters - _liters), true];
	[true, _veh, _liters, _type] call AlysiaClient_fnc_handleFuel;
	[false, _bill, "Station Essence"] call AlysiaClient_fnc_handleATM;
	[format["<t color='#8cff9b'>%1</t>kn ont été prélevés de votre compte en banque.", ([_bill] call AlysiaClient_fnc_numberText)], "buy"] call AlysiaClient_fnc_info;
	[_station] call AlysiaClient_fnc_fuelStation_fuel_applyPrice;
} else {
	_station setVariable [_type, _currentLiters];
};

_veh setVariable ["refueling", false, true];
player setVariable ["typeRefuel", ""];
missionNamespace setVariable ["refuel_station_inUse", objNull];
_station setVariable ["fuel_inUse", false, true];
