/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_info", "_uid", "_owner"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_info = _target getVariable "laboratory_info";
if (isNil "_info") exitWith {};

if (_target getVariable ["inUse", false]) exitWith {
	["L'objet est déjà en cours d'utilisation"] call AlysiaClient_fnc_error;
};

_target setVariable ["inUse", true, true];

if (!(["Destruction", 6, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {
	_target setVariable ["inUse", false, true];
};

_uid = _info select 1;
_owner = [_info select 1] call AlysiaClient_fnc_getPlayerFromUID;
if (!(isNull _owner)) then {
	[playerSide, (_info select 2)] remoteExecCall ["AlysiaClient_fnc_labo_update", _owner];
};

[_info, player, _target] remoteExec ["AlysiaServer_fnc_laboratory_destroy", 2];
