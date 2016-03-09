/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_data", "_vehicleClassname", "_vehicleGaragePosition", "_price", "_validSpawn", "_vehicle", "_spawnPos", "_action", "_hitpoints"];

if (!(isNil "gServer_soonReboot")) exitWith
{
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour sortir un véhicule"] call AlysiaClient_fnc_error;
	closeDialog 0;
};

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call AlysiaClient_fnc_error;
};

_data = g_garage_vehicles select _index;
_vehicleClassname = _data select 0;

_vehicleGaragePosition = [_data select 6, _data select 7, _data select 8];
_price = ([_vehicleClassname] call AlysiaClient_fnc_fetchVehInfo) select 17;

if (
		!(_vehicleGaragePosition isEqualTo [0, 0, 0]) && 
		(
			((_vehicleGaragePosition distance (getMarkerPos "fourriere_NORTH")) < 10)
				||
			((_vehicleGaragePosition distance (getMarkerPos "fourriere_SOUTH")) < 10)
		)
	) then {
	private["_price_fourriere"];
	_price_fourriere = _price * 2.5;
	_action =
	[
		format
		[
				"Votre véhicule se trouve à la <t color='#FF8000'>fourrière</t>.<br/>"
			+	"Vous devez payer <t color='#8cff9b'>%1</t>kn pour le récupérer.<br/>"
			+	"Details :<br/>"
			+	"Price de garage initial - <t color='#8cff9b'>%2</t>kn<br/>"
			+	"Supplément de la fourrière - <t color='#8cff9b'>%3</t>kn",
			[_price + _price_fourriere] call AlysiaClient_fnc_numberText,
			[_price] call AlysiaClient_fnc_numberText,
			[_price_fourriere] call AlysiaClient_fnc_numberText
		],
		"Fourrière",
		"Payer",
		"Quitter"
	] call BIS_fnc_guiMessage;
	_price = _price + _price_fourriere;
} else {
	_action = true;
};

if (!_action) exitWith {};

if (g_atm < _price) exitWith
{
	[
		format
		[
				"Vous n'avez pas assez d'argent dans votre compte en banque<br/>"
			+	"Prix : <t color='#ff8c8c'>%1</t>kn"
			+	"Manquant : <t color='#ff8c8c'>%2</t>kn",
			[_price] call AlysiaClient_fnc_numberText,
			[_price - g_atm] call AlysiaClient_fnc_numberText
		]
	] call AlysiaClient_fnc_error;
};

if ((g_garage_info select 2) isEqualTo []) then
{
	if (!(isNull g_interaction_target)) then
	{
		_position = (position g_interaction_target) findEmptyPosition [((((boundingBox g_interaction_target) select 1) select 0) + 3), ((((boundingBox g_interaction_target) select 1) select 0) + 35), _vehicleClassname];
		if ((nearestObjects[_position, ["Car", "Air", "Ship", "Truck", "Tank"], 7]) isEqualTo []) exitWith {
			_validSpawn = _x;
		};
	};
} else {
	{
		if ((nearestObjects[(getMarkerPos _x), ["Car", "Air", "Ship", "Truck", "Tank"], 7]) isEqualTo []) exitWith {
			_validSpawn = _x;
		};
	} forEach (g_garage_info select 2);	
};
if (isNil "_validSpawn") exitWith {["Aucun emplacement de sortie de véhicule n'est libre"] call AlysiaClient_fnc_error};

[false, _price, format["Sortie véhicule (%1)", (_data select 5)]] call AlysiaClient_fnc_handleATM;

_spawnPos = getMarkerPos _validSpawn;
_vehicle = createVehicle [_vehicleClassname, _spawnPos, [], 0, "NONE"];
waitUntil {!isNil "_vehicle" && {!isNull _vehicle}};
[_vehicle] call AlysiaClient_fnc_clearVehicleAmmo;

_vehicle setPos _spawnPos;
_vehicle setVectorUp (surfaceNormal _spawnPos);
_vehicle setDir (markerDir _validSpawn);
_vehicle lock 2;

_hitpoints = ([_vehicle] call AlysiaClient_fnc_getAllHitPointsDamage) select 0;

{
	if ((_x > 0) && ((_hitpoints select _forEachIndex) != "")) then
	{
		if (local _vehicle) then {
			_vehicle setHitIndex [_forEachIndex, _x];
		} else {
			[_vehicle, [_forEachIndex, _x]] remoteExecCall ["setHitIndex", _vehicle];
		};
	};
} forEach (_data select 10);

[format["Vous avez récupéré : <t color='#FF8000'>%1</t>.", (lbText[2802, (lbCurSel 2802)])]] call AlysiaClient_fnc_info;
[(_data select 1), _vehicle, player] remoteExec ["AlysiaServer_fnc_garageVehicleSpawn", 2];

if (!((_data select 4) isEqualTo [])) then {
	_vehicle setVariable ["Trunk", (_data select 4), true];
};

if ((_data select 11) != "") then {
	_vehicle setVariable ["typeRefuel", (_data select 11), true];
};

_vehicle setVariable ["info", [(getPlayerUID player), (player getVariable ["realname", profileName]), (_data select 1), (_data select 2)], true];
_vehicle setFuel ((_data select 3) / 100);

g_vehicles pushBack _vehicle;
closeDialog 0;
