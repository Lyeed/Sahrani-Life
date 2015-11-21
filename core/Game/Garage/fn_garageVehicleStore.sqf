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
	if ((alive _x) && (_x in g_vehicles)) exitWith {
		_vehicle = _x;
	};
} forEach (nearestObjects[_PNJ, _types, _distance]);
if (isNil "_vehicle") exitWith {
	["Vous n'avez les clées d'aucun véhicule stationné près du garage"] call public_fnc_error;
};
if (isNull _vehicle) exitWith {
	["Impossible de récupérer les informations de votre véhicule"] call public_fnc_error;
};
if (_vehicle getVariable ["trunk_in_use", false]) exitWith {
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

_trunk = _vehicle getVariable ["Trunk", []];
if (_trunk isEqualTo []) then
{
	g_garage_store = true;
	[_vehicle, (getPos _PNJ), false] remoteExec ["TON_fnc_garageVehicleStore", 2];
} else {
	private["_illegal", "_price"];
	_illegal = 0;
	{
		if ([(_x select 0)] call public_fnc_itemIsIllegal) then {
			_illegal = _illegal + 1;
		};
	} forEach (_trunk);
	_price = round((([_trunk] call public_fnc_weightGenerate) * 75) * (_illegal + 1));
	if (_price < g_atm) then
	{
		_action = 
		[
			format
			[
				"Le coffre de votre véhicule n'est pas vide, le ranger avec sa cargaison coûte <t color='#8cff9b'>%1</t>kn<br/><t color='#FF8000'>Voulez-vous continuer ?</t>", 
				([_price] call public_fnc_numberText)
			],
			getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"),
			"Oui",
			"Non"
		] call BIS_fnc_guiMessage;
		if (_action) then
		{
			if (!(isNull _vehicle)) then
			{
				if ((player distance _vehicle) < _distance) then
				{
					[false, _price, format["Inventaire véhicule (%1)", getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName")]] call public_fnc_handleATM;
					g_garage_store = true;
					[_vehicle, (getPos _PNJ), false] remoteExec ["TON_fnc_garageVehicleStore", 2];				
				} else {
					["Le véhicule est trop loin pour être rangé au garage"] call public_fnc_error;
				};
			};
		};
	} else {
		[format["Vous n'avez pas assez d'argent pour ranger votre véhicule avec sa cargaison<br/><t align='left'>Prix</t><t color='#8cff9b' align='right'></t>"]] call public_fnc_error;
	};
};

if (g_garage_store) then
{
	waitUntil {(isNull _vehicle)};
	["Vous avez rangé votre véhicule"] call public_fnc_info;
	g_garage_store = false;
};