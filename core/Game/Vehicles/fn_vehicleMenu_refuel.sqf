/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_fuel"];

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Plein", 7, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};
if (!([false, "fuelF", 1] call AlysiaClient_fnc_handleInv)) exitWith {};

_fuel = switch (true) do
{
	case (g_interaction_target isKindOf "Air"): {0.2};
	case (g_interaction_target isKindOf "Ship"): {0.35};
	case (g_interaction_target isKindOf "Tank"): {0.1};
	case (g_interaction_target isKindOf "Truck"): {0.3};
	case (g_interaction_target isKindOf "Car"): {0.5};
	default {0.5};
};

if (local g_interaction_target) then {
	g_interaction_target setFuel ((Fuel g_interaction_target) + _fuel);
} else {
	[g_interaction_target, (Fuel g_interaction_target) + _fuel] remoteExecCall ["setFuel", g_interaction_target, false];
};

[true, "fuelE", 1] call AlysiaClient_fnc_handleInv;