/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_action";

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour changer de personnage."] call AlysiaClient_fnc_error;
};

_action = 
[
	format
	[
		"Êtes-vous sûr ? Une fois validées <t color='#FF4000'>%1</t> sera considéré comme disparu et vous devrez incarner une autre personne à partir de ses débuts.<br/>",
		player getVariable "realname"
	],
	"Wipe : validation",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	if (isNull g_company) then
	{
		disableUserInput true;
		["Action en cours. Veuillez patienter..."] call AlysiaClient_fnc_info;
		[getPlayerUID player, g_laboratory, g_houses, g_vehicles] remoteExec ["AlysiaServer_fnc_query_delete_wipe", 2];
		player setVariable ["realname", nil];
		uiSleep 4;
		disableUserInput false;
		["Votre compte a été supprimé. Veuillez vous reconnectez-vous avec votre nouvelle identité."] spawn AlysiaClient_fnc_errorExit;
	} else {
		["Vous devez quitter votre entreprise avant de pouvoir changer de personnage."] call AlysiaClient_fnc_error;
	};
};
