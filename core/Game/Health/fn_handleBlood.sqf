/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_value";
_value = round([_this, 0, 0, [0]] call BIS_fnc_param);

if (_value isEqualTo 0) exitWith {};
if (player getVariable ["is_coma", false]) exitWith {};

g_blood = g_blood + _value;
if (g_blood >= 4000) then
{
	g_blood = 4000;
	if (player getVariable ["bullet_check", false]) then
	{
		player setVariable ["bullet_check", false, true];
	};
} else {
	if (g_blood < 1) then {
		g_blood = 1;
	};
};

g_hurt_effect ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, (g_blood / 4000)], [1, 1, 1, 1]];
g_hurt_effect ppEffectCommit 0;
player setDamage (100 - (100 / 4000 * g_blood)) / 100;

if (g_blood isEqualTo 1) exitWith
{
	[] spawn AlysiaClient_fnc_handleComa;
};

if (!g_regen_active) then
{
	[] spawn AlysiaClient_fnc_handleRegen;
};
