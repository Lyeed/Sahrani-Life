/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_display"];
g_garage_vehicles = [_this, 0, [], [[]]] call BIS_fnc_param;

diag_log format["GARAGE VEHICLE : %1", g_garage_vehicles];

if (!(createDialog "RscDisplayGarageAlysia")) exitWith {};
disableSerialization;

_display = findDisplay 2800;
if (isNull _display) exitWith {};

(_display displayCtrl 2805) ctrlSetStructuredText parseText format["<t align='center' size='1.2'>%1</t>", (g_garage_info select 0)];

_list = _display displayCtrl 2826;
{
	_data = switch (_x) do
	{
		case "Car": {["Voiture", "\lyeed_IMG\data\garage\type_car.paa"]};
		case "Truck": {["Camion", "\lyeed_IMG\data\garage\type_truck.paa"]};
		case "Air": {["Aérien", "\lyeed_IMG\data\garage\type_air.paa"]};
		case "Ship": {["Bateau", "\lyeed_IMG\data\garage\type_boat.paa"]};
		case "Tank": {["Tank", "\lyeed_IMG\data\garage\type_tank.paa"]};
		default {[]};
	};
	if (_data isEqualTo []) then {
		systemChat format["Error: unknown vehicle type [%1]", _x];
	} else {
		_index = _list lbAdd (_data select 0);
		_list lbSetData [_index, _x];
		_list lbSetPicture [_index, (_data select 1)];
	};
} forEach (g_garage_info select 1);
_list lbSetCurSel 0;