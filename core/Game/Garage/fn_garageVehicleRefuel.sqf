/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_fuel", "_price"];

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call public_fnc_error;
};

_fuel = (g_garage_vehicles select _index) select 4;
if (_fuel >= 100) exitWith {
	["Ce véhicule possède déja tout son carburant"] call public_fnc_error;
};

_price = (100 - _fuel) * 15;
if (_price > g_atm) exitWith {
	[format["Vous n'avez pas assez d'argent, il vous manque <t color='#ff8c8c'>%1$</t>", [(_price - g_atm)] call public_fnc_numberText]] call public_fnc_error;
};

closeDialog 0;
g_atm = g_atm - _price;
[format["Vous avez fait le plein pour <t color='#8cff9b'>%1$</t>", ([_price] call public_fnc_numberText)], "buy"] call public_fnc_info;
[(g_garage_vehicles select _index) select 0] remoteExec ["TON_fnc_garageVehicleRefuel", 2, false];
(g_garage_vehicles select _index) set[4, 100];
[g_garage_vehicles] call public_fnc_garageOpen;