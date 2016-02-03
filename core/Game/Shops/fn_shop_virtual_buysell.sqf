/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_market_buy", "_market_sell"];


if (g_shop_active) exitWith {};

[] call AlysiaClient_fnc_shop_virtual_update;

if ((g_cash + g_shop_bill_dollar) < 0) exitWith {
	[format["Vous n'avez pas assez d'argent pour finir la transaction<br/><br/><t align='left'>Manquant</t><t align='right'><t color='#8cff9b'>%1</t>kn</t>", ([abs (g_shop_bill_dollar + g_cash)] call AlysiaClient_fnc_numberText)]] call AlysiaClient_fnc_error;
};

g_shop_active = true;
playSound "buy";
[true, g_shop_bill_dollar] call AlysiaClient_fnc_handleCash;
if (g_shop_bill_illegal > 0) then
{
	[true, "illegal_money", g_shop_bill_illegal] call AlysiaClient_fnc_handleInv;
	titleText["Vous devez blanchir votre argent", "PLAIN DOWN"];
};

_market_buy = [];
{
	[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
	if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> (_x select 0) >> "market")) isEqualTo 1) then {
		_market_buy pushBack _x;
	};
} forEach (g_shop_tmp_buy);
g_shop_tmp_buy = [];

_market_sell = [];
{
	if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> (_x select 0) >> "market")) isEqualTo 1) then {
		_market_sell pushBack _x;
	};
} forEach (g_shop_tmp_sell);
g_shop_tmp_sell = [];

if (!(_market_sell isEqualTo []) || !(_market_buy isEqualTo [])) then
{
	[_market_sell, _market_buy] spawn
	{
		sleep 20;

		{
			[false, (_x select 0), (_x select 1), true] call AlysiaClient_fnc_market_handlePrice;
		} forEach (_this select 0);

		{
			[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_market_handlePrice;
		} forEach (_this select 1);
	};
};

[] call AlysiaClient_fnc_shop_virtual_update;
g_shop_active = false;
