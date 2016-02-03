/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_full", "_sel", "_amount", "_item", "_index"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

switch (_type) do
{
	case 0:
	{
		_full = [_this, 1, false, [false]] call BIS_fnc_param;

		_sel = lbCurSel 2402;
		if (_sel isEqualTo -1) exitWith {};

		_item = lbData[2402, _sel];
		if (_item isEqualTo "") exitWith {};

		if (g_shop_active) exitWith {};
		g_shop_active = true;

		if (_full) then {
			_amount = lbValue[2402, _sel];
		} else {
			_amount = 1;
		};

		if ([false, _item, _amount] call AlysiaClient_fnc_handleInv) then
		{
			_index = [_item, g_shop_tmp_sell] call AlysiaClient_fnc_index;
			if (_index isEqualTo -1) then {
				g_shop_tmp_sell pushBack [_item, _amount];
			} else {
				g_shop_tmp_sell set [_index, [_item, (_amount + ((g_shop_tmp_sell select _index) select 1))]];
			};
			g_shop_weight_actual = g_shop_weight_actual - (([_item] call AlysiaClient_fnc_itemGetWeight) * _amount);
		};

		[] call AlysiaClient_fnc_shop_virtual_update;
		g_shop_active = false;
	};

	case 1:
	{
		_sel = lbCurSel 2407;
		if (_sel isEqualTo -1) exitWith {};

		_item = lbData[2407, _sel];
		if (_item isEqualTo "") exitWith {};

		if (g_shop_active) exitWith {};
		g_shop_active = true;

		_amount = [_item, 1, g_shop_weight_actual, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
		if (_amount > 0) then
		{
			_index = [_item, g_shop_tmp_buy] call AlysiaClient_fnc_index;
			if (_index isEqualTo -1) then {
				g_shop_tmp_buy pushBack [_item, _amount];
			} else {
				g_shop_tmp_buy set [_index, [_item, (_amount + ((g_shop_tmp_buy select _index) select 1))]];
			};
			g_shop_weight_actual = g_shop_weight_actual + ([_item] call AlysiaClient_fnc_itemGetWeight);
		} else {
			["Vous n'avez pas assez de place"] call AlysiaClient_fnc_error;
		};

		[] call AlysiaClient_fnc_shop_virtual_update;
		g_shop_active = false;
	};
};