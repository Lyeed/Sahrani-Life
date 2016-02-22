/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_interaction_target) exitWith {};
if (!((crew g_interaction_target) isEqualTo [])) exitWith {
	["Le véhicule doit être vide"] call AlysiaClient_fnc_error;
};

if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call AlysiaClient_fnc_error;	
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (["Mise en fourrière", 8, g_interaction_target] call AlysiaClient_fnc_showProgress) then
{
	private "_storePos";
	if (g_interaction_target isKindOf "Ship") then { 
		_storePos = [0,0,0];
	} else {
		if (g_choice isEqualTo "NORTH") then {
			_storePos = getMarkerPos "fourriere_NORTH";
		} else {
			_storePos = getMarkerPos "fourriere_SOUTH";
		};
	};
	
	[g_interaction_target, _storePos, false] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
};
