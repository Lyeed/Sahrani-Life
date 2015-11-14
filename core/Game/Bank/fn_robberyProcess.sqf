/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_bank", ObjNull, [ObjNull]],
	["_door", "", [""]],
	["_tool", ObjNull, [ObjNull]]
]) exitWith {};

systemChat format ["< Robbery System - Debug > robberyProcess - OK"];

private ["_item"];

if (_door isEqualTo "Security") exitWith
{
	if ([(format ["Détournement du système de sécurité", 60, objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
	{
		[_bank, false] call TON_fnc_bank_state;
		_bank setVariable ["hacked", true, true];
		["Vous avez désactivé le système de sécurité de la banque"] call public_fnc_info;
		breakOut "main";
	};
};

if (!(_door isEqualTo "")) then 
{
	player removeMagazine (getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item"));
	_item = ((getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")) createVehicle [0,0,0]);
	_item attachTo [_bank, (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "pos"))];
	_item setDir (getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "rot"));
	_item animate [(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "anim")), 1];
	_item setVariable ["owner", player, true];
	_item setVariable ["bank", _bank, true];
	_item setVariable ["active", true, true];
	_bank setVariable [(getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")), _item, true];
	[_item, _bank, _door] spawn public_fnc_robberyTools;
}
else
{
	_item = _tool;
	if ((_item getVariable ["owner", ObjNull]) isEqualTo player) then
	{
		if ([(format ["Démontage de %1", [(getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "item"))] call public_fnc_fetchCfgDetails]), (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "defuseTime") / 2), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
		{
			player addItem (typeOf _item);
			_bank setVariable [(typeOf _item), ObjNull, true];
			deleteVehicle _item;
		};
	}
	else
	{

		if (!(getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "item") in items player)) exitWith
		{
			[(format ["Vous avez besoin de <br/>%1<br/>", ([getText(missionConfigFile >> "ALYSIA_BANK" >> "doors" >> _door >> "item")] call public_fnc_fetchCfgDetails) select 1])] call public_fnc_error;
		};

		if ([(format ["Désamorçage de %1", [(getNumber(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "item"))] call public_fnc_fetchCfgDetails]), (getText(missionConfigFile >> "ALYSIA_BANK" >> typeOf (_item) >> "defuseTime")), objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress) then
		{
			player addItem (typeOf _item);
			_bank setVariable [(typeOf _item), ObjNull, true];

		if (typeOf _item isEqualTo "Bank_Bomb") then
		{
			[_item, "bankDefused"] call CBA_fnc_globalSay3d;
		};
		
		deleteVehicle _item;
	};
};
