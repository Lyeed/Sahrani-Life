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
	case 2: {[g_launder, (call AlysiaClient_fnc_getInv)]};
	case 3: {[g_arrest_Time, (vehicleVarName g_arrest_Prison), g_arrest_Cellule, g_arrest_Caution, g_arrest_Gear, g_arrest_Reason, g_arrest_Escape]};
	default {[]};
};

if (count(_data) > 0) then {
	[(getPlayerUID player), playerSide, _data, _mode] remoteExec ["AlysiaServer_fnc_query_update_partial", 2];
};
