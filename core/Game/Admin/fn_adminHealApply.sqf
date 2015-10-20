/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (life_coma) then
{
	life_coma = false;
	sleep 1.5;
};

player setVariable["is_coma", false, true];
player setVariable["is_bleeding", false, true];
life_bleed = 0;
life_blood = 4000;
