/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sound", "_objects"];
_sound = [_this, 0, "", [""]] call BIS_fnc_param;

if (_sound isEqualTo "") exitWith {};
if (!(missionNamespace getVariable ["g_connected", false])) exitWith {};

_objects =
[
	speaker_south_4,
	speaker_south_5,
	speaker_south_6,
	speaker_south_7,
	speaker_south_8,
	speaker_south_9,
	speaker_south_10,
	speaker_south_11,
	speaker_south_12,
	speaker_south_13,
	speaker_south_14,
	speaker_south_15,
	speaker_south_16,
	speaker_south_17,
	speaker_south_18,
	speaker_south_19
];

if (!gServer_border_south_alarm) then {
	_objects pushBack light_south_3;
};

{
	_x say3D _sound;
} forEach _objects
