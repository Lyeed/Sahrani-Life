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

_price = [_license] call public_fnc_licenseGetPrice;
if (_price isEqualTo 0) exitWith {};

_formatLicense = format["license_%1", _license];
if (missionNamespace getVariable[_formatLicense, false]) exitWith {};

if (g_atm < _price) exitWith {};

missionNamespace setVariable[_formatLicense, true];
[format[
		"<t align='center'>Vous avez acheté<br/><t color='#FE9A2E'>%1</t></t><br/><br/>"
	+ 	"<t align='left'>Prix</t><t align='right' color='#8cff9b'>%2$</t>", 
		[_license] call public_fnc_licenseGetName, 
		[_price] call public_fnc_numberText
	], "buy"
] call public_fnc_info;
[false, 1, _price, false] call public_fnc_handleMoney;
["store_licenses"] spawn public_fnc_tabletApp;