/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_pos", "_ret"];
_pos = [_this, 0, [], [[]]] call BIS_fnc_param;

_ret = "";
{
	if ((_pos distance (getMarkerPos _x)) < 12) exitWith {
		_ret = _x;
	};
} forEach (["fourriere_NORTH", "fourriere_SOUTH"]);
_ret;