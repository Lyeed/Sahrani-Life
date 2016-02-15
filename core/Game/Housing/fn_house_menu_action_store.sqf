/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_trunk", "_types", "_distance", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

if (g_garage_store) exitWith {
	["Vous êtes déjà en train de ranger un véhicule<br/>Veuillez patienter"] call AlysiaClient_fnc_error;
};

_types = getArray(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_target) >> "garage" >> "types");
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
	if (!(isNull _x)) then
	{
		if (alive _x) then
		{
			if ((_target distance _x) <= _distance) exitWith {
				_vehicle = _x;
			};
		};
	};
} forEach g_vehicles;
if (isNil "_vehicle") exitWith {
	["Aucun véhicule stationné près du garage ne vous appartient"] call AlysiaClient_fnc_error;
};
if (isNull _vehicle) exitWith {
	["Impossible de récupérer les informations de votre véhicule"] call AlysiaClient_fnc_error;
};
if (_vehicle getVariable ["trunk_in_use", false]) exitWith {
	["Vous ne pouvez pas ranger un véhicule lorsque son coffre est en train d'être fouillé"] call AlysiaClient_fnc_error;
};
if (!((crew _vehicle) isEqualTo [])) exitWith {
	["Vous ne pouvez pas ranger un véhicule contenant des passagers ou un conducteur"] call AlysiaClient_fnc_error;
};
if ((speed _vehicle) > 0) exitWith {
	["Vous ne pouvez pas ranger un véhicule qui se déplace"] call AlysiaClient_fnc_error;
};
if (isEngineOn _vehicle) exitWith {
	["Vous ne pouvez pas ranger un véhicule ayant le moteur allumé"] call AlysiaClient_fnc_error;
};

g_garage_store = true;

[_vehicle, (getPos _target), false] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
if (g_garage_store) then
{
	waitUntil {(isNull _vehicle)};
	["Vous avez rangé votre véhicule"] call AlysiaClient_fnc_info;
};

g_garage_store = false;
