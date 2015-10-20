/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount"];
_amount = [_this, 0, 0, [0]] call BIS_fnc_param;

if (g_coma) exitWith {};
if (_amount < 3) exitWith {};

systemChat format["<DEBUG:BLEEDING_INIT> Amount : %1", _amount];
if (g_bleed isEqualTo 0) then
{
	player setVariable["is_bleeding", true, true];
	g_bleed = round(_amount);
	[] spawn
	{
		while {(g_bleed > 0)} do
		{
			systemChat format["<DEBUG:BLEEDING_LOOP> Loosing %1 blood", g_bleed];
			[(g_bleed * -1)] call public_fnc_handleBlood;
			[] call EVENT_fnc_onPlayerFireNear;
			sleep 2;
		};
		player setVariable["is_bleeding", false, true];
		systemChat format"<DEBUG:BLEEDING_END>";
	};
} else {
	g_bleed = g_bleed + round(_amount);
};