/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];

if (isNull g_interaction_target) exitWith {};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["L'inventaire est déjà en cours d'utilisation"] call AlysiaClient_fnc_error;
};

if (!(createDialog "RscDisplayCompanyConstruction")) exitWith {};

disableSerialization;
_display = findDisplay 91000;
if (isNull _display) exitWith {};

g_interaction_target setVariable ["trunk_in_use_ID", (getPlayerUID player), true];
[] call AlysiaClient_fnc_company_construction_update;

while {!(isNull _display)} do
{
	if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) != (getPlayerUID player)) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith {
		closeDialog 0;
	};
	if (isNull g_interaction_target) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};

if ((g_interaction_target getVariable ["trunk_in_use_ID", ""]) isEqualTo (getPlayerUID player)) then {
	g_interaction_target setVariable ["trunk_in_use_ID", "", true];
};

g_interaction_target setVariable ["construction_require", (g_interaction_target getVariable ["construction_require", []]), true];
