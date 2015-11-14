/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_vehicleGaragePosition", "_price", "_data", "_sel"];

_sel = lbCurSel 2802;
if (_sel isEqualTo -1) exitWith {};

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call public_fnc_error;
};

_data = g_garage_vehicles select _index;
_vehicleGaragePosition = [_data select 6, _data select 7, _data select 8];
if (_vehicleGaragePosition isEqualTo [0, 0, 0]) exitWith {};

closeDialog 0;
waitUntil {!dialog};

{
	if (!(_x in g_dynamic_markers)) then {
		_x setMarkerAlphaLocal 0;
	};
} forEach (allMapMarkers);

createMarkerLocal ["myCar", _vehicleGaragePosition];
"myCar" setMarkerShapeLocal "ICON";
"myCar" setMarkerTypeLocal "c_car";
"myCar" setMarkerColorLocal "ColorRed";
"myCar" setMarkerTextLocal (lbText[2802, _sel]);

forceMap true;
mapAnimAdd [0, 0.07, (getPos player)];
mapAnimCommit;
mapAnimAdd [5, 0.07, _vehicleGaragePosition];
mapAnimCommit;
waitUntil {mapAnimDone};
sleep 5;
forceMap false;
	
deleteMarkerLocal "MyCar";

{
	if (!(_x in g_dynamic_markers)) then {
		_x setMarkerAlphaLocal 1;
	};
} forEach (allMapMarkers);

[g_garage_vehicles] call public_fnc_garageOpen;