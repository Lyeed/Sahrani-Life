/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide"] call public_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (!("SkylineItems_Adrenaline" in (magazines player))) exitWith {
	["Vous n'avez pas de morphine"] call public_fnc_error;
};

g_action_inUse = true;

player playAction "medic";
sleep 2;

if (!("SkylineItems_Adrenaline" in (magazines player))) exitWith {
	["Vous n'avez pas de morphine"] call public_fnc_error;
};

player removeMagazine "SkylineItems_Adrenaline";
if (_target isEqualTo player) then {
	[] call public_fnc_item_adrenaline_apply;
} else {
	remoteExecCall ["public_fnc_item_adrenaline_apply", _target];
};

g_action_inUse = false;
