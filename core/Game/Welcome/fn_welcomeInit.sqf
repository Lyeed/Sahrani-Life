/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_display", "_targetPos", "_cameraPos", "_camera", "_action"];

if (playerSide != civilian) exitWith {
	["Vous devez être connecté en civil pour votre première connexion"] spawn public_fnc_errorExit;
};
if (([profileName] call CBA_fnc_leftTrim) != profileName) exitWith {
	["Vous avez un ou plusieurs espaces au début de votre pseudo. Veuillez les retirer pour vous connecter."] spawn public_fnc_errorExit;
};
if (([profileName] call CBA_fnc_rightTrim) != profileName) exitWith {
	["Vous avez un ou plusieurs espaces à la fin de votre pseudo. Veuillez les retirer pour vous connecter."] spawn public_fnc_errorExit;
};
if (count([profileName, " "] call CBA_fnc_split) < 2) exitWith {
	["Votre pseudo doit être composé d'un prénom et d'un nom. Exemple: Jean Robert."] spawn public_fnc_errorExit;
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

_action = 
[
	format
	[
		"<t align='center'><img size='15' image='lyeed_IMG\data\alysia.paa'/><br/>"
		+ "Vous êtes sur le point de créer un compte avec [%1] comme nom de profil. Une fois crée vous devrez changer d'identité pour pouvoir vous connecter avec un autre nom de profil.<br/><br/>"
		+ "De plus vous allez être amené à remplir une fiche de personnage regroupant des informations telles que son nom, son prénom son âge, etc...<br/>"
		+ "Ces informations doivent correspondre avec votre nom de profil Arma pour le prénom et le nom</t></t>", profileName
	],
	"Inscription",
	"Commencer",
	"Quitter"
] call BIS_fnc_guiMessage;
if (_action) then
{
	_handle = [] spawn public_fnc_welcomeMenu_Open;
	waitUntil {scriptDone _handle};

	_handle = [] spawn public_fnc_welcome_faction;
	waitUntil {scriptDone _handle};

	[player, profileName, g_firstName, g_lastName, g_birth, g_nationality, g_sexe, g_choice] remoteExec ["TON_fnc_query_insert_inscription", 2];
	_camera cameraEffect ["terminate", "back"];
	camDestroy _camera;
	player addItem "ItemGPS";
	player assignItem "ItemGPS";
	player forceAddUniform "U_C_Alysia_01";
	player addMagazine getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "CIV" >> "identity_item");
	cutText ["", "BLACK FADED"];
} else {
	["Annulation de la création de profil."] spawn public_fnc_errorExit;
	sleep 99999;
};