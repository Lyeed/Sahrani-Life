/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_crew"];

if (isNull g_interaction_target) exitWith {};
if ((speed g_interaction_target) > 0) exitWith
{
	["Le véhicule doit être à l'arrêt"] call public_fnc_error;
};

_crew = crew g_interaction_target;
if (_crew isEqualTo []) exitWith
{
	["Le véhicule est vide"] call public_fnc_error;
};

{
	if ((_x getVariable["restrained", false]) || !(alive _x)) then
	{
		_x action ["Eject", (vehicle _x)];
	};
} forEach (_crew);