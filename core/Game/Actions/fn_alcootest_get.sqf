/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

[g_alcool] remoteExec ["AlysiaClient_fnc_alcootest_return", _from];
