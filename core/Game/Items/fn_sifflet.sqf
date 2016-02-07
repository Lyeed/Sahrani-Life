/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((time - g_action_delay) < 2) exitWith {};

if ((["sifflet"] call AlysiaClient_fnc_itemCount) > 0) then
{
	if ((vehicle player) isEqualTo player) then
	{
		[player, "sifflet", 60] call CBA_fnc_globalSay3d;
		player setFatigue ((getFatigue player) + 0.05);
		g_action_delay = time;
	} else {
		["Vous devez être à pied pour utiliser le sifflet"] call AlysiaClient_fnc_error;
	};
} else {
	["Vous n'avez pas de sifflet"] call AlysiaClient_fnc_error;
};

true;
