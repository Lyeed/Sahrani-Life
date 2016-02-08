/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_vehicle", "_bomb"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};
if (g_action_inUse) exitWith {};

if (!("Bank_Bomb" in (magazines player))) exitWith {
	["Vous n'avez pas de c4"] call AlysiaClient_fnc_error;
};

closeDialog 0;
g_action_inUse = true;

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if (!("Bank_Bomb" in (magazines player))) exitWith
{
	["Vous n'avez pas de c4"] call AlysiaClient_fnc_error;
	g_action_inUse = false;
};

_bomb = "Bank_Bomb" createVehicle (getPos player);
_bomb attachTo [_vehicle, [0,-3.14,-0.80]];
_bomb setVectorUp [0,-14,1];

g_action_inUse = false;
