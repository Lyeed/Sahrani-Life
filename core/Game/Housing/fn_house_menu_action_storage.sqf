/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_storage", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

if (!(isNil "gServer_soonReboot") && hasInterface) exitWith {
	["<t align='center'>Vous ne pouvez pas interagir avec votre coffre juste avant le <t color='#B40404'>redémarrage</t> du serveur</t>"] call public_fnc_error;
};

_storage = g_interaction_target getVariable "house_storage_out";
if (isNil "_storage") exitWith {};

if (isNull _storage) then
{
	_storage = createVehicle[getText(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf g_interaction_target) >> "storage"), [0, 0, 0], [], 0, "NONE"];
	_storage setPosATL (g_interaction_target buildingPos getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "storage_building_pos_index"));
	_storage allowDamage false;

	clearWeaponCargoGlobal _storage;
	clearItemCargoGlobal _storage;
	clearMagazineCargoGlobal _storage;
	clearBackpackCargoGlobal _storage;

	_virtual = g_interaction_target getVariable ["house_inv_virtual", []];
	if (!(_virtual isEqualTo [])) then {
		_storage setVariable ["Trunk", _virtual, true];
	};

	_armaStorage = g_interaction_target getVariable ["house_inv_arma", [[],[],[],[]]];

	_weapons = _armaStorage select 0;
	if (!(_weapons isEqualTo [])) then
	{
		{
			_storage addWeaponCargoGlobal [_x, (_weapons select 1) select _forEachIndex];
		} foreach (_weapons select 0);
	};

	_magazines = _armaStorage select 1;
	if (!(_magazines isEqualTo [])) then
	{
		{
			_storage addMagazineCargoGlobal [_x, (_magazines select 1) select _forEachIndex];
		} foreach (_magazines select 0);
	};

	_items = _armaStorage select 2;
	if (!(_items isEqualTo [])) then
	{
		{
			_storage addItemCargoGlobal [_x, (_items select 1) select _forEachIndex];
		} foreach (_items select 0);
	};

	_backpack = _armaStorage select 3;
	if (!(_backpack isEqualTo [])) then
	{
		{
			_storage addBackpackCargoGlobal [_x, (_backpack select 1) select _forEachIndex];
		} foreach (_backpack select 0);
	};

	g_interaction_target setVariable ["house_storage_out", _storage, true];
	if (hasInterface) then {
		["<t color='#FF8000'>coffre</t> sortie"] call public_fnc_info;
	};
} else {
	g_interaction_target setVariable ["house_inv_virtual", (_storage getVariable ["Trunk", []]), true];
	g_interaction_target setVariable ["house_inv_arma", ([getWeaponCargo _storage, getMagazineCargo _storage, getItemCargo _storage, getBackpackCargo _storage]), true];
	deleteVehicle _storage;
	if (hasInterface) then {
		["<t color='#FF8000'>coffre</t> rangé"] call public_fnc_info;
	};
};
