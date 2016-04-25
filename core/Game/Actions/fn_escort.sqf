/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (!(isNull (player getVariable ["escorting", objNull]))) exitWith {
	["Vous escortez déjà quelqu'un"] call AlysiaClient_fnc_error;
};
if (!(isNull (_target getVariable ["escorted", objNull]))) exitWith {
	["Quelqu'un escorte déjà la cible"] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["restrained", false])) exitWith {
	["La cible doit être menottée"] call AlysiaClient_fnc_error;
};
if (isNull _target) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil {((animationState player) isEqualTo "ainvpercmstpsnonwnondnon_putdown_amovpercmstpsnonwnondnon")};

if (!(isNull (player getVariable ["escorting", objNull]))) exitWith {
	["Vous escortez déjà quelqu'un"] call AlysiaClient_fnc_error;
};
if (!(isNull (_target getVariable ["escorted", objNull]))) exitWith {
	["Quelqu'un escorte déjà la cible"] call AlysiaClient_fnc_error;
};
if (!(_target getVariable ["restrained", false])) exitWith {
	["La cible doit être menottée"] call AlysiaClient_fnc_error;
};

_target attachTo [player, [0.1, 1, 0]];
_target setVariable ["escorted", player, true];
player setVariable ["escorting", _target, true];
