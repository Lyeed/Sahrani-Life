/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_action", "", [""]]
]) exitWith {};

disableSerialization;
_display = findDisplay 15000;
if (isNull _display) then {};
if (!([_amount] call public_fnc_isNumber)) exitWith {["Erreur dans le montant"] call public_fnc_error};
_amount = parseNumber (ctrlText 15019);
if (_amount <= 0) exitWith {["Erreur dans le montant"] call public_fnc_error};

switch (_action) do
{
	case "withdraw":
	{
		if (g_atm < _amount) exitWith {["Solde insuffisant"] call public_fnc_error};
		g_atm = (g_atm - _amount);
		g_cash = (g_cash + _amount);
		["Retrait effectué avec succès"] call public_fnc_info;
		["home"] call public_fnc_atmScreen;
	};

	case "deposit":
	{
		if (g_cash < _amount) exitWith {["Vous n'avez pas assez de fonds sur vous"] call public_fnc_error};
		g_cash = (g_cash - _amount);
		g_atm = (g_atm + _amount);
		["Dépot effectué avec succès"] call public_fnc_info;
		["home"] call public_fnc_atmScreen;
	};
	
	default {["Action non reconnue"] call public_fnc_error};
};