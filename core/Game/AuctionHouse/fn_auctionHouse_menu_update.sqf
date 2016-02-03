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

_display = findDisplay 45600;
if (isNull _display) exitWith {};

_price = _list lbValue _index;
(_display displayCtrl 45604) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>kn</t>",
	([_price] call AlysiaClient_fnc_numberText),
	if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if (((getPlayerUID player) != (_list lbData _index)) && (g_cash >= _price)) then {
	ctrlShow[45609, true];
	ctrlShow[45610, true];
	ctrlShow[45611, true];
	ctrlShow[45612, true];
	ctrlShow[45613, true];
} else {
	ctrlShow[45609, false];
	ctrlShow[45610, false];
	ctrlShow[45611, false];
	ctrlShow[45612, false];
	ctrlShow[45613, false];
};
