/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_price", "_marker"];

disableSerialization;
_display = findDisplay 21000;
if (isNull _display) exitWith {};

_sel = lbCurSel 21001;
if (_sel isEqualTo -1) exitWith {};

_marker = lbData[21001, _sel];
if (_marker isEqualTo "") exitWith {};

_price = lbValue[21001, _sel];
if (g_cash < _price) exitWith {
	["Vous n'avez pas assez d'argent"] call public_fnc_error;
};

[false, _price] call public_fnc_handleCash;
[format["Vous avez acheté les coordonnées de <t color='#74DF00'>%1</t> pour <t color='#8cff9b'>%2</t>kn", (markerText _marker), ([_price] call public_fnc_numberText)], "buy"] call public_fnc_info;
[_marker] call public_fnc_dynamicMarkers_reveal;
[] call public_fnc_shop_dynamicMarkers_update_list;
