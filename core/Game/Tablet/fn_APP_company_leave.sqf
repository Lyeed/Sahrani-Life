/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action", "_info"];

if (isNull g_company) exitWith {
	["Vous n'avez pas d'entreprise."] call AlysiaClient_fnc_error;
};

_info = g_company getVariable "company_info";
if (isNil "_info") exitWith {
	["Impossible de récupérer les informations de l'entreprise."] call AlysiaClient_fnc_error;
};

if ((_info select 1) isEqualTo (getPlayerUID player)) exitWith {
	["Vous devez donner le PDG de l'entreprise avant de pouvoir la quitter."] call AlysiaClient_fnc_error;
};

_action = 
[
	format
	[
		"Vous êtes sur le point de quitter l'entreprise : <t color='#74DF00'>%1</t><br/><br/>Voulez-vous continuer ?", 
		(_info select 0)
	],
	"Démissionner",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	[] call AlysiaClient_fnc_company_member_leave;
	["MAIN"] spawn AlysiaClient_fnc_tabletApp;
};
