/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (isNull (findDisplay 12000)) exitWith {};
if (g_interaction_target getVariable ["bomb_activate", false]) exitWith {};

g_interaction_target setVariable ["bomb_timer", (g_interaction_target getVariable ["bomb_timer", 0]), true];
g_interaction_target setVariable ["bomb_activate", true, true];
g_interaction_target setVariable ["bomb_explosion", floor(serverTime) + (g_interaction_target getVariable ["bomb_timer", 0]), true];
[g_interaction_target, g_interaction_target getVariable "bomb_timer"] remoteExec ["AlysiaServer_fnc_c4_bomb", 2];
