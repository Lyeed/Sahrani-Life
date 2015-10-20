/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_PNJ", "_trunk", "_types", "_distance"];
_PNJ = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_types = [_this, 3, ["Car"], [[]]] call BIS_fnc_param;

if (isNull _PNJ) exitWith {};
if (g_garage_store) exitWith {
	["Vous êtes déjà en train de ranger un véhicule<br/>Veuillez patienter"] call public_fnc_error;
};

if ("Air" in _types) then {
	_distance = 95;
};
if ("Ship" in _types) then { 
	_distance = 130;
};
if (isNil "_distance") then {
	_distance = 40;
};

{
	if (alive _x) then
	{
		_vehData = _x getVariable["vehicle_info_owners", []];
		if (!(_vehData isEqualTo [])) then
		{
			if ((getPlayerUID player) isEqualTo (_vehData select 0)) exitWith {
				_vehicle = _x;
			};
		};
	};
} forEach (nearestObjects[_PNJ, _types, _distance]);
if (isNil "_vehicle") exitWith {
	["Aucun véhicule stationné près du garage ne vous appartient"] call public_fnc_error;
};
if (isNull _vehicle) exitWith {
	["Impossible de récupérer les informations de votre véhicule"] call public_fnc_error;
};
if (_vehicle getVariable["trunk_in_use", false]) exitWith {
	["Vous ne pouvez pas ranger un véhicule lorsque son coffre est en train d'être fouillé"] call public_fnc_error;
};
if (!((crew _vehicle) isEqualTo [])) exitWith {
	["Vous ne pouvez pas ranger un véhicule contenant des passagers ou un conducteur"] call public_fnc_error;
};
if ((speed _vehicle) > 0) exitWith {
	["Vous ne pouvez pas ranger un véhicule qui se déplace"] call public_fnc_error;
};
if (isEngineOn _vehicle) exitWith {
	["Vous ne pouvez pas ranger un véhicule ayant le moteur allumé"] call public_fnc_error;
};

_trunk = _vehicle getVariable["Trunk", [[], 0]];
if ((_trunk select 0) isEqualTo []) then
{
	g_garage_store = true;
	[_vehicle, false, player, (getPos _PNJ)] remoteExec ["TON_fnc_vehicleStore", 2, false];
} else {
	private["_illegal", "_price", "_control", "_display"];
	_illegal = 0;
	{
		if ([(_x select 0)] call public_fnc_itemIsIllegal) then {
			_illegal = _illegal + 1;
		};
	} forEach (_trunk select 0);
	_price = round(((_trunk select 1) * 75) * (_illegal + 1));
	createDialog "ALYSIA_trunkStore";
	((findDisplay 30600) displayCtrl 30601) ctrlSetStructuredText parseText format["<t color='#8cff9b' align='center'>%1</t><t align='right'>$</t>", ([_price] call public_fnc_numberText)];
	((findDisplay 30600) displayCtrl 30602) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"))];
	waitUntil {isNull (findDisplay 30600)};
	if (!(isNil "g_storeTrunk")) then
	{
		if ((player distance _vehicle) > _distance) exitWith {
			["Le véhicule est trop loin pour être rangé au garage"] call public_fnc_error;
		};
		if (!g_storeTrunk) then
		{
			g_garage_store = true;
			_vehicle setVariable["trunk", [[], 0], true];
			[_vehicle, (getPos _PNJ), false] remoteExec ["TON_fnc_garageVehicleStore", 2, false];
		} else {
			if (_price > g_cash) exitWith
			{
				["Vous n'avez pas assez d'argent pour ranger votre véhicule avec sa cargaison"] call public_fnc_error;
			};
			g_garage_store = true;
			[_vehicle, (getPos _PNJ), false] remoteExec ["TON_fnc_garageVehicleStore", 2, false];
		};
	};
};

if (g_garage_store) then
{
	waitUntil {(isNull _vehicle)};
	["Vous avez rangé votre véhicule"] call public_fnc_info;
};

g_garage_store = false;
g_storeTrunk = nil;