/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_item", "_amount", "_oldPrice", "_newPrice"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_amount = [_this, 2, 0, [1]] call BIS_fnc_param;

if ((_item isEqualTo "") ||(_amount isEqualTo 0)) exitWith {};

_oldPrice = [_item] call AlysiaClient_fnc_market_getPrice;
if (_type) then
{
	_newprice = _oldPrice + ((_oldPrice * ((_amount * ([_item] call AlysiaClient_fnc_itemGetWeight)) * 0.09)) / 100);
	if (_newPrice > getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "max")) then {
		_newPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "max");
	};
} else
{
	_newprice = _oldPrice - ((_oldPrice * ((_amount * ([_item] call AlysiaClient_fnc_itemGetWeight)) * 0.05)) / 100);
	if (_newPrice < getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "min")) then {
		_newPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "min");
	};

	if ([_this, 3, false, [false]] call BIS_fnc_param) then
	{
		private "_ressource";

		{
			if (
					(([_x] call AlysiaClient_fnc_market_getPrice) < getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _x >> "market" >> "max")) &&
					(_x != _item)
				) exitWith {_ressource = _x};
		} forEach ([getArray(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "affect")] call CBA_fnc_shuffle);
		if (!(isNil "_ressource")) then {[true, _ressource, _amount, false] call AlysiaClient_fnc_market_handlePrice};
	};
};

[_item, _newPrice] call AlysiaClient_fnc_market_setPrice;
