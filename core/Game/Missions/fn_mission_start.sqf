/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_data", "_position", "_time", "_try"];

_data = getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_start") call BIS_fnc_selectRandom;
_position = _data select 0;

_time = round(round(random(20)) * 60) + 4;
[format[
		"La livraison arrivera en <t color='#04B45F'>%1</t> dans <t color='#FF8000'>%2</t>.<br/>Merci de ne pas déconnecter tant que le convoi n'est pas arrivé",
		(mapGridPosition _position),
		[_time, "H:MM:SS"] call CBA_fnc_formatElapsedTime
	]
] call public_fnc_error;
sleep _time;

_try = 1;
while {(count(nearestObjects[_position, ["Car", "Air", "Ship", "Truck", "Tank"], 10]) > 0)} do
{
	[format["Un véhicule bloque l'apparition du camion.<br/>Tentative n°%1<br/>Essaie dans 10 secondes...", _try]] call public_fnc_error;
	sleep 10;
};

_vehicle = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "mission_vehicle") createVehicle _position;
_vehicle setDir (_data select 1);
[_vehicle] call public_fnc_clearVehicleAmmo;
[_vehicle, 2] remoteExecCall ["lock", _vehicle];

for "_i" from 0 to (round(random(40)) + 10) do
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
				_vehicle addMagazineCargoGlobal [_item, 3];
			};
			case "Backpacks": {
				_vehicle addBackpackCargoGlobal [_item, 1];
			};
			case "Items": {
				_vehicle addItemCargoGlobal [_item, 1];
			};
		};
	};
};
