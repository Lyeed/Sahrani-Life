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
if ((_list lbText _index) isEqualTo "Aucune") exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_price = _list lbValue _index;
(_display displayCtrl 8111) ctrlSetStructuredText parseText format
[
	"<br/><t align='center' font='PuristaBold'><t size='1.2'>%3</t><br/><br/><t size='2.1'>Prix</t><br/><t size='1.8'><t color='#%2'>%1</t>kn</t></t>",
	([_price] call public_fnc_numberText),
	if (g_atm >= _price) then {"8cff9b"} else {"ff8c8c"},
	(call compile format["%1", (_list lbData _index)]) select 1
];

[8111, true] call public_fnc_tabletShow;

if (g_atm < _price) then
{
	[8108, false] call public_fnc_tabletShow;
	[8109, false] call public_fnc_tabletShow;
} else {
	[8108, true] call public_fnc_tabletShow;
	[8109, true] call public_fnc_tabletShow;
};
