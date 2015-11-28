/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_price", "_license", "_formatLicense", "_required"];
{
	if (_x != "") exitWith {
		_license = _x;
	};
} forEach ([([_this, 0, "",[""]] call BIS_fnc_param), ([_this, 1, "",[""]] call BIS_fnc_param), ([_this, 2, "",[""]] call BIS_fnc_param), ([_this, 3, "",[""]] call BIS_fnc_param)]);
if (isNil "_license") exitWith {};
if (playerSide in [east, west]) exitWith {
	["Votre faction ne pouvez pas d'acheter de licence"] call public_fnc_error; 
};

_price = [_license] call public_fnc_licenseGetPrice;
if (_price == 0) exitWith {};

_formatLicense = format["license_%1", _license];
if (missionNamespace getVariable[_formatLicense, false]) exitWith {
	[format["Vous possédez déjà la licence<br/>%1", [_license] call public_fnc_licenseGetName]] call public_fnc_error;
};

if (g_cash < _price) exitWith {
	[format[
			"<t align='center'>Vous n'avez pas <t color='#8cff9b'>%1kn</t></t><br/><br/>"
		+	"<t align='left'>Manquant</t><t align='right' color='#8cff9b'>%2kn</t><br/>",
		([_price] call public_fnc_numberText),
		([(_price - g_cash)] call public_fnc_numberText)
	]] call public_fnc_error;
};

_required = getText(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "required");
if ((_required != "") && !(call compile format["%1", _required])) exitWith {
	["Vous ne remplissez pas les conditions pour acheter cette licence"] call public_fnc_error;
};

[false, _price] call public_fnc_handleCash;
missionNamespace setVariable[_formatLicense, true];
[format[
		"<t align='center'>Vous avez acheté<br/><t color='#FE9A2E'>%1</t></t><br/><br/>"
	+ 	"<t align='left'>Prix</t><t align='right' color='#8cff9b'>%2kn</t>", 
		[_license] call public_fnc_licenseGetName, 
		[_price] call public_fnc_numberText
	], "buy"
] call public_fnc_info;
