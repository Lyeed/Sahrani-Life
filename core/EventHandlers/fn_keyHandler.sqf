/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_code"];
_code = _this select 1;

if ((player getVariable ["restrained", false]) || (player getVariable ["knockedOut", false])) exitWith {true};
if ((_code in (actionKeys "SelectAll") || _code in (actionKeys "ForceCommandingMode"))) exitWith {true};
if ((_code in (actionKeys "PersonView")) && g_firstCombatActive && ((vehicle player) isEqualTo player)) exitWith {true};
if ((_code in (actionKeys "MiniMap")) || (_code in (actionKeys "MiniMapToggle"))) exitWith {true};
if (g_coma) exitWith {true};

if (g_action_inUse) exitWith
{
	if (_code in [17, 40, 31, 32]) then
	{
		if (g_action_gathering) then 
		{
			g_action_cancel = true;
			true;
		};
		if (!g_interrupted) then 
		{
			g_interrupted = true;
			true;
		};
	};
	false;
};

false;