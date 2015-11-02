/*
ArmA 3 N'Ziwasogo Life RPG - ALYSIA
Code written by Devilz80
@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_item", ObjNull, [ObjNull]],
]) exitWith {};

private ["_time"];

_time = (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "time"));

if ((typeOf _item) isEqualTo "Bank_Bomb") then
{
	[_item, "bankPlanted"] call CBA_fnc_globalSay3d;	
};

while ((getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "time"))) do
{
	if ((!_time <= 5)) then {[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "sound"))] call CBA_fnc_globalSay3d} else {[_item, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "finalSound"))] call CBA_fnc_globalSay3d};

	_time = (_time - 1);
};

if ((typeOf _item) isEqualTo "Bank_Drill") then
{
	_explose = round(random 2);
	if (_explose isEqualTo "1") then {_explosion = "Bo_GBU12_LGB_MI10" createVehicle [(getPosATL _item)]} else {player addItem (typeOf _item)};
}
else
{
	_explosion = "Bo_GBU12_LGB_MI10" createVehicle [(getPosATL _item)];
};

_bank setVariable [(typeOf _item), ObjNull, true];
deleteVehicle _item;