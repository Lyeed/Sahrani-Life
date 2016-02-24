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

if (!isClass(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "factions" >> str(playerSide))) exitWith {
	["Votre faction n'est pas autorisé à acheter cette licence"] call AlysiaClient_fnc_error;
};

_price = getNumber(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "factions" >> str(playerSide) >> "price");
if (_price isEqualTo 0) exitWith {
	[format["Impossible de déterminer le prix de la license : %1", [_license] call AlysiaClient_fnc_licenseGetName]] call AlysiaClient_fnc_error;
};

if ([_license] call AlysiaClient_fnc_hasLicense) exitWith {
	[format["Vous possédez déjà la licence : %1", [_license] call AlysiaClient_fnc_licenseGetName]] call AlysiaClient_fnc_error;
};

if (g_cash < _price) exitWith {
	[format["Vous n'avez pas <t color='#8cff9b'>%1</t>kn<br/>Manquant: <t color='#8cff9b'>%2</t>kn", [_price] call AlysiaClient_fnc_numberText, [_price - g_cash] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_error;
};

[false, _price] call AlysiaClient_fnc_handleCash;
missionNamespace setVariable[format["license_%1", _license], true];
[format["Vous avez acheté <t color='#FE9A2E'>%1</t>.<br/>Prix: <t color='#8cff9b'>%2</t>kn", [_license] call AlysiaClient_fnc_licenseGetName, [_price] call AlysiaClient_fnc_numberText], "buy"] call AlysiaClient_fnc_info;
