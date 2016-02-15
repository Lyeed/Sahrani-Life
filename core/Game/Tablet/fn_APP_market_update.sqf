/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_ressource", "_license"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_sel isEqualTo -1) || (isNull _list)) exitWith {};

_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_ressource = _list lbData _sel;
if (_ressource isEqualTo "") exitWith {};

(_display displayCtrl 8805) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	([_ressource] call AlysiaClient_fnc_itemGetName)
];

_license = getText(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "license");

(_display displayCtrl 8808) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	if (_license isEqualTo "") then {"Aucune"} else {[_license] call AlysiaClient_fnc_licenseGetName}
];

(_display displayCtrl 8811) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	if (getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "illegal") isEqualTo 0) then {
		"<t color='#8cff9b'>Oui</t>"
	} else {
		"<t color='#ff8c8c'>Non</t>"
	}
];

(_display displayCtrl 8815) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[([_ressource] call AlysiaClient_fnc_market_getPrice)] call AlysiaClient_fnc_numberText
];

(_display displayCtrl 8817) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "market" >> "max")] call AlysiaClient_fnc_numberText
];

(_display displayCtrl 8819) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	[getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _ressource >> "market" >> "min")] call AlysiaClient_fnc_numberText
];
