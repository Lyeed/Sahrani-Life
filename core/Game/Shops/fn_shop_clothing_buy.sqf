/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_price", "_type"];

disableSerialization;
_display = findDisplay 3100;
if (isNull _display) exitWith {};

_sel = lbCurSel 3103;
if (_sel isEqualTo -1) exitWith {};

_price = lbValue[3103, _sel];
if (g_cash < _price) exitWith {};

if (g_shop_clothing_active) exitWith {};
g_shop_clothing_active = true;
_type = lbData[3102, (lbCurSel 3102)];

if ((g_shop_clothing_oldItem != "") && (_type != "backpack")) then {
	g_shop_clothing_oldList pushBack g_shop_clothing_oldItem;
};

switch (_type) do
{
	case "headgear":
	{
		g_shop_clothing_head = headgear player;
		g_shop_clothing_oldItem = g_shop_clothing_head;
	};
	case "goggles":
	{
		g_shop_clothing_goggles = goggles player;
		g_shop_clothing_oldItem = g_shop_clothing_goggles;
	};
	case "backpacks":
	{
		g_shop_clothing_vest = backpack player;
		g_shop_clothing_oldItem = g_shop_clothing_vest;
	};
	case "uniforms":
	{
		g_shop_clothing_uniform = uniform player;
		g_shop_clothing_oldItem = g_shop_clothing_uniform;
	};
	case "vests":
	{
		g_shop_clothing_backpack = vest player;
		g_shop_clothing_oldItem = g_shop_clothing_backpack;
	};
};

g_cash = g_cash - _price;
playSound "buy";
["<t align='center'>Achat<br/><t color='#3ADF00'>effectué</t></t>", "buy"] call public_fnc_info;
g_shop_clothing_active = false;