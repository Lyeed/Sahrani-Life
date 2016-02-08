/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_timer"];
_type = [_this, 0, true, [true]] call BIS_fnc_param;

if (isNull g_interaction_target) exitWith {};
if (isNull (findDisplay 12000)) exitWith {};
if (g_action_inUse) exitWith {};
if (g_interaction_target getVariable ["bomb_activate", false]) exitWith {};

g_action_inUse = true;

_timer = g_interaction_target getVariable ["bomb_timer", 0];
if (_type) then {
	if (_timer < 3599) then {
		g_interaction_target setVariable ["bomb_timer", _timer + 1];
	};
} else {
	if (_timer > 0) then {
		g_interaction_target setVariable ["bomb_timer", _timer - 1];
	};
};

[] call AlysiaClient_fnc_c4_update;

g_action_inUse = false;
