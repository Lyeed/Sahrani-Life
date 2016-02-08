/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_data", "_position", "_time", "_try"];

if (call compile format["!(isNil ""gServer_faction_%1_mission"")", str(playerSide)]) exitWith {
	["Votre faction a déja effectuée une mission"] call AlysiaClient_fnc_error;
};

_time = round(random(20) * 60) + (4 * 60);
if (((gServer_rebootHour * 60) - serverTime) < _time) exitWith {
	[format[
		"Le serveur redémarre dans %1<br/>Le temps de livraison est de %2<br/>Impossible de démarrer la mission",
		[(gServer_rebootHour * 60) - serverTime, "H:MM:SS"] call CBA_fnc_formatElapsedTime,
		[_time, "H:MM:SS"] call CBA_fnc_formatElapsedTime
	]] call AlysiaClient_fnc_error;
};

_data = getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_start") call BIS_fnc_selectRandom;
_position = _data select 0;
call compile format["gServer_faction_%1_mission=true; publicVariable""gServer_faction_%1_mission"";", str(playerSide)];

[
	format
	[
		"La livraison arrivera en <t color='#04B45F'>%1</t> dans <t color='#FF8000'>%2</t>.<br/>Merci de ne pas quitter l'île tant que le convoi n'est pas arrivé.",
		(mapGridPosition _position),
		[_time, "H:MM:SS"] call CBA_fnc_formatElapsedTime
	],
	"LIVRAISON"
] call AlysiaClient_fnc_phone_message_receive;

sleep _time;

_try = 1;
while {(count(nearestObjects[_position, ["Car", "Air", "Ship", "Truck", "Tank"], 10]) > 0)} do
{
	[format["Un véhicule bloque l'apparition du camion.<br/>Tentative n°%1<br/>Essaie dans 10 secondes...", _try]] call AlysiaClient_fnc_error;
	sleep 10;
};

[
	format
	[
		"La livraison est arrivée en <t color='#04B45F'>%1</t>.",
		(mapGridPosition _position)
	],
	"LIVRAISON"
] call AlysiaClient_fnc_phone_message_receive;

_vehicle = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_vehicle") createVehicle _position;
_vehicle setDir (_data select 1);
[_vehicle] call AlysiaClient_fnc_clearVehicleAmmo;

if (local _vehicle) then {
	_vehicle lock 2;
} else {
	[_vehicle, 2] remoteExecCall ["lock", _vehicle];	
};

for "_i" from 0 to (round(random(30)) + 10) do
{
	_type = getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_items") call BIS_fnc_selectRandom;
	if (!((_type select 1) isEqualTo [])) then
	{
		_item = (_type select 1) call BIS_fnc_selectRandom;
		switch (_type select 0) do
		{
			case "Weapons": {
				_vehicle addWeaponCargoGlobal [_item, 1];
			};
			case "Magazines": {
				_vehicle addMagazineCargoGlobal [_item, round(random(3)) + 1];
			};
			case "Backpacks": {
				_vehicle addBackpackCargoGlobal [_item, 1];
			};
			case "Items": {
				_vehicle addItemCargoGlobal [_item, 1];
			};
			case "Virtual": {
				[true, _vehicle, "Trunk", _item, round(random(2)) + 1] call AlysiaClient_fnc_handleTrunk;
			};
		};
	};
};
