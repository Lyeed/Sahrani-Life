/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_type", "", [""]]
]) exitWith {};

{
	_vehicle = nearestObject [player, "Car"];
};

if (isNull(_vehicle)) exitWith {};

if (_type isEqualTo "OWNER") then {
	if (_vehicle in g_vehicles) then {_vehicle} else {};
} else {
	_vehicle
};