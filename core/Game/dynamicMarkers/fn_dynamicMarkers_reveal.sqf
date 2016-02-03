/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker", "_index"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _marker >> "shown")) exitWith {};

_index = [_marker, g_dynamic_markers_discovered] call AlysiaClient_fnc_index;
if (_index isEqualTo -1) then {
	g_dynamic_markers_discovered pushBack [_marker, getMarkerPos _marker];
} else {
	(g_dynamic_markers_discovered select _index) set [1, getMarkerPos _marker];
};

if ((markerAlpha _marker) isEqualTo 0) then {
	_marker setMarkerAlphaLocal 1;
};
