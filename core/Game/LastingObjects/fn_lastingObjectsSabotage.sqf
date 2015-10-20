/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _object) || g_action_inUse) exitWith {};

if (!(["Sabotage", 15, true, "sabotlab", true, _labo] call public_fnc_showProgress)) exitWith {};

[
	format
	[
		"Vous avez saboté : %1",
		(getText(missionConfigFile >> "ALYSIA_ITEMS" >> (getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> typeOf(_object) >> "item")) >> "name"))
	]
] call public_fnc_info;

_labo setVariable["sabotage", true, true];
_labo setVariable["sabotageTime", time, true];