/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
		["_marker", "", [""]]
	]) exitWith {};

if (_marker isEqualTo "") exitWith {};

[format["La faction [%1] a détruit [%2]", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), markerText _marker]] remoteExecCall ["systemChat", -2];
[_marker] remoteExec ["TON_fnc_dynamicMarkers_update", 2];