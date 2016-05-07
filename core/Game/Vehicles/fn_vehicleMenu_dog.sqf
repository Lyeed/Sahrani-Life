/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_trunk", "_find"];

if (isNull g_interaction_target) exitWith {};
if (isNull g_dog) exitWith {};

if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call AlysiaClient_fnc_error;	
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

[player, "whistle", 30] call CBA_fnc_globalSay3d;
g_dog setVariable ["follow", false];
g_dog setVariable ["search", g_interaction_target];

waitUntil {!(isNull g_dog) || !(alive g_dog) || ((g_dog distance g_interaction_target) < 4)};

if ((isNull g_dog) || !(alive g_dog)) exitWith {};

sleep (random(5) + 1);

_trunk = g_interaction_target getVariable ["trunk", []];

_find = false;
{
	if ((([_trunk, _x] call AlysiaClient_fnc_itemTrunk) > 0) && random(100) > 15) exitWith {
		_find = true;
	};
} forEach 
(
	[
		"engrais",
		"tabac",
		"soufre",
		"cocaine",
		"cocainep",
		"cocainepc",
		"heroin",
		"heroinp",
		"hsoufre",
		"methp",
		"cannabis",
		"marijuana",
		"sandwich",
		"cocainep_bag",
		"cocainepc_bag"
	]
);

if (_find) then {
	[g_dog, "dog_two", 100] call CBA_fnc_globalSay3d;
} else {
	[g_dog, "dog_one", 100] call CBA_fnc_globalSay3d;
};

g_dog setVariable ["search", objNull];
g_dog setVariable ["follow", true];
