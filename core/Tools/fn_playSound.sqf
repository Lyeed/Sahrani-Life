/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_source", "_sound"];
_source = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_sound = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _source) || (_sound isEqualTo "") || isDedicated) exitWith {};

_source say3D _sound;
