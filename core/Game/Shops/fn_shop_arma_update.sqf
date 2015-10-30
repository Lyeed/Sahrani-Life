/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_itemInfo", "_sel", "_display", "_viseurs", "_magazines", "_desc", "_item"];
_sel = [_this, 0, -1, [-1]] call BIS_fnc_param;

_item = lbData[38402, _sel];
if ((_item isEqualTo "") || (_sel isEqualTo -1)) exitWith {};

disableSerialization;
_display = findDisplay 38400;
if (isNull _display) exitWith {};

_itemInfo = [_item] call public_fnc_fetchCfgDetails;
_viseurs = _itemInfo select 11;
if (_viseurs isEqualTo []) then {
	ctrlShow[38408, false];
	ctrlShow[38409, false];
	ctrlShow[38421, true];
} else {
	_ctrl_viseurs = _display displayCtrl 38409;
	lbClear _ctrl_viseurs;
	{
		_ctrl_viseurs lbAdd format["%1", getText(configFile >> "CfgWeapons" >> _x >> "displayName")];
	} forEach (_viseurs);
	_ctrl_viseurs lbSetCurSel 0;	
	ctrlShow[38408, true];
	ctrlShow[38409, true];
	ctrlShow[38421, false];
};

_magazines = _itemInfo select 7;
if (_magazines isEqualTo []) then {
	ctrlShow[38410, false];
	ctrlShow[38411, false];
	ctrlShow[38422, true];
} else {
	_ctrl_magazines = _display displayCtrl 38411;
	lbClear _ctrl_magazines;
	{
		_ctrl_magazines lbAdd format["%1", getText(configFile >> "CfgMagazines" >> _x >> "displayName")];
	} forEach (_magazines);
	_ctrl_magazines lbSetCurSel 0;
	ctrlShow[38410, true];
	ctrlShow[38411, true];
	ctrlShow[38422, false];
};

_price = lbValue[38402, _sel];
(_display displayCtrl 38407) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>$</t>",
	([_price] call public_fnc_numberText),
	if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];
if (g_cash < _price) then {
	ctrlShow[38412, false];
	ctrlShow[38413, false];
	ctrlShow[38414, false];
	ctrlShow[38415, false];
	ctrlShow[38416, false];
} else {
	ctrlShow[38412, true];
	ctrlShow[38413, true];
	ctrlShow[38414, true];
	ctrlShow[38415, true];
	ctrlShow[38416, true];
};

_desc = _itemInfo select 9;
if (_desc isEqualTo "") then {
	_desc = "Aucune";
};
(_display displayCtrl 38405) ctrlSetStructuredText parseText format["<t align='center'>%1</t><br/>", _desc];