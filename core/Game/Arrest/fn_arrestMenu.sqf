/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit"];
_unit = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (!(playerSide in [east, west])) exitWith {};
if ((isNull _unit) || (!isPlayer _unit)) exitWith { ["Cible invalide"] call ALYSIA_fnc_error; };
if ((side _unit) == (side player)) exitWith { ["Vous ne pouvez pas mettre quelqu'un de votre faction en prison"] call ALYSIA_fnc_error; };
if (_unit getVariable["arrested", false]) exitWith { ["Cette personne est déjà en emprisonée"] call ALYSIA_fnc_error; };
if (!(_unit getVariable["restrained", false])) exitWith { ["La cible doit être menottée"] call ALYSIA_fnc_error; };
if (player distance _unit > 20) exitWith { ["Vous êtes trop loin"] call ALYSIA_fnc_error; };

createdialog "ALYSIA_arrest";
life_cop_arrestTarget = _unit;
