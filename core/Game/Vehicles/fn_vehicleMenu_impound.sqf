/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!((crew g_interaction_target) isEqualTo [])) exitWith
{
	["Le véhicule doit être vide"] call AlysiaClient_fnc_error;
};

if ((speed g_interaction_target) > 0) exitWith
{
	["Le véhicule doit être à l'arrêt"] call AlysiaClient_fnc_error;	
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Mise en fourrière", 8, g_interaction_target] call AlysiaClient_fnc_showProgress)) exitWith {};

if ((g_interaction_target getVariable["vehicle_info_owners", []]) isEqualTo []) then {
	deleteVehicle g_interaction_target;
} else {
	private["_storePos"];
	if ((g_interaction_target isKindOf "Ship") || (g_interaction_target isKindOf "Air")) then { 
		_storePos = [];
	} else {
		_storePos = getMarkerPos "fourriere";
	};
	[_vehicle, _storePos, true] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2, false];
};