/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_item", "_amount", "_oldPrice", "_newPrice", "_affect"];
_type = [_this, 0, false, [false]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_amount = [_this, 2, 1, [1]] call BIS_fnc_param;

_oldPrice = [_item] call AlysiaClient_fnc_market_getPrice;
if (_type) then
{//buy
	_newPrice = _oldPrice + (_amount * getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "mult"));
	_maxPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "max");
	if (_newPrice > _maxPrice) then {_newPrice = _maxPrice};
} else
{// sell
	_affect = [_this, 3, false, [false]] call BIS_fnc_param;

	_newPrice = _oldPrice - (_amount * getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "mult"));
	_minPrice = getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "min");
	if (_newPrice < _minPrice) then {_newPrice = _minPrice};

	if (_affect) then
	{
		_affected = getArray(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "market" >> "affect");
		if (!(_affected isEqualTo [])) then {
			[true, _affected, _amount, false] call AlysiaClient_fnc_market_handlePrice;
		};
	};
};

[_item, _newPrice] call AlysiaClient_fnc_market_setPrice;
