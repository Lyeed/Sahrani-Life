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

_sel = lbCurSel 21002;
if (_sel isEqualTo -1) exitWith {};

_price = lbValue[21002, _sel];

if (g_cash < _price) exitWith {
	["Vous n'avez pas assez d'argent"] call public_fnc_error;
};

_marker = lbData[21002, _sel];
playSound "buy";
[format["<t align='center'>Vous avez acheté les coordonnées de<br/><t color='#74DF00'>%1</t><br/>pour <t color='#8cff9b'>%2</t>$</t>", (markerText _marker), ([_price] call public_fnc_numberText)]] call public_fnc_info;
[_marker] call public_fnc_dynamicMarkers_reveal;
[] call public_fnc_dynamicMarkers_menu_update_list;