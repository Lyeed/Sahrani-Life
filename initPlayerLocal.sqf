/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (hasInterface) then
{
	private["_handle", "_timeStamp", "_check"];
	diag_log "------------------------------------------------------------------------------------------------------";
	diag_log "---------------------------------------- Starting Client Init ----------------------------------------";
	diag_log "------------------------------------------------------------------------------------------------------";
	_timeStamp = diag_tickTime;

	enableSaving [false, false];

	{
		_x setVariable ["BIS_noCoreConversations", true];
	} forEach allUnits;

	0 fadeRadio 0;
	0 fadeSpeech 0;
	enableSentences false;
	disableRemoteSensors true;

	waitUntil {(!(isNull player) && (player isEqualTo player))};
	waitUntil {!(isNull (findDisplay 46))};

	player setVariable ["tf_globalVolume", 0];

	diag_log "<INIT> En attente de réponse du serveur ...";
	cutText ["En attente de réponse du serveur", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {!(isNil "gServer_server_isReady") && !(isNil "gServer_mods")};
	if (!(isNil "gServer_soonReboot")) exitWith {
		["Le serveur redémarre dans moins de 4 minutes, veuillez vous reconnecter après."] spawn AlysiaClient_fnc_errorExit;
	};
	setDate [gServer_year, (date select 1), (date select 2), (date select 3), (date select 4)];

	diag_log "<INIT> Vérification des mods @Alysia ...";
	cutText ["Vérification de la résolution ...", "BLACK FADED"];
	0 cutFadeOut 9999999;
	{
		if (!(isClass(configFile >> "CfgPatches" >> _x))) exitWith
		{
			[format["Le pbo [%1] est nécessaire pour vous connecter.", _x]] spawn AlysiaClient_fnc_errorExit;
			_check = false;
		};
	} forEach gServer_mods;
	if (!(isNil "_check")) exitWith {};
	diag_log "<INIT> Mods vérifiés";

	diag_log "<INIT> Initialisation des variables ...";
	cutText ["Vérification de la résolution ...", "BLACK FADED"];
	0 cutFadeOut 9999999;
	if (((getResolution) select 5) != 0.55) exitWith {
		["Vous devez régler la taille de votre interface sur 'Petit(e)' pour pouvoir vous connecter. L'option est disponible dans Configurer->Vidéo->Affichage->Taille d'interface. Un redémarrage de votre jeu est nécessaire après modification."] spawn AlysiaClient_fnc_errorExit;
	};
	if (musicVolume < 0.2) exitWith {
		["Vous devez régler l'audio 'musique' à au moins 20% pour pouvoir vous connecter. Sans musique vous perdrez de l'immersion et risquez de rater les annonces de redémarrages."] spawn AlysiaClient_fnc_errorExit;
	};
	diag_log "<INIT> Vérification de la résolution terminée";

	diag_log "<INIT> Initialisation des variables ...";
	cutText ["Initialisation des variables", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call AlysiaClient_fnc_init_variables;
	diag_log "<INIT> Variables initialisées";

	diag_log "<INIT> Ajouts des évènements ...";
	cutText ["Ajouts des évènements", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call AlysiaClient_fnc_init_keys;
	[] call AlysiaClient_fnc_init_eventHandlers;
	[] call AlysiaClient_fnc_init_triggers;
	diag_log "<INIT> Evènements ajoutés";

	diag_log "<INIT> Création des objets ...";
	cutText ["Création des objets", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call AlysiaClient_fnc_init_buildings;
	diag_log "<INIT> Objets crées";

	diag_log "<INIT> Validation de l'extension TaskForceRadio...";
	cutText ["Validation de l'extension TaskForceRadio", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {!(isNil "TFAR_fnc_isTeamSpeakPluginEnabled")};
	diag_log "<INIT> Extension TaskForceRadio validée";

	diag_log "<INIT> Validation du plugin Teamspeak : TaskForceRadio ...";
	cutText ["Validation du plugin Teamspeak : TaskForceRadio", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {(call TFAR_fnc_isTeamSpeakPluginEnabled)};
	diag_log "<INIT> Plugin Teamspeak TaskForceRadio validé";

	diag_log "<INIT> Validation de présence sur le Teamspeak Alysia ...";
	cutText ["Validation de présence sur le Teamspeak AlysiaRP", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {(["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString)};
	diag_log "<INIT> Présence validé";

	diag_log "<INIT> En attente de validation de votre présence dans le channel TaskForceRadio ...";
	cutText ["En attente de validation de votre présence dans le channel TaskForceRadio", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")};
	diag_log "<INIT> Présence dans le channel TaskForceRadio validé";

	diag_log "<INIT> Récupération des données de personnage ...";
	cutText ["Récupération des données de personnage", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[player] remoteExec ["AlysiaServer_fnc_query_select_connect", 2];
	waitUntil {!(isNil "g_session_query")};
	diag_log "<INIT> Données de personnage récupéré";

	diag_log "<INIT> Chargement des données personnage ...";
	cutText ["Chargement des données de personnage", "BLACK FADED"];
	0 cutFadeOut 9999999;
	if (!([g_session_query] call AlysiaClient_fnc_init_data)) exitWith {};
	diag_log "<INIT> Données de personnage chargées";

	diag_log "---------------------------------------------------------------------------------------------------------";
	diag_log format["              End of Client Init :: Total Execution Time %1 seconds ", (diag_tickTime - _timeStamp)];
	diag_log "---------------------------------------------------------------------------------------------------------";
};
