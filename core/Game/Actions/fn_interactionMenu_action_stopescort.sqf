/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["escorting", false])) exitWith {
	["Personne n'escorte la cible"] call public_fnc_error;
};

g_interaction_target setVariable["escorting", false, true];
detach g_interaction_target;
closeDialog 0;