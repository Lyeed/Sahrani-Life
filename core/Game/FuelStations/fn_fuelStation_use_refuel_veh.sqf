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

if ((isNil "_typeRefuel") || {_typeRefuel isEqualTo ""}) then
{
	private ["_combo","_index","_ressourceName"];
	if (!(createDialog "RscDisplayFuelStation")) exitWith {};

	disableSerialization;
	_display = findDisplay 16000;
	if (isNull _display) exitWith {};

	_combo = (_display displayCtrl 16004);
	{
		_fuelName = configName _x;
		_index = _combo lbAdd format ["%1", (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuelName >> "name"))];
		_combo lbSetData [_index, (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuelName))];
		_combo lbSetPicture [_index, (getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuelName >> "picture"))];
	} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_FUEL" >> "fuels"));
};
/* else {
	_vehicle = cursorTarget;
	if (isNil "_typeRefuel") exitWith {};
	if (!(_vehicle in g_vehicles)) exitWith {["Vous n'avez pas les clées de ce véhicule."] call public_fnc_error};
	if (isEngineOn _vehicle) exitWith {["Veuillez couper le moteur du véhicule."] call public_fnc_error};
	if ((fuel vehicle player) isEqualTo 1) then {["Le réservoir du véhicule est déjà rempli."] call public_fnc_error};

	if (!(createDialog "RscDisplayRefuel")) exitWith {};

	disableSerialization;
	_display = findDisplay 17000;
	if (isNull _display) exitWith {};

	private ["_bill","_progress","_fuel"];
	_bill = 0;

	while {findDisplay 16000} do
	{
		if (_station getVariable [(player getVariable ["typeRefuel", ""]), 250] < 1) exitWith
		{
			[format["Les réservoirs en %1 de cette station essence sont vides.", (getText(missionConfigFile) >> "ALYSIA_FUEL" >> "fuels" >> _x >> "name")]] call public_fnc_error;
			closeDialog 0;
		};

		if ((_bill + [_station, (player getVariable ["typeRefuel", ""])] call public_fnc_fuelPrice) > g_cash) exitWith
		{
			["Vous n'avez pas assez d'argent sur votre compte pour pouvoir faire le plein."] call public_fnc_error;
			closeDialog 0;		
		};

		_vehicle setFuel ((fuel _vehicle) + 0.1);
		_bill = (_bill + [_station, (player getVariable ["typeRefuel", ""])] call public_fnc_fuelPrice);
		_fuel = ([_vehicle] call public_fnc_fetchVehInfo select 12);

		(_display displayCtrl 17008) ctrlSetStructuredText parseText format ["<t size ='2' align='center'>%1</t>", _bill];
		(_display displayCtrl 17010) ctrlSetStructuredText parseText format ["<t align='right'>%1</t>", (_station getVariable [(player getVariable ["typeRefuel", ""]), 250])];
		(_display displayCtrl 17015) ctrlSetStructuredText parseText format ["%1/%2 Litres", ((fuel _vehicle) * _fuel), _fuel];

		sleep 0.1;
	};
	[false, _bill, "Station Essence"] call public_fnc_handleATM;
	player setVariable ["typeRefuel", "", false];
};*/