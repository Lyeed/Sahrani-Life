/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount", "_ressource", "_diff", "_market", "_globalPrice", "_price"];

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

_diff = [_ressource, _amount, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
if (_diff <= 0) exitWith {
	[format["Vous n'avez pas assez de place sur vous pour acheter<br/><br/>1x <t color='#FF4000'>%1</t>", ([_ressource] call public_fnc_itemGetName)]] call public_fnc_error; 
};

_price = [_ressource] call public_fnc_itemGetPrice;
_market = false;
if (_price isEqualTo 0) then
{
	_price = [_price] call public_fnc_marketGetBuyPrice;
	_market = true;
};

_globalPrice = _price * _diff;

if (!([0, _globalPrice, true] call public_fnc_checkMoney)) exitWith {};
if ([true, _ressource, _diff] call public_fnc_handleInv) then 
{
	g_action_delay = time;
	playSound "buy";
	[false, 0, _globalPrice, true] call public_fnc_handleMoney;
	if (_market) then
	{
		[_ressource, _diff, _price] spawn
		{
			private["_newPrice", "_maxPrice", "_ressource", "_amount", "_price"];
			_ressource = [_this, 0, "", [""]] call BIS_fnc_param;
			_amount = [_this, 1, 0, [0]] call BIS_fnc_param;
			_price = [_this, 2, 0, [0]] call BIS_fnc_param;

			if ((_ressource isEqualTo "") || (_amount isEqualTo 0) || (_price isEqualTo 0)) exitWith {};

			sleep 20;

			_newPrice = _price + (_amount * (getNumber(missionConfigFile >> "ALYSIA_BOURSE" >> _ressource >> "mult")));
			_maxPrice = getNumber(missionConfigFile >> "ALYSIA_BOURSE" >> _ressource >> "max");
			if (_newPrice < _maxPrice) then {
				_newPrice = _maxPrice;
			};

			[(format["market_%1", _ressource]), _newPrice] call CBA_fnc_publicVariable;
		};
	};
} else {
	["La transaction n'a pas pu aboutir"] call public_fnc_error; 
};

[0] call public_fnc_virt_update;