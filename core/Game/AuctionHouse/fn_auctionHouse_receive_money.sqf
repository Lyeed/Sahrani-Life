/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_item", "_price"];
_type = [_this, 0, -1, [-1]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_price = [_this, 2, 0, [0]] call BIS_fnc_param;

if ((_item isEqualTo "") || (_price isEqualTo 0) || (_type isEqualTo -1)) exitWith {};

[
	format
	[
		"Vous avez vendu <t color='#FF8000'>%1</t> à l'hôtel des ventes.<br/>Prix: <t color='#8cff9b'>%2kn</t>",
		([_type, _item] call AlysiaClient_fnc_auctionHouse_getInfo) select 0,
		([_price] call AlysiaClient_fnc_numberText)
	], "buy"
] call AlysiaClient_fnc_info;
[true, _price, "Hôtel des ventes"] call AlysiaClient_fnc_handleATM;
