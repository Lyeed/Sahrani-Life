/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_condition", "_maxHouse", "_action", "_price"];

if (isNull g_interaction_target) exitWith {};

_condition = false;
if (playerSide isEqualTo civilian) then
{
	_require = getText(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "license");
	if (_require isEqualTo "") then {
		_condition = true;
	} else {
		if (missionNamespace getVariable [format["license_%1", _require], false]) then {
			_condition = true;
		};
	};
} else {
	_require = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(g_interaction_target) >> "rank");
	if ((player getVariable ["rank", 0]) > _require) then {
		_condition = true;
	};
};

if (!_condition) exitWith {
	["Vous ne remplissez pas les conditions pour acheter ce bâtiment"] call public_fnc_error;
};

if (!((g_interaction_target getVariable["house_owner", []]) isEqualTo [])) exitWith {
	["Ce bâtiment est déjà acheté"] call public_fnc_error;
};

if (!isNil {(g_interaction_target getVariable "house_sold")}) exitWith { 
	["Ce bâtiment a récemment été mis en vente et ne peut pas être achetée de suite"] call public_fnc_error;
};

_maxHouse = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "house_max");
if ((count g_houses) >= _maxHouse) exitWith { 
	[format["Vous possedez déjà %1 propriétés", _maxHouse]] call public_fnc_error; 
};

_price = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf g_interaction_target) >> "price");
if (g_atm < _price) exitWith {};

_action = 
[
	format["Vous êtes sur le point d'acheter un bâtiment pour <t color='#8cff9b'>%1</t>kn", [_price] call public_fnc_numberText],
	"Achat de propriété",
	"Acheter",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	closeDialog 0;
	[(getPlayerUID player), g_interaction_target, playerSide] remoteExec ["TON_fnc_house_add", 2];
	g_interaction_target setVariable["house_owner", [(getPlayerUID player), profileName], true];
	[false, _price, "Achat maison"] call public_fnc_handleATM;
	["<t align='center'>Achat<br/><t color='#3ADF00'>effectué</t></t>", "buy"] call public_fnc_info;
	g_houses pushBack g_interaction_target;

	_marker = createMarkerLocal [format["house_%1", (count g_houses)], (getPosATL g_interaction_target)];
	_marker setMarkerTextLocal "Chez vous";
	_marker setMarkerColorLocal "ColorPink";
	_marker setMarkerTypeLocal "Fett_house";
	_marker setMarkerSizeLocal [0.6, 0.6];
};
