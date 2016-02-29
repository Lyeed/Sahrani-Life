/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_station", "_type", "_bill", "_display", "_fuelmax", "_liters", "_currentLiters"];
_veh = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_station = [_this, 1, ObjNull, [ObjNull]] call BIS_fnc_param;

if ((isNull _station) || (isNull _veh)) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (_veh getVariable ["refueling", false]) exitWith {
	["Une autre personne effectue actuellement le plein du véhicule."] call AlysiaClient_fnc_error;
};

_type = player getVariable ["typeRefuel", ""];
if (_type isEqualTo "") exitWith {
	["Impossible de trouver l'essence que vous avez selectionné."] call AlysiaClient_fnc_error;
};

if ((fuel _veh) isEqualTo 1) exitWith {
	["Le réservoir du véhicule est déjà plein."] call AlysiaClient_fnc_error;
};
if (isEngineOn _veh) exitWith {
	["Le véhicule doit avoir le moteur éteint pour effectuer un plein."] call AlysiaClient_fnc_error;
};
if (((locked _veh) isEqualTo 2)) exitWith {
	["Le véhicule doit être ouvert pour effectuer un plein."] call AlysiaClient_fnc_error;
};
if (player distance _station > 5) exitWith {
	["Vous êtes trop loin de la station."] call AlysiaClient_fnc_error;
};
if (player distance _veh > 5) exitWith {
	["Vous êtes trop loin du véhicule."] call AlysiaClient_fnc_error;
};

_currentLiters = _station getVariable [_type, getNumber(missionConfigFile >> "ALYSIA_FUEL_STATION" >> typeof(_station) >> _fuel >> "max")];
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

if (!(createDialog "RscDisplayFuelRefuel")) exitWith {};

disableSerialization;
_display = findDisplay 17000;
if (isNull _display) exitWith {};

_bill = 0;
_liters = 0;
_fuelmax = getNumber(configFile >> "CfgVehicles" >> (typeOf _veh) >> "fuelCapacity");
_veh setVariable ["refueling", true, true];

(_display displayCtrl 17006) ctrlSetStructuredText parseText getText(missionConfigFile >> "ALYSIA_FUEL" >> _type >> "name");

while {
		!(isNull _display) &&
		((_currentLiters - _liters) >= 1) &&
		(((fuel _veh) + (_liters / _fuelmax)) < 1) &&
		((_bill + ([_station, _type] call AlysiaClient_fnc_fuelStation_price)) <= g_atm) &&
		!(isEngineOn _veh) &&
		!((locked _veh) isEqualTo 2) &&
		((player distance _station) < 5) &&
		((player distance _veh) < 5)
	} do
{
	_bill = _bill + ([_station, _type] call AlysiaClient_fnc_fuelStation_price);
	_liters = _liters + 1;
	
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

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (_bill <= g_atm) then
{
	_station setVariable [_type, (_currentLiters - _liters), true];
	[true, _veh, _liters, _type] call AlysiaClient_fnc_handleFuel;	
	[false, _bill, "Station Essence"] call AlysiaClient_fnc_handleATM;
	[format["<t color='#8cff9b'>%1</t>kn ont été prélevés de votre compte en banque.", ([_bill] call AlysiaClient_fnc_numberText)], "buy"] call AlysiaClient_fnc_info;
} else {
	["Le transfert n'a pas pu aboutir.<br/>Vous n'avez pas assez d'argent sur votre compte pour payer le plein."] call AlysiaClient_fnc_error;
};

_veh setVariable ["refueling", false, true];
player setVariable ["typeRefuel", ""];
