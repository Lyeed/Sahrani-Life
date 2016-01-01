/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_player_coma",
	[
		["massage", "Stabiliser", "closeDialog 0; [g_interaction_target, 'main'] spawn public_fnc_massageCardiaque;", "true"],
		["kill", "Achever", "closeDialog 0; [g_interaction_target] spawn public_fnc_killProcess;", "true"],
		["defib", "Defib.", "closeDialog 0; [g_interaction_target, 'debif'] spawn public_fnc_massageCardiaque;", "(((backpack player) != 'B_Defibrilateur_khk') && (getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'can_use_debrif') isEqualTo 1))"]
	],
	"Blessé",
	nil,
	true,
	false
] spawn public_fnc_interactions_create;