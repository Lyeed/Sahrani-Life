/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};

if (serverTime < 600) exitWith {
	[format["Vous <t color='#FF0000'>ne pouvez pas</t> crocheter de véhicule juste après le démarrage du serveur. Veuillez attendre <t color='#2E64FE'>%1 secondes</t>", 600 - serverTime]] call public_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Crochetage", 12, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};
if (!([false, "lockpick", 1] call public_fnc_handleInv)) exitWith {};

[g_interaction_target, "lockpick", 100] call CBA_fnc_globalSay3d;
if ((random(100)) < 25) then 
{
	g_vehicles pushBack _curTarget;
	titleText["Réussi !", "PLAIN DOWN"];
} else {
	titleText["Echoué !", "PLAIN DOWN"];	
};