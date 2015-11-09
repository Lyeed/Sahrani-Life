/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value"];
_value = round([_this, 0, 0, [0]] call BIS_fnc_param);

if (_value isEqualTo 0) exitWith {};
if (g_coma) exitWith {};

g_blood = g_blood + _value;
if (g_blood > 4000) then {
	g_blood = 4000;
} else {
	if (g_blood < 1) then {
		g_blood = 1;
	};
};

g_hurt_effect ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, (g_blood / 4000)], [1, 1, 1, 1]];
g_hurt_effect ppEffectCommit 0;
player setDamage (100 - (100 / 4000 * g_blood)) / 100;

if (g_blood isEqualTo 1) exitWith {
	[] spawn public_fnc_coma;
};

if (!g_regen_active) then
{
	g_regen_active = true;
	[] spawn
	{
		while {(g_blood < 4000)} do
		{
			if ((g_bleed isEqualTo 0) && !g_coma && (g_hunger > 0) && (g_thirst > 0)) then 
			{
				systemChat format["<DEBUG:BLOOD_LOOP> Regen blood : %1", g_blood];
				if ((g_hunger >= 100) && (g_thirst >= 100)) then {
					[10] call public_fnc_handleBlood;
				} else {
					[4] call public_fnc_handleBlood;
				};
			};
			sleep 2;
		};
		systemChat "<DEBUG:BLOOD_END>";
		g_regen_active = false;
	};
};