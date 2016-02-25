/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_storeInventory", "_storePos", "_pay", "_distance"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_storeInventory = [_this, 1, true, [true]] call BIS_fnc_param;
_storePos = [_this, 2, [], [[]]] call BIS_fnc_param;
_pay = [_this, 3, true, [true]] call BIS_fnc_param;
_distance = [_this, 4, 10, [10]] call BIS_fnc_param;

if (g_garage_store) exitWith {
	["Vous êtes déjà en train de ranger un véhicule."] call AlysiaClient_fnc_error;
};
if (isNull _vehicle) exitWith {
	["Impossible de récupérer les informations de votre véhicule."] call AlysiaClient_fnc_error;
};
if ((_storePos distance _vehicle) > _distance) exitWith {
	["Le véhicule est trop loin pour être rangé au garage."] call AlysiaClient_fnc_error;
};
if (_vehicle getVariable ["trunk_in_use", false]) exitWith {
	["Vous ne pouvez pas ranger un véhicule lorsque son coffre est en train d'être fouillé."] call AlysiaClient_fnc_error;
};
if (!((crew _vehicle) isEqualTo [])) exitWith {
	["Vous ne pouvez pas ranger un véhicule contenant des passagers ou un conducteur."] call AlysiaClient_fnc_error;
};
if ((speed _vehicle) > 0) exitWith {
	["Vous ne pouvez pas ranger un véhicule qui se déplace."] call AlysiaClient_fnc_error;
};
if (isEngineOn _vehicle) exitWith {
	["Vous ne pouvez pas ranger un véhicule ayant le moteur allumé."] call AlysiaClient_fnc_error;
};

if (_storeInventory) then
{
	if (_pay) then
	{
		_price = round((([(_vehicle getVariable ["Trunk", []])] call AlysiaClient_fnc_weightGenerate) + 2) * 75);
		if (_price > 0) then
		{
			if (g_atm > _price) then
			{
				[false, _price, format["Inventaire véhicule (%1)", getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName")]] call AlysiaClient_fnc_handleATM;
				playSound "buy";
				g_garage_store = true;
				[_vehicle, _storePos, true] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
			} else {
				[format["Vous n'avez pas assez d'argent sur votre compte pour payer la facture du garage, vous demandant <t color='#8cff9b'>%1</t>kn pour stocker vos objets", ([_price] call AlysiaClient_fnc_numberText)]] call AlysiaClient_fnc_error;
			};
		} else {
			g_garage_store = true;
			[_vehicle, _storePos, true] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
		};
	} else {
		g_garage_store = true;
		[_vehicle, _storePos, true] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
	};
} else {
	g_garage_store = true;
	[_vehicle, _storePos, false] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
};

if (g_garage_store) then
{
	waitUntil {(isNull _vehicle)};
	["Vous avez rangé votre véhicule."] call AlysiaClient_fnc_info;
	g_garage_store = false;
};
