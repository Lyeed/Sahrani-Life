/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_morphine isEqualTo 0) then
{
	g_morphine = 20;
	[] spawn
	{
		while {g_morphine > 0} do
		{
			g_morphine = g_morphine - 1;
			sleep 1;
		};
	};
} else {
	g_morphine = g_morphine + 20;
};