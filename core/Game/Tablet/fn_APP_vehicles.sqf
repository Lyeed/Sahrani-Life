/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_markers"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

if ("VEHICLES" in g_apps) then
{
	if ("ItemGPS" in (assignedItems player)) then {
		[7702, true] call public_fnc_tabletShow;
	} else {
		[7700, true] call public_fnc_tabletShow;
	};
	[7701, true] call public_fnc_tabletShow;
};

_list = _display displayCtrl 7705;
_markers = [];

lbClear _list;

{
	if (alive _x) then
	{
		_marker = format["vehicles_tablet_%1", _forEachIndex];
		createMarkerLocal [_marker, (getPos _x)];
		_marker setMarkerShapeLocal "ICON";
		_marker setMarkerTypeLocal "c_car";
		_marker setMarkerColorLocal "ColorRed";
		_marker setMarkerTextLocal (getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName"));
		
		_index = _list lbAdd getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName");
		_list lbSetPicture [_index, getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "picture")];
		_list lbSetValue [_index, _forEachIndex];

		_markers pushBack _marker;
	};
} forEach (g_vehicles);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucun";
};

_list lbSetCurSel 0;

{
	if (!(_x in gServer_dynamic_markers)) then {
		_x setMarkerAlphaLocal 0;
	};
} forEach (allMapMarkers);

waitUntil {(g_app != "APP_VEHICLES")};

{
	deleteMarkerLocal _x;
} forEach (_markers);

{
	if (!(_x in gServer_dynamic_markers)) then {
		_x setMarkerAlphaLocal 1;
	};
} forEach (allMapMarkers);