/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

titleText ["", "BLACK OUT", 5];
sleep 5;
titleText["Sortie de cellule..", "BLACK FADED"];
{
    missionNamespace setVariable [(format["inv_%1", _x]), 0];
} forEach (g_inv_items);
removeHeadgear player;
removeGoggles player;
removeVest player;
removeBackpack player;
removeUniform player;
removeAllWeapons player;
removeAllAssignedItems player;
sleep 5;
titleText["Remise de vos effets personnels..", "BLACK FADED"];
g_cash = g_arrest_Gear select 0;
[g_arrest_Gear select 1] call public_fnc_loadGear;
{
	[true, _x, 1];
} forEach g_arrest_Gear select 2;
sleep 5;
titleText["Sortie de prison..", "BLACK FADED"];
player setPosATL (getArray(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "exit"));
sleep 5;

g_arrest_Prison = "";
g_arrest_Cellule = 0;
g_arrest_Caution = 0;
g_arrest_Reason = "";

player setVariable ["arrested", false, true];
titleText["", "BLACK IN", 5];
["Vous êtes désormais libre!"] call public_fnc_info;

