/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!(g_interaction_target getVariable ["restrained", false])) exitWith {
	["La cible doit être menotté"] call public_fnc_error;
};

closeDialog 0;

if (!(["Crochetage", 7, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};
if (!([false, "lockpick", 1] call public_fnc_handleInv)) exitWith {};

if ((random(100)) < 35) then {
	g_interaction_target setVariable ["restrained", false, true];
	[player, "cuffout", 10] call CBA_fnc_globalSay3d;
	titleText["Réussi !", "PLAIN DOWN"];
} else {
	titleText["Echoué !", "PLAIN DOWN"];	
};