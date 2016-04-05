/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_bed"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _unit) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (_unit getVariable ["bed_awake", false]) exitWith {
	["La cible est déjà installée."] call AlysiaClient_fnc_error;
};

_bed = (nearestObjects [_unit, ["HospitalTable_F", "HospitalBed_F", "HealTable_F"], 6]) select 0;
if (isNil "_bed") exitWith {
	["Vous n'êtes près d'aucun lit hospitalier."] call AlysiaClient_fnc_error;
};

if (count(attachedObjects _bed) > 0) exitWith {
	["Quelqu'un est déjà installé ici."] call AlysiaClient_fnc_error;
};

switch (typeOf(_bed)) do
{
	case "HealTable_F":
	{
		_unit attachTo [_bed, [0, 0.1, -0.2]];
	};
	case "HospitalTable_F":
	{
		_unit attachTo [_bed, [0, 0.1, -0.2]];
	};
	case "HospitalBed_F":
	{
		_unit attachTo [_bed, [0, 0.2, -0.2]];
		if (_unit getVariable ["bullet_check", false]) then {
			["Le patient a besoin d'être opéré d'urgence sur une table d'opération."] call AlysiaClient_fnc_info;
		} else {
			[_bed] remoteExec ["AlysiaClient_fnc_action_hospital_awake", _unit];
		};
	};
};

_reader = (nearestObjects [_unit, ["HospitalReader_F"], 5]) select 0;
if (!(isNil "_reader")) then {
	[_reader, _bed] remoteExec ["AlysiaClient_fnc_action_hospital_heartReader", _unit];
};
