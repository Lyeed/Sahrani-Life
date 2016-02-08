/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_obj", "_action_1"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (g_action_inUse) exitWith {};

if (!(isNull (player getVariable ["money_transfer", objNull]))) exitWith {
	["Vous transportez déjà un sac de billets"] call AlysiaClient_fnc_error;
};

if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas récupérer de sac alors que le coffre est en cours d'utilisation"] call AlysiaClient_fnc_error;
};

if ([false, _vehicle, "Trunk", "money_transfer", 1] call AlysiaClient_fnc_handleTrunk) then
{
	closeDialog 0;

	g_action_inUse = true;

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

	g_action_inUse = false;
	
	[] call AlysiaClient_fnc_moneyBagHandle;
} else {
	["Le coffre ne comprend aucun sac de billets de banque"] call AlysiaClient_fnc_error;
};
