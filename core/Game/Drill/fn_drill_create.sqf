/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_pos", "_target"];
_pos = [_this, 0, [0,0,0], [[]]] call BIS_fnc_param;
_dir = [_this, 1, 0, [0]] call BIS_fnc_param;
_target = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (!("Bank_Drill" in (magazines player))) exitWith {
	["Vous n'avez pas de foreuse."] call AlysiaClient_fnc_error;
};

player removeItem "Bank_Drill";
_object = "Bank_Drill" createVehicle [0,0,0];
_object setPosATL _pos;
_object setVariable ["target", _target, true];
_object setVariable ["active", false, true];
