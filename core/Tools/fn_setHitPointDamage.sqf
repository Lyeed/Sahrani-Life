/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_part", "_dmg"];
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_part = [_this, 1, "", [""]] call BIS_fnc_param;
_dmg = [_this, 2, 0, [0]] call BIS_fnc_param;

if ((isNull _veh) || (_part isEqualTo "")) exitWith {};

if (local _veh) then {
	_veh setHitPointDamage [_part, _dmg];
} else {
	[_veh, [_part, _dmg]] remoteExecCall ["setHitPointDamage", _veh];
};
