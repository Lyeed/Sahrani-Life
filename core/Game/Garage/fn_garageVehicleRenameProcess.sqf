/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_val", "_bad"];

if ((isNil "g_garage_rename") || {g_garage_rename isEqualTo -1}) exitWith
{
	closeDialog 0;
	["Aucun véhicule à renommer"] call AlysiaClient_fnc_error;
};

_val = ctrlText 101001;
if (_val isEqualTo "") exitWith {
	["Vous n'avez pas entré de nom pour votre véhicule."] call AlysiaClient_fnc_error;
};

if (([_val] call CBA_fnc_strLen) > 25) exitWith {
	["Vous ne pouvez pas dépasser 25 caractères."] call AlysiaClient_fnc_error;
};

_bad = [_val, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_() -"] call AlysiaClient_fnc_TextAllowed;
if (_bad != "") exitWith {
	[format["Vous utilisez un caractère interdit (%1).", _bad]] call AlysiaClient_fnc_error;
};

if (_val isEqualTo ((g_garage_vehicles select g_garage_rename) select 5)) exitWith {
	["Le nom entré est identique au précédent."] call AlysiaClient_fnc_error;
};

[((g_garage_vehicles select g_garage_rename) select 1), _val] remoteExec ["AlysiaServer_fnc_vehicle_update_name", 2];
(g_garage_vehicles select g_garage_rename) set[5, _val];
g_garage_rename = -1;

waitUntil
{
	closeDialog 0;
	!dialog
};

[g_garage_vehicles] call AlysiaClient_fnc_garageOpen;
