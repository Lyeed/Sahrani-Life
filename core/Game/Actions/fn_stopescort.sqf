/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_target"];
_target = [_this, 0 objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};
if (isNull _target) exitWith {
	["Cible invalide"] call public_fnc_error;
};

g_action_inUse = true;
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if (!(isNull (_target getVariable ["escorted", objNull]))) then
{
	_target = _target getVariable ["escorted", objNull];
	detach _target;
	_target setVariable ["escorting", objNull, true];
	_target setVariable ["escorted", objNull, true];
	_handle = true;
} else {
	if (!(isNull (_target getVariable ["escorting", objNull]))) then
	{
		_target = _target getVariable ["escorting", objNull];
		detach _target;
		_target setVariable ["escorted", objNull, true];
		_target setVariable ["escorting", objNull, true];
		_handle = true;
	} else {
		_handle = false;
	};
};

if (!_handle) then {
	["La cible n'est ni en train d'escorter quelqu'un ni en train d'être escortée"] call public_fnc_error;
};

g_action_inUse = false;
