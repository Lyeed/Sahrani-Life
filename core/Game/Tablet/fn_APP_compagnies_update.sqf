/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_data", "_object", "_config", "_info"];

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
_object = (nearestObjects [_data select 1, [_data select 0], 15]) select 0;
_info = _object getVariable "company_info";
_config = missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2);

(_display displayCtrl 13005) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_info select 0)];

(_display displayCtrl 13006) ctrlSetStructuredText parseText format
[
		"<t align='center'>"
	+	"Type<br/>"
	+	"%1<br/><br/>"
	+	"PDG<br/>"
	+	"%2"
	+	"Position GPS<br/>"
	+	"%3",
	getText(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "name"),
	(_info select 4),
	mapGridPosition _object
];

if (("ItemGPS" in (assignedItems player)) && isClass(_config >> "marker")) then
{
	_marker = createmarker ["COMPANY_TABLET_APP", (getPos _object)];
 	_marker setMarkerShape getText(_config >> "marker" >> "shape");
	_marker setMarkerType getText(_config >> "marker" >> "type");
	_marker setMarkerColor getText(_config >> "marker" >> "color");
	_marker setMarkerSize [getNumber(_config >> "marker" >> "size"), getNumber(_config >> "marker" >> "size")];
	_marker setMarkerText (_info select 0);

	_ctrl_map = _display displayCtrl 13004;
	_ctrl_map ctrlMapAnimAdd [0, 0.09, _object];
	ctrlMapAnimCommit _ctrl_map;

	[13004, true] call AlysiaClient_fnc_tabletShow;
	[13002, false] call AlysiaClient_fnc_tabletShow;

	waitUntil {((isNull _display) || (g_app != "COMPAGNIES") || ((lbCurSel _list) != _sel))};

	deleteMarkerLocal _marker;
} else {
	[13002, true] call AlysiaClient_fnc_tabletShow;
	[13004, false] call AlysiaClient_fnc_tabletShow;
};
