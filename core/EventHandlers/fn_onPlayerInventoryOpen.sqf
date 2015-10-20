/*
	Author: Bryan "Tonic" Boardwine
*/
private["_container", "_unit"];

if (count _this == 1) exitWith {false};
_unit = _this select 0;
_container = _this select 1;

if (((getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack")) == 1) && (playerSide == civilian)) then {
	[(localize "STR_MISC_Backpack")] call public_fnc_error;
	[] spawn 
	{
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
};

if ((_container isKindOf "LandVehicle") OR (_container isKindOf "Ship") OR (_container isKindOf "Air")) exitWith {
	if (!(_container in life_vehicles) && {(locked _container) == 2}) exitWith {
		[(localize "STR_MISC_VehInventory")] call public_fnc_error;
		[] spawn 
		{
			waitUntil {!isNull (findDisplay 602)};
			closeDialog 0;
		};
	};
};
