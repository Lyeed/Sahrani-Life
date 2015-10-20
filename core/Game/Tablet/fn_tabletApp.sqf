/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_app", "_idcs", "_handle"];
_app = toUpper([_this, 0, "", [""]] call BIS_fnc_param);

if (_app isEqualTo "") exitWith {};
if (g_CTRL_inUse) exitWith {};

g_CTRL_inUse = true;
_idcs = getArray(missionConfigFile >> "RscDisplayTablet" >> "controls" >> format["%1_IDCS", _app]);
_handle = [g_CTRL_shown, _idcs, _app, g_app] spawn public_fnc_tabletAppAnimation;
waitUntil {scriptDone _handle};

g_app = _app;
g_CTRL_shown = _idcs;
switch (_app) do
{
	case "MAIN": {[] call public_fnc_APP_main};
	case "SERVER": {[] spawn public_fnc_APP_server};
	case "HELP": {[] call public_fnc_APP_help};
	case "INVENTORY": {[] call public_fnc_APP_inventory};
	case "SETTINGS": {[] spawn public_fnc_APP_settings};
	case "SOLDE": {[] call public_fnc_APP_solde};
	case "VEHICLES": {[] spawn public_fnc_APP_vehicles};
	case "STORE": {[] call public_fnc_APP_store};
	case "STORE_APPLICATIONS": {[] call public_fnc_APP_store_applications};
	case "STORE_LICENSES": {[] call public_fnc_APP_store_licenses};
	case "STORE_FORFAIT": {[] call public_fnc_APP_store_forfait};
	case "PHONE_CATEGORY": {[] call public_fnc_APP_phone};
	case "PHONE_CONTACTS": {[] call public_fnc_APP_phone_contacts};
	case "PHONE_MESSAGES_READ": {[] call public_fnc_APP_phone_messages_read};
	case "PHONE_MESSAGES_SEND": {[] call public_fnc_APP_phone_messages_send};
	case "PHONE_SETTINGS": {[] call public_fnc_APP_phone_settings};
	case "PHONE_FACTION": {[] call public_fnc_APP_phone_faction};
	case "PHONE_CHANGE": {[] call public_fnc_APP_phone_change};
	case "PHONE_BLACKLIST": {};
	case "LICENSES": {[] call public_fnc_APP_licenses};
	case "FACTION": {[] call public_fnc_APP_faction};
	case "FACTION_LEADER_OFFICE": {};
	case "FACTION_LEADER_HISTORY": {};
	case "MARKET": {[] call public_fnc_APP_market};
};

g_CTRL_inUse = false;