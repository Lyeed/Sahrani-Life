/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if (!g_connected) exitWith {};

if ((markerAlpha _marker) isEqualTo 1) then
{
	if (!(str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _marker >> "shown"))) then
	{
		_marker setMarkerAlphaLocal 0;
		[format["Le marqueur <t color='#74DF00'>%1</t> n'est plus d'actualité", (markerText _marker)]] call public_fnc_info;
	};
};
