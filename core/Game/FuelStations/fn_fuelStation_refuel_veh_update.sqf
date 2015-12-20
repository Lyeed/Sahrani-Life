/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_station", "_fuel"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_sel isEqualTo -1) || (isNull _list)) exitWith {};

_display = findDisplay 16000;
if (isNull _display) exitWith {};

_station = missionNamespace getVariable ["refuel_station_inUse", objNull];
if (isNull _station) exitWith {
	["Impossible de trouver la station cible"] call public_fnc_error;
};

_fuel = _list lbData _sel;
if (_fuel isEqualTo "") exitWith {
	["Impossible de trouver l'essence sélectionné"] call public_fnc_error;
};

(_display displayCtrl 16008) ctrlSetStructuredText parseText format["<t align='center' size='2'>%1</t>", ([_station, _fuel] call public_fnc_fuelStation_price_buy)];
(_display displayCtrl 16011) ctrlSetStructuredText parseText format ["<t align='right'> %1L</t>", (_station getVariable [_fuel, 250])];
(_display displayCtrl 16015) ctrlSetText getText(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuel >> "picture");
