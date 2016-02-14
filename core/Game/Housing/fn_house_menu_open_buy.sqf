/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_display", "_rank", "_rank_condition", "_license", "_license_condition", "_price", "_price_condition", "_storage"];
_house = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _house) exitWith {};

if (!(createDialog "RscDisplayHousingBuy")) exitWith {};

disableSerialization;
_display = findDisplay 45000;
if (isNull _display) exitWith {};

g_interaction_target = _house;

_rank = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "rank");
if ((_rank isEqualTo 0) || ((_rank > 0) && ((player getVariable ["rank", 0]) >= _rank))) then {
	_rank_condition = true;
} else {
	_rank_condition = false;
};

_license = getText(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "license");
if ((_license isEqualTo "") || ((_license != "") && ([_license] call AlysiaClient_fnc_hasLicense))) then {
	_license_condition = true;
} else {
	_license_condition = false;	
};

_price = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >>  "price");
if ((_price > 0) && (g_atm >= _price)) then {
	_price_condition = true;
} else {
	_price_condition = false;	
};

_storage = getText(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "storage");

(_display displayCtrl 45006) ctrlSetStructuredText parseText format
[
		"<t font='EtelkaMonospacePro' size='0.8'>"
	+	"<t align='center'>- Prérequis -</t><br/>"
	+	"<t align='left'>Rank</t><t align='right' color='%1'>%2</t><br/>"
	+	"<t align='left'>Licence</t><t align='right' color='%3'>%4</t><br/>"
	+	"<t align='left'>Prix</t><t align='right' color='%5'>%6kn</t><br/>"
	+	"<t align='center'>- Description - </t><br/>"
	+	"<t align='left'>Peut contenir un coffre</t><t align='right'>%7</t><br/>"
	+	"<t align='left'>Possède un garage</t><t align='right'>%8</t><br/>"
	+	"</t>",
	if (_rank_condition) then {"#31B404"} else {"#DF0101"},
	[playerSide, _rank] call AlysiaClient_fnc_rankToStr,
	if (_license_condition) then {"#31B404"} else {"#DF0101"},
	if (_license isEqualTo "") then {"Aucune"} else {getText(missionConfigFile >> "ALYSIA_LICENSES" >> _license >> "name")},
	if (_price_condition) then {"#31B404"} else {"#DF0101"},
	[_price] call AlysiaClient_fnc_numberText,
	if (_storage isEqualTo "") then {"<t color='#ff8c8c'>Non</t>"} else {format["<t color='#8cff9b'>Oui</t>, %1", ([getText(missionConfigFile >> "ALYSIA_STORAGES" >> _storage >> "item")] call AlysiaClient_fnc_itemGetName)]},
	if (getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "garage") isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"}
];

if (_price_condition && _rank_condition && _license_condition) then {
	ctrlShow[45001, true];
	ctrlShow[45002, true];
	ctrlShow[45003, true];
	ctrlShow[45004, true];
	ctrlShow[45005, true];
} else {
	ctrlShow[45001, false];
	ctrlShow[45002, false];
	ctrlShow[45003, false];
	ctrlShow[45004, false];
	ctrlShow[45005, false];
};
