/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_price", "_validSpawn", "_spawnPos", "_vehicle", "_plate"];

if ((time - g_action_delay) < 1) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

_sel = lbCurSel 2302;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule à acheter"] call public_fnc_error;
};

_price = lbValue[2302, _sel];;
if (_price isEqualTo 0) exitWith {
	["Ce véhicule n'a pas de prix de vente"] call public_fnc_error;
};

if (_price > g_cash) exitWith {
	["Vous n'avez pas assez d'argent"] call public_fnc_error;
};

{
	if ((nearestObjects[(getMarkerPos _x), ["Car", "Air", "Ship", "Tank", "Truck"], 10]) isEqualTo []) exitWith {
		_validSpawn = _x;
	};
} forEach (g_veh_shop);
if (isNil "_validSpawn") exitWith {
	["Aucun emplacement de sortie de véhicule n'est libre"] call public_fnc_error;
};

g_action_delay = time;
g_cash = g_cash - _price;
playSound "buy";
closeDialog 0;

_spawnPos = getMarkerPos _validSpawn;
_vehicle = createVehicle [(lbData[2303, (lbCurSel 2303)]), _spawnPos, [], 0, "NONE"];
waitUntil {!(isNil "_vehicle")};
_vehicle allowDamage false;

_vehicle lock 2;
_vehicle setVectorUp (surfaceNormal _spawnPos);
_vehicle setDir (markerDir _validSpawn);
_vehicle setPos _spawnPos;

[_vehicle, playerSide] call public_fnc_clearVehicleAmmo;
g_vehicles pushBack _vehicle;

_plate = round(random(1000000));
_vehicle setVariable ["info", [(getPlayerUID player), (player getVariable ["realname", profileName]), _plate, 1], true];
_vehicle allowDamage true;

[player, _vehicle, _plate, g_cash] remoteExec ["TON_fnc_vehicleCreate", 2];