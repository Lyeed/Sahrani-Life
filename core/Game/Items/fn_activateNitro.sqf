/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle"];
_vehicle = [_this, 0, Objnull, [Objnull]] call BIS_fnc_param;

if (!(_vehicle isKindOf "Car") || (_vehicle == player) || ((driver _vehicle) != player)) exitWith {};
if ((_vehicle getVariable ["nitro", 0]) < 1) exitWith {};
if ((speed _vehicle) <= 10) exitWith {["Vous devez rouler à plus de 10km/h pour activer la Nitro"] call ALYSIA_fnc_error;};
_vehicle setVariable["nitro", ((_vehicle getVariable["nitro",0]) - 1), true];
titleText["* Nitro activé *", "PLAIN DOWN"];
_vel = velocity _vehicle;
_dir = direction _vehicle;
_vehicle setVelocity [(_vel select 0)+(sin _dir * 20),(_vel select 1)+ (cos _dir * 20),(_vel select 2)];