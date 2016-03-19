/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!(alive player) || (player getVariable ["is_coma", false])) exitWith 
{
	g_speaking = false;
	true;
};

if ((goggles player) isEqualTo "G_Bandanna_blk") exitWith
{
	g_speaking = false;
	if (!g_yielding) then
	{
		[_unit] spawn
		{
			g_yielding = true;
			[player, (["part1", "part2", "part3", "part4"] call BIS_fnc_selectRandom), 25] call CBA_fnc_globalSay3d;
			uiSleep 7;
			g_yielding = false;
		};
	};
	true;
};

g_speaking = _this;
