/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_lock"];

if (isNull g_interaction_target) exitWith {};

_lock = [_this, 0, false, [false]] call BIS_fnc_param;

if (_lock) then
{
	if ((locked g_interaction_target) != 2) then 
	{
		systemChat "<MENU VEHICULE> Véhicule verrouillé";
		if ((crew g_interaction_target) isEqualTo []) then
		{
			player action ["engineOff",  g_interaction_target];
			[] spawn
			{
				player action ["lightOn",  g_interaction_target];
				sleep 0.2;
				player action ["lightOff",  g_interaction_target];
				sleep 0.2;
				player action ["lightOn",  g_interaction_target];
				sleep 0.2;
				player action ["lightOff",  g_interaction_target];
			};
		};
		if (local g_interaction_target) then {
			g_interaction_target lock 2;
		} else {
			[g_interaction_target, 2] remoteExecCall ["lock", g_interaction_target, false];
		};
		[g_interaction_target, "car_lock", 50] call CBA_fnc_globalSay3d;
		[] call public_fnc_interactions_recall;
	} else {
		systemChat "<MENU VEHICULE> Véhicule déjà verrouillé";
	};
} else {
	if ((locked g_interaction_target) isEqualTo 2) then 
	{
		systemChat "<MENU VEHICULE> Véhicule déverrouillé";
		if ((crew g_interaction_target) isEqualTo []) then
		{
			[] spawn
			{
				player action ["lightOn",  g_interaction_target];
				sleep 0.2;
				player action ["lightOff",  g_interaction_target];
			};
		};
		if (local g_interaction_target) then {
			g_interaction_target lock 0;
		} else {
			[g_interaction_target, 0] remoteExecCall ["lock", g_interaction_target, false];
		};
		[g_interaction_target, "car_open", 50] call CBA_fnc_globalSay3d;
		[] call public_fnc_interactions_recall;
	} else {
		systemChat "<MENU VEHICULE> Véhicule déjà déverrouillé";
	};
};
