/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_station"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _station) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

private ["_typeRefuel"];
_typeRefuel = player getVariable "typeRefuel";

if (isNil "_typeRefuel") then
{
	private ["_combo","_index"];
	if (!(createDialog "RscDisplayFuelStation")) exitWith {};

	disableSerialization;
	_display = findDisplay 16000;
	if (isNull _display) exitWith {};

	_combo = (_display displayCtrl 16004);
	{
		_index = _combo lbAdd format ["%1", (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _x >> "name"))];
		_combo lbSetData [_index, (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _x))];
		_combo lbSetPicture [_index, (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _x >> "picture"))];
	} forEach ["Diesel", "SP95", "SP98", "Kerosene", "GPL"];

	(_display displayCtrl 16010) ctrlSetStructuredText parseText format ["<t align='right'>%1</t>", (_station getVariable [(_combo lbData 0), 250])];

	if ((_station getVariable [(lbCurSel _combo), 0]) > 0) then {(_display displayCtrl 16014) ctrlEnable true} else {(_display displayCtrl 16014) ctrlEnable false};

	while {dialog} do
	{
		(_display displayCtrl 16008) ctrlSetStructuredText parseText format ["<t align='center' size='2'>%1</t>", (getNumber(missionConfigFile) >> "ALYSIA_FUEL" >> "fuels" >> (_combo lbData 0) >> price)];
		sleep 0.5;
	};
} else {
	_vehicle = cursorTarget;
	if (isNil "_typeRefuel") exitWith {};
	if ((isNull _station) || ((player distance _station) < 10)) exitWith {["Vous êtes trop loin de la pompe à essence."] call public_fnc_error};
	if (!(_vehicle in g_vehicles)) exitWith {["Vous n'avez pas les clées de ce véhicule."] call public_fnc_error};
	if (isEngineOn _vehicle) exitWith {["Veuillez couper le moteur du véhicule avant de faire le plein."] call public_fnc_error};
	if ((fuel vehicle player) isEqualTo 1) then {["Le réservoir du véhicule est déjà rempli."] call public_fnc_error};

	if (!(createDialog "RscDisplayRefuel")) exitWith {};

	disableSerialization;
	_display = findDisplay 17000;
	if (isNull _display) exitWith {};

	private ["_bill","_progress","_fuel"];
	_bill = 0;

	while {dialog} do
	{
		if (_station getVariable [(player getVariable ["typeRefuel", ""]), 250] < 1) exitWith
		{
			[format["Les réservoirs en %1 de cette station essence sont vides.", (getText(missionConfigFile) >> "ALYSIA_FUEL" >> "fuels" >> _x >> "name")]] call public_fnc_error;
			closeDialog 0;
		};

		if ((_bill + [_station, (player getVariable [])] call public_fnc_fuelPrice) > g_cash) exitWith
		{
			["Vous n'avez pas assez d'argent sur votre compte pour pouvoir faire le plein."] call public_fnc_error;
			closeDialog 0;		
		};

		_vehicle setFuel ((fuel _vehicle) + 0.1);
		_bill = (_bill + [_station, (player getVariable ["typeRefuel", ""])] call public_fnc_fuelPrice);
		_fuel = ([_vehicle] call public_fnc_fetchVehInfo select 12);

		// (_display displayCtrl 17015) ctrlSetStructuredText parseText format ["%1/%2 Litres", (_vehicle fuel * _fuel), _fuel];
		(_display displayCtrl 17008) ctrlSetStructuredText parseText format ["<t size ='2' align='center'>%1</t>", _bill];
		(_display displayCtrl 17010) ctrlSetStructuredText parseText format ["<t align='right'>%1</t>", (_station getVariable [(player getVariable ["typeRefuel", ""]), 250])];

		sleep 0.1;
	};
	[false, _bill, "Station Essence"] call public_fnc_handleATM;
};
