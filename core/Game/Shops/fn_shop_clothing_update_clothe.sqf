/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_display", "_item"];
disableSerialization;

if (!params [
	["_list", controlNull, [controlNull]],
	["_sel", -1, [-1]]
]) exitWith {};

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
		player addHeadgear _item;
	};
	case "goggles":
	{
		player addGoggles _item;
	};
	case "backpacks":
	{
		player addBackpack _item;
		clearAllItemsFromBackpack player;
	};
	case "uniforms":
	{
		player forceAddUniform _item;
	};
	case "vests":
	{
		player addVest _item;
	};
};

_price = _list lbValue _sel;
if (g_cash >= _price) then
{
	ctrlShow[3108, true];
	ctrlShow[3109, true];
	ctrlShow[3110, true];
	ctrlShow[3111, true];
	ctrlShow[3112, true];
} else {
	ctrlShow[3108, false];
	ctrlShow[3109, false];
	ctrlShow[3110, false];
	ctrlShow[3111, false];
	ctrlShow[3112, false];
};

g_shop_clothing_active = false;