/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (alive _target) exitWith {
	["La tortue doit être morte pour pouvoir être ramassée"] call public_fnc_error;
};

if (([true, "turtle", 1] call public_fnc_handleInv)) then {
	deleteVehicle _target;
} else {
	["Vous n'avez pas assez de place"] call public_fnc_error;
};
