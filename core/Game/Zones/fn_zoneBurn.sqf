/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_zone"];
_zone = [_this, 0, "", [""]] call BIS_fnc_param;

if (_zone == "") exitWith {};
if (_zone in ALYSIA_burnt_zone) exitWith { 
	["Cette zone a déjà été brulée récemment"] call ALYSIA_fnc_error;
};
if ((vehicle player) != player) exitWith {
	[(localize "STR_Vehicle_Action")] call ALYSIA_fnc_error;
};
if (life_coma) exitWith {
	[(localize "STR_Coma_Action")] call ALYSIA_fnc_error;
};

[[_zone, player], "ALYSIA_fnc_zoneDestroy", false] spawn life_fnc_MP;