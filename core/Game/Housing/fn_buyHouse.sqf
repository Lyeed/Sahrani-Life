/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_action", "_maxHouse", "_price", "_passed"];
_house = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

_passed = switch (playerSide) do
{
	case civilian:
	{
		if (missionNamespace getVariable["license_civ_home", false]) then {
			true;
		} else {
			["Vous n'avez pas la licence de propriété"] call public_fnc_error; 
			false;
		};
	};

	case west:
	{
		if ((call g_copLevel) < (getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "cop_buy_rank_needed"))) then { 
			["Vous n'êtes pas autorisé à acheter de batisse à votre grade"] call public_fnc_error;
			false;
		} else {
			true;
		};
	};

	case east:
	{
		if ((call g_onuLevel) < (getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "onu_buy_rank_needed"))) exitWith { 
			["Vous n'êtes pas autorisé à acheter de batisse à votre grade"] call public_fnc_error;
			false;
		} else {
			true;
		};
	};

	default {false};
};
if (!_passed) exitWith {};

if (!(_house getVariable["house_owner"]) isEqualTo []) exitWith {
	["Cette maison est déjà acheté"] call public_fnc_error;
};

if (!isNil {(_house getVariable "house_sold")}) exitWith { 
	["Cette maison a récemment été mise en vente et ne peut pas être achetée de suite"] call public_fnc_error; 
};

_maxHouse = getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "max_houses");
if ((count g_houses) >= _maxHouse) exitWith { 
	[format["Vous possedez déjà %1 propriétés", _maxHouse]] call public_fnc_error; 
};

_price = getNumber(missionConfigFile >> "ALYSIA_HOUSE" >> (typeOf _house) >> "price");
if (g_atm < _price) exitWith 
{
	[format[
			"Vous n'avez pas assez d'argent sur votre compte<br/><br/>"
		+ 	"<t align='left'>Prix</t><t align='right' color='#8cff9b'>%1$</t><br/>"
		+ 	"<t align='left'>Manquant</t><t align='right' color='#ff8c8c'>%2$</t>",
		[_price] call public_fnc_numberText,
		[(_price - g_atm)] call public_fnc_numberText]
	] call public_fnc_error;
};

_action = 
[
	format["Vous êtes sur le point d'acheter une batisse pour <t color='#8cff9b'>%1</t>", [_price] call public_fnc_numberText],
	"Achat de propriété",
	"Acheter",
	"Annuler"
] call BIS_fnc_guiMessage;

if (_action) then 
{
	[[(getPlayerUID player), _house, playerSide], "TON_fnc_addHouse", false] spawn life_fnc_MP;
	_house setVariable["house_owner", [(getPlayerUID player), profileName], true];
	[false, 1, _price, false] call public_fnc_handleMoney;
	["<t align='center'>Achat<br/><t color='#3ADF00'>effectué</t></t>", "buy"] call public_fnc_info;
	[0] call MySQL_fnc_updatePartial;
	g_houses pushBack _house;

	_marker = createMarkerLocal [format["house_%1", (count g_houses)], (getPosATL _house)];
	_marker setMarkerTextLocal (getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName"));
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
};