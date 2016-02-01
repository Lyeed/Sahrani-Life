/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_sound"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};
if ([false, _item, 1] call public_fnc_handleInv) then 
{
	if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food")) then
	{
		_sound = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food" >> "sound");
		if (_sound != "") then {
			[player, _sound, 10] call CBA_fnc_globalSay3d;
		};
		[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food" >> "thirst")] call public_fnc_handleThirst;
		[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food" >> "hunger")] call public_fnc_handleHunger;
		[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food" >> "alcool")] call public_fnc_handleAlcool;
	};
};
