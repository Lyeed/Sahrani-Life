/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_item", "_amount", "_oldPrice", "_newPrice", "_weight"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_amount = [_this, 2, 1, [1]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {};
if (_amount isEqualTo 0) exitWith {};

_weight = [_item] call AlysiaClient_fnc_itemGetWeight;
_oldPrice = [_item] call AlysiaClient_fnc_market_getPrice;
if (_type) then
{
	private "_maxPrice";
	_newprice = _oldPrice + ((_oldPrice * ((_amount * _weight) * 0.2)) / 100);
	_maxPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "max");
	if (_newPrice > _maxPrice) then {_newPrice = _maxPrice};
} else
{
	private["_affect", "_minPrice"];
	_affect = [_this, 3, false, [false]] call BIS_fnc_param;

	_newprice = _oldPrice - ((_oldPrice * ((_amount * _weight) * 0.2)) / 100);
	_minPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "min");
	if (_newPrice < _minPrice) then {_newPrice = _minPrice};

	if (_affect) then
	{
		private["_ressource", "_affected"];
		_affected = getArray(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "affect");

		{
			if (
					(([_x] call AlysiaClient_fnc_market_getPrice) < getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _x >> "market" >> "max")) &&
					(_x != _item)
				) exitWith {_ressource = _x};
		} forEach ([_affected] call CBA_fnc_shuffle);
		if (!(isNil "_ressource")) then {[true, _ressource, _amount, false] call AlysiaClient_fnc_market_handlePrice};
	};
};

[_item, _newPrice] call AlysiaClient_fnc_market_setPrice;
