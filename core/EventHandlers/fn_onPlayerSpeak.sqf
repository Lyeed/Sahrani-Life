/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_speaking"];
_unit = _this select 0;
_speaking = _this select 1;

if (!(alive _unit) || (_unit getVariable ["is_coma", false])) exitWith 
{
	g_speaking = false;
	true; 
};

if (_unit getVariable["baillon", false]) exitWith
{
	g_speaking = false;
	if (!g_yielding) then
	{
		[_unit] spawn
		{
			g_yielding = true;
			[[(_this select 0), ((["part1", "part2", "part3", "part4"]) call BIS_fnc_selectRandom)], "public_fnc_playSound", nil] spawn life_fnc_MP;
			sleep 7;
			g_yielding = false;
		};
	};
	true;
};

g_speaking = _speaking;