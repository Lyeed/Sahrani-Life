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
	["Aucun véhicule à renommer"] call public_fnc_error;
};

_val = ctrlText 555991;
if (_val isEqualTo "") exitWith {
	["Vous n'avez pas entré de nom pour votre véhicule"] call public_fnc_error;
};

if (count (_val) > 20) exitWith {
	["Vous ne pouvez pas dépasser 18 caractères"] call public_fnc_error;
};

_bad = [_val, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_() -"] call public_fnc_TextAllowed;
if (!(_bad isEqualTo "")) exitWith {
	["Vous utilisez un caractère interdit<br/>(ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_() -)"] call public_fnc_error;
};

if (_val isEqualTo ((g_garage_vehicles select g_garage_rename) select 6)) exitWith {
	["Le nom entré est identique au précédent"] call public_fnc_error;
};

closeDialog 0;
[format["Vous avez changé le nom de votre véhicule<br/><t align='center'>%1</t>", _val]] call public_fnc_info;
[((g_garage_vehicles select g_garage_rename) select 0), _val] remoteExec ["TON_fnc_garageVehicleRename", 2, false];
(g_garage_vehicles select g_garage_rename) set[6, _val];
g_garage_rename = -1;
[g_garage_vehicles] call public_fnc_garageOpen;