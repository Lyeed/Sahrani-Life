/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_marker";
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if (!g_connected) exitWith {};

if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _marker >> "shown")) then
{
	_marker setMarkerAlphaLocal 1;
	[format["Le marqueur <t color='#74DF00'>%1</t> a changé de place.", (markerText _marker)]] call AlysiaClient_fnc_info;
} else {
	if ((markerAlpha _marker) != 0) then
	{
		_marker setMarkerAlphaLocal 0;
		_index = [_marker, g_dynamic_markers_discovered] call AlysiaClient_fnc_index;
		if (_index != -1) then
		{
			g_dynamic_markers_discovered deleteAt _index;
			[format["Le marqueur <t color='#74DF00'>%1</t> n'est plus d'actualité.", (markerText _marker)]] call AlysiaClient_fnc_info;
		};
	};
};
