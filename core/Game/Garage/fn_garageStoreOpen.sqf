/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_PNJ", "_types", "_distance", "_list"];
_PNJ = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_types = [_this, 3, ["Car"], [[]]] call BIS_fnc_param;

if (isNull _PNJ) exitWith {};
if (g_garage_store) exitWith {
	["Vous êtes déjà en train de ranger un véhicule<br/>Veuillez patienter"] call public_fnc_error;
};

if (!(createDialog "RscDisplayGarageStore")) exitWith {};

disableSerialization;
_display = findDisplay 35000;
if (isNull _display) exitWith {};

if ("Air" in _types) then {
	_distance = 95;
};
if ("Ship" in _types) then {
	_distance = 130;
};
if (isNil "_distance") then {
	_distance = 40;
};

g_garage_store = false;
g_garage_PNJ = _PNJ;
g_garage_distance = _distance;

_list = _display displayCtrl 35001;
lbClear _list;

{
	if (!(isNull _x)) then
	{
		if (alive _x) then
		{
			if ((_PNJ distance _x) <= _distance) then
			{
				_index = _list lbAdd getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "displayName");
				_list lbSetPicture [_index, getText(configFile >> "CfgVehicles" >> typeOf(_x) >> "picture")];
				_list lbSetValue [_index, _forEachIndex];
			};
		};
	};
} forEach (g_vehicles);
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Aucun véhicule";
	ctrlShow[35010, false];
	ctrlShow[35011, false];
	ctrlShow[35012, false];
	ctrlShow[35013, false];
	ctrlShow[35014, false];
	ctrlShow[35002, false];
	ctrlShow[35003, false];
	ctrlShow[35004, false];
	ctrlShow[35005, false];
	ctrlShow[35006, false];
	ctrlShow[35007, false];
	ctrlShow[35008, false];
};

(_display displayCtrl 35002) cbSetChecked true;
_list lbSetCurSel 0;
