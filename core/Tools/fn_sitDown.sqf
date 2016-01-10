/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_chair", "_math", "_players"];
_chair = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _chair) exitWith {};
if (player getVariable ["sit", false]) exitWith {};

_players = false;
{
	if (isPlayer _x) exitWith {
		_players = true;
	};
} forEach (_chair nearEntities 1);
if (_players) exitWith {
	["Quelqu'un est déjà assis ici"] call public_fnc_error;
};

_math = switch (typeOf(_chair)) do
{
	case "xcam_Bench_01_F": {-0.90};
	default {0};
};

[player, "Crew"] remoteExecCall ["switchMove", -2];
player setPosATL [(getPosATL _chair) select 0, (getPosATL _chair) select 1, ((getPosATL _chair) select 2) + _math];
player setDir ((getDir _chair) + 180);
player setVariable ["sit", true];
