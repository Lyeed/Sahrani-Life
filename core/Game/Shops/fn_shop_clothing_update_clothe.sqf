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
if (g_cash >= _price) then
{
	{
		ctrlShow[_x, true];
	} forEach ([3108,3109,3110,3111,3112]);
} else {
	{
		ctrlShow[_x, false];
	} forEach ([3108,3109,3110,3111,3112]);
};

g_shop_clothing_active = false;