/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_target", "_count"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt."] call AlysiaClient_fnc_error;
};

_count = 0;

{
	if ((_x getVariable["restrained", false]) || !(alive _x) || (_x getVariable ["is_coma", false])) then
	{
		_x action ["Eject", (vehicle _x)];
		_count = _count + 1;
	};
} forEach _crew;

if (_count isEqualTo 0) then {
	["Il n'y a personne de menotté ou dans le coma dans le véhicule."] call AlysiaClient_fnc_error;
} else {
	["Vous avez sorti %1 personne%2 du véhicule.", _crew, if (_crew > 1) then {"s"} else {""}] call AlysiaClient_fnc_error;
};
