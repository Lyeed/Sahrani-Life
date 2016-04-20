/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (true) exitWith {["Braquage en cours de dev"] call AlysiaClient_fnc_error};

private["_bank", "_door"];
_bank = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_door = [_this, 1, "", [""]] call BIS_fnc_param;

if (_bank getVariable ["robbed", false]) exitWith {
	["La banque a déjà été braquée"] call AlysiaClient_fnc_error;
};

if (!(getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item") in (magazines player))) exitWith {
	[(format["Vous avez besoin de %1", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call AlysiaClient_fnc_fetchCfgDetails) select 1])] call AlysiaClient_fnc_error;
};

if (!(_bank getVariable ["robStarted", false])) then
{
	if ((getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf(cursorTarget) >> "required")) >= (([getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "owner")] call AlysiaClient_fnc_strToSide) countSide allPlayers)) exitWith
	{
		systemChat format ["< Robbery System - Debug > Pas assez de flics connectés"];

		[
			format
			[
				"Il faut au minimum <t color='#CC0000'>%1</t> membres de la <t color='#336600'>%2</t> en service pour pouvoir braquer la banque",
				getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "required"),
				getText(missionConfigFile >> "ALYSIA_FACTIONS" >> getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "owner") >> "name")
			]
		] call AlysiaClient_fnc_error;
		breakOut "main";
	};
};

if ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name"), getNumber(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "time"), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress) exitWith {};

switch (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "open")) do
{
	case "Simple": {_bank animateSource [getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "door"), 1]};
	case "Drill": {[_bank, _door] spawn AlysiaClient_fnc_robberyProcess};
	case "Vault": {[_bank, _door] spawn AlysiaClient_fnc_robberyProcess};
	case "Sliding":
	{
		_bank animateSource ["LeftSlideDoor", 0];
		_bank animateSource ["RightLeftSlideDoor", 0];
	};
	case "Security":
	{
		[_bank, false] remoteExec ["AlysiaServer_fnc_bank_state", 2];
		["Vous avez désactivé le système de sécurité de la banque"] call AlysiaClient_fnc_info;
		_bank setVariable ["hacked", true, true];
	};
};

if (!(_bank getVariable ["hacked", false])) then
{
	if (!(_bank getVariable ["robStarted", false])) then
	{
		[_bank, true] remoteExec ["AlysiaServer_fnc_bank_state", 2];
		_bank setVariable ["robStarted", true, true];
	};
	
	[
		format
		[
			"Une faille de sécurité a été détectée dans la banque. %1 a été forcée.",
			getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name")
		], "BANK"
	] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", [getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "owner")] call AlysiaClient_fnc_strToSide];
};
