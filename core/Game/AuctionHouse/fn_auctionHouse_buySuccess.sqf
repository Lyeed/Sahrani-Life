/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

params [
	["_type", -1, [-1]],
	["_item", "", [""]],
	["_price", 0, [0]]
];

if ((_item isEqualTo "") || (_price isEqualTo 0) || (_type isEqualTo -1)) exitWith {};

_name = switch (_type) do
{
	case 0: 
	{
		[true, _item, 1] call public_fnc_handleInv;
		[_item] call public_fnc_itemGetName
	};
	case 1: 
	{
		[_item, true] call public_fnc_handleItem;
		([_item] call public_fnc_fetchCfgDetails) select 1
	};
	case 2: {getText(configFile >> "CfgVehicles" >> _item >> "displayName")};
};

closeDialog 0;
[format["Vous avez acheté <t color='#FF8000'>%1</t><br/>Prix: <t color='#8cff9b'>%2kn</t>", _name, [_price] call public_fnc_numberText], "buy"] call public_fnc_info;
[false, _price] call public_fnc_handleCash;
