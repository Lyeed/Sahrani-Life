/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_data", "_display", "_sel"];

if (isNull g_interaction_target) exitWith {};
if (g_interaction_target_inv_active) exitWith {};

disableSerialization;
_display = findDisplay 69000;
if (isNull _display) exitWith {};

_sel = lbCurSel 69002;
if (_sel isEqualTo -1) exitWith {};

g_interaction_target_inv_active = true;
_data = g_interaction_target_inv select _sel;

switch (_data select 0) do
{
	case "money": {g_cash = g_cash + (_data select 1)};
	case "virtual": 
	{
		_itemInfo = _data select 1;
		_item = _itemInfo select 0;
		_amount = [_item, (_itemInfo select 1), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		if (_amount > 0) then
		{
			[true, _item, _amount] call public_fnc_handleInv;
			if (_amount isEqualTo (_itemInfo select 1)) then {
				g_interaction_target_inv deleteAt _sel;
			} else {
				(g_interaction_target_inv select _sel) set [1, (_itemInfo select 1) - _amount];
			};
		} else {
			["Vous n'avez pas assez de place"] call public_fnc_error;
		};
	};
	case "arma":
	{
		[(_data select 1), true] call public_fnc_handleItem;
		g_interaction_target_inv deleteAt _sel;
	};
};

[] call public_fnc_skullMenu_search_update;
g_interaction_target_inv_active = false;