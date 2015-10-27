/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_basic", "_houses", "_lastingObjects", "_keys"];
_basic = [_this, 0, [], [[]]] call BIS_fnc_param;
_houses = [_this, 1, [], [[]]] call BIS_fnc_param;
_keys = [_this, 2, [], [[]]] call BIS_fnc_param;
// _lastingObjects = [_this, 3, [], [[]]] call BIS_fnc_param;

diag_log format["BASIC : %1", _basic];
diag_log format["HOUSES : %1", _houses];
diag_log format["KEYS : %1", _keys];
// diag_log format["LASTINGOBJECT : %1", _basic];
if ((_basic isEqualTo []) || {!((getPlayerUID player) isEqualTo (_basic select 0))}) exitWith
{
	["Une erreur est survenue lors du chargement de vos données. Veuillez vous reconnecter ou contacter un administrateur si le problème persiste"] spawn public_fnc_errorExit;
};

if (!((_basic select 1) isEqualTo "") && !((_basic select 1) isEqualTo profileName)) exitWith
{
	[format["Vous n'êtes pas autorisé à changer d'identité. Votre pseudo actuel [%1] ne correspond pas à celui que vous aviez lors de votre arrivé sur le serveur [%2].", profileName, (_basic select 1)]] spawn public_fnc_errorExit;
};

// firstName
g_firstName = _basic select 2;
// lastName
g_lastName = _basic select 3;
// birth
g_birth = _basic select 4;
// nationality
g_nationality = _basic select 5;
// sexe
g_sexe = _basic select 6;
// bankacc
g_adminlevel = compileFinal (_basic select 7);
if ((call g_adminlevel) > 0) then
{
	g_god = false;
	g_markers = false;
	g_teleport = false;
};
// donator
g_donator = compileFinal (_basic select 8);
if ((call g_donator) > 0) then
{
	g_paycheck = (call g_donator) * 600;
};;
// blood/bleed/coma
[(_basic select 9), (_basic select 10), (_basic select 11)] spawn
{
	waitUntil {g_connected};
	if (_this select 2) then {
		[] spawn public_fnc_coma;
	} else {
		[((4000 - (_this select 0)) * -1)] call public_fnc_handleBlood;
		[(_this select 1)] call public_fnc_handleBleed;
	};
};
// position
g_position = [(_basic select 12), (_basic select 13), (_basic select 14)];
// alive
g_is_alive = _basic select 15;
// drugs
{
	missionNamespace setVariable[format["drug_stats_%1", (_x select 0)], (_x select 1)];
} forEach (_basic select 16);
// hunger
g_hunger = _basic select 17;
// thirst
g_thirst = _basic select 18;
// WESTLevel
g_WESTLevel = compileFinal (_basic select 19);
// GuerLevel
g_GUERLevel = compileFinal (_basic select 20);
// EASTLevel
g_EASTLevel = compileFinal (_basic select 21);
// REBLevel
g_REBLevel = compileFinal (_basic select 22);
// Justice
g_arrestMinuts = _basic select 23;
g_arrestReason = _basic select 24;
g_arrestEscape = _basic select 25;
if (g_arrestMinuts > 0) then {
	g_arrested = true;
};
// Phone
g_phone_number = _basic select 26;
if (g_phone_number != "") then {
	player setVariable["number", g_phone_number, true];
};
g_phone_contacts = _basic select 27;
g_phone_messages = _basic select 28;
g_phone_forfait = _basic select 29;
g_phone_blacklist = _basic select 30;
g_apps = _basic select 31;
g_choice = _basic select 32;
// cash
g_cash = _basic select 33;
// atm
g_atm = _basic select 34;
// inventory
g_maxWeight = 100;
{
    [true, (_x select 0), (_x select 1)] call public_fnc_handleInv;
} forEach (_basic select 35);
g_maxWeight = 24;
// gear
[(_basic select 36)] spawn public_fnc_loadGear;

switch (playerSide) do
{
	case west: 
	{
		g_paycheck = g_paycheck + round((call g_WESTLevel) * (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "WEST" >> "paycheck")));
		player setVariable ["rank", (call g_WESTLevel), true];
	};
	
	case east:
	{
		g_paycheck = g_paycheck + round((call g_EASTLevel) * (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "EAST" >> "paycheck")));
		player setVariable ["rank", (call g_EASTLevel), true];
	};

	case civilian:
	{
		g_paycheck = g_paycheck + (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "CIV" >> "paycheck"));
		// Licenses
		{
			missionNamespace setVariable [format["license_%1", _x], true];
		} forEach (_basic select 37);
		// Launder
		g_launder = _basic select 38;
	};

	case independent:
	{
		g_paycheck = g_paycheck + round((call g_EASTLevel) * (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "GUER" >> "paycheck")));
		player setVariable["rank", (call g_GUERLevel), true];
	};
};

//	Houses
g_houses = _houses;
{
	_marker = createMarkerLocal [format["house_%1", (_forEachIndex + 1)], (getPosATL _x)];
	_marker setMarkerTextLocal "Chez vous";
	_marker setMarkerColorLocal "ColorPink";
	_marker setMarkerTypeLocal "plp_mark_as_house";
	_marker setMarkerSizeLocal [0.6, 0.6];
} forEach (g_houses);

//	Keys
{
	g_vehicles pushBack _x;
} foreach (_keys);

/*
//  lastingObjects
g_lastingObjects = _lastingObjects;
{
	_marker = createMarkerLocal [format["labo_%1", (_forEachIndex + 1)], (getPosATL _x)];
	_marker setMarkerTextLocal "Laboratoire";
	_marker setMarkerColorLocal "ColorRed";
	_marker setMarkerTypeLocal "loc_Bunker";
} forEach (g_lastingObjects);
*/

g_paycheck = compileFinal str(g_paycheck * 3);
g_nextPay = time + ((call g_paycheck_period) * 60);
g_session_completed = true;