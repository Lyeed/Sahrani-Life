/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (!(isNull g_dragingBody)) exitWith {
	["Vous êtes déjà en train de trainer quelqu'un"] call AlysiaClient_fnc_error;
};

if (!(_target getVariable ["is_coma", false])) exitWith {
	["La cible n'est pas dans le coma"] call AlysiaClient_fnc_error;
};

if (_target getVariable ["transporting", false]) exitWith {
	["Quelqu'un traine déjà ce corps"] call AlysiaClient_fnc_error;
};

player playAction "grabDrag";
g_dragingBody = _target;
g_dragingBody attachTo [player, [0, 1, 0]];
titleText["* Appuyez sur 'windows' pour déposer le corps *", "PLAIN DOWN"];
g_dragingBody setVariable ["transporting", true, true];
