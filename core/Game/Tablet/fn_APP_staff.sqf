/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_players", "_idc", "_config"];

_config = ("getText(_x >> 'uid') isEqualTo (getPlayerUID player)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) select 0;
if (isNil "_config") exitWith {closeDialog 0};

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

[] call public_fnc_APP_staff_player_actions_update;

_ctrl_players = _display displayCtrl 9000;
lbClear _ctrl_players;

{
	_index = _ctrl_players lbAdd (_x getVariable ["realname", (name _x)]);
	_ctrl_players lbSetdata [_index, str(_x)];
} forEach allPlayers;
if ((lbCurSel _ctrl_players) isEqualTo -1) then {
	_ctrl_players lbSetCurSel 0;
};

if (getNumber(_config >> "requests") isEqualTo 1) then
{
	[9005, true] call public_fnc_tabletShow;
	[9006, true] call public_fnc_tabletShow;
	[9007, true] call public_fnc_tabletShow;

	_request = _display displayCtrl 9007;
	lbClear _request;

	_request lbAdd "Aucune";

	_request lbSetCurSel 0;
};