/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_obj"];
_obj = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};

_obj say3D "light_bug";
[_obj, false] call AlysiaClient_fnc_lightOn;
sleep  0.3;
[_obj, true] call AlysiaClient_fnc_lightOn;
sleep  0.3;
[_obj, false] call AlysiaClient_fnc_lightOn;
sleep  0.6;
[_obj, true] call AlysiaClient_fnc_lightOn;
