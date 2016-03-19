/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_target setVariable ["house_tenants", [], true];
["<t color='#FF8000'>Serrures</t> changées."] call AlysiaClient_fnc_info;
[_target] remoteExecCall ["AlysiaClient_fnc_house_menu_action_keys_change_update", -2];
