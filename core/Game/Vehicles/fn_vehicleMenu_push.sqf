/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_vel", "_dir"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

if (!((crew _target) isEqualTo [])) exitWith {
	["Le véhicule doit être vide."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt."] call AlysiaClient_fnc_error;	
};

closeDialog 0;

if (!(["Pousser", 2, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!((crew _target) isEqualTo [])) exitWith {
	["Le véhicule doit être vide."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt."] call AlysiaClient_fnc_error;	
};

_vel = velocity _target;
_dir = direction _target;
if (local _target) then {
	_target setVelocity [(_vel select 0) - (sin _dir * 5),(_vel select 1) - (cos _dir * 5), (_vel select 2)];
} else {
	[_target, [(_vel select 0) - (sin _dir * 5),(_vel select 1) - (cos _dir * 5), (_vel select 2)]] remoteExecCall ["setVelocity", _target];
};
