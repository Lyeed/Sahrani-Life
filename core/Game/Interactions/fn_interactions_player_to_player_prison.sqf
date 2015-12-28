/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!(g_interaction_target getVariable ["arrested", false])) exitWith {closeDialog 0};
[
	([_this, 0, objNull, [objNull]] call BIS_fnc_param),
	"player_to_player_prison",
	[
		["arrest", "Durée", "[] spawn public_fnc_prisonArrestMenu_use_time;", "(g_interaction_target getVariable ['arrested', false])"],
		["arrest", "Caution", "[] spawn public_fnc_prisonArrestMenu_use_caution;", "(((getText(missionConfigFile >> 'ALYSIA_PRISONS' >> [player] call public_fnc_prisonNearest >> 'bail' >> 'enable')) && (g_interaction_target getVariable ['arrested', false])))"],
		["arrest", "Relâcher", "[] spawn public_fnc_prisonArrestMenu_use_release;", "(g_interaction_target getVariable ['arrested', false])"]
	],
	"Gestion de Peine"
] spawn public_fnc_interactions_create;