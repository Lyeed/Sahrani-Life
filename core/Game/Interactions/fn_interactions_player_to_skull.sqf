/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_skull",
	[
		[
			"search",
			"Fouiller",
			"[] spawn AlysiaClient_fnc_skullMenu_search_open;",
			"true"
		],
		[
			"take",
			"Récupérer le corps",
			"[g_interaction_target] spawn AlysiaClient_fnc_skullMenu_take;",
			"(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'skull_take') isEqualTo 1)"
		],
		[
			"who",
			"Identité",
			"[g_interaction_target] spawn AlysiaClient_fnc_skullMenu_who;",
			"(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'skull_who') isEqualTo 1)
		"]
	],
	"Cadavre",
	"lyeed_IMG\data\skull\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
