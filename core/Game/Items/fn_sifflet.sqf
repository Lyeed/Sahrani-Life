/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((time - g_action_delay) < 2) exitWith {};

if ((["sifflet"] call public_fnc_itemCount) > 0) then
{
	[player, "sifflet", 60] call CBA_fnc_globalSay3d;
	player setFatigue ((getFatigue player) + 0.15);
	g_action_delay = time;
} else {
	["Vous n'avez pas de sifflet"] call public_fnc_error;
};
