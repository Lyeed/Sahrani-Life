/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_escorter", "_escorting"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};
if (isNull _target) exitWith {
	["Cible invalide"] call public_fnc_error;
};

g_action_inUse = true;

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

_escorter = _target getVariable ["escorted", objNull];
if (!(isNull _escorter)) then
{
	detach _target;
	_escorter setVariable ["escorting", objNull, true];
	_target setVariable ["escorted", objNull, true];
};

_escorting = _target getVariable ["escorting", objNull];
if (!(isNull _escorting)) then
{
	detach _escorting;
	_escorting setVariable ["escorted", objNull, true];
	_target setVariable ["escorting", objNull, true];
};

g_action_inUse = false;
