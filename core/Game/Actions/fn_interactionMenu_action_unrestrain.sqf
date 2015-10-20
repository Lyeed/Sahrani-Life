/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["restrained", false])) exitWith {
	["La cible n'est pas menottée"] call public_fnc_error;
};
if (g_interaction_target getVariable ["escorting", false]) exitWith {
	["Quelqu'un escorte la cible"] call public_fnc_error;
};

closeDialog 0;
g_action_inUse = true;
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if (!(g_interaction_target getVariable ["restrained", false])) exitWith {
	["La cible n'est pas menottée"] call public_fnc_error;
};
if (g_interaction_target getVariable ["escorting", false]) exitWith {
	["Quelqu'un escorte la cible"] call public_fnc_error;
};

if (!([true, "handcuffs", 1] call public_fnc_handleInv)) then {
	["Vous n'avez pas récupéré les menottes car vous n'avez pas assez de place"] call public_fnc_error;
};

g_interaction_target setVariable ["restrained", false, true];
[player, "cuffout", 10] call CBA_fnc_globalSay3d;
g_action_inUse = false;