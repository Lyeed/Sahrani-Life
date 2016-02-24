/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_data", "_station", "_distance", "_ctrl_fuels"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};
if ((_list lbText _sel) isEqualTo "Aucune") exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_data = _list lbData _sel;
if (_data isEqualTo "") exitWith {};

_data = call compile _data;
_station = (nearestObjects [_data select 1, [_data select 0], 15]) select 0;

_ctrl_fuels = _display displayCtrl 9405;
lbClear _ctrl_fuels;

{
	_index = _ctrl_fuels lbAdd getText(_x >> "name");
	_ctrl_fuels lbSetPicture [_index, getText(_x >> "picture")];
	_ctrl_fuels lbSetData [_index, configName _x];
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_FUEL"));
if ((lbSize _ctrl_fuels) isEqualTo 0) then {
	_ctrl_fuels lbAdd "Aucune";
};

_ctrl_fuels lbSetCurSel 0;

if ("ItemGPS" in (assignedItems player)) then
{
	_marker = createMarkerLocal [format["station_tablet_%1", _sel], (getPos _station)];
	_marker setMarkerShapeLocal "ICON";
	_marker setMarkerTypeLocal "Fett_maptools";
	_marker setMarkerColorLocal "ColorGreen";
	_marker setMarkerTextLocal "Station service";

	_ctrl_map = _display displayCtrl 9409;
	_ctrl_map ctrlMapAnimAdd [0, 0.09, _station];
	ctrlMapAnimCommit _ctrl_map;

	_distance = round(player distance _station);
	(_display displayCtrl 9408) ctrlSetStructuredText parseText format
	[
		"<t align='center'>%1 mètre%2</t>",
		_distance,
		if (_distance > 1) then {"s"} else {""}
	];

	[9409, true] call AlysiaClient_fnc_tabletShow;
	[9410, false] call AlysiaClient_fnc_tabletShow;

	waitUntil {((isNull _display) || (g_app != "FUEL") || ((lbCurSel _list) != _sel))};

	deleteMarkerLocal _marker;
} else {
	(_display displayCtrl 9408) ctrlSetStructuredText parseText "<t align='center'>Inconnu</t>";
	[9410, true] call AlysiaClient_fnc_tabletShow;
	[9409, false] call AlysiaClient_fnc_tabletShow;
};
