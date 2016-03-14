/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";

_target = cursorTarget;
if (isNull _target) exitWith {};
if (!(isPlayer _target)) exitWith {};
if ((player distance _target) > 4) exitWith {};
if (speed _target > 1) exitWith {};
if ((_target getVariable ["surrender", false]) || (_target getVariable ["restrained", false]) || (_target getVariable ["is_coma", false])) exitWith {};
if ((animationState player) isEqualTo "incapacitated") exitWith {};
if ((animationState _target) isEqualTo "incapacitated") exitWith {};
if ((currentWeapon player != primaryWeapon player) && (currentWeapon player != handgunWeapon player)) exitWith {};
if ((currentWeapon player isEqualTo "") || ((currentWeapon player) in ["Skyline_Hache_01", "Skyline_Pioche_01", "Skyline_Pelle_01", "Skyline_Merlin_01", "Skyline_tl122_blanche", "Skyline_tl122_rouge", "Skyline_tl122_orange", "Skyline_tl122_verte", "Skyline_tl122_bleu", "Skyline_tl122_rose", "Skyline_tl122_jaune"])) exitWith {};
if ((player getVariable ["surrender", false]) || (player getVariable ["restrained", false])) exitWith {};
if ((getFatigue player) > 85) exitWith {["Vous êtes trop fatigué pour pouvoir effectuer cette action"] call AlysiaClient_fnc_error};
if ((time - g_action_delay) < 3) exitWith {};

g_action_inUse = true;
player setFatigue ((getFatigue player) + 0.3);
[_target, "punch", 15] call CBA_fnc_globalSay3d;
[player, "AwopPercMstpSgthWrflDnon_End2"] remoteExecCall ["switchMove", -2];
sleep 0.08;
[] remoteExec ["AlysiaClient_fnc_knockedOut", _target];
g_action_inUse = false;

g_action_delay = time;
