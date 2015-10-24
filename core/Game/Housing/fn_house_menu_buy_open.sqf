/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_require", "_display", "_price", "_disable"];

if (isNull g_interaction_target) exitWith {};

if (!(createDialog "RscDisplayHousingBuy")) exitWith {};

_disable =
{
	ctrlShow[45007, false];
	ctrlShow[45008, false];
	ctrlShow[45010, false];
	ctrlShow[45001, false];
	ctrlShow[45002, false];
};

disableSerialization;
_display = findDisplay 45000;
if (isNull _display) exitWith {};

if (playerSide isEqualTo civilian) then {
	_require = getText(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "license");
	if (_require isEqualTo "") then
	{
		(_display displayCtrl 45005) ctrlSetStructuredText parseText format "<t align='center'>Aucun</t>";
	} else {
		(_display displayCtrl 45005) ctrlSetStructuredText parseText format
		[
			"<t align='center'>%1</t>",
			([_require] call public_fnc_licenseGetName)
		];
		if (!(missionNamespace getVariable [format["license_%1", _require], false])) then {
			[] call _disable;
		};
	};
} else {
	_require = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "rank");
	(_display displayCtrl 45005) ctrlSetStructuredText parseText format
	[
		"<t align='center'>%1</t>",
		([playerSide, _require] call public_fnc_rankToStr)
	];
	if ((player getVariable ["rank", 0]) < _require) then {
		[] call _disable;
	};
};

(_display displayCtrl 45003) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>", 
	if (getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >>  "garage") isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"}
];

(_display displayCtrl 45006) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>", 
	if (getText(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >>  "storage") isEqualTo "") then {"<t color='#ff8c8c'>Non</t>"} else {"<t color='#8cff9b'>Oui</t>"}
];

_price = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >>  "price");
(_display displayCtrl 45004) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>$</t>",
	([_price] call public_fnc_numberText),
	if (g_atm >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if (g_atm < _price) then {
	[] call _disable;
};