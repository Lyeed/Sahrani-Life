/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (g_interaction_target getVariable ["escorting", false]) exitWith {
	["Quelqu'un escorte déjà la cible"] call public_fnc_error;
};
if (!(g_interaction_target getVariable ["restrained", false])) exitWith {
	["La cible doit être menotté"] call public_fnc_error;
};

closeDialog 0;
g_interaction_target attachTo [player, [0.1, 1.1, 0]];
g_interaction_target setVariable["escorting", true, true];
