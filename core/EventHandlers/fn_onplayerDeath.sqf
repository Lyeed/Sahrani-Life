/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["tf_globalVolume", 0]) > 0) then {player setVariable ["tf_globalVolume", 0]};
if ((player getVariable ["tf_voiceVolume", 0]) > 0) then {player setVariable ["tf_voiceVolume", 0, true]};

0 cutText["Vous êtes en soin intensif ...", "BLACK FADED"];
0 cutFadeOut 9999999;

detach player;

[] call AlysiaClient_fnc_skull_create;

{
	deleteVehicle _x;
} forEach (nearestObjects [player, ["WeaponHolderSimulated", "GroundWeaponHolder"], 5]);
[] call AlysiaClient_fnc_stripDownPlayer;
hideBody player;

{
	missionNamespace setVariable [(format["inv_%1", _x]), 0];
} forEach g_inv_items;

g_is_alive = false;
g_cash = 0;
g_blood = 4000;
g_bleed = 0;
g_alcool = 0;
g_hunger = 100;
g_thirst = 100;
g_adrenaline = 0;
g_morphine = 0;
g_action_inUse = false;
g_killer = ObjNull;

[] call AlysiaDB_fnc_query_update_usual;
