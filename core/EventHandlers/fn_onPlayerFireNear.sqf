/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

g_combatTime = time;
if (!g_firstCombatActive) then
{
	[] spawn
	{
		g_firstCombatActive = true;
		while {(g_combatTime > (time - 60))} do
		{
			if ((cameraView == "External") && ((vehicle player) == player)) then {
				player switchCamera "Internal";
			};
			sleep 0.2;
		};
		g_firstCombatActive = false;
	};
};
