/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

/* DEV */
g_dev = false;

[["Mode developpement <t color='#01DF01'>ON</t>", {g_dev = true;}, "", 0, false, false, "", "!g_dev"]] call CBA_fnc_addPlayerAction;
[["Mode developpement <t color='#FF0000'>OFF</t>", {g_dev = false;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["===================", {}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Teleport ON", {onMapSingleClick "(vehicle player) setPos _pos";}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Teleport OFF", {onMapSingleClick "";}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Copier ma position", {copyToClipboard(str(getPos player))}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Bandage", {g_bleed = 0;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) santé", {[4000] call public_fnc_handleBlood;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) +100.000kn (porte-feuille)", {[true, 100000] call public_fnc_handleCash;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) +100.000kn (compte)", {[true, 100000, "Dev"] call public_fnc_handleATM;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Réparer cible", {cursorTarget setDamage 0;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Supprimer cible", {deleteVehicle cursorTarget}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Réparer mon véhicule", {(vehicle player) setDamage 0;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Essence mon véhicule", {(vehicle player) setFuel 1;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 Tenue (Alysia)", {player forceAddUniform "U_C_Alysia_01";}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 GPS", {player addItem "ItemGPS"; player assignItem "ItemGPS"; }, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 MAP", {player addItem "ItemMap"; player assignItem "ItemMap";}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 UZI", {player addMagazine "RH_30Rnd_9x19_UZI"; player addWeapon "RH_muzi";}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 NVG", {player addItem "Skyline_NVGoogle"; player assignItem "Skyline_NVGoogle"; }, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Revivre", {cursorTarget setVariable ["is_bleeding", false, true]; cursorTarget setVariable ["is_coma", false, true];}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) +100 faim", {[100] call public_fnc_handleHunger;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) +100 soif", {[100] call public_fnc_handleThirst;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Tp marché noir", {player setPos (getMarkerPos "black_market_1_marker");}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Cacher HUD", {8 cutText ["", "PLAIN"];}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["(DEV) Afficher HUD", {[] spawn public_fnc_hudSetup;}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;
[["===================", {}, "", 0, false, false, "", "g_dev"]] call CBA_fnc_addPlayerAction;

/* ==================[CONFIG]===================*/
if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "interaction_seize_gear") isEqualTo 1) then
{
	[[
		"<img image='lyeed_IMG\data\actions_menu\seize.paa'/> <t color='#3F51B5'>Saisir</t> les objets proches</t>",
		public_fnc_seizeObjects, cursorTarget, 0, false, false, "", '((count(nearestObjects [player, ["WeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["GroundWeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["WeaponHolderSimulated"], 3]) > 0))'
	]] call CBA_fnc_addPlayerAction;
};

/* ==================[MEDICAL]===================*/

[[
	"<img image='lyeed_IMG\data\actions_menu\morphine.paa'/> Se faire une <t color='#FF5722'>piqure d'adrénaline</t>",
	public_fnc_item_morphine_use, player, 0, false, true, "", '(("SkylineItems_Adrenaline" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='lyeed_IMG\data\actions_menu\morphine.paa'/> Se faire une <t color='#FF5722'>piqure de morphine</t>",
	public_fnc_item_morphine_use, player, 0, false, true, "", '(("SkylineItems_Morphine" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='lyeed_IMG\data\actions_menu\bandage.paa'/> Se faire un <t color='#FF5722'>bandage</t>",
	public_fnc_item_bandage_use, player, 0, true, true, "", '((g_bleed > 0) && ("SkylineItems_Bandage" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
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
