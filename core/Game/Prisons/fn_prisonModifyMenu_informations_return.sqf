/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_from"];
_from = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
  
if (isNull _from) exitWith {};
if (player getVariable ["arrested", false]) then
{
	[
		(_from getVariable ["realname", ""]),
		g_sexe,
		player call AlysiaClient_fnc_age,
		g_nationality,
		g_arrest_Cellule,
		g_arrest_Time,
		g_arrest_Caution,
		g_arrest_Reason
	] remoteExecCall ["AlysiaClient_fnc_prisonModifyMenu_open", _from];
} else {
	["Cette personne n'est plus en prison"] remoteExecCall ["AlysiaClient_fnc_info", _from];
};
