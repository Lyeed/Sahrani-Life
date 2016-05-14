/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sideFrom", "_item"];
_sideFrom = [_this, 0, sideUnknown, [sideUnknown]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;

if (_sideFrom isEqualTo sideUnknown) exitWith {};

deleteMarkerLocal "laboratory";

[format
	[
		"Votre <t color='#FF8000'>%1</t> a été détruit par la faction <t color='#01DF3A'>%2</t>.",
		[_item] call AlysiaClient_fnc_itemGetName,
		[_sideFrom] call AlysiaClient_fnc_sideToStr
	]
] call AlysiaClient_fnc_info;
