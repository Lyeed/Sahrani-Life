/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_station","_veh", "_typeRefuel", "_bill", "_display", "_fuelmax", "_currentfuel", "_fuel"];
_veh = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_station = [_this, 1, ObjNull, [ObjNull]] call BIS_fnc_param;

if ((isNull _station) || (isNull _station)) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_typeRefuel = player getVariable ["typeRefuel", ""];
if (_typeRefuel isEqualTo "") exitWith {
	["Impossible de trouver l'essence que vous avez selectionné."] call public_fnc_error;
};
if (((locked _veh) isEqualTo 2)) exitWith {
	["Le véhicule doit être ouvert pour effectuer un plein."] call public_fnc_error;
};
if (isEngineOn _veh) exitWith {
	["Le véhicule doit avoir le moteur éteint pour effectuer un plein."] call public_fnc_error;
};
if ((fuel _veh) > 0.9) exitWith {
	["Le réservoir du véhicule est déjà plein."] call public_fnc_error;
};
if (!(_veh getVariable ["refueling", false])) exitWith {
	["Une autre personne effectue actuellement le plein du véhicule."] call public_fnc_error;
};
_currentfuel = _station getVariable [_typeRefuel, 250];
if (_currentfuel <= 1) exitWith {
	[format["Cette station ne possède plus l'essence que vous désirez (%1).", getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _typeRefuel >> "name")]] call public_fnc_error;
};
_veh setVariable ["refueling", true, true];

if (!(createDialog "RscDisplayFuelRefuel")) exitWith {};
disableSerialization;
_display = findDisplay 17000;

if (isNull _display) exitWith {};

_bill = 0;
_fuel = 0;
_fuelmax = getNumber(configFile >> "CfgVehicles" >> typeOf _veh >> "fuelCapacity");

while {(!(isNull _display) && (_currentfuel > 1) && (_bill <= g_atm)) && ((fuel _veh) != 1)} do
{
	_fuel = _fuel + 0.1;
	_currentfuel = _currentfuel - (_fuelmax / 100);
	_bill = _bill + ([_station, _typeRefuel] call public_fnc_fuelStation_price_buy);
	
	(_display displayCtrl 17006) ctrlSetStructuredText parseText _typeRefuel;
	(_display displayCtrl 17008) ctrlSetStructuredText parseText format ["<t size ='2' align='center'>%1</t>", [_bill] call public_fnc_numberText];
	(_display displayCtrl 17010) ctrlSetStructuredText parseText format ["<t align='right'>%1</t>", _currentfuel];
	(_display displayCtrl 17014) progressSetPosition (fuel _veh);
	(_display displayCtrl 17015) ctrlSetStructuredText parseText format ["%1/%2 Litres", ((fuel _veh) * _fuelmax), _fuelmax];

	sleep 0.5;
};

player setVariable ["typeRefuel", ""];
_veh setVariable ["refueling", false, true];
_station setVariable [_typeRefuel, _currentfuel, true];
[false, _bill, "Station Essence"] call public_fnc_handleATM;
[format["%1Kn ont été prélevés de votre compte en banque.", [_bill] call public_fnc_numberText]] call public_fnc_info;
if ((getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf (_veh) >> "fuel")) != _typeRefuel) then {
	_veh setVariable ["typeRefuel", _typeRefuel, true];
};
if (local _veh) then {
	_veh setFuel ((Fuel _veh) + _fuel);
} else {
	[_veh, (Fuel _veh) + _fuel] remoteExecCall ["setFuel", _veh, false];
};
