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
			"!(g_interaction_target getVariable ['construction', false])"
		],
		[
			"construction",
			"Matériaux",
			"[g_interaction_target,'construction_require'] spawn AlysiaClient_fnc_virtual_menu_reduce_open;",
			"(g_interaction_target getVariable ['construction', false])"
		],
		[
			"finish",
			"Construire",
			"[g_interaction_target] spawn AlysiaClient_fnc_company_construction_build;",
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
			"Traitements",
			"[g_interaction_target] call AlysiaClient_fnc_company_process;",
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
			"Coffre",
			"[g_interaction_target] call AlysiaClient_fnc_company_storage;",
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
					) &&
					(isNil 'gServer_soonReboot')
				)
			"
		],
		[
			"launder"
			"Blanchiment",
			"[g_interaction_target] spawn AlysiaClient_fnc_company_launder_open;",
			"
				((g_company isEqualTo g_interaction_target) &&
				((['illegal_money'] call AlysiaClient_fnc_itemCount) > 0)
			"
		]
	],
	(_object getVariable "company_info") select 0,
	"lyeed_IMG\data\companies\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
