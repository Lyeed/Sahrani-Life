/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_obj", objNull, [objNull]]
]) exitWith {};

if (isNull _obj) exitWith {};

_obj say3D "light_bug";
[_obj, false] call public_fnc_lightOn;
sleep  0.3;
[_obj, true] call public_fnc_lightOn;
sleep  0.3;
[_obj, false] call public_fnc_lightOn;
sleep  0.6;
[_obj, true] call public_fnc_lightOn;
