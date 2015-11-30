/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_display", "_price"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};
if ((_list lbText _index) isEqualTo "Aucune vente") exitWith {};

disableSerialization;
_display = findDisplay 45600;
if (isNull _display) exitWith {};

_price = _list lbValue _index;
(_display displayCtrl 45603) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1kn</t>",
	([_price] call public_fnc_numberText),
	if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if ((getPlayerUID player) isEqualTo (_list lbData _index)) then
{
	ctrlEnable [45604, false];
	ctrlShow [45608, true];
} else {
	ctrlShow [45608, false];
	if (g_cash < _price) then {
		ctrlEnable [45604, false];
	} else {
		ctrlEnable [45604, true];
	};
};
