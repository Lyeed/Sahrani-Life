/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_info"];

closeDialog 0;

if (isNull g_interaction_target) exitWith {};

if (!(g_interaction_target getVariable ["construction", false])) exitWith {
	["Cette entreprise n'est pas en construction"] call AlysiaClient_fnc_error;
};

if (!((g_interaction_target getVariable ["construction_require", []]) isEqualTo [])) exitWith {
	["Cette entreprise a encore besoin de matériaux"] call AlysiaClient_fnc_error;
};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["L'inventaire est en cours d'utilisation ou quelqu'un est déjà en train de construire l'entreprise"] call AlysiaClient_fnc_error;
};

g_interaction_target setVariable ["trunk_in_use_ID", "CONSTRUCTION", true];

if (!(["Construction", 15, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {
	g_interaction_target setVariable ["trunk_in_use_ID", "", true];
};

_info = g_interaction_target getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de trouver les informations de l'entreprise"] call AlysiaClient_fnc_error;
};

[g_interaction_target] remoteExecCall ["AlysiaServer_fnc_company_build", 2];
