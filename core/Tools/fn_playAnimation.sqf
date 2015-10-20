/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_anim"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_anim = [_this, 1, "", [""]] call BIS_fnc_param;

_unit switchMove _anim;
// _unit playAction _anim;