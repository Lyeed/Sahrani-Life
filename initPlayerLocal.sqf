/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (hasInterface) then
{
	private["_handle", "_timeStamp"];
	diag_log "------------------------------------------------------------------------------------------------------";
	diag_log "---------------------------------------- Starting Client Init ----------------------------------------";
	diag_log "------------------------------------------------------------------------------------------------------";
	_timeStamp = diag_tickTime;

	waitUntil {(!(isNull player) && (player isEqualTo player))};
	player setVariable ["tf_globalVolume", 0];

	diag_log "<INIT> En attente de réponse du serveur ...";
	cutText ["En attente de réponse du serveur", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {!(isNil "gServer_server_isReady")};
	waitUntil {gServer_server_isReady};
	if (!(isNil "gServer_soonReboot")) exitWith {
		["Le serveur redémarre dans moins de 4 minutes, veuillez vous reconnecter après."] spawn public_fnc_errorExit;
	};
	setDate [gServer_year, (date select 1), (date select 2), (date select 3), (date select 4)];

	diag_log "<INIT> Initialisation des variables ...";
	cutText ["Initialisation des variables", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call compile PreprocessFileLineNumbers "configs\configuration.sqf";
	diag_log "<INIT> Variables initialisées";

	diag_log "<INIT> Ajouts des évènements ...";
	cutText ["Ajouts des évènements", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call compile PreprocessFileLineNumbers "core\EventHandlers\handler_keys.sqf";
	[] call compile PreprocessFileLineNumbers "core\EventHandlers\handler_events.sqf";
	[] call compile PreprocessFileLineNumbers "core\EventHandlers\handler_triggers.sqf";
	diag_log "<INIT> Evènements ajoutés";

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

	tf_radio_channel_password = gServer_tf_radio_channel_password;
	diag_log "<INIT> En attente de validation de votre présence dans le channel TaskForceRadio ...";
	cutText ["En attente de validation de votre présence dans le channel TaskForceRadio", "BLACK FADED"];
	0 cutFadeOut 9999999;
	waitUntil {((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")};
	diag_log "<INIT> Présence dans le channel TaskForceRadio validé";

	diag_log "<INIT> Chargement des données personnelles ...";
	cutText ["Chargement des données personnelles", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[player] remoteExec ["TON_fnc_query_select_connect", 2, false];
	waitUntil {g_session_completed};
	diag_log "<INIT> Données personnelles chargées";

	diag_log "<INIT> Ajouts des actions au joueur ...";
	cutText ["Ajouts des actions au joueur", "BLACK FADED"];
	0 cutFadeOut 9999999;
	[] call public_fnc_setupActions;
	diag_log "<INIT> Actions ajoutés";

	diag_log "<INIT> Initilisation des fonctions factions...";
	cutText ["Initilisation des fonctions factions", "BLACK FADED"];
	0 cutFadeOut 9999999;
	_res = switch (playerSide) do
	{
		case west: {call public_fnc_init_fWEST};
		case civilian: {call public_fnc_init_fCIV};		
		case east: {call public_fnc_init_fEAST};
		case independent: {call public_fnc_init_fGUER};
		default {false};
	};
	if (!_res) exitWith {};
	diag_log "<INIT> Fonctions factions initialisées";

	waitUntil {!(isNull (findDisplay 46))};
	(findDisplay 46) displayAddEventHandler["KeyDown", "_this call EVENT_fnc_keyHandler"];
	cutText ["", "BLACK FADED"];

	_handle = [] execVM "core\Inits\init_p_position.sqf";
	waitUntil {scriptDone _handle};

	[] spawn
	{
		private["_old_vehicle"];
		sleep 8;
		_old_vehicle = vehicle player;
		while {true} do
		{
			if (((g_carryWeight > g_maxWeight) && !(isForcedWalk player)) || !(isNull g_objPut)) then 
			{
				player forceWalk true;
				player setFatigue 1;
				if (g_carryWeight > g_maxWeight) then {
					titleText["Vous êtes surchargé", "PLAIN"];
				};
			} else {
				if (isForcedWalk player) then {
					player forceWalk false;
				};
			};
			if ((vehicle player) != _old_vehicle) then 
			{
				_old_vehicle = vehicle player;
				switch (true) do
				{
					case (_old_vehicle isKindOf "Man"): {setViewDistance tawvd_foot};
					case (_old_vehicle isKindOf "LandVehicle"): {setViewDistance tawvd_car};
					case (_old_vehicle isKindOf "Air"): {setViewDistance tawvd_air};
				};
			};
			sleep 1;
		};
	};

	[] spawn
	{
		private["_bp", "_default"];
		_default = 24;
		while {true} do
		{
			waitUntil {backpack player != ""};
			_bp = backpack player;
			g_maxWeight = _default + round(getNumber(configFile >> "CfgVehicles" >> (backpack player) >> "maximumload") / 8);
			waitUntil {backpack player != _bp};
			if ((backpack player) isEqualTo "") then {
				g_maxWeight = _default;
			};
		};
	};

	[] spawn
	{
		private "_veh";
		while {true} do
		{
			waitUntil {((vehicle player) != player)};

			_veh = vehicle player;
			g_seatbelt = false;

			while {((vehicle player) isEqualTo _veh)} do
			{
				if (((driver _veh) isEqualTo player) && (isEngineOn _veh)) then {
					_veh setFuel ((fuel _veh) - (((speed _veh) / 10000) + (([_veh getVariable ["Trunk", []]] call public_fnc_weightGenerate) / 100000)));
				};
				sleep 2;
			};

			if (g_curWep_h != "") then {
				[] call public_fnc_holdsterSwitch;
			};

			if (g_seatbelt) then
			{
				playSound "seatbelt_off";
				g_seatbelt = false;
			};
		};
	};
	
	[] spawn
	{
		private["_totalSession", "_fnc_channel", "_fnc_server", "_salary_time"];

		_fnc_channel =
		{
			["Vous devez être dans le channel TaskForceRadio pour pouvoir jouer sur le serveur. Vous allez être expulsé dans 20 secondes"] call public_fnc_error; 
			sleep 20;
			if ((call TFAR_fnc_getTeamSpeakChannelName) != "TaskForceRadio") then
			{
				[] call MySQL_fnc_query_update_disconnect;
				sleep 2;
				["Teamspeak", false, true] call BIS_fnc_endMission;
			};
		};

		_fnc_server =
		{
			["Vous n'êtes pas connecté sur le Teamspeak du serveur. Vous allez être expulsé dans 20 secondes."] call public_fnc_error; 
			sleep 20;
			if (!(["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString)) then
			{
				[] call MySQL_fnc_query_update_disconnect;
				sleep 2;
				["Teamspeak", false, true] call BIS_fnc_endMission;
			};
		};

		_totalSession = 0;
		_salary_time = 5;
		while {true} do
		{
			sleep (60 * 1);
			_totalSession = _totalSession + 1;
			
			if ((_totalSession % 4) isEqualTo 0) then {
				[4] call MySQL_fnc_query_update_usual 
			};

			if ((_totalSession % 5) isEqualTo 0) then {
				[(random(8) * -1)] call public_fnc_handleThirst;
			};
			if ((_totalSession % 6) isEqualTo 0) then {
				[(random(8) * -1)] call public_fnc_handleHunger;
			};
			
			if ((_totalSession % _salary_time) isEqualTo 0) then
			{
				if (g_arrested) then {
					["Vous n'avez pas reçu votre salaire car vous êtes en prison"] call public_fnc_info;
				} else {
		       		g_atm = g_atm + (call g_paycheck);
		       		g_nextPay = time + (_salary_time * 60);
		       		playSound "buy";
		       		["Vous avez reçu votre salaire : <t color='#8cff9b'>%1</t>$", ([(call g_paycheck)] call public_fnc_numberText)] call public_fnc_info;
				};
			};
			
			/*
			if ((call g_adminlevel) isEqualTo 0) then
			{
				if (["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString) then
				{
					if (!((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")) then {
						[] spawn _fnc_channel;
					};
				} else {
					[] spawn _fnc_server;
				};
			};
			*/

			{
				if ((local _x) && ((units _x) isEqualTo [])) then {
					deleteGroup _x;
				};
			} forEach (allGroups);
		};
	};

	diag_log "---------------------------------------------------------------------------------------------------------";
	diag_log format["                End of Client Init :: Total Execution Time %1 seconds ", (diag_tickTime - _timeStamp)];
	diag_log "---------------------------------------------------------------------------------------------------------";
}; 