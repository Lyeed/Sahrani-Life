/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_data", "_value", "_object"];

if (
		g_action_inUse || 
		g_action_gathering || 
		g_is_processing || 
		(player getVariable["restrained", false]) || 
		(player getVariable["surrender", false])
	) exitWith {
	["Vous avez l'air occupé"] call public_fnc_error;
};

if (player != (vehicle player)) exitWith {
	["Action impossible en véhicule"] call public_fnc_error; 
};

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

if ((lbText[8001, (lbCurSel 8001)]) isEqualTo "Vide") exitWith {
	["Vous n'avez rien sélectionné"] call public_fnc_error;
};

_data = lbData[8001, (lbCurSel 8001)];
if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _data >> "removable")) isEqualTo 0) exitWith {
	["Vous ne pouvez pas supprimer cet objet"] call public_fnc_error; 
};

_value = ctrlText 8005;
if (!([_value] call public_fnc_isNumber)) exitWith {
	["Nombre non valide"] call public_fnc_error; 
};

_value = parseNumber(_value);
if (_value <= 0) exitWith {
	["Nombre non valide"] call public_fnc_error; 
};

if (!([false, _data, _value] call public_fnc_handleInv)) exitWith {
	["Vous n'en avez pas autant"] call public_fnc_error;
};

g_action_delay = time;

[
	format
	[
		"<t align='center'>Vous vous êtes débarassé de<br/>%1x %2</t>", 
		([_value] call public_fnc_numberText), 
		([_data] call public_fnc_itemGetName)
	]
] call public_fnc_info;

_object = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _data >> "drop");
if ((count(nearestObjects [player, [_object], 30])) < 10) then
{
	_pos = player modelToWorld[0, 3, 0];
	_obj = _object createVehicle _pos;
	_obj setPosATL[_pos select 0, _pos select 1, 0];
	_obj setVariable["item", [_data, _value], true];
};

["inventory"] call public_fnc_tabletApp;