/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_license", "_price", "_formatLicense"];

_sel = lbCurSel 8113;
if (_sel isEqualTo -1) exitWith {};

_license = lbData[8113, _sel];
if (_license isEqualTo "") exitWith {};

_price = lbValue[8113, _sel];
if (_price isEqualTo 0) exitWith {};

if ([_license] call public_fnc_hasLicense) exitWith {};
if (g_atm < _price) exitWith {};

missionNamespace setVariable [format["license_%1", _license], true];

[format[
		"<t align='center'>Vous avez acheté<br/><t color='#FE9A2E'>%1</t></t><br/><br/>"
	+ 	"<t align='left'>Prix</t><t align='right' color='#8cff9b'>%2kn</t>", 
		[_license] call public_fnc_licenseGetName, 
		[_price] call public_fnc_numberText
	], "buy"
] call public_fnc_info;

[false, _price, format["Licence (%1)", ([_license] call public_fnc_licenseGetName)]] call public_fnc_handleATM;
["store_licenses"] spawn public_fnc_tabletApp;
