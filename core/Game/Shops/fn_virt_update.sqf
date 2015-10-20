/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_display", "_list"];
_type = [_this, 0, -1, [-1]] call BIS_fnc_param;

if (_type isEqualTo -1) exitWith {};
disableSerialization;

_display = findDisplay 2400;

if (isNull _display) exitWith {};

_list = _display displayCtrl 2407;

switch (_type) do
{
	case 0:
	{
		private["_index"];
		(_display displayCtrl 2411) ctrlSetStructuredText parseText "<t align='center'>Magasin</t>";
		buttonSetAction[2404, "[] call public_fnc_virt_buy;"];
		(_display displayCtrl 2404) ctrlSetTooltip "Acheter";
		ctrlSetText[2402, "1"];
		g_shop_category = 0;
		lbClear _list;
		{
			_index = _list lbAdd ([_x] call public_fnc_itemGetName);
			_list lbSetData [_index, _x];
			_list lbSetPicture [_index, ([_x] call public_fnc_itemGetImage)];
		} forEach (g_shop_list select 0);
		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Vous n'avez rien à acheter ici";
		} else {
			_list lbSetCurSel 0;
		};
		[2] call public_fnc_virt_update;
	};

	case 1:
	{
		private["_index"];
		(_display displayCtrl 2411) ctrlSetStructuredText parseText "<t align='center'>Inventaire</t>";
		buttonSetAction[2404, "[] call public_fnc_virt_sell;"];
		(_display displayCtrl 2404) ctrlSetTooltip "Vendre";
		ctrlSetText[2402, "1"];
		g_shop_category = 1;
		lbClear _list;
		{
			_count = [_x] call public_fnc_itemCount;
			if (_count > 0) then
			{
				_index = _list lbAdd format["%1x %2", _count, ([_x] call public_fnc_itemGetName)];
				_list lbSetData [_index, _x];
				_list lbSetPicture [_index, ([_x] call public_fnc_itemGetImage)];			
			};
		} forEach (g_shop_list select 1);
		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Vous n'avez rien à vendre ici";
		} else {
			_list lbSetCurSel 0;
		};
		[2] call public_fnc_virt_update;
	};

	case 2:
	{
		private["_price", "_amount", "_ressource"];
		_ressource = _list lbData (lbCurSel _list);
		_price = [_ressource] call public_fnc_itemGetPrice;
		if (_price isEqualTo 0) then
		{
			if (g_shop_category isEqualTo 0) then {
				_price = [_ressource] call public_fnc_marketGetBuyPrice;
			} else {
				_price = [_ressource] call public_fnc_marketGetSellPrice;
			};
		};

		if (_price isEqualTo 0) then
		{
			ctrlShow[2401, false];
			ctrlShow[2402, false];
			ctrlShow[2403, false];
			ctrlShow[2404, false];
			ctrlShow[2405, false];
			ctrlShow[2406, false];
			ctrlShow[2408, false];
			ctrlShow[2409, false];
		};

		_amount = ctrlText 2402;
		if ((_amount isEqualTo "") || !([_amount] call public_fnc_isNumber) || (_price isEqualTo 0) || (parseNumber(_amount) < 1)) exitWith
		{
			ctrlShow[2401, false];
			ctrlShow[2403, false];
			ctrlShow[2404, false];
			ctrlShow[2408, false];
		};

		ctrlShow[2401, true];
		ctrlShow[2402, true];
		ctrlShow[2403, true];
		ctrlShow[2404, true];
		ctrlShow[2408, true];
		ctrlShow[2409, true];
		if (g_shop_category isEqualTo 0) then {
			ctrlShow[2405, false];
			ctrlShow[2406, false];
		} else {
			ctrlShow[2405, true];
			ctrlShow[2406, true];
		};

		_price = _price * parseNumber(_amount);
		if ((g_shop_category isEqualTo 1) || ([0, _price, true] call public_fnc_checkMoney)) then {
			(_display displayCtrl 2401) ctrlSetStructuredText parseText format["<t align='center' color='#8cff9b'>%1</t><t align='right'>$</t>", ([_price] call public_fnc_numberText)];
		} else {
			ctrlShow[2403, false];
			ctrlShow[2404, false];
			(_display displayCtrl 2401) ctrlSetStructuredText parseText format["<t align='center' color='#ff8c8c'>%1</t><t align='right'>$</t>", ([_price] call public_fnc_numberText)];
		};
	};

	case 3:
	{
		ctrlSetText[2402, str([(_list lbData (lbCurSel _list))] call public_fnc_itemCount)];
		[2] call public_fnc_virt_update;
	};
};