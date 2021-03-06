/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_amount";
_amount = [_this, 0, 0, [0]] call BIS_fnc_param;

if (g_alcool isEqualTo 0) then
{
	g_alcool = _amount;
	[] spawn
	{
		private["_effect", "_i"];
		_effect = ppEffectCreate ["ChromAberration", 3500];
		_effect ppEffectEnable true;
		_effect ppEffectForceInNVG true;

		_i = 10;
		while {_i > 1} do
		{
			_effect ppEffectAdjust [g_alcool, g_alcool, true];
			_effect ppEffectCommit 5;
			waitUntil {ppEffectCommitted _effect};
			_i = _i - 1;
		};

		while {g_alcool > 0} do
		{
			if (!(player getVariable ["is_coma", false])) then
			{
				if (g_alcool > 6) then
				{
					if ((animationState player) != "incapacitated") then {player PlayMove "incapacitated"};
					if (random(100) <= 70) then {[player, "vomit", 20] call CBA_fnc_globalSay3d};
				} else {
					if ((animationState player) isEqualTo "incapacitated") then {player playMoveNow "amovppnemstpsraswrfldnon"};
				};
			};

			_effect ppEffectAdjust [g_alcool, g_alcool, true];
			_effect ppEffectCommit 10;
			waitUntil {ppEffectCommitted _effect};
			g_alcool = g_alcool - 0.01;
		};

		if (g_alcool < 0) then {g_alcool = 0};
		_effect ppEffectEnable false;
		ppEffectDestroy _effect;
	};
} else {
	g_alcool = g_alcool + _amount;
	if (g_alcool < 0) then {g_alcool = 0};
};
