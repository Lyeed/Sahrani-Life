/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_laboratory",
	[
		["process", "Traiter", "[g_interaction_target] spawn AlysiaClient_fnc_labo_process;", "true"],
		["destroy", "Détruire", "[g_interaction_target] spawn AlysiaClient_fnc_labo_destroy;", "(((['destroy_labo'] call AlysiaClient_fnc_itemCount) > 0) && (getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'laboratory_destroy') isEqualTo 1))"],
		["sabotage", "Saboter", "[g_interaction_target] spawn AlysiaClient_fnc_labo_sabotage;", "(g_interaction_target getVariable ['sabotage',0] < time)"]
	],
	"Laboratoire",
	"lyeed_IMG\data\interactions\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
