/*
	File: fn_fetchVehInfo.sqf
	Author: Bryan "Tonic" Boardwine
	Edit: Lyeed
	
	Description:
	Used in returning information about a vehicle from Config >> "CfgVehicles"
	
	Return:
	0: classname
	1: scope
	2: picture
	3: displayname
	4: vehicleclass
	5: side
	6: faction
	7: Base / Superclass
	8: Max Speed
	9: Armor Rating
	10: Passenger Seats
	11: Max Horse power
	12: Fuel Capacity
*/

private["_class"];
_class = [_this, 0, "", [""]] call BIS_fnc_param;

if (_class isEqualTo "") exitWith {[]};
if (!isClass(configFile >> "CfgVehicles" >> _class)) exitWith {[]};

[
	_class,
	getNumber(configFile >> "CfgVehicles" >> _class >> "scope"),
	getText(configFile >> "CfgVehicles" >> _class >> "picture"),
	getText(configFile >> "CfgVehicles" >> _class >> "displayName"),
	getText(configFile >> "CfgVehicles" >> _class >> "vehicleClass"),
	getNumber(configFile >> "CfgVehicles" >> _class >> "side"),
	getText(configFile >> "CfgVehicles" >> _class >> "faction"),
	configName(inheritsFrom (configFile >> "CfgVehicles" >> _class)),
	getNumber(configFile >> "CfgVehicles" >> _class >> "maxSpeed"),
	getNumber(configFile >> "CfgVehicles" >> _class >> "armor"),
	getNumber(configFile >> "CfgVehicles" >> _class >> "transportSoldier"),
	getNumber(configFile >> "CfgVehicles" >> _class >> "enginePower"),
	getNumber(configFile >> "CfgVehicles" >> _class >> "fuelCapacity")
];
