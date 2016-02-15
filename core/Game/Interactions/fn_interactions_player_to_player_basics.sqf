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
		["identity", "Carte d'identité", "[g_interaction_target] spawn AlysiaClient_fnc_showIdentity;", "((getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') isEqualTo '') || (getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') in (magazines player)))"],
		["trade", "Echanger", "[] spawn AlysiaClient_fnc_interactionMenu_action_trade_open;", "(!(g_interaction_target getVariable ['restrained', false]) && !(g_interaction_target getVariable ['surrender', false]))"],
		["escort", "Escorter", "[g_interaction_target] spawn AlysiaClient_fnc_escort;", "((g_interaction_target getVariable ['restrained', false]) && (isNull (player getVariable ['escorting', objNull])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["stopescort", "Arrêter l'escorte", "[g_interaction_target] spawn AlysiaClient_fnc_stopescort;", "(!(isNull (g_interaction_target getVariable ['escorted', objNull])) || !(isNull (g_interaction_target getVariable ['escorting', objNull])))"],
		["restrain", "Menotter", "[] spawn AlysiaClient_fnc_interactionMenu_action_restrain;", "((g_interaction_target getVariable ['surrender', false]) && !(g_interaction_target getVariable['restrained', false]) && ((['handcuffs'] call AlysiaClient_fnc_itemCount) > 0))"],
		["unrestrain", "Démenotter", "[] spawn AlysiaClient_fnc_interactionMenu_action_unrestrain;", "((g_interaction_target getVariable['restrained', false]) && ((['handcuffkeys'] call AlysiaClient_fnc_itemCount) > 0) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["lockpick", "Crochetter", "[] spawn AlysiaClient_fnc_interactionMenu_action_lockpick;", "((g_interaction_target getVariable['restrained', false]) && ((['lockpick'] call AlysiaClient_fnc_itemCount) > 0) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["ticket", "Paiement", "[] spawn AlysiaClient_fnc_interactionMenu_action_ticket;", "((getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'interaction_ticket') isEqualTo 1) && (isNull (g_interaction_target getVariable ['escorted', objNull])) && (playerSide != (side g_interaction_target)))"],
		["search", "Fouiller", "[] spawn AlysiaClient_fnc_interactionMenu_action_search;", "(((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable ['restrained', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["license", "Licences", "[] spawn AlysiaClient_fnc_interactionMenu_action_license;", "(((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable ['restrained', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["arrest", "Arrêter", "[] spawn AlysiaClient_fnc_prisonMenu_open;", "((!(([player] call AlysiaClient_fnc_prisonNearest) isEqualTo '[]')) && (!(g_interaction_target getVariable['restrained', false])) && (!(player getVariable ['arrested', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])))"],
		["arrest", "Gestion Peine", "[] spawn AlysiaClient_fnc_prisonModifyMenu_informations_get;", "((!(([player] call AlysiaClient_fnc_prisonNearest) isEqualTo '[]')) && (!(g_interaction_target getVariable['restrained', false])) && (player getVariable ['arrested', false]))"],
		["bandage", "Bandage", "[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_bandage_use;", "((g_interaction_target getVariable ['is_bleeding', false]) && ('SkylineItems_Bandage' in (magazines player)))"],
		["morphine", "Morphine", "[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_morphine_use;", "('SkylineItems_Morphine' in (magazines player))"],
		["company_create", "Entreprise", "[] spawn AlysiaClient_fnc_company_create_open;", "((['gov_company'] call AlysiaClient_fnc_hasLicense) && (getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(side(g_interaction_target)) >> 'companies' >> 'owner') isEqualTo 1))"],
		["company_recrut", "Recruter", "[g_interaction_target, g_company] call AlysiaClient_fnc_company_member_invite;", "((getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(side g_interaction_target) >> 'companies' >> 'employee') isEqualTo 1) && !(isNull g_company) && {((g_company getVariable 'company_info') select 1) isEqualTo (getPlayerUID player)})"],
		["alcool", "Alcootest", "[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_alcootest;", "(((g_interaction_target getVariable ['surrender', false]) || (g_interaction_target getVariable ['restrained', false])) && (isNull (g_interaction_target getVariable ['escorted', objNull])) && ((['alcool_test'] call AlysiaClient_fnc_itemCount) > 0))"]
	],
	"Intéractions"
] spawn AlysiaClient_fnc_interactions_create;
