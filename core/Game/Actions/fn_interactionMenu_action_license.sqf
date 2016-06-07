/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["restrained", false]) && !(_target getVariable ["surrender", false])) exitWith {
	["La cible doit avoir les mains sur la tête ou être menottée pour pouvoir effecter être fouillée."] call AlysiaClient_fnc_error;
};

if (["Inspection des licences", 3, _target] call AlysiaClient_fnc_showProgress) then
{
	if ((_target getVariable ["restrained", false]) || (_target getVariable ["surrender", false])) then {
		[player] remoteExecCall ["AlysiaClient_fnc_interactionMenu_action_license_get", _target];
	} else {
		["La cible doit avoir les mains sur la tête ou être menottée pour pouvoir effecter être fouillée."] call AlysiaClient_fnc_error;
	};
};
