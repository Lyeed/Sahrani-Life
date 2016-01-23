/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_from","_infos","_cell","_time","_bail","_change"];
_from = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_infos = [_this, 1, [], [[]]] call BIS_fnc_param;
_cell = _infos select 0;
_time = _infos select 1;
_bail = _infos select 2;
_reason = _infos select 3;

if (isNull _from) exitWith {};
if (isNil _infos) exitWith {};

if (!(player getVariable ["arrested", false])) exitWith {["Cette personne n'est plus en prison"] remoteExecCall ["call public_fnc_error", _from];

g_arrest_Cellule = _cell;
g_arrest_Time = (_time * 60);
g_arrest_Bail = _bail;
g_arrest_Cellule = _cell;
g_arrest_Reason = _reason;

["Votre peine a été modifiée.<br/>Temps: %1<br/>Caution: %2<br/>", g_arrest_Time, g_arrest_Bail] call public_fnc_info;
["Modifications effectuées.<br/>Temps: %1<br/>Caution: %2<br/>", g_arrest_Time, g_arrest_Bail] remoteExecCall ["call public_fnc_info", _from];