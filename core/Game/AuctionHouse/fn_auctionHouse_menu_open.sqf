/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_location", "_type"];
_location = [(_this select 3), 0, "", [""]] call BIS_fnc_param;
_type = [(_this select 3), 1, 0, [0]] call BIS_fnc_param;

if (dialog) exitWith {};
if (_location isEqualTo "") exitWith {};
if ((player getVariable ["surrender", false]) || (player getVariable ["restrained", false])) exitWith {};

if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br/>Revenez plus tard"] call AlysiaClient_fnc_error;
};

if (!(isNil "gServer_soonReboot")) exitWith {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call AlysiaClient_fnc_error;
};

if (createDialog "RscDisplayAuctionHouse") then
{
	disableSerialization;
	_display = findDisplay 45600;
	if (isNull _display) exitWith {};

	g_AH_location = _location;
	g_AH_type = _type;

	[-1] call AlysiaClient_fnc_auctionHouse_menu_filter;
};
