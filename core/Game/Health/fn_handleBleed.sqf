/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_amount"];
_amount = round([_this, 0, 0, [0]] call BIS_fnc_param);

if (player getVariable ["is_coma", false]) exitWith {};
if (_amount < 3) exitWith {};

if (g_bleed isEqualTo 0) then
{
	player setVariable ["is_bleeding", true, true];
	g_bleed = _amount;
	[] spawn
	{
		while {((g_bleed > 0) && (player getVariable ["is_bleeding", false]))} do
		{
			[(g_bleed * -1)] call public_fnc_handleBlood;
			[] call EVENT_fnc_onPlayerFireNear;
			sleep 2;
		};
		g_bleed = 0;
		if (player getVariable ["is_bleeding", false]) then {
			player setVariable ["is_bleeding", false, true];
		};
	};
} else {
	g_bleed = g_bleed + _amount;
};