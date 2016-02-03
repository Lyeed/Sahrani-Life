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

[
	_target,
	"player_to_dog",
	[
		["search", "Chercher", "closeDialog 0; [player, 'whistle', 30] call CBA_fnc_globalSay3d;", "((g_dog isEqualTo g_interaction_target) && (isNull (g_dog getVariable ['search', objNull])))"],
		["hire", "Renvoyer", "closeDialog 0; deleteVehicle g_dog; [player, 'whistle', 30] call CBA_fnc_globalSay3d;", "(g_dog isEqualTo g_interaction_target)"],
		["stop", "Stop", "closeDialog 0; g_dog setVariable ['follow', false]; [player, 'whistle', 30] call CBA_fnc_globalSay3d;", "((g_dog isEqualTo g_interaction_target) && (g_dog getVariable ['follow', false]))"],
		["follow", "Suis-moi", "closeDialog 0; g_dog setVariable ['follow', true]; [player, 'whistle', 30] call CBA_fnc_globalSay3d;", "((g_dog isEqualTo g_interaction_target) && !(g_dog getVariable ['follow', false]) && (isNull (g_dog getVariable ['search', objNull])))"]
	],
	"Chien",
	"lyeed_IMG\data\interactions\background.jpg",
	true,
	false,
	true
] spawn AlysiaClient_fnc_interactions_create;
