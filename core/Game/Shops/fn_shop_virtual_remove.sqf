/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel"];
disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((isNull _list) || (_sel isEqualTo -1)) exitWith {};
if (g_shop_active) exitWith {};

g_shop_active = true;
_index = _list lbValue _sel;

switch (_list lbData _sel) do
{
	case "BUY":
	{
		_data = g_shop_tmp_buy select _index;
		if ((_data select 1) isEqualTo 1) then {
			g_shop_tmp_buy deleteAt _index;
		} else {
			(g_shop_tmp_buy select _index) set [1, (_data select 1) - 1];
		};
		g_shop_weight_actual = g_shop_weight_actual - ([(_data select 0)] call public_fnc_itemGetWeight);
	};
	case "SELL":
	{
		_data = g_shop_tmp_sell select _index;
		if ([true, (_data select 0), 1] call public_fnc_handleInv) then
		{
			if ((_data select 1) isEqualTo 1) then {
				g_shop_tmp_sell deleteAt _index;
			} else {
				(g_shop_tmp_sell select _index) set [1, (_data select 1) - 1];
			};
		} else {
			["Vous n'avez pas assez de place pour récupérer cet objet"] call public_fnc_error;
		};
	};
};

[] call public_fnc_shop_virtual_update;
g_shop_active = false;
