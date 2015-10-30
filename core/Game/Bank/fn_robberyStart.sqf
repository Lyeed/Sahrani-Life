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
	[(format ["Vous devez avoir un(e) %1 pour pouvoir forcer cette porte", getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "itemName" )])] call public_fnc_info;
}; 

if ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name"), getNumber(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "time"), 0, 0, "animation"] call public_fnc_showProgress) then
{
	switch (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "open") do
	{
		case "Simple": {_bank animate [_door, 1]};
		case "SlidingL": {_bank animate [_door, -1.7]};
		case "SlidingR": {_bank animate [_door, 1.7]};
		case "Vault": {
			_bank animate ["Vault_Combination", 1];
			_bank animate ["Vault_RotateUp", 1];
			_bank animate ["Vault_RotateDown", 1];
			_bank animate ["Vault_RotateDown", 1];
			_bank animate ["Vault_TransitionUp", -0.1];
			_bank animate ["Vault_TransitionDown", 0.1];
			_bank animate ["Vault_TransitionLeft", -0.1];
			_bank animate ["Vault_TransitionRight", 0.1];
		};
	};
	
	private ["_alarm","_bankRegion"];
	_bankRegion = [_bank] call public_fnc_getRegion;
	
	if (isNil (_alarm)) then {
		_alarm = "Intel_File1_F" createVehicle [0,0,0];
		_alarm attachTo [_bank, [0, -2, 6.65]];
		[_alarm, "bankalarm"] call CBA_fnc_globalSay3d;		
	};
	
	switch (_bankRegion) do
	{
		case "NORTH":
		{
			/* Envoi du message suivant aux keufs du nord
			Une faille de sécurité a été détectée dans la banque du Nord. La getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name") a été forcée.
			*/
		};
		case "SOUTH":
		{
			/* Envoi du message suivant aux keufs du sud
			Une faille de sécurité a été détectée dans la banque du Nord. La getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "name") a été forcée.
			*/
		};
	};
};
