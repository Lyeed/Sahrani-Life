/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_display", "_targetPos", "_cameraPos", "_camera", "_action", "_bad"];

if (playerSide != civilian) exitWith {
	["Vous devez être connecté en civil pour votre première connexion"] spawn AlysiaClient_fnc_errorExit;
};

_bad = [profileName, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz- "] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {
	["Vous utilisez un caractère interdit dans votre pseudo (%1)", _bad] call AlysiaClient_fnc_errorExit;
};

if (([profileName] call CBA_fnc_leftTrim) != profileName) exitWith {
	["Vous avez un ou plusieurs espaces au début de votre pseudo. Veuillez les retirer pour vous connecter."] spawn AlysiaClient_fnc_errorExit;
};
if (([profileName] call CBA_fnc_rightTrim) != profileName) exitWith {
	["Vous avez un ou plusieurs espaces à la fin de votre pseudo. Veuillez les retirer pour vous connecter."] spawn AlysiaClient_fnc_errorExit;
};
if (count([profileName, " "] call CBA_fnc_split) < 2) exitWith {
	["Votre pseudo doit être composé d'un prénom et d'un nom. Exemple: Jean Robert."] spawn AlysiaClient_fnc_errorExit;
};

_targetPos = [13326.7,8852.53,0.00143814];
_cameraPos = [13355.3,8757.92,30.00143909];

_camera = "camera" camCreate [0, 0, 0];
_camera cameraEffect ["internal", "back"];
waitUntil {preloadCamera _targetPos};
_camera camSetPos _cameraPos;
_camera camSetTarget _targetPos;
_camera camCommit 0;
cutText ["", "PLAIN"];

profileNamespace setVariable ["ALYSIA_phone_recv", "message_rcv_1"];
profileNamespace setVariable ["ALYSIA_phone_recv", false];
saveProfileNamespace;

_action = 
[
	format
	[
			"<t font='EtelkaMonospacePro'><t align='center' size='1.2'>Bienvenue,<br/><br/></t><t size='0.8'>"
		+ 	"Vous êtes sur le point de vous incrire avec <t color='#80FF00'>%1</t> comme nom de personnage.<br/>"
		+ 	"Une fois l'inscription terminée, l'aventure débutera et <t color='#FF8000'>vous ne pourrez plus changer les informations de votre personnage</t>.<br/><br/>"
		+	"Pensez à <t color='#FF8000'>BIEN</t> vérifier:<br/><br/>"
		+	"- <t color='#0174DF'>Votre nom de profil ArmA</t><br/>doit correspondre à celui de votre personnage sous la forme Prénom Nom<br/><br/>"
		+	"- <t color='#0174DF'>Le visage de votre personnage</t><br/>doit coincider avec l'origine géographique de votre personnage.<br/><br/>"
		+	"Lorsque vous êtes prêt, cliquez sur <t color='#3A01DF'>COMMENCER</t> pour passer à l'étape suivante.<br/>"
		+	"Si vous n'êtes pas sûr de vos informations et souhaitez les modifier, appuyez sur <t color='#DF0101'>QUITTER</t> et reconnectez-vous après les avoir rectifiées.</t></t>"
		, profileName
	],
	"Inscription",
	"Commencer",
	"Quitter"
] call BIS_fnc_guiMessage;
if (_action) then
{
	_handle = [] spawn AlysiaClient_fnc_welcomeMenu_Open;
	waitUntil {scriptDone _handle};

	_handle = [] spawn AlysiaClient_fnc_welcome_faction;
	waitUntil {scriptDone _handle};

	[player, profileName, g_firstName, g_lastName, g_birth, g_nationality, g_sexe, g_choice] remoteExec ["AlysiaServer_fnc_query_insert_inscription", 2];
	_camera cameraEffect ["terminate", "back"];
	camDestroy _camera;
	cutText ["", "BLACK FADED"];
} else {
	["Annulation de la création de profil."] spawn AlysiaClient_fnc_errorExit;
	sleep 99999;
};
