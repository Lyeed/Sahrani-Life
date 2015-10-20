/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_vehicleGaragePosition", "_price", "_data"];

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call public_fnc_error;
};

_data = g_garage_vehicles select _index;
_vehicleGaragePosition = [_data select 7, _data select 8, _data select 9];
if (_vehicleGaragePosition isEqualTo [0,0,0]) exitWith {};

closeDialog 0;
waitUntil {!dialog};

{
	_x setMarkerAlphaLocal 0;
} count (allMapMarkers);

createMarkerLocal ["myCar", _vehicleGaragePosition];
"myCar" setMarkerShapeLocal "ICON";
"myCar" setMarkerTypeLocal "c_car";
"myCar" setMarkerColorLocal "ColorRed";
"myCar" setMarkerTextLocal (_data select 6);

forceMap true;
mapAnimAdd [0, 0.07, (getPos player)];
mapAnimCommit;
mapAnimAdd [5, 0.07, markerPos "Prefecture_1"];
mapAnimCommit;
waitUntil {mapAnimDone};
forceMap false;
	
deleteMarkerLocal "MyCar";
{
	_x setMarkerAlphaLocal 1;
} count (allMapMarkers);

[g_garage_vehicles] call public_fnc_garageOpen;