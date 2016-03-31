/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_bed", "_pos"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

if (!(isNull (attachedTo _unit))) exitWith {
	["La cible est déjà installée."] call AlysiaClient_fnc_error;
};

_bed = (nearestObjects [g_interaction_target, ["xcam_Sun_chair_green_F", "xcam_postel_manz_kov"], 6]) select 0;
if (isNil "_bed") exitWith {
	["Vous n'êtes près d'aucun lit hospitalier."] call AlysiaClient_fnc_error;
};

_pos = switch (typeOf(_bed)) do
{
	case "xcam_Sun_chair_green_F": {[0,-0.2,0.2]};
	case "xcam_postel_manz_kov": {[1,0.5,0.7]};
};

_unit attachTo [_bed, _pos];
if (typeOf(_bed) isEqualTo "xcam_postel_manz_kov") then {
	[_bed] remoteExec ["AlysiaClient_fnc_action_hospital_awake", _unit];
};
