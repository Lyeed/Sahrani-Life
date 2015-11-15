/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_type", "_value"];
_value = round([_this, 0, 0, [0]] call BIS_fnc_param);

if (_value isEqualTo 0) exitWith {};

g_hunger = g_hunger + _value;
if (g_hunger > 100) then 
{
	player setFatigue 1;
	g_hunger = 100;
} else {
	if (g_hunger <= 0) then 
	{
		["Vous mourrez de faim"] call public_fnc_info;
		g_hunger = 0;
		[] spawn
		{
			while {(g_hunger <= 0)} do 
			{
				[-40] call public_fnc_handleBlood;
				player setFatigue 1;
				sleep 4;
			};
		};
	} else {
		switch (true) do 
		{
			case (g_hunger > 20 && g_hunger <= 30): 
			{
				["Vous avez très faim"] call public_fnc_info;
				[player, "hunger_1", 7] call CBA_fnc_globalSay3d;
			};
			case (g_hunger > 10 && g_hunger <= 20): 
			{
				["Vous êtes affamé"] call public_fnc_info;
				[player, "hunger_1", 7] call CBA_fnc_globalSay3d;
			};
			case (g_hunger > 0 && g_hunger <= 10): 
			{ 
				["Vous êtes sur le point de mourir de faim"] call public_fnc_info;
				[player, "hunger_1", 7] call CBA_fnc_globalSay3d;
			};
		};
	};
};