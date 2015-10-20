/*
	File: fn_buyClothes.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_price"];

if ((lbCurSel 3101) == -1) exitWith { [(localize "STR_Shop_NoClothes")] call ALYSIA_fnc_error; };
_price = 0;
{
	if (_x != -1) then {
		_price = _price + _x;
	};
} forEach (life_clothing_purchase);

if (_price > life_cash) exitWith { [(localize "STR_Shop_NotEnoughClothes")] call ALYSIA_fnc_error; };

closeDialog 0;
life_cash = life_cash - _price;
playSound "buy";
life_clothesPurchased = true;
["<t align='center'>Achat<br/><t color='#3ADF00'>effectué</t></t>"] call ALYSIA_fnc_info;
