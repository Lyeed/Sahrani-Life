/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 9400;
lbClear _list;

{
	if (typeOf(_x) isEqualTo "Land_FuelStation_Feed_F") then
	{
		_index = _list lbAdd format["Station service - %1", (mapGridPosition _x)];
		_list lbSetData [_index, str([typeOf(_x), (getPos _x)])];
	};
} forEach (allMissionObjects "All");

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
} else {
	[9402, true] call AlysiaClient_fnc_tabletShow;
	[9403, true] call AlysiaClient_fnc_tabletShow;
	[9404, true] call AlysiaClient_fnc_tabletShow;
	[9405, true] call AlysiaClient_fnc_tabletShow;
	[9406, true] call AlysiaClient_fnc_tabletShow;
	[9407, true] call AlysiaClient_fnc_tabletShow;
	[9408, true] call AlysiaClient_fnc_tabletShow;
	[9411, true] call AlysiaClient_fnc_tabletShow;
};

_list lbSetCurSel 0;

[] call AlysiaClient_fnc_hideAllMarkers;

waitUntil {(g_app != "FUEL")};

[] call AlysiaClient_fnc_showAllMarkers;
