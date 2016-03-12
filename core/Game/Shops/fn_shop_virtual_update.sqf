/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_player", "_ctrl_target", "_ctrl_tmp"];

disableSerialization;
_display = findDisplay 2400;
if (isNull _display) exitWith {};

_ctrl_player = _display displayCtrl 2402;
lbClear _ctrl_player;
{
	_amount = [_x] call AlysiaClient_fnc_itemCount;
	if (_amount > 0) then
	{
		_index = _ctrl_player lbAdd format["%1 x %2 (%3kn)", ([_amount] call AlysiaClient_fnc_numberText), ([_x] call AlysiaClient_fnc_itemGetName), ([_x] call AlysiaClient_fnc_itemGetSellPrice)];
		_ctrl_player lbSetTooltip [_index, (_ctrl_player lbText _index)];
		_ctrl_player lbSetData [_index, _x];
		_ctrl_player lbSetValue [_index, _amount];
		_ctrl_player lbSetPicture [_index, ([_x] call AlysiaClient_fnc_itemGetImage)];
	};
} forEach (g_shop_list select 1);
if ((lbSize _ctrl_player) isEqualTo 0) then
{
	_ctrl_player lbAdd "Vous n'avez rien à vendre ici";
	_ctrl_player lbSetCurSel -1;
	ctrlShow[2403, false];
	ctrlShow[2404, false];
	ctrlShow[2405, false];
	ctrlShow[2406, false];
} else {
	ctrlShow[2403, true];
	ctrlShow[2404, true];
	ctrlShow[2405, true];
	ctrlShow[2406, true];
	
	lbSort [_ctrl_player, "DESC"];
};

_ctrl_target = _display displayCtrl 2407;
lbClear _ctrl_target;
{
	_config = missionConfigFile >> "ALYSIA_ITEMS" >> _x;
	if (isClass _config) then
	{
		_license = getText(_config >> format["buy_license_%1", playerSide]);
		_rank = getNumber(_config >> format["buy_condition_%1", playerSide]);
		if ((_license isEqualTo "") || ([_license] call AlysiaClient_fnc_hasLicense)) then
		{
			if ((_rank isEqualTo 0) || ((_rank > 0) && ((player getVariable ["rank", 0]) >= _rank))) then
			{
				_index = _ctrl_target lbAdd format["%1 (%2kn)", ([_x] call AlysiaClient_fnc_itemGetName), ([_x] call AlysiaClient_fnc_itemGetBuyPrice)];
				_ctrl_target lbSetTooltip [_index, (_ctrl_target lbText _index)];
				_ctrl_target lbSetData [_index, _x];
				_ctrl_target lbSetPicture [_index, ([_x] call AlysiaClient_fnc_itemGetImage)];
			};
		};
	};
} forEach (g_shop_list select 0);
if ((lbSize _ctrl_target) isEqualTo 0) then
{
	_ctrl_target lbAdd "Vous n'avez rien à acheter ici";
	_ctrl_target lbSetCurSel -1;
	ctrlShow[2408, false];
	ctrlShow[2409, false];
} else {
	ctrlShow[2408, true];
	ctrlShow[2409, true];

	lbSort [_ctrl_target, "DESC"];
};

g_shop_bill_dollar = 0;
g_shop_bill_illegal = 0;

_ctrl_tmp = _display displayCtrl 2410;
lbClear _ctrl_tmp;

{
	_item = _x select 0;
	_amount = _x select 1;
	_price = ([_item] call AlysiaClient_fnc_itemGetBuyPrice) * _amount;
	_index = _ctrl_tmp lbAdd format
	[
		"%1 x %2 (-%3kn)",
		([_amount] call AlysiaClient_fnc_numberText),
		([_item] call AlysiaClient_fnc_itemGetName),
		([_price] call AlysiaClient_fnc_numberText)
	];
	_ctrl_tmp lbSetTooltip [_index, (_ctrl_tmp lbText _index)];
	_ctrl_tmp lbSetData [_index, "BUY"];
	_ctrl_tmp lbSetValue [_index, _forEachIndex];
	g_shop_bill_dollar = g_shop_bill_dollar - _price;
} forEach g_shop_tmp_buy;

{
	_item = _x select 0;
	_amount = _x select 1;
	_price = ([_item] call AlysiaClient_fnc_itemGetSellPrice) * _amount;
	_index = _ctrl_tmp lbAdd format
	[
		"%1 x %2 (+%3kn)",
		([_amount] call AlysiaClient_fnc_numberText),
		([_item] call AlysiaClient_fnc_itemGetName),
		([_price] call AlysiaClient_fnc_numberText)
	];
	_ctrl_tmp lbSetData [_index, "SELL"];
	_ctrl_tmp lbSetValue [_index, _forEachIndex];
	if (getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "illegal") isEqualTo 1) then {
		g_shop_bill_illegal = g_shop_bill_illegal + _price;
	} else {
		g_shop_bill_dollar = g_shop_bill_dollar + _price;
	};
} forEach g_shop_tmp_sell;

if ((lbSize _ctrl_tmp) isEqualTo 0) then
{
	_ctrl_tmp lbAdd "Vide";
	
	ctrlShow[2412, false];
	ctrlShow[2413, false];
	ctrlShow[2414, false];
	ctrlShow[2415, false];
	ctrlShow[2416, false];

	g_shop_weight_actual = g_carryWeight;
} else {
	ctrlShow[2412, true];
	ctrlShow[2413, true];
	ctrlShow[2414, true];
	ctrlShow[2415, true];
	ctrlShow[2416, true];

	lbSort [_ctrl_tmp, "DESC"];
};

(_display displayCtrl 2411) ctrlSetStructuredText parseText format
[
		"<t align='center'>"
	+	"Poids<br/>"
	+	"%1/%2<br/>"
	+	"Montant<br/>"
	+	"%3 <t color='#8cff9b'>%4</t>kn",
	g_shop_weight_actual,
	g_maxWeight,
	if ((g_shop_bill_dollar + g_shop_bill_illegal) >= 0) then {"+"} else {"-"},
	[(abs g_shop_bill_dollar) + g_shop_bill_illegal] call AlysiaClient_fnc_numberText
];
