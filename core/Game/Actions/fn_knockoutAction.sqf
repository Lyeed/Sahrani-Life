/*
	File: fn_knockoutAction.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_target"];
_target = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (!(isPlayer _target)) exitWith {};
if ((player distance _target) > 4) exitWith {};
if (speed _target > 1) exitWith {};
if ((_target getVariable["surrender", false]) || (_target getVariable["restrained", false]) || (_target getVariable["is_coma", false])) exitWith {};
if ((animationState player) == "Incapacitated") exitWith {};
if ((animationState _target) == "Incapacitated") exitWith {};
if ((currentWeapon player != primaryWeapon player) && (currentWeapon player != handgunWeapon player)) exitWith {};
if ((currentWeapon player == "") || ((currentWeapon player) in ["Skyline_Hache_01", "Skyline_Pioche_01", "Skyline_Pelle_01", "Skyline_Merlin_01"])) exitWith {}; 
if (life_knockout) exitWith {};
if ((player getVariable["surrender", false]) || (player getVariable["restrained"])) exitWith {};
if ((getFatigue player) > 85) exitWith { ["Vous êtes trop fatigué pour pouvoir effectuer cette action"] call ALYSIA_fnc_error; };

life_knockout = true;
player setFatigue ((getFatigue player) + 0.3);

[_target, "punch", 15] call CBA_fnc_globalSay3d;
[_target, "AwopPercMstpSgthWrflDnon_End2"] remoteExecCall ["switchMove", -2];
sleep 0.08;

[[_target, profileName],"life_fnc_knockedOut", _target] spawn life_fnc_MP;

sleep 3;

life_knockout = false;
