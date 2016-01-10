/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_display", "_ressource", "_license"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list)) exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_ressource = _list lbData _index;

(_display displayCtrl 8805) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	([_ressource] call public_fnc_itemGetName)
];

_license = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "license");

(_display displayCtrl 8807) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	if (_license isEqualTo "") then {"Non"} else {[_license] call public_fnc_licenseGetName}
];

(_display displayCtrl 8809) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	if ([_ressource] call public_fnc_itemIsIllegal) then {
		"<t color='#ff8c8c'>Non</t>"
	} else {
		"<t color='#8cff9b'>Oui</t>"
	}
];

(_display displayCtrl 8812) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[([_ressource] call public_fnc_market_getPrice)] call public_fnc_numberText
];

(_display displayCtrl 8814) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "market" >> "max")] call public_fnc_numberText
];

(_display displayCtrl 8816) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "market" >> "min")] call public_fnc_numberText
];

(_display displayCtrl 8818) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[([_ressource] call public_fnc_market_getPrice) * 2] call public_fnc_numberText
];
