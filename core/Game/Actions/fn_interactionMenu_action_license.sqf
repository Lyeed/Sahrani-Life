/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (!(g_interaction_target getVariable ["restrained", false]) && !(g_interaction_target getVariable ["surrender", false])) exitWith {
	["La cible ne peut pas être fouillé"] call public_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Inspection des licences", 3, g_interaction_target] call public_fnc_showProgress)) exitWith {};

if (!(g_interaction_target getVariable ["restrained", false]) && !(g_interaction_target getVariable ["surrender", false])) exitWith {
	["La cible ne peut pas être fouillé"] call public_fnc_error;
};

[player] remoteExecCall ["public_fnc_interactionMenu_action_license_get", g_interaction_target];