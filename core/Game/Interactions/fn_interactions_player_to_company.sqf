/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};

[
	_object,
	"player_to_company",
	[
		["info", "Infos", "[] spawn public_fnc_company_info_open;", "!(g_interaction_target getVariable ['construction', false])"],
		["construction", "Matériaux", "[] spawn public_fnc_company_construction_open;", "(g_interaction_target getVariable ['construction', false])"],
		["finish", "Construire", "[] spawn public_fnc_company_construction_build;", "((g_interaction_target getVariable ['construction', false]) && ((g_interaction_target getVariable ['construction_require', []]) isEqualTo []) && (['company_construction'] call public_fnc_hasLicense))"],
		["search", "Fouille", "", "(getNumber(missionConfigFile >> 'ALYSIA_COMPANIES' >> str(playerSide) >> 'companies_search') isEqualTo 1)"],
		["process", "Traiter", "[g_interaction_target, getArray(missionConfigFile >> 'ALYSIA_COMPANIES' >> ((g_interaction_target getVariable 'company_info') select 2) >> 'process')] call public_fnc_process_choice_open;", "((g_company isEqualTo g_interaction_target) && (count(getArray(missionConfigFile >> 'ALYSIA_COMPANIES' >> ((g_interaction_target getVariable 'company_info') select 2) >> 'process')) > 0) && !(g_interaction_target getVariable ['construction', false]))"]
	],
	(_object getVariable "company_info") select 0,
	"lyeed_IMG\data\companies\background.jpg",
	true,
	false
] spawn public_fnc_interactions_create;
