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

sleep 3;

private ["_init","_time"];
_init = (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "time"));
_time = _init;

while {(_time > 0)} do
{
	[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "sound"))] call CBA_fnc_globalSay3d;
	if (_time <= 5) then {[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "finalSound"))] call CBA_fnc_globalSay3d};

	sleep (_time / _init);
	_time = (_time - 1);
};

if ((typeOf _item) isEqualTo "Bank_Drill") then
{
	(_item getVariable ["bank", ObjNull]) setVariable ["robbed", true, true];
	
	"M_PG_AT" createVehicle (getPosATL _item);
	deleteVehicle _item;

	(_item getVariable ["bank", ObjNull]) animate ["Door_5", 1];
}
else
{
	"M_PG_AT" createVehicle (getPosATL _item);
	deleteVehicle _item;
	
	(_item getVariable ["bank", ObjNull]) animate ["Vault_Door", 1];
};