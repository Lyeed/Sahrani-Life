/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_objects", "_distance", "_objCount", "_display"];
_distance = [_this, 0, 3, [3]] call BIS_fnc_param;
_display = [_this, 1, true, [true]] call BIS_fnc_param;

if (g_firstCombatActive) exitWith {
	["Vous ne pouvez pas saisir alors que vous êtes en combat"] call AlysiaClient_fnc_error;
};

_objects = 
(
	(nearestObjects [player, ["weaponholder"], _distance]) + 
	(nearestObjects [player, ["GroundWeaponHolder"], _distance]) +
	(nearestObjects [player, ["WeaponHolderSimulated"], _distance])
);

_objCount = count _objects;

{
	deleteVehicle _x;
} forEach _objects;
if (_display) then {[format["Vous avez saisi %1 objet%2", _objCount, if (_objCount > 1) then {"s"} else {""}]] call AlysiaClient_fnc_info};
