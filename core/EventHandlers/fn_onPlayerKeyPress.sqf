/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_code"];
_code = _this select 1;

if ((_code in (actionKeys "SelectAll") || _code in (actionKeys "ForceCommandingMode"))) exitWith {true};
if ((_code in (actionKeys "PersonView")) && g_firstCombatActive && ((vehicle player) isEqualTo player)) exitWith {true};
if ((_code in (actionKeys "MiniMap")) || (_code in (actionKeys "MiniMapToggle"))) exitWith {true};

if (
		(player getVariable ["restrained", false]) &&
		!(_code isEqualTo (((["Alysia", "actionSilent"] call CBA_fnc_getKeybind) select 5) select 0))
) exitWith {true};

if (
		(player getVariable ["surrender", false]) &&
		!(_code isEqualTo (((["Alysia", "actionSurrender"] call CBA_fnc_getKeybind) select 5) select 0)) &&
		!(_code isEqualTo (((["Alysia", "actionSilent"] call CBA_fnc_getKeybind) select 5) select 0)) &&
) exitWith {true};

if (player getVariable ["is_coma", false]) exitWith {true};
if (!(alive player)) exitWith {true};

if (g_action_inUse) exitWith 
{
	if ((_code in [17, 40, 31, 32]) && !g_interrupted) then {
		g_interrupted = true;
	};
	true;
};

if (g_staff_spec) exitWith
{
	g_staff_spec = false;
	player switchCamera "INTERNAL";
	true;
};

false;
