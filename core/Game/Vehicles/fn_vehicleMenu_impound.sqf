/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (!((crew _target) isEqualTo [])) exitWith {
	["Il ne doit pas y avoir de passager à bord du véhicule pendant la mise en fourrièrre."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt."] call AlysiaClient_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (["Mise en fourrière", 8, _target] call AlysiaClient_fnc_showProgress) then
{
	private "_storePos";
	if (_target isKindOf "Ship") then {
		_storePos = [0,0,0];
	} else {
		if (g_choice isEqualTo "NORTH") then {
			_storePos = getMarkerPos "fourriere_NORTH";
		} else {
			_storePos = getMarkerPos "fourriere_SOUTH";
		};
	};
	
	[_target, _storePos, false] remoteExec ["AlysiaServer_fnc_garageVehicleStore", 2];
};
