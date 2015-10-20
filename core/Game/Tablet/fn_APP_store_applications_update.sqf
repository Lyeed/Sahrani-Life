/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_display", "_price"];
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

if ((_list lbText _index) isEqualTo "Aucune") exitWith {};

_price = _list lbValue _index;

(_display displayCtrl 8166) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", ([_price] call public_fnc_numberText)];
(_display displayCtrl 8169) ctrlSetStructuredText parseText format["<t align='center'>%1", (call compile format["%1", (_list lbData _index)]) select 1];

[[8163, 8169], true] call public_fnc_tabletShow;

if (g_atm < _price) then
{
	[8167, false] call public_fnc_tabletShow;
	[8168, false] call public_fnc_tabletShow;
};