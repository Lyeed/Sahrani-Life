/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

titleText ["", "BLACK OUT", 5];

sleep 5;
<<<<<<< HEAD
titleText["Sortie de cellule..", "BLACK FADED"];
{z
    missionNamespace setVariable [(format["inv_%1", _x]), 0];
} forEach (g_inv_items);
removeHeadgear player;
removeGoggles player;
removeVest player;
removeBackpack player;
removeUniform player;
removeAllWeapons player;
removeAllAssignedItems player;
=======

titleText ["Sortie de cellule..", "BLACK FADED"];

{
    missionNamespace setVariable [format["inv_%1", (_x select 0)], 0];
} forEach ([] call AlysiaClient_fnc_getInv);

_handle = [] spawn AlysiaClient_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

>>>>>>> a16a8ac160852237c5bb5b0c7fdf4d3f77fa975b
sleep 5;
titleText ["Remise de vos effets personnels..", "BLACK FADED"];

[true, (g_arrest_Gear select 0)] call AlysiaClient_fnc_handleCash;

[(g_arrest_Gear select 1)] spawn AlysiaClient_fnc_loadGear;

{
	[true, (_x select 0), (_x select 1)] call AlysiaClient_fnc_handleInv;
} forEach (g_arrest_Gear select 2);

sleep 5;

titleText ["Sortie de prison..", "BLACK FADED"];
player setPosATL getArray(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "exit");

sleep 5;

g_arrest_Prison = "";
g_arrest_Cellule = 0;
g_arrest_Caution = 0;
g_arrest_Reason = "";

titleText ["", "BLACK IN", 5];
player setVariable ["arrested", false, true];
["Vous êtes libre !"] call AlysiaClient_fnc_info;
