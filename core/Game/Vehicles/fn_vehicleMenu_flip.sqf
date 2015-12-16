/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!((crew g_interaction_target) isEqualTo [])) exitWith {
	["Le véhicule doit être vide"] call public_fnc_error;
};
if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call public_fnc_error;	
};

if (!(["Retourner", 4, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};

if (!((crew g_interaction_target) isEqualTo [])) exitWith {
	["Le véhicule doit être vide"] call public_fnc_error;
};
if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call public_fnc_error;	
};

g_interaction_target setPos [(getPos g_interaction_target) select 0, (getPos g_interaction_target) select 1, (getPos g_interaction_target select 2) + 0.5];
