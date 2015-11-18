/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_bank", ObjNull, [ObjNull]],
	["_door", "", [""]]
]) exitWith {};

systemChat format ["< Robbery System - Debug > robberyStart - OK"];

if (_bank getVariable ["robbed", true, false]) exitWith
{
	["La banque a déjà été braquée, vous pourrez la braquer à nouveau au prochain redémarrage du serveur."] call public_fnc_error;
	breakOut "main";	
};

if (!(getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item") in magazines player)) exitWith
{
	systemChat format ["< Robbery System - Debug > Outil manquant"];

	[(format ["Vous avez besoin de <br/>%1<br/>", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call public_fnc_fetchCfgDetails) select 1])] call public_fnc_error;
	breakOut "main";
}; 

/*if (!(_bank getVariable ["robStarted", false])) then
{
	if ((getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf(cursorTarget) >> "required")) >= (([getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "owner")] call public_fnc_strToSide) countSide allPlayers)) exitWith
	{
		systemChat format ["< Robbery System - Debug > Pas assez de flics connectés"];

		[
			format
			[
				"Il faut au minimum <t color='#CC0000'>%1</t> membres de la <t color='#336600'>%2</t> en service pour pouvoir braquer la banque",
				getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "required"),
				getText(missionConfigFile >> "ALYSIA_FACTIONS" >> getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf(_bank) >> "owner") >> "name")
			]
		] call public_fnc_error;
		breakOut "main";
	};
};*/

if ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name"), getNumber(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "time"), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
{
	switch (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "open")) do
	{
		case "Simple": {_bank animate [getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "door"), 1]};
		case "Sliding": {_bank animate ["LeftSlideDoor", 0]; _bank animate ["RightLeftSlideDoor", 0]};
		case "Drill": {[_bank, _door] spawn public_fnc_robberyProcess};
		case "Vault": {[_bank, _door] spawn public_fnc_robberyProcess};
		case "Security":
		{
			[_bank, false] remoteExec ["TON_fnc_bank_state", 2];
			["Vous avez désactivé le système de sécurité de la banque"] call public_fnc_info;
			_bank setVariable ["hacked", true, true];
			breakOut "main";
		};
	};

	if (!(_bank getVariable ["hacked", false])) then
	{
		if (!(_bank getVariable ["robStarted", false])) then
		{
			[_bank, true] remoteExec ["TON_fnc_bank_state", 2];
			_bank setVariable ["robStarted", true, true];
		};
		
		switch ([getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "owner")] call public_fnc_strToSide) do
		{
			case west:
			{
				[format["Une faille de sécurité a été détectée dans la banque du Nord. %1 a été forcée.", getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name")], "NORTH"] remoteExecCall ["public_fnc_APP_phone_messages_receive", west];
			};
			case east:
			{
				[format["Une faille de sécurité a été détectée dans la banque du Sud. %1 a été forcée.", getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name")], "SOUTH"] remoteExecCall ["public_fnc_APP_phone_messages_receive", east];
			};
		};
	};
};