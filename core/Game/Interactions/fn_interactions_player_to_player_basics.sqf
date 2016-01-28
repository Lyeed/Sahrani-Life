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
		["trade", "Echanger", "[] spawn public_fnc_interactionMenu_action_trade_open;", "(!(g_interaction_target getVariable ['restrained', false]) && !(g_interaction_target getVariable ['surrender', false]))"],
		["escort", "Escorter", "[g_interaction_target] spawn public_fnc_escort; closeDialog 0;", "((g_interaction_target getVariable ['restrained', false]) && (isNull (player getVariable ['escorting', objNull])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["stopescort", "Arrêter l'escorte", "[g_interaction_target] spawn public_fnc_stopescort; closeDialog 0;", "(!(isNull (g_interaction_target getVariable ['escorted', objNull])) || (isNull (g_interaction_target getVariable ['escorting', objNull])))"],
		["restrain", "Menotter", "[] spawn public_fnc_interactionMenu_action_restrain;", "((g_interaction_target getVariable ['surrender', false]) && !(g_interaction_target getVariable['restrained', false]) && ((['handcuffs'] call public_fnc_itemCount) > 0))"],
		["unrestrain", "Démenotter", "[] spawn public_fnc_interactionMenu_action_unrestrain;", "((g_interaction_target getVariable['restrained', false]) && ((['handcuffkeys'] call public_fnc_itemCount) > 0) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["lockpick", "Crochetter", "[] spawn public_fnc_interactionMenu_action_lockpick;", "((g_interaction_target getVariable['restrained', false]) && ((['lockpick'] call public_fnc_itemCount) > 0) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["ticket", "Paiement", "[] spawn public_fnc_interactionMenu_action_ticket;", "((getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'interaction_ticket') isEqualTo 1) &&  && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["search", "Fouiller", "[] spawn public_fnc_interactionMenu_action_search;", "((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable['restrained', false]) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["license", "Licences", "[] spawn public_fnc_interactionMenu_action_license;", "(((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable ['restrained', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["arrest", "Arrêter", "[] spawn public_fnc_prisonMenu_open;", "((!(([player] call public_fnc_prisonNearest) isEqualTo '[]')) && (!(g_interaction_target getVariable['restrained', false])) && (!(player getVariable ['arrested', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["arrest", "Gestion Peine", "[] spawn public_fnc_prisonModifyMenu_informations_get;", "((!(([player] call public_fnc_prisonNearest) isEqualTo '[]')) && (!(g_interaction_target getVariable['restrained', false])) && (player getVariable ['arrested', false]))"],
		["bandage", "Bandage", "[nil,nil,nil,g_interaction_target] spawn public_fnc_bandageUse;", "((g_interaction_target getVariable [""is_bleeding"", false]) && (""SkylineItems_Bandage"" in (magazines player)))"],
		["morphine", "Morphine", "[nil,nil,nil,g_interaction_target] spawn public_fnc_morphineUse;", "(""SkylineItems_Morphine"" in (magazines player))"],
		["company_create", "Entreprise", "[] spawn public_fnc_company_create_open;", "((['gov_company'] call public_fnc_hasLicense) && (getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(side cursorTarget) >> 'company_own') isEqualTo 1))"]
	],
	"Intéractions"
] spawn public_fnc_interactions_create;
