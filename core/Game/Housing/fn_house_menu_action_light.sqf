/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

if (isNull (_target getVariable ["lightSource", ObjNull])) then 
{
	["<t align='center'>Lumières<br/><t color='#FF8000'>ON</t></t>"] call AlysiaClient_fnc_info;
	[_target, true] remoteExecCall ["AlysiaClient_fnc_house_menu_action_light_update", -2];
} else {
	["<t align='center'>Lumières<br/><t color='#FF8000'>OFF</t></t>"] call AlysiaClient_fnc_info;
	[_target, false] remoteExecCall ["AlysiaClient_fnc_house_menu_action_light_update", -2];
};
