/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_inv_virtual", "_inv_arma", "_cash", "_atm", "_handle", "_display", "_config", "_player"];
_player = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_inv_virtual = [_this, 1, [], [[]]] call BIS_fnc_param;
_inv_arma = [_this, 2, [], [[]]] call BIS_fnc_param;
_cash = [_this, 3, 0, [0]] call BIS_fnc_param;
_atm = [_this, 4, 0, [0]] call BIS_fnc_param;

_config = ("getText(_x >> 'uid') isEqualTo (getPlayerUID player)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) select 0;
if (isNil "_config") exitWith {closeDialog 0};

_handle = ["STAFF_DATA"] spawn public_fnc_tabletApp;
waitUntil {scriptDone _handle};

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

(_display displayCtrl 9104) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	(_player getVariable ["realname", (name _player)])
];

_list = _display displayCtrl 9102;
lbClear _list;

if (_cash > 0) then
{
	_index = _list lbAdd format["%1kn (porte feuille)", [_cash] call public_fnc_numberText];
	_list lbSetPicture [_index, "alysia_items_virtual\data\money.paa"];
};

if (_atm > 0) then
{
	_index = _list lbAdd format["%1kn (porte-feuille)", [_atm] call public_fnc_numberText];
	_list lbSetPicture [_index, "alysia_items_virtual\data\money.paa"];
};

{
	_index = _list lbAdd format["%1x %2", ([(_x select 1)] call public_fnc_numberText), ([(_x select 0)] call public_fnc_itemGetName)];
	_list lbSetPicture [_index, ([(_x select 0)] call public_fnc_itemGetImage)];
} forEach _inv_virtual;

{
	_info = [_x] call public_fnc_fetchCfgDetails;
	_index = _list lbAdd (_info select 1);
	_list lbSetPicture [_index, (_info select 2)];
} forEach _inv_arma;

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vide";
};
