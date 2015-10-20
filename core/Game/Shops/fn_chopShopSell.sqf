/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine
*/
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];

if (life_action_inUse) exitWith {};
_control = ((findDisplay 39400) displayCtrl 39402);
_price = _control lbValue (lbCurSel _control);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop, ["Car","Truck", "Ship", "Air"], 25];
_vehicle = _nearVehicles select _vehicle;

closeDialog 0;
if (isNull _vehicle) exitWith { ["Véhicule introuvable"] call ALYSIA_fnc_error; };
if ((player distance _vehicle) > 30) exitWith { ["Vous êtes trop loin"] call ALYSIA_fnc_error; };

life_action_inUse = true;
[(localize "STR_Shop_ChopShopSelling")] call ALYSIA_fnc_info;
life_inv_illegal_money = life_inv_illegal_money + _price;
[[_vehicle], "TON_fnc_chopShopSell", false, false] spawn life_fnc_MP;
_displayName = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
[format[(localize "STR_NOTF_ChopSoldCar"), _displayName, [_price] call life_fnc_numberText]] call ALYSIA_fnc_info;
life_action_inUse = false;
