/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_license", "_price"];
_license = [_this, 3, "",[""]] call BIS_fnc_param;

if (_license isEqualTo "") exitWith {};

_price = getNumber(missionConfigFile >> "ALYSIA_LICENSES" >> _x >> "price");
if (_price isEqualTo 0) exitWith {
	[format["Impossible de déterminer le prix de la license : %1", [_license] call public_fnc_licenseGetName]] call public_fnc_error;
};

if (!(str(playerSide) in getArray(missionConfigFile >> "ALYSIA_LICENSES" >> _x >> "sides"))) exitWith {
	[format["Vous n'êtes pas autorisé à acheter la license : %1", [_license] call public_fnc_licenseGetName]] call public_fnc_error;
};

if ([_license] call public_fnc_hasLicense) exitWith {
	[format["Vous possédez déjà la licence : %1", [_license] call public_fnc_licenseGetName]] call public_fnc_error;
};

if (g_cash < _price) exitWith {
	[format["Vous n'avez pas <t color='#8cff9b'>%1</t>kn<br/>Manquant: <t color='#8cff9b'>%2</t>kn", [_price] call public_fnc_numberText, [_price - g_cash] call public_fnc_numberText]] call public_fnc_error;
};

[false, _price] call public_fnc_handleCash;
missionNamespace setVariable[format["license_%1", _license], true];
[format["Vous avez acheté <t color='#FE9A2E'>%1</t>.<br/>Prix: <t color='#8cff9b'>%2</t>kn", [_license] call public_fnc_licenseGetName, [_price] call public_fnc_numberText], "buy"] call public_fnc_info;
