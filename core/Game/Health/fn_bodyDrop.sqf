/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull g_dragingBody) exitWith {
	["Vous n'êtes pas en train de trainer quelqu'un"] call ALYSIA_fnc_error; 
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};

if (player getVariable ["is_coma", false]) exitWith {
	["Vous êtes dans le coma"] call ALYSIA_fnc_error; 
};

g_action_inUse = false;
player playAction "released";

sleep 2;

detach g_dragingBody;
g_dragingBody setVariable["is_dragged", false, true];
g_dragingBody = ObjNull;
g_action_inUse = false;