/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_info", "_display", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

_info = g_interaction_target getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de trouver les informations de l'entreprise."] call AlysiaClient_fnc_error;
};

createDialog "RscDisplayDefaultText";

disableSerialization;
_display = findDisplay 68000;
if (isNull _display) exitWith {};

(_display displayCtrl 68003) ctrlSetStructuredText parseText "<t size='1.5' align='center'>Informations</t>";
(_display displayCtrl 68001) ctrlSetStructuredText parseText format
[
		"<t align='center'>"
	+	"Nom<br/>"
	+	"%1<br/><br/>"
	+	"Type<br/>"
	+	"%2<br/><br/>"
	+	"PDG<br/>"
	+	"%3",
	(_info select 0),
	getText(missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> (_info select 2) >> "name"),
	(_info select 4)
];
