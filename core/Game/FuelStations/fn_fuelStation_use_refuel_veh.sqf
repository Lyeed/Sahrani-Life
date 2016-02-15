/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_station", "_display", "_list"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

closeDialog 0;

if (isNull _station) exitWith {};

if (!(createDialog "RscDisplayFuelStation")) exitWith {};

disableSerialization;
_display = findDisplay 16000;
if (isNull _display) exitWith {};

refuel_station_inUse = _station;

_list = _display displayCtrl 16004;
lbClear _list;

{
	_index = _list lbAdd getText(_x >> "name");
	_list lbSetData [_index, (configName _x)];
	_list lbSetPicture [_index, getText(_x >> "picture")];
} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_FUEL" >> "fuels"));

_list lbSetCurSel 0;
