/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_itemInfo", "_sel", "_display", "_viseurs", "_magazines", "_desc", "_item"];
_sel = [_this, 0, -1, [-1]] call BIS_fnc_param;

_item = lbData[38405, _sel];
if ((_item isEqualTo "") || (_sel isEqualTo -1)) exitWith
{
	ctrlShow[38402, false];
	ctrlShow[38403, false];
	ctrlShow[38404, false];
	ctrlShow[38406, false];
	ctrlShow[38407, false];
	ctrlShow[38408, false];
	ctrlShow[38409, false];
	ctrlShow[38410, false];
	ctrlShow[38412, false];
	ctrlShow[38413, false];
};

disableSerialization;
_display = findDisplay 38400;
if (isNull _display) exitWith {};

_itemInfo = [_item] call public_fnc_fetchCfgDetails;
_viseurs = _itemInfo select 11;
if (_viseurs isEqualTo []) then {
	ctrlShow[38407, false];
	ctrlShow[38408, false];
} else {
	_ctrl_viseurs = _display displayCtrl 38408;
	lbClear _ctrl_viseurs;
	{
		_ctrl_viseurs lbAdd format["%1", getText(configFile >> "CfgWeapons" >> _x >> "displayName")];
	} forEach (_viseurs);
	_ctrl_viseurs lbSetCurSel 0;	
	ctrlShow[38407, true];
	ctrlShow[38408, true];
};

_magazines = _itemInfo select 7;
if (_magazines isEqualTo []) then
{
	ctrlShow[38409, false];
	ctrlShow[38410, false];
} else {
	_ctrl_magazines = _display displayCtrl 38410;
	lbClear _ctrl_magazines;
	{
		_ctrl_magazines lbAdd format["%1", getText(configFile >> "CfgMagazines" >> _x >> "displayName")];
	} forEach (_magazines);
	_ctrl_magazines lbSetCurSel 0;
	ctrlShow[38409, true];
	ctrlShow[38410, true];
};

_price = lbValue[38405, _sel];
(_display displayCtrl 38402) ctrlSetStructuredText parseText format["<t align='center' color='#%2'>%1$</t><br/>", ([_price] call public_fnc_numberText), if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}];

_desc = _itemInfo select 9;
if (_desc isEqualTo "") then {
	_desc = "Aucune";
};
(_display displayCtrl 38406) ctrlSetStructuredText parseText format["<t align='center'>%1</t><br/>", _desc];

if (g_cash < _price) then {
	ctrlShow[38403, false];
	ctrlShow[38404, false];
} else {
	ctrlShow[38403, true];
	ctrlShow[38404, true];
};

ctrlShow[38412, true];
ctrlShow[38402, true];
ctrlShow[38413, true];
ctrlShow[38406, true];