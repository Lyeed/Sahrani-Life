/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_info", "_display"];

if (isNull g_interaction_target) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayCompanyInfo")) exitWith {};

disableSerialization;
_display = findDisplay 92000;
if (isNull _display) exitWith {};

_info = g_interaction_target getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de trouver les informations de l'entreprise"] call public_fnc_error;
};

(_display displayCtrl 92001) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_info select 0)];
(_display displayCtrl 92002) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "name")];
(_display displayCtrl 92003) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_info select 4)];

while {!(isNull _display)} do
{
	if (
		(isNull g_interaction_target) ||
		!(alive g_interaction_target) ||
		(player getVariable ["restrained", false]) ||
		(player getVariable ["surrender", false])
	) exitWith {closeDialog 0};
	sleep 0.5;
};
