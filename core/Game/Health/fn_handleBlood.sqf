/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value", "_regen"];
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
				_regen = 0;
				if ((g_hunger >= 100) && (g_thirst >= 100)) then {
					_regen = 6;
				} else {
					_regen = 2;
				};

				if (_regen > 0) then
				{
					if (g_morphine > 0) then {
						_regen = _regen * 4;
					};

					[_regen] call public_fnc_handleBlood;
				};
			};
			sleep 2;
		};
		g_regen_active = false;
	};
};