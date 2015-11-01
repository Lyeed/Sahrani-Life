/*
ArmA 3 N'Ziwasogo Life RPG - ALYSIA
Code written by Devilz80
@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_bank", ObjNull, [ObjNull]],
	["_door", "", [""]]
]) exitWith {};

private ["_item"];

if (!(isNull _door)) then 
{
	player removeItems (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item"));
	_item = ((getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")) createVehicle [0,0,0]);
	_item attachTo [_bank, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "pos"))];
	_item setVariable ["bank", _bank, true];
	_item setVariable ["owner", player, true];
}
else
{
	// Defuse ou Reactivate
};
