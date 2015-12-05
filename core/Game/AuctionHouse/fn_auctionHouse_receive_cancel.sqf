/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_item"];
_type = [_this, 0, -1, [-1]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;

if ((_item isEqualTo "") || (_type isEqualTo -1)) exitWith {};

[_type, _item] call public_fnc_auctionHouse_addItem;
[format["Vous avez récupéré <t color='#FF8000'>%1</t>", ([_type, _item] call public_fnc_auctionHouse_getInfo) select 0]] call public_fnc_info;
