/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (g_interaction_target getVariable ["restrained", false]) exitWith {
	["La cible est déjà menottée."] call AlysiaClient_fnc_error;
};
if (!(g_interaction_target getVariable ["surrender", false]) && ((animationState player) != "incapacitated")) exitWith {
	["La cible ne peut pas être menottéee."] call AlysiaClient_fnc_error;
};

closeDialog 0;
g_action_inUse = true;
player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

g_action_inUse = false;

if (g_interaction_target getVariable ["restrained", false]) exitWith {
	["La cible est déjà menottée."] call AlysiaClient_fnc_error;
};
if (!(g_interaction_target getVariable ["surrender", false]) && ((animationState player) != "incapacitated")) exitWith {
	["La cible ne peut pas être menottée."] call AlysiaClient_fnc_error;
};

if ([false, "handcuffs", 1] call AlysiaClient_fnc_handleInv) then {
	remoteExec ["AlysiaClient_fnc_restrain", g_interaction_target];	
} else {
	["Vous n'avez pas de menottes."] call AlysiaClient_fnc_error;	
};
