/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_price"];

if (!params [
		["_sel", -1, [-1]]
	]) exitWith {};

if (_sel isEqualTo -1) exitWith {};

disableSerialization;
_display = findDisplay 21000;
if (isNull _display) exitWith {};

_price = lbValue[21002, _sel];
(_display displayCtrl 21005) ctrlSetStructuredText parseText format["<t align='center' color='#%2'>%1</t><t align='right'>$</t>", ([_price] call public_fnc_numberText), if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}];

if (g_cash < _price) then {
	ctrlShow[21007, false];
	ctrlShow[21008, false];
} else {
	ctrlShow[21007, true];
	ctrlShow[21008, true];
};