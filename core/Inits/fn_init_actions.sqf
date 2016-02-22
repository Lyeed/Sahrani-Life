/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

/* ==================[CONFIG]===================*/
if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "interaction_seize_gear") isEqualTo 1) then
{
	[[
		"<img image='lyeed_IMG\data\actions_menu\seize.paa'/> <t color='#3F51B5'>Saisir</t> les objets proches</t>",
		AlysiaClient_fnc_seizeObjects, "", 0, false, false, "", '((count(nearestObjects [player, ["WeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["GroundWeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["WeaponHolderSimulated"], 3]) > 0))'
	]] call CBA_fnc_addPlayerAction;
};

/* ==================[MEDICAL]===================*/

[[
	"<img image='lyeed_IMG\data\actions_menu\morphine.paa'/> Se faire une <t color='#FF5722'>piqure d'adrénaline</t>",
	AlysiaClient_fnc_item_adrenaline_use, player, 0, false, true, "", '(("SkylineItems_Adrenaline" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='lyeed_IMG\data\actions_menu\morphine.paa'/> Se faire une <t color='#FF5722'>piqure de morphine</t>",
	AlysiaClient_fnc_item_morphine_use, player, 0, false, true, "", '(("SkylineItems_Morphine" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='lyeed_IMG\data\actions_menu\bandage.paa'/> Se faire un <t color='#FF5722'>bandage</t>",
	AlysiaClient_fnc_item_bandage_use, player, 0, true, true, "", '((g_bleed > 0) && ("SkylineItems_Bandage" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;
//---------------

/* ==================[SEATBELT]===================*/
[[
	"<img image='lyeed_IMG\data\actions_menu\seatbelt_on.paa'/> Mettre sa <t color='#74DF00'>ceinture</t>", 
	{
		g_seatbelt = true;
		playSound "seatbelt_on";
	}, "", 0, false, false, "", '(!g_action_inUse && (vehicle player) != player && !g_seatbelt)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='lyeed_IMG\data\actions_menu\seatbelt_off.paa'/> Enlever sa <t color='#FE642E'>ceinture</t>",
	{
		g_seatbelt = false;
		playSound "seatbelt_off";
	}, "", 0, false, false, "", '!g_action_inUse && (vehicle player) != player && g_seatbelt'
]] call CBA_fnc_addPlayerAction;
//---------------
