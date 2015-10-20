/*
	File: fn_chopShopMenu.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_nearVehicles", "_control", "_percentage"];

if (life_action_inUse) exitWith { [(localize "STR_NOTF_ActionInProc")] call ALYSIA_fnc_error; };
if (life_coma) exitWith { ["Vous êtes dans le coma"] call ALYSIA_fnc_error; };
if (playerSide in [west, east]) exitWith {};

disableSerialization;
_nearVehicles = nearestObjects [getMarkerPos (_this select 3), ["Car", "Truck", "Ship", "Air"], 25];
{
	private["_dbInfo"];
	_dbInfo = _x getVariable["dbInfo", []];
	if ((count _dbInfo) > 0) then {
		if ((_dbInfo select 0) == (getPlayerUID player)) then {
			_nearVehicles deleteAt _forEachIndex;
		};
	};
	if (_x getVariable["dbInfo", []])
} forEach (_nearVehicles);
if (count _nearVehicles == 0) exitWith { [(localize "STR_Shop_NoVehNear")] call ALYSIA_fnc_error; };
if (!(createDialog "Chop_Shop")) exitWith { [(localize "STR_Shop_ChopShopError")] call ALYSIA_fnc_error; };

_percentage = getNumber(missionConfigFile >> "ALYSIA_VEHICLES_INFO" >> "steal_percentage");
_control = ((findDisplay 39400) displayCtrl 39402);
{
	if (alive _x) then {
		_className = typeOf _x;
		_ind = [_className] call ALYSIA_fnc_getVehBuyPrice;		
		if (_ind != -1 && count crew _x == 0) then 
		{
			_price = round(_ind * _percentage);
			_control lbAdd (getText(configFile >> "CfgVehicles" >> _className >> "displayName"));
			_control lbSetData [(lbSize _control) - 1, str(_forEachIndex)];
			_control lbSetPicture [(lbSize _control) - 1, (getText(configFile >> "CfgVehicles" >> _className >> "picture"))];
			_control lbSetValue [(lbSize _control) - 1, _price];
		};
	};
} forEach (_nearVehicles);
life_chopShop = (_this select 3);