/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_target"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _from) || (isNull _target)) exitWith {};

["Vous avez <t color='#FF8000'>proposé</t> à la cible un examen médical."] call AlysiaClient_fnc_info;
[_from] remoteExec ["AlysiaClient_fnc_doctor_get", _target];
