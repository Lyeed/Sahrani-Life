/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((time - g_action_delay) < 1) exitWith {};

if ((["bip"] call AlysiaClient_fnc_itemCount) > 0) then
{
	{
		if ((_x animationPhase "Door_1_rot") isEqualTo 1) then {
			_x animate ["Door_1_rot", 0];
		} else {
			_x animate ["Door_1_rot", 1];
		};
	} forEach (nearestObjects [player, ["Land_BarGate_F"], 15]);	player setFatigue ((getFatigue player) + 0.15);
	g_action_delay = time;
} else {
	["Vous n'avez pas de télécommande"] call AlysiaClient_fnc_error;
};

true;
