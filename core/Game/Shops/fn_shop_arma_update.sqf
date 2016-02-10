/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_sel", "_display", "_desc", "_item", "_list", "_price_condition", "_rank", "_rank_condition", "_license", "_license_condition"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};

_item = _list lbData _sel;
if (_item isEqualTo "") exitWith
{
	{
		ctrlShow[_x, false];
	} forEach ([38403, 38404, 38405, 38406, 38407, 38408, 38409, 38410]);
};

_display = findDisplay 38400;
if (isNull _display) exitWith {};

_price = _list lbValue _sel;
if ((_price > 0) && (g_cash >= _price)) then {
	_price_condition = true;
} else {
	_price_condition = false;	
};

_rank = getNumber(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _item >> format["buy_condition_%1", playerSide]);
if ((_rank isEqualTo 0) || ((_rank > 0) && ((player getVariable ["rank", 0]) >= _rank))) then {
	_rank_condition = true;
} else {
	_rank_condition = false;
};

_license = getText(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> _item >> format["buy_license_%1", playerSide]);
if ((_license isEqualTo "") || ((_license != "") && ([_license] call AlysiaClient_fnc_hasLicense))) then {
	_license_condition = true;
} else {
	_license_condition = false;	
};

_desc = ([_item] call AlysiaClient_fnc_fetchCfgDetails) select 9;

(_display displayCtrl 38404) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	_list lbText _sel
];

(_display displayCtrl 38405) ctrlSetStructuredText parseText format
[
		"<t font='EtelkaMonospacePro' size='0.8'>"
	+	"<t align='center'>- Prérequis -</t><br/>"
	+	"<t align='left'>Rank</t><t align='right' color='%1'>%2</t><br/>"
	+	"<t align='left'>Licence</t><t align='right' color='%3'>%4</t><br/>"
	+	"<t align='left'>Prix</t><t align='right' color='%5'>%6kn</t><br/>"
	+	"<t align='center'>- Description - </t><br/>"
	+	"<t align='center'>%7</t>"
	+	"</t>",
	if (_rank_condition) then {"#31B404"} else {"#DF0101"},
	([playerSide, _rank] call AlysiaClient_fnc_rankToStr),
	if (_license_condition) then {"#31B404"} else {"#DF0101"},
	if (_license isEqualTo "") then {"Aucune"} else {getText(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "name")},
	if (_price_condition) then {"#31B404"} else {"#DF0101"},
	[_price] call AlysiaClient_fnc_numberText,
	if (_desc isEqualTo "") then {"Aucune"} else {_desc}
];

if (_price_condition && _rank_condition && _license_condition) then {
	ctrlShow[38406, true];
	ctrlShow[38407, true];
	ctrlShow[38408, true];
	ctrlShow[38409, true];
	ctrlShow[38410, true];
} else {
	ctrlShow[38406, false];
	ctrlShow[38407, false];
	ctrlShow[38408, false];
	ctrlShow[38409, false];
	ctrlShow[38410, false];
};
