/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_storage", "_target", "_config", "_virtual", "_armaStorage", "_weapons", "_magazines", "_items", "_backpack"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action.<br/>Veuillez patienter."] call AlysiaClient_fnc_error;
};
if (!(isNil "gServer_soonReboot") && hasInterface) exitWith {
	["Vous ne pouvez pas interagir avec votre coffre juste avant le <t color='#B40404'>redémarrage</t> du serveur."] call AlysiaClient_fnc_error;
};

g_action_inUse = true;
if (count(attachedObjects _target) isEqualTo 0) then
{
	_config = missionConfigFile >> "ALYSIA_COMPANIES" >> "types" >> ((_target getVariable "company_info") select 2) >> "storage";

	_storage = createVehicle [getText(_config >> "type"), [0, 0, 0], [], 0, "NONE"];

	clearWeaponCargoGlobal _storage;
	clearItemCargoGlobal _storage;
	clearMagazineCargoGlobal _storage;
	clearBackpackCargoGlobal _storage;

	_array = getArray(_config >> "modelPos");
	_storage attachTo [_target, [(_array select 0), (_array select 1), (_array select 2) + 0.6]];

	_virtual = _target getVariable ["company_inv_virtual", []];
	if (count(_virtual) > 0) then {
		_storage setVariable ["Trunk", _virtual, true];
	};

	_armaStorage = _target getVariable ["company_inv_arma", [[],[],[],[]]];

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
	_target spawn
	{
		while {!(isNull _this)} do
		{
			if (count(attachedObjects _this) > 1) then
			{
				{
					if (_forEachIndex > 0) then
					{
						detach _x;
						deleteVehicle _x;
					};
				} forEach (attachedObjects _this);
			};

			uiSleep 0.5;
		};
	};
} else {
	_storage = (attachedObjects _target) select 0;
	if ((_storage getVariable ["trunk_in_use_ID", ""]) isEqualTo "") then
	{
		_target setVariable ["company_inv_virtual", (_storage getVariable ["Trunk", []]), true];
		_target setVariable ["company_inv_arma", ([getWeaponCargo _storage, getMagazineCargo _storage, getItemCargo _storage, getBackpackCargo _storage]), true];
		detach _storage;
		deleteVehicle _storage;
		["<t color='#FF8000'>Coffre</t> rangé."] call AlysiaClient_fnc_info;
	} else {
		["Vous ne pouvez pas ranger le coffre pendant que quelqu'un le fouille."] call AlysiaClient_fnc_error;
	};
};

g_action_inUse = false;
