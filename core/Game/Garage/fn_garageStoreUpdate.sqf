/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_vehicle", "_price"];

disableSerialization;
_display = findDisplay 35000;
if (isNull _display) exitWith {};

_sel = lbCurSel 35001;
_list = _display displayCtrl 35001;
if ((_sel isEqualTo -1) || (isNull _list)) exitWith {};
if ((_list lbText _sel) isEqualTo "Aucun véhicule") exitWith {};

_vehicle = g_vehicles select (_list lbValue _sel);
if (isNil "_vehicle") exitWith {};
if (isNull _vehicle) exitWith {};

if (cbChecked (_display displayCtrl 35002)) then {
	_price = round(([(_vehicle getVariable ["Trunk", []])] call public_fnc_weightGenerate) * 75);
} else {
	_price = 0;
};

(_display displayCtrl 35005) ctrlSetStructuredText parseText format
[
	"<t align='center' color='%2'>%1</t><t align='right'>kn</t>",
	([_price] call public_fnc_numberText),
	if (g_atm < _price) then {"#ff8c8c"} else {"#8cff9b"}
];

if (g_atm < _price) then {
	ctrlShow[35010, false];
	ctrlShow[35011, false];
	ctrlShow[35012, false];
	ctrlShow[35013, false];
	ctrlShow[35014, false];
} else {
	ctrlShow[35010, true];
	ctrlShow[35011, true];
	ctrlShow[35012, true];
	ctrlShow[35013, true];
	ctrlShow[35014, true];
};
