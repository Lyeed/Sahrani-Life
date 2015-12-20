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