/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_type", -1, [-1]],
	["_item", "", [""]],
	["_price", 0, [0]]
]) exitWith {};

if ((_item isEqualTo "") || (_price isEqualTo 0) || (_type isEqualTo -1)) exitWith {};

[_type, _item] call public_fnc_auctionHouse_addItem;

[
	format
	[
		"Vous avez acheté <t color='#FF8000'>%1</t> à l'hôtel des ventes.<br/>Prix: <t color='#8cff9b'>%2kn</t>",
		([_type, _item] call public_fnc_auctionHouse_getInfo) select 0,
		([_price] call public_fnc_numberText)
	], "buy"
] call public_fnc_info;
[false, _price] call public_fnc_handleCash;
