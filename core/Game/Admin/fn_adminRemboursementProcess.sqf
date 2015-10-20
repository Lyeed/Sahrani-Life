/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (isNil {life_adminTarget}) exitWith { ["Cible invalide"] call ALYSIa_fnc_error; };
if (isNull life_adminTarget) exitWith { ["La cible n'existe pas"] call ALYSIa_fnc_error; };
private["_val"];

_val = ctrlText 2952;
if (!([_val] call TON_fnc_isnumber)) exitWith { ["Nombre invalide"] call ALYSIa_fnc_error; };
closeDialog 0;

[[player, (parseNumber _val)], "ALYSIA_fnc_adminRemboursementGive", life_adminTarget, false] spawn life_fnc_MP;
