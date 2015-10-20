/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };

life_god = !life_god;
if (life_god) then
{
	["<t align='center'>God Mode activé</t>"] call ALYSIA_fnc_info;
	[] spawn
	{
		while {life_god} do
		{
			life_bleed = 0;
			life_blood = 4000;
			life_thirst = 100;
			life_hunger = 100;
			player setFatigue 0;
			sleep 0.2;
		};
	};
}
else
{
	["<t align='center'>God Mode désactivé</t>"] call ALYSIA_fnc_info;
};
