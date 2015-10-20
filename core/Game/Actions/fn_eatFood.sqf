/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item == "") exitWith {};
if ([false, _item, 1] call public_fnc_handleInv) then 
{
	if (isClass(missionConfigFile >> "ALYSIA_FOOD" >> _item)) then
	{
		[[player, getText(missionConfigFile >> "ALYSIA_FOOD" >> _item >> "sound")], "public_fnc_playSound", nil] spawn life_fnc_MP;
		[getNumber(missionConfigFile >> "ALYSIA_FOOD" >> _item >> "thirst")] call public_fnc_handleThirst;
		[getNumber(missionConfigFile >> "ALYSIA_FOOD" >> _item >> "hunger")] call public_fnc_handleHunger;
	};
};