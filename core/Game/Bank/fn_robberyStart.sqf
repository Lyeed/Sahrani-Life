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

if (!(getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item") in items player)) exitWith
{
	[(format ["Vous avez besoin de <br/>%1<br/>", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call public_fnc_fetchCfgDetails) select 1])] call public_fnc_error;
}; 

if (!(_bank getVariable ["robStarted", false])) then
{
	if ((([getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "owner" )] call public_fnc_strToSide) countSide allPlayers) < (getNumer(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "required"))) then
	{
		[(format "Il faut au minimum <t color='RED'>%1</t> membres de la <t color='DARKGREEN'>%1</t> en service pour pouvoir braquer la banque", (getNumer(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "required")), getText(missionConfigFile >> "ALYSIA_FACTIONS" >> getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "owner" ) >> "name" ))] call public_fnc_error;
	}
	else {_bank setVariable ["robStarted", true, true]};
};

if ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name"), getNumber(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "time"), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
{
	switch (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "open") do
	{
		case "Simple": {_bank animate [_door, 1]};
		case "SlidingL": {_bank animate [_door, -1.7]};
		case "SlidingR": {_bank animate [_door, 1.7]};
		case "Security": {_bank setVariable ["hacked", true, true]};
		case "Drill": {[_bank, _door] call public_fnc_robberyProcess};
		case "Vault": {[_bank, _door] call public_fnc_robberyProcess};
	};

	if (!(_bank getVariable ["hacked", false])) then
	{
		private ["_alarm","_bankRegion"];
		
		if (isNull (_bank getVariable ["alarm", objNull])) then
		{
			_alarm = "Intel_File1_F" createVehicle [0,0,0];
			_alarm attachTo [_bank, [0, -2, 6.65]];
			[_alarm, "bankAlarm"] call CBA_fnc_globalSay3d;
			_bank setVariable ["alarm", _alarm, true];	
		};
		
		switch (([getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_bank) >> "owner" )] call public_fnc_strToSide)) do
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
