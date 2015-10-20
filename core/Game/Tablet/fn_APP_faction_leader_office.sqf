/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_access"];
disableSerialization;

if (playerSide isEqualTo civilian) exitWith {closeDialog 0;};

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_access = switch (playerSide) do
{
	case east:
	{
		if ((call g_EASTLevel) < getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "EAST" >> "leader_board_rank_require")) then {
			false
		} else {
			true
		}
	};

	case west:
	{
		if ((call g_WESTLevel) < getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "WEST" >> "leader_board_rank_require")) then {
			false
		} else {
			true
		}

	};

	case independent:
	{
		if ((call g_GUERLevel) < getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> "GUER" >> "leader_board_rank_require")) then {
			false
		} else {
			true
		}
	};

	default {false};
};

if (!_access) exitWith {};

[player] remoteExec ["TON_fnc_factionMemberList", 2, false];