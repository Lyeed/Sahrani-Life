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

_info = g_interaction_target getVariable ["info", []];
if (_info isEqualTo []) exitWith {};

if (!(["Analyse", 10, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!(createDialog "RscDisplaySkullOwner")) exitWith {};

disableSerialization;
_display = findDisplay 68000;
if (isNull _display) exitWith {};

(_display displayCtrl 68001) ctrlSetStructuredText parseText format
[
		"<t align='left'>Date</t><t align='right'>%1</t><br/>"
	+	"<t align='left'>Heure</t><t align='right'>%2</t><br/>"
	+	"<t align='left'>Identité</t><t align='right'>%3</t><br/>"
	+	"<t align='left'>Origine</t><t align='right'>%4</t><br/>"
	+	"<t align='left'>Sexe</t><t align='right'>%5</t><br/>"
	+	"<t align='left'>Tueur</t><t align='right'>%6</t>",
	(_info select 0),
	(_info select 1),
	(_info select 2),
	(_info select 3),
	(_info select 4),
	(g_interaction_target getVariable ["killer", "Inconnu"])
];