/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_weapon"];
_weapon = [_this, 3, "", [""]] call BIS_fnc_param;

if (g_action_inUse || (g_paint_list_actions isEqualTo []) || (g_paint_weapon isEqualTo "")) exitWith {};

g_action_inUse = true;

{
	player removeAction _x;
} forEach (g_paint_list_actions);

if ((currentWeapon player) != g_paint_weapon) exitWith {
	["Vous devez garder l'arme dans les mains pendant l'application"] call public_fnc_error; 
};

[[player, "paint"], "public_fnc_playSound", nil] spawn life_fnc_MP;
["Application de la bombe de peinture", 6] call public_fnc_showProgress;

if ((currentWeapon player) != g_paint_weapon) exitWith {
	["Vous devez garder l'arme dans les mains pendant l'application"] call public_fnc_error; 
};

player removeWeapon g_paint_weapon;
[_weapon, true] call public_fnc_handleItem;

g_paint_list_actions = [];
g_paint_weapon = "";

["Peinture effectuée"] call public_fnc_info;
g_action_inUse = false;