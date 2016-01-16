/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_speaker",
	[
		["sabot", "Saboter", "[g_interaction_target] spawn public_fnc_border_south_speaker_destroy;", "!(g_interaction_target getVariable ['destroyed',false])"],
		["repair", "Réparer", "[g_interaction_target] spawn public_fnc_border_south_speaker_repair;", "(g_interaction_target getVariable ['destroyed',false])"]
	],
	"Haut parleur",
	"lyeed_IMG\data\interactions\background.jpg",
	false,
	false
] spawn public_fnc_interactions_create;
