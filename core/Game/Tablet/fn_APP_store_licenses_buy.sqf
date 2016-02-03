/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_license", "_price", "_formatLicense"];

if ((time - g_action_delay) < 1) exitWith { 
	["Veuillez ralentir dans vos actions"] call AlysiaClient_fnc_error; 
};

_sel = lbCurSel 8110;
if (_sel isEqualTo -1) exitWith {};

_license = lbData[8110, _sel];
if (_license isEqualTo "") exitWith {};

_price = lbValue[8110, _sel];
if (_price isEqualTo 0) exitWith {};

if ([_license] call AlysiaClient_fnc_hasLicense) exitWith {};
if (g_atm < _price) exitWith {};

g_action_delay = time;

missionNamespace setVariable [format["license_%1", _license], true];
playSound "buy";
[false, _price, format["Licence (%1)", ([_license] call AlysiaClient_fnc_licenseGetName)]] call AlysiaClient_fnc_handleATM;
["STORE_LICENSES"] spawn AlysiaClient_fnc_tabletApp;
