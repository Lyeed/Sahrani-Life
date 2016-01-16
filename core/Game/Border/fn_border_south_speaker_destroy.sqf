/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};

closeDialog 0;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};

if (_object getVariable ["destroyed", false]) exitWith {
	["Le haut parleur a déjà été saboté"] call public_fnc_error;
};

[_object, (["radio_buzz_1", "radio_buzz_2"] call BIS_fnc_selectRandom), 300] call CBA_fnc_globalSay3d;
if (!(["Sabotage d'un haut parleur", 7, _object, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};

if (_object getVariable ["destroyed", false]) exitWith {
	["Le haut parleur a déjà été saboté"] call public_fnc_error;
};

_object setVariable ["destroyed", true, true];
["Vous avez saboté le haut parleur"] call public_fnc_info;
