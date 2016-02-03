/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_mode", "_data"];
_mode = [_this, 0, -1, [0]] call BIS_fnc_param;

_data = switch (_mode) do
{
	case 0: {g_cash};
	case 1: {g_atm};
	case 4: {g_is_alive};
	case 7: {g_laboratory};
	case 8: {1};
	case 11: {[player getVariable ["is_coma", false], 0] call AlysiaClient_fnc_bool};
	case 12: {(player getVariable ["realname", profileName])};
	case 13: {[g_launder, [] call AlysiaClient_fnc_getInv]};
	case 14: {g_arrest_Time, g_arrest_Prison, g_arrest_Cellule, g_arrest_Caution, g_arrest_Gear, g_arrest_Reason, g_arrest_Escape};
};

if (!(isNil "_data")) then {
	[(getPlayerUID player), playerSide, _data, _mode] remoteExec ["AlysiaServer_fnc_query_update_partial", 2]
};