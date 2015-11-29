/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error; 
};
if (!(isNull g_dragingBody)) exitWith {
	["Vous êtes déjà en train de trainer quelqu'un"] call public_fnc_error; 
};

if (!(_target getVariable["is_coma", false])) exitWith {
	["La cible n'est pas dans le coma"] call public_fnc_error; 
};

if (player getVariable ["is_coma", false]) exitWith {
	["Vous êtes dans le coma"] call public_fnc_error; 
};

if ((player distance _target) > 3) exitWith {
	["Vous êtes trop loin"] call public_fnc_error; 
};

if (_target getVariable["is_dragged", false]) exitWith {
	["Quelqu'un traine déjà ce corps"] call public_fnc_error; 
};

g_action_inUse = true;
player playAction "grabDrag";
_target attachTo [player, [0, 1, 0]];

g_dragingBody = _target;
_target setVariable["is_dragged", true, true];
titleText["* Appuyez sur 'windows' pour déposer le corps *", "PLAIN DOWN"];

[] spawn
{
	while {!(isNull g_dragingBody)} do
	{
		if (!(player getVariable ["is_coma", false]) || ((vehicle player) != player)) exitWith {
			[] spawn public_fnc_bodyDrop;
		};
		sleep 1;
	};
};