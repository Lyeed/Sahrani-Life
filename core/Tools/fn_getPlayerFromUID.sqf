/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/		
private["_uid", "_ret"];
_uid = [_this, 0, "", [""]] call BIS_fnc_param;

if (_uid isEqualTo "") exitWith {objNull};
_ret = objNull;

{
	if ((getPlayerUID _x) isEqualTo _uid) exitWith {
		_ret = _x;
	};
} forEach allPlayers;
_ret;