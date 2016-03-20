/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_storage", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

if (!(isNil "gServer_soonReboot") && hasInterface) exitWith {
	["<t align='center'>Vous ne pouvez pas interagir avec votre coffre juste avant le <t color='#B40404'>redémarrage</t> du serveur</t>."] call AlysiaClient_fnc_error;
};

_storage = _target getVariable "house_storage_out";
if (isNil "_storage") exitWith {
	["Votre maison n'est pas équipée d'un coffre."] call AlysiaClient_fnc_error;
};

uiSleep((random(1)) + 0.5);

if ((_target getVariable "house_storage_out") != _storage) exitWith {
	["Action annulée.<br/>Le coffre est en train d'être utilisé par quelqu'un d'autre."] call AlysiaClient_fnc_error;
};

if (isNull _storage) then
{
	_storage = createVehicle[getText(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf _target) >> "storage" >> "type"), [0, 0, 0], [], 0, "NONE"];
	_storage setPosATL (_target buildingPos getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_target) >> "storage_building_pos_index"));
	_target setVariable ["house_storage_out", _storage, true];

	clearWeaponCargoGlobal _storage;
	clearItemCargoGlobal _storage;
	clearMagazineCargoGlobal _storage;
	clearBackpackCargoGlobal _storage;

	_virtual = _target getVariable ["house_inv_virtual", []];
	if (!(_virtual isEqualTo [])) then {_storage setVariable ["Trunk", _virtual, true]};

	_armaStorage = _target getVariable ["house_inv_arma", [[],[],[],[]]];

	_weapons = _armaStorage select 0;
	if (!(isNil "_weapons")) then
	{
		if (!(_weapons isEqualTo [])) then
		{
			{
				_storage addWeaponCargoGlobal [_x, (_weapons select 1) select _forEachIndex];
			} foreach (_weapons select 0);
		};
	};

	_magazines = _armaStorage select 1;
	if (!(isNil "_magazines")) then
	{
		if (!(_magazines isEqualTo [])) then
		{
			{
				_storage addMagazineCargoGlobal [_x, (_magazines select 1) select _forEachIndex];
			} foreach (_magazines select 0);
		};
	};

	_items = _armaStorage select 2;
	if (!(isNil "_items")) then
	{
		if (!(_items isEqualTo [])) then
		{
			{
				_storage addItemCargoGlobal [_x, (_items select 1) select _forEachIndex];
			} foreach (_items select 0);
		};
	};

	_backpack = _armaStorage select 3;
	if (!(isNil "_backpack")) then
	{
		if (!(_backpack isEqualTo [])) then
		{
			{
				_storage addBackpackCargoGlobal [_x, (_backpack select 1) select _forEachIndex];
			} foreach (_backpack select 0);
		};
	};

	["<t color='#FF8000'>Coffre</t> sortie."] call AlysiaClient_fnc_info;
	while {!(isNull _storage)} do
	{
		if ((_target getVariable "house_storage_out") != _storage) exitWith	{deleteVehicle _storage};
		uiSleep 0.5;
	};
} else {
	if ((_storage getVariable ["trunk_in_use_ID", ""]) isEqualTo "") then
	{
		_target setVariable ["house_inv_virtual", (_storage getVariable ["Trunk", []]), true];
		_target setVariable ["house_inv_arma", ([getWeaponCargo _storage, getMagazineCargo _storage, getItemCargo _storage, getBackpackCargo _storage]), true];
		deleteVehicle _storage;
		["<t color='#FF8000'>Coffre</t> rangé."] call AlysiaClient_fnc_info;
	} else {
		["Vous ne pouvez pas ranger le coffre pendant que quelqu'un le fouille."] call AlysiaClient_fnc_error;
	};
};
