/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_item", "_list", "_sel", "_price", "_price_condition", "_rank", "_rank_condition", "_license", "_license_condition"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((isNull _list) || (_sel isEqualTo -1)) exitWith {};

_display = findDisplay 3100;
if (isNull _display) exitWith {};

_item = _list lbData _sel;
if (_item isEqualTo "") exitWith {};

g_shop_clothing_active = true;

switch (lbData[3102, (lbCurSel 3102)]) do
{
	case "headgear":
	{
		removeHeadgear player;
		player addHeadgear _item;
	};
	case "goggles":
	{
		removeGoggles player;
		player addGoggles _item;
	};
	case "backpacks":
	{
		removeBackpack player;
		player addBackpack _item;
		clearAllItemsFromBackpack player;
	};
	case "uniforms":
	{
		removeUniform player;
		player forceAddUniform _item;
	};
	case "vests":
	{
		removeVest player;
		player addVest _item;
	};
};

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

(_display displayCtrl 3105) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	(_list lbText _sel)
];

(_display displayCtrl 3104) ctrlSetStructuredText parseText format
[
		"<t font='EtelkaMonospacePro' size='0.8'>"
	+	"<t align='center'>- Prérequis -</t><br/>"
	+	"<t align='left'>Rank</t><t align='right' color='%1'>%2</t><br/>"
	+	"<t align='left'>Licence</t><t align='right' color='%3'>%4</t><br/>"
	+	"<t align='left'>Prix</t><t align='right' color='%5'>%6kn</t><br/>"
	+	"</t>",
	if (_rank_condition) then {"#31B404"} else {"#DF0101"},
	([playerSide, _rank] call AlysiaClient_fnc_rankToStr),
	if (_license_condition) then {"#31B404"} else {"#DF0101"},
	if (_license isEqualTo "") then {"Aucune"} else {getText(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "name")},
	if (_price_condition) then {"#31B404"} else {"#DF0101"},
	[_price] call AlysiaClient_fnc_numberText
];

if (_price_condition && _rank_condition && _license_condition) then {
	{
		ctrlShow[_x, true];
	} forEach ([3108,3109,3110,3111,3112]);
} else {
	{
		ctrlShow[_x, false];
	} forEach ([3108,3109,3110,3111,3112]);
};

g_shop_clothing_active = false;
