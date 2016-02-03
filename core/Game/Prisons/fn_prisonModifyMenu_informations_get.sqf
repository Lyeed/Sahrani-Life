/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["arrested", false])) exitWith {["Cette personne n'est plus en prison"] call AlysiaClient_fnc_error};

[player] remoteExecCall ["AlysiaClient_fnc_prisonModifyMenu_informations_return", g_interaction_target];