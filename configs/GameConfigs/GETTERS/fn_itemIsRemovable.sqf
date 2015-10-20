/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {false};
if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item)) then
{
	if (getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable") isEqualTo 0) then {
		false;
	} else {
		true;
	};
} else {
	diag_log format["[ALYSIA:ERROR] Item [%1] not defined", _item];
	false;	
};