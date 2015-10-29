/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action"];

if (!params [
	["_marker", "", [""]]
]) exitWith {};

if (_marker isEqualTo "") exitWith {};
if ((player distance (getMarkerPos _marker)) < 20) then
{
	_action = 
	[
		format
		[
			"Vous êtes sur le point de bruler <t color='#74DF00'>%1</t><br/>",
			(markerText _marker)
		],
		"Validation",
		"Bruler",
		"Annuler"
	] call BIS_fnc_guiMessage;
	if (_action) then
	{
		if ((player distance (getMarkerPos _marker)) < 20) then
		{
			[format["<t align='center'>Vous avez brulé<br/><t color='#74DF00'>%1</t>", (markerText _marker)]] call public_fnc_info;
			(format["La faction [%1] a détruit [%2]", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), (markerText _marker)]) remoteExecCall ["systemChat", -2];
			[_marker] remoteExecCall ["public_fnc_dynamicMarkers_update", -2];
			[_marker] remoteExec ["TON_fnc_dynamicMarkers_update", 2];
		} else {
			["Vous n'êtes pas à porté"] call public_fnc_error;
		};
	};
};