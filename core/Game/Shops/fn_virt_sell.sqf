/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount", "_ressource", "_count", "_price"];

if ((time - g_action_delay) < 2) exitWith { 
	["Veuillez ralentir dans vos actions"] call public_fnc_error; 
};

_amount = ctrlText 2402;
if (!([_amount] call public_fnc_isNumber)) exitWith {
	["Le montant entré n'est pas un nombre valide"] call public_fnc_error;
};
_amount = parseNumber(_amount);

_ressource = lbData[2407, (lbCurSel 2407)];
if (_ressource isEqualTo "") exitWith {};

_count = [_ressource] call public_fnc_itemCount;
if (_amount > _count) then {
	_amount = _count;
};

if ([false, _ressource, _amount] call public_fnc_handleInv) then 
{
	g_action_delay = time;
	_price = [_ressource] call public_fnc_marketGetSellPrice;
	playSound "buy";
	
	if ([_ressource] call public_fnc_itemIsIllegal) then
	{
		missionNamespace setVariable["inv_illegal_money", (missionNamespace getVariable["inv_illegal_money", 0]) + ([(_price * _amount)] call public_fnc_getDonatorAugmentationPrice)];
		titleText["Vous devez blanchir votre argent", "PLAIN DOWN"];
	} else {
		[true, 0, (_price * _amount), true] call public_fnc_handleMoney;
	};

	[_ressource, _amount, _price] spawn
	{
		private["_newPrice", "_minPrice", "_ressource", "_amount", "_price"];
		_ressource = [_this, 0, "", [""]] call BIS_fnc_param;
		_amount = [_this, 1, 0, [0]] call BIS_fnc_param;
		_price = [_this, 2, 0, [0]] call BIS_fnc_param;

		if ((_ressource isEqualTo "") || (_amount isEqualTo 0) || (_price isEqualTo 0)) exitWith {};

		sleep 20;

		_newPrice = _price - (_amount * (getNumber(missionConfigFile >> "ALYSIA_BOURSE" >> _ressource >> "mult")));
		_minPrice = getNumber(missionConfigFile >> "ALYSIA_BOURSE" >> _ressource >> "min");
		if (_newPrice < _minPrice) then {
			_newPrice = _minPrice;
		};

		[(format["market_%1", _ressource]), _newPrice] call CBA_fnc_publicVariable;
	};
} else {
	["La transaction n'a pas pu aboutir"] call public_fnc_error;
};

[1] call public_fnc_virt_update;