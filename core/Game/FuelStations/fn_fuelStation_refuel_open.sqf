/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_station", "_display", "_list", "_type", "_action"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_type = [_this, 1, 0, [0]] call BIS_fnc_param;

if (isNull _station) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

createDialog "RscDisplayFuelStation";

disableSerialization;
_display = findDisplay 16000;
if (isNull _display) exitWith {};

missionNamespace setVariable ["refuel_station_inUse", _station];

_list = _display displayCtrl 16004;
lbClear _list;

{
	_index = _list lbAdd getText(missionConfigFile >> "ALYSIA_FUEL" >> (configName _x) >> "name");
	_list lbSetData [_index, (configName _x)];
	_list lbSetPicture [_index, getText(missionConfigFile >> "ALYSIA_FUEL" >> (configName _x) >> "picture")];
} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_FUEL_STATION" >> typeOf(_station) >> "stock"));

_list lbSetCurSel 0;

_action = switch (_type) do
{
	case 0: {"[] spawn AlysiaClient_fnc_fuelStation_refuel_action_vehicle;"};
	case 1: {"[] spawn AlysiaClient_fnc_fuelStation_refuel_action_stock;"};
};
(_display displayCtrl 16017) buttonSetAction _action;
