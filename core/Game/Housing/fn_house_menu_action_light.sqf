/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (isNull (g_interaction_target getVariable ["lightSource", ObjNull])) then 
{
	["<t align='center'>Lumières<br/><t color='#FF8000'>ON</t></t>"] call public_fnc_info;
	[g_interaction_target, true] remoteExecCall ["public_fnc_house_menu_action_light_update", -2];
} else {
	["<t align='center'>Lumières<br/><t color='#FF8000'>OFF</t></t>"] call public_fnc_info;
	[g_interaction_target, false] remoteExecCall ["public_fnc_house_menu_action_light_update", -2];
};