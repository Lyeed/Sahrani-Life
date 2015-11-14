/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_bank", ObjNull, [ObjNull]]
]) exitWith {};

private ["_alarm"];
_alarm = "Intel_File1_F" createVehicle [0,0,0];
_alarm attachTo [_bank, [0, -2, 6.65]];

while {((bank_rob_N) || (bank_rob_S))} do
{
	[_alarm, "bankAlarm"] call CBA_fnc_globalSay3d;
	sleep 6;
};