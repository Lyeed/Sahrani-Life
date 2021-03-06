/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 3, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};

if (!("SkylineItems_Bandage" in (magazines player))) exitWith {
	["Vous n'avez pas de bandage"] call AlysiaClient_fnc_error;
};

if (!(_target getVariable ["is_bleeding", false])) exitWith
{
	if (_target isEqualTo player) then {
		["Vous ne saignez pas"] call AlysiaClient_fnc_error;
	} else {
		["La cible ne saigne pas"] call AlysiaClient_fnc_error;
	};
};

if ((surfaceIsWater (getPos player)) && (((getPosASLW player) select 2) < 0)) exitWith {
	["Vous ne pouvez pas faire de bandage sous l'eau"] call AlysiaClient_fnc_error;
};

if (!(["Bandage", 6, _target, "bandage", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!("SkylineItems_Bandage" in (magazines player))) exitWith {
	["Vous n'avez pas de bandage"] call AlysiaClient_fnc_error;
};

["Bandage <t color='#3ADF00'>appliqué</t>."] call AlysiaClient_fnc_info;
player removeMagazine "SkylineItems_Bandage";
_target setVariable ["is_bleeding", false, true];
