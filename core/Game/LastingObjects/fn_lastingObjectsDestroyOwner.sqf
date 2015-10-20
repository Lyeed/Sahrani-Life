/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_index"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};

_index = [_object, g_lastingObjects] call public_fnc_index;
if (_index != -1) then
{
	g_lastingObjects deleteAt _index;
	[
		format
		[
			"Votre <t color='#FF4000'>%1</t> a été <t color='#ff8c8c'>détruit</t>",
			(getText(missionConfigFile >> "ALYSIA_ITEMS" >> (getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> typeOf(_object) >> "item")) >> "name"))
		]
	] call public_fnc_info;
};