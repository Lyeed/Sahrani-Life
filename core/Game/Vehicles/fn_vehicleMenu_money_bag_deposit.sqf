/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_obj"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (g_action_inUse) exitWith {};

_obj = player getVariable ["money_transfert", objNull];
if (isNull _obj) exitWith {
	["Vous ne transportez pas de sac de billets"] call AlysiaClient_fnc_error;
};

if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas déposer de sac alors que le coffre est en cours d'utilisation"] call AlysiaClient_fnc_error;
};

closeDialog 0;
if ([true, _vehicle, "Trunk", "money_transfert", 1] call AlysiaClient_fnc_handleTrunk) then
{
	g_action_inUse = true;
	deleteVehicle _obj;
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	g_action_inUse = false;
} else {
	["Il n'y a pas assez de place dans le coffre du véhicule"] call AlysiaClient_fnc_error;
};
