/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_app", "_price"];

_sel = lbCurSel 8162;
if (_sel isEqualTo -1) exitWith {};

_app = (call compile format["%1", (lbData[8162, _sel])]) select 0;
if (_app in g_apps) exitWith {};

_price = lbValue[8162, _sel];
if (g_atm < _price) exitWith {};

g_apps pushBack _app;
playSound "buy";
[false, _price, "Application"] call public_fnc_handleATM;
["STORE_APPLICATIONS"] spawn public_fnc_tabletApp;
