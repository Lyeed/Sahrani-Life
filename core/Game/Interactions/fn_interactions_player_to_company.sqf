/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_object";
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};

[
	_object,
	"player_to_company",
	[
		[
			"info",
			"Infos",
			"[g_interaction_target] call AlysiaClient_fnc_company_info_open;",
			"
				!(g_interaction_target getVariable ['construction', false])
			"
		],
		[
			"construction",
			"Matériaux",
			"[] spawn AlysiaClient_fnc_company_construction_open;",
			"
				(g_interaction_target getVariable ['construction', false])
			"
		],
		[
			"finish",
			"Construire",
			"[] spawn AlysiaClient_fnc_company_construction_build;",
			"
				(
					(g_interaction_target getVariable ['construction', false]) && 
					((g_interaction_target getVariable ['construction_require', []]) isEqualTo []) && 
					(['company_construction'] call AlysiaClient_fnc_hasLicense)
				)
			"
		],
		[
			"process",
			"Traiter",
			"[g_interaction_target, getArray(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> ((g_interaction_target getVariable 'company_info') select 2) >> 'process')] call AlysiaClient_fnc_process_choice_open;",
			"
				(
					(g_company isEqualTo g_interaction_target) &&
					(count(getArray(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> ((g_interaction_target getVariable 'company_info') select 2) >> 'process')) > 0) &&
					!(g_interaction_target getVariable ['construction', false])
				)
			"
		],
		[
			"inventory",
			"Stockage",
			"[g_interaction_target, 'company_inventory', true, true, false, true, false] spawn AlysiaClient_fnc_virtual_menu_exhange_open;",
			"
				(
					isClass(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> ((g_interaction_target getVariable 'company_info') select 2) >> 'storage') &&
					!(g_interaction_target getVariable ['construction', false]) &&
					(
						(g_company isEqualTo g_interaction_target) ||
						(
							(getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'companies' >> 'search') isEqualTo 1) &&
							(g_interaction_target getVariable ['perquisition',false])
						)
					)
				)
			"
		]
	],
	(_object getVariable "company_info") select 0,
	"lyeed_IMG\data\companies\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
