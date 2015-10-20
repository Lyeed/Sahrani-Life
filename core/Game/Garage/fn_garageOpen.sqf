/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicles", "_list", "_display"];
_vehicles = [_this, 0, [], [[]]] call BIS_fnc_param;

if (!(createDialog "RscDisplayGarage")) exitWith {};
disableSerialization;

_display = findDisplay 2800;
(_display displayCtrl 2805) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (g_garage_info select 0)];

g_garage_vehicles = _vehicles;
_list = _display displayCtrl 2826;
{
	_data = switch (_x) do
	{
		case "Car": {["Voiture", "\lyeed_IMG\data\garage\type_car.paa"]};
		case "Truck": {["Camion", "\lyeed_IMG\data\garage\type_truck.paa"]};
		case "Air": {["Aérien", "\lyeed_IMG\data\garage\type_air.paa"]};
		case "Ship": {["Bateau", "\lyeed_IMG\data\garage\type_boat.paa"]};
		default {[]};
	};
	if (!(_data isEqualTo [])) then
	{
		_index = _list lbAdd (_data select 0);
		_list lbSetData [_index, _x];
		_list lbSetPicture [_index, (_data select 1)];
	};
} count (g_garage_info select 1);
_list lbSetCurSel 0;