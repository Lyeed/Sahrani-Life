/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules

	headbag_put
	headbag_take
	action_silence_take
	action_silence_put
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_player_basics",
	[
		[
			"identity",
			"Carte d'identité",
			"[g_interaction_target] spawn AlysiaClient_fnc_showIdentity;",
			"
				(
					(getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') isEqualTo '') ||
					(getText(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'identity_item') in (magazines player))
				)
			"
		],
		[
			"trade",
			"Echanger",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_trade_open;",
			"
				(
					!(g_interaction_target getVariable ['restrained',false]) &&
					!(g_interaction_target getVariable ['surrender',false]) &&
					!(g_interaction_target getVariable ['is_coma',false])
				)
			"
		],
		[
			"escort",
			"Escorter",
			"[g_interaction_target] spawn AlysiaClient_fnc_escort;",
			"
				(
					(g_interaction_target getVariable ['restrained',false]) &&
					(isNull (player getVariable ['escorting',objNull])) &&
					(isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"stopescort",
			"Arrêter l'escorte",
			"[g_interaction_target] spawn AlysiaClient_fnc_stopescort;",
			"
				(
					!(isNull (g_interaction_target getVariable ['escorted',objNull])) ||
					!(isNull (g_interaction_target getVariable ['escorting',objNull]))
				)
			"
		],
		[
			"restrain",
			"Menotter",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_restrain;",
			"
				(
					(
						(g_interaction_target getVariable ['surrender',false]) ||
						((animationState g_interaction_target) isEqualTo 'incapacitated')
					) && 
					!(g_interaction_target getVariable['restrained',false]) &&
					((['handcuffs'] call AlysiaClient_fnc_itemCount) > 0)
				)
			"
		],
		[
			"unrestrain",
			"Démenotter",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_unrestrain;",
			"
				(
					(g_interaction_target getVariable['restrained',false]) &&
					((['handcuffkeys'] call AlysiaClient_fnc_itemCount) > 0) &&
					(isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"lockpick",
			"Crochetter",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_lockpick;",
			"
				(
					(g_interaction_target getVariable['restrained',false]) &&
					('Alysia_Lockpick' in (magazines player)) &&
					(isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"ticket",
			"Paiement",
			"[] spawn AlysiaClient_fnc_interactionMenu_action_ticket;",
			"
				(
					(
						(playerSide in [independent,east,west]) || !(isNull g_company)
					) &&
					(isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"search",
			"Fouiller",
			"[] spawn AlysiaClient_fnc_interactionMenu_action_search;",
			"
				(
					(
						(g_interaction_target getVariable ['surrender',false]) || 
						(g_interaction_target getVariable ['restrained',false])
					) && (isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"license",
			"Licences",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_license;",
			"
				(
					(playerSide in [east,west]) &&
					(
						(g_interaction_target getVariable ['surrender',false]) ||
						(g_interaction_target getVariable ['restrained',false])
					) && (isNull (g_interaction_target getVariable ['escorted',objNull]))
				)
			"
		],
		[
			"arrest",
			"Arrêter",
			"[g_interaction_target] call AlysiaClient_fnc_prison_arrest_open;",
			"
				(
					!(isNull ([g_interaction_target] call AlysiaClient_fnc_prison_near)) &&
					!(g_interaction_target getVariable ['arrested',false]) &&
					(isNull (g_interaction_target getVariable ['escorted',objNull])) &&
					{
						str(playerSide) in getArray(missionConfigFile >> 'ALYSIA_PRISONS' >> typeOf([g_interaction_target] call AlysiaClient_fnc_prison_near) >> 'sides')
					}
				)
			"
		],
		[
			"bandage",
			"Bandage",
			"[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_bandage_use;",
			"
				(
					(g_interaction_target getVariable ['is_bleeding',false]) &&
					('SkylineItems_Bandage' in (magazines player))
				)
			"
		],
		[
			"morphine",
			"Morphine",
			"[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_morphine_use;",
			"('SkylineItems_Morphine' in (magazines player))"
		],
		[
			"company_create",
			"Entreprise",
			"[] spawn AlysiaClient_fnc_company_create_open;",
			"
				(
					(
						(['gov_company'] call AlysiaClient_fnc_hasLicense) ||
						(['central_com'] call AlysiaClient_fnc_hasLicense) ||
						(['central_com_gen'] call AlysiaClient_fnc_hasLicense)
					) &&
					(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(side(g_interaction_target)) >> 'companies' >> 'owner') isEqualTo 1)
				)
			"
		],
		[
			"company_recrut",
			"Recruter",
			"[g_interaction_target,g_company] call AlysiaClient_fnc_company_member_invite;",
			"
				(
					(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(side g_interaction_target) >> 'companies' >> 'employee') isEqualTo 1) &&
					!(isNull g_company) &&
					{((g_company getVariable 'company_info') select 1) isEqualTo (getPlayerUID player)}
				)
			"
		],
		[
			"alcool",
			"Alcootest",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_alcootest;",
			"
				(
					(
						(g_interaction_target getVariable ['surrender',false]) ||
						(g_interaction_target getVariable ['restrained',false])
					) && 
					(isNull (g_interaction_target getVariable ['escorted',objNull])) &&
					((['alcool_test'] call AlysiaClient_fnc_itemCount) > 0)
				)
			"
		],
		[
			"license",
			"Donner licence",
			"[g_interaction_target] spawn AlysiaClient_fnc_interactionMenu_action_license_give_open;",
			"
				(
					count
					(
						'
							(
								((player getVariable [''rank'',0]) >= getNumber(_x >> ''rank'')) && 
								((getText(_x >> ''license'') isEqualTo '''') || ([getText(_x >> ''license'')] call AlysiaClient_fnc_hasLicense)) &&
								((getNumber(_x >> ''same_side_only'') isEqualTo 0) || ((getNumber(_x >> ''same_side_only'') isEqualTo 1) && ((side g_interaction_target) isEqualTo playerSide))) &&
								(isClass(missionConfigFile >> ''ALYSIA_LICENSES'' >> (configName _x) >> ''factions'' >> str(side g_interaction_target)))
							)
						'
						configClasses (missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'licenses_give')
					) > 0
				)
			"
		],
		[
			"dna",
			"Test ADN",
			"[g_interaction_target] spawn AlysiaClient_fnc_item_adn_use;",
			"
				(
					(
						(g_interaction_target getVariable ['surrender',false]) ||
						(g_interaction_target getVariable ['restrained',false])
					) && 
					(isNull (g_interaction_target getVariable ['escorted',objNull])) &&
					((['adn'] call AlysiaClient_fnc_itemCount) > 0) &&
					(['guer_gen'] call AlysiaClient_fnc_hasLicense)
				)
			"
		],
		[
			"doctor",
			"Diagnostic",
			"[player, g_interaction_target] call AlysiaClient_fnc_doctor_start;",
			"
				(
					(isNull (g_interaction_target getVariable ['escorted',objNull])) &&
					(['guer_medical'] call AlysiaClient_fnc_hasLicense) &&
					((['stethoscope'] call AlysiaClient_fnc_itemCount) > 0)
				)
			"
		]
	],
	"Interactions"
] spawn AlysiaClient_fnc_interactions_create;
