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
if (_target getVariable ["restrained", false]) exitWith {
	["La cible est déjà menottée."] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["surrender", false]) && ((animationState _target) != "incapacitated")) exitWith {
	["La cible ne peut pas être menottée."] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil {((animationState player) isEqualTo "ainvpercmstpsnonwnondnon_putdown_amovpercmstpsnonwnondnon")};

g_action_inUse = false;

if (_target getVariable ["restrained", false]) exitWith {
	["La cible est déjà menottée."] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["surrender", false]) && ((animationState _target) != "incapacitated")) exitWith {
	["La cible ne peut pas être menottée."] call AlysiaClient_fnc_error;
};

if ([false, "handcuffs", 1] call AlysiaClient_fnc_handleInv) then {
	[] remoteExec ["AlysiaClient_fnc_restrain", _target];
} else {
	["Vous n'avez pas de menottes."] call AlysiaClient_fnc_error;
};
