/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_price", "_display"];
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};
if ((_list lbText _index) isEqualTo "Aucune") exitWith
{
	[8115, false] call public_fnc_tabletShow;
	[8116, false] call public_fnc_tabletShow;
	[8117, false] call public_fnc_tabletShow;
	[8118, false] call public_fnc_tabletShow;
	[8119, false] call public_fnc_tabletShow;
	[8120, false] call public_fnc_tabletShow;
};

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_price = [(_list lbData _index)] call public_fnc_licenseGetPrice;
(_display displayCtrl 8116) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>kn</t>",
	([_price] call public_fnc_numberText),
	if (g_atm >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if (g_atm < _price) then
{
	[8117, false] call public_fnc_tabletShow;
	[8118, false] call public_fnc_tabletShow;
} else {
	[8117, true] call public_fnc_tabletShow;
	[8118, true] call public_fnc_tabletShow;
};