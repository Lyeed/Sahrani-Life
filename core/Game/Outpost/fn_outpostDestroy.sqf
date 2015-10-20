/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_outpostID"];
_outpostID = [_this, 3, "", [""]] call BIS_fnc_param;

if (_outpostID == "") exitWith {};
if (playerSide == civilian) exitWith {};
if (life_coma) exitWith {};

if (life_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call ALYSIA_fnc_error;
};

if (player getVariable["restrained", false]) exitWith {
	["Vous ne pouvez pas effectuer cette action avec les mains sur la tête"] call ALYSIA_fnc_error;
};

if (player getVariable["restrained", false]) exitWith {
	["Vous ne pouvez pas effectuer cette action lorsque vous êtes menotté"] call ALYSIA_fnc_error;
};

if ((vehicle player) != player) exitWith {
	["Vous devez sortir de votre véhicule"] call ALYSIA_fnc_error; 
};

if ((missionNamespace getVariable["life_inv_kit_destru", 0]) == 0) exitWith {
	["Vous n'avez pas de kit de destruction"] call ALYSIA_fnc_error; 
};

if (!(["Destruction d'une cache d'arme", 15, true] call ALYSIA_fnc_showProgress)) exitWith {};

if (!([false, "kit_destru", 1] call life_fnc_handleInv)) exitWith {
	["Vous n'avez pas de kit de destruction"] call ALYSIA_fnc_error; 
};

["La cache risque d'<t color='#FE9A2E'>exploser</t> à tout instant"] call ALYSIA_fnc_info;
if (playerSide == west) then {
	[[0, "NEWS: L'armée colombienne a détruit une cache rebelle !"], "life_fnc_broadcast", true] spawn life_fnc_MP;
} else {
	[[0, "NEWS: L'ONU a détruit une cache rebelle !"], "life_fnc_broadcast", true] spawn life_fnc_MP;
};

[[parseNumber(_outpostID), (getPos player)], "ALYSIA_fnc_rebelsServerDestroy", false] spawn life_fnc_MP;