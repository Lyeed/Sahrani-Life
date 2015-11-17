/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_item", ObjNull, [ObjNull]]
]) exitWith {systemChat format ["< Robbery System - Debug > robberyTools - _item non reçu"]};

systemChat format ["< Robbery System - Debug > robberyTools - OK"];

if ((typeOf _item) isEqualTo "Bank_Bomb") then
{
	[_item, "bankPlanted"] call CBA_fnc_globalSay3d;
};

private ["_time"];
_time = (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "time"));

while {(_time > 0)} do
{
	if (_time > 5) then {[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "sound"))] call CBA_fnc_globalSay3d} else {[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "finalSound"))] call CBA_fnc_globalSay3d};

	_time = (_time - 1);

	sleep 1;
};

if ((typeOf _item) isEqualTo "Bank_Drill") then
{
	if (round(random 2) isEqualTo 1) then
	{
		_bank setVariable [(typeOf _item), ObjNull, true];
		"M_PG_AT" createVehicle (getPosATL _item);
		deleteVehicle _item;

		(_item getVariable ["bank", ObjNull]) animate ["Door_5", 1];
	};
}
else
{
	_bank setVariable [(typeOf _item), ObjNull, true];
	"M_PG_AT" createVehicle (getPosATL _item);
	deleteVehicle _item;
	
	(_item getVariable ["bank", ObjNull]) animate ["Vault_Door", 1];
};