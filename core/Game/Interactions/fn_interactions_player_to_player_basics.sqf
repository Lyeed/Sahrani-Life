/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_player_basics",
	[
		["identity", "Carte d'identité", "[] call public_fnc_interactionMenu_action_identity;", "((getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') isEqualTo '') || (getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') in (magazines player)))"],
		["trade", "Echanger", "[] spawn public_fnc_interactionMenu_action_trade_open;", "true"],
		["escort", "Escorter", "[] call public_fnc_interactionMenu_action_escort;", "(g_interaction_target getVariable['restrained', false])"],
		["stopescort", "Arrêter l'escorte", "[] call public_fnc_interactionMenu_action_stopescort;", "true"],
		["restrain", "Menotter", "[] spawn public_fnc_interactionMenu_action_restrain;", "((g_interaction_target getVariable ['surrender', false]) && !(g_interaction_target getVariable['restrained', false]) && ((['handcuffs'] call public_fnc_itemCount) > 0))"],
		["unrestrain", "Démenotter", "[] spawn public_fnc_interactionMenu_action_unrestrain;", "((g_interaction_target getVariable['restrained', false]) && ((['handcuffkeys'] call public_fnc_itemCount) > 0))"],
		["lockpick", "Crochetter", "[] spawn public_fnc_interactionMenu_action_lockpick;", "((g_interaction_target getVariable['restrained', false]) && ((['lockpick'] call public_fnc_itemCount) > 0))"],
		["ticket", "Paiement", "[] spawn public_fnc_interactionMenu_action_ticket;", "(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'interaction_ticket') isEqualTo 1)"],
		["search", "Fouiller", "[] spawn public_fnc_interactionMenu_action_search;", "((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable['restrained', false]))"],
<<<<<<< HEAD
		["license", "Licences", "[] spawn public_fnc_interactionMenu_action_license;", "((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable['restrained', false]))"],
		["arrest", "Arrêter", "[] spawn public_fnc_prisonArrest", "(((player distance prison_n < 10) || (player distance prison_s < 10)) && (!(g_interaction_target getVariable['restrained', false])) && (!(player getVariable ['arrested', false])))"],
		["arrest", "Gestion Peine", "[] spawn public_fnc_interactions_player_to_player_prison;", "(((player distance prison_n < 10) || (player distance prison_s < 10)) && (!(g_interaction_target getVariable['restrained', false])) && (player getVariable ['arrested', false]))"],
=======
		["license", "Licences", "[] spawn public_fnc_interactionMenu_action_license;", "(((side g_interaction_target) isEqualTo civilian) && ((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable['restrained', false])))"],
		["arrest", "Arrêter", "[([player] call public_fnc_prisonNearest)] spawn public_fnc_prisonArrest", "(((player distance prison_n < 10) || (player distance prison_s < 10)) && (!(g_interaction_target getVariable['restrained', false])) && (!(player getVariable ['arrested', false])))"],
		["arrest", "Gestion Peine", "[([player] call public_fnc_prisonNearest)] spawn public_fnc_interactions_player_to_player_prison;", "(((player distance prison_n < 10) || (player distance prison_s < 10)) && (!(g_interaction_target getVariable['restrained', false])) && (player getVariable ['arrested', false]))"],
>>>>>>> a8513d790ea7f2b319fcbdb2be83267c6aa3371f
		["bandage", "Bandage", "[nil,nil,nil,g_interaction_target] spawn public_fnc_bandageUse;", "((g_interaction_target getVariable [""is_bleeding"", false]) && (""SkylineItems_Bandage"" in (magazines player)))"],
		["morphine", "Morphine", "[nil,nil,nil,g_interaction_target] spawn public_fnc_morphineUse;", "(""SkylineItems_Morphine"" in (magazines player))"]
	],
	"Intéractions"
] spawn public_fnc_interactions_create;
