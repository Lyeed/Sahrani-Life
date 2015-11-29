/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

/* DEV */
[["===================", {}]] call CBA_fnc_addPlayerAction;
[["(DEV) Teleport ON", {onMapSingleClick "player setPos _pos";}]] call CBA_fnc_addPlayerAction;
[["(DEV) Teleport OFF", {onMapSingleClick "";}]] call CBA_fnc_addPlayerAction;
[["(DEV) Copier ma position", {copyToClipboard(str(getPos player))}]] call CBA_fnc_addPlayerAction;
[["(DEV) Bandage", {g_bleed = 0;}]] call CBA_fnc_addPlayerAction;
[["(DEV) santé", {[4000] call public_fnc_handleBlood;}]] call CBA_fnc_addPlayerAction;
[["(DEV) +100.000kn (porte-feuille)", {[true, 100000] call public_fnc_handleCash;}]] call CBA_fnc_addPlayerAction;
[["(DEV) +100.000kn (compte)", {[true, 100000, "Dev"] call public_fnc_handleATM;}]] call CBA_fnc_addPlayerAction;
[["(DEV) Réparer véhicule cursorTarget", {cursorTarget setDamage 0;}]] call CBA_fnc_addPlayerAction;
[["(DEV) Réparer mon véhicule", {(vehicle player) setDamage 0;}]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 GPS", {player addItem "ItemGPS";}]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 MAP", {player addItem "ItemMap";}]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 Tenue (Alysia)", {player forceAddUniform "U_C_Alysia_01";}]] call CBA_fnc_addPlayerAction;
[["(DEV) + 1 UZI", {player addMagazine "RH_30Rnd_9x19_UZI"; player addWeapon "RH_muzi";}]] call CBA_fnc_addPlayerAction;
[["(DEV) Revivre", {cursorTarget setVariable ["is_coma", false, true];}]] call CBA_fnc_addPlayerAction;
[["(DEV) +100 faim", {[100] call public_fnc_handleHunger;}]] call CBA_fnc_addPlayerAction;
[["(DEV) +100 soif", {[100] call public_fnc_handleThirst;}]] call CBA_fnc_addPlayerAction;
[["===================", {}]] call CBA_fnc_addPlayerAction;

/* ==================[CONFIG]===================*/
if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "can_seize_gear") isEqualTo 1) then
{
	[[
		"<img image='\lyeed_IMG\data\actions_menu\seize.paa'/> <t color='#3F51B5'>Saisir</t> les objets proches</t>",
		public_fnc_seizeObjects, cursorTarget, 0, false, false, "", '((count(nearestObjects [player, ["WeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["GroundWeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["WeaponHolderSimulated"], 3]) > 0))'
	]] call CBA_fnc_addPlayerAction;
};

/* ==================[MEDICAL]===================*/
[[
	"<img image='\lyeed_IMG\data\actions_menu\morphine.paa'/> Se faire une <t color='#FF5722'>piqure de morphine</t>",
	public_fnc_morphineUse, player, 0, false, true, "", '(("SkylineItems_Adrenaline" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='\lyeed_IMG\data\actions_menu\bandage.paa'/> Se faire un <t color='#FF5722'>bandage</t>",
	public_fnc_bandageUse, player, 0, true, true, "", '((g_bleed > 0) && ("SkylineItems_Bandage" in (magazines player)) && !(player getVariable ["is_coma",false]) && !g_action_inUse)'
]] call CBA_fnc_addPlayerAction;
//---------------

/* ==================[SEATBELT]===================*/
[[
	"<img image='\lyeed_IMG\data\actions_menu\seatbelt_on.paa'/> Mettre sa <t color='#74DF00'>ceinture</t>", 
	{
		g_seatbelt = true;
		playSound "seatbelt_on";
	}, "", 0, false, false, "", '(!g_action_inUse && (vehicle player) != player && !g_seatbelt)'
]] call CBA_fnc_addPlayerAction;

[[
	"<img image='\lyeed_IMG\data\actions_menu\seatbelt_off.paa'/> Enlever sa <t color='#FE642E'>ceinture</t>",
	{
		g_seatbelt = false;
		playSound "seatbelt_off";
	}, "", 0, false, false, "", '!g_action_inUse && (vehicle player) != player && g_seatbelt'
]] call CBA_fnc_addPlayerAction;
//---------------


/* ==================[PLAYER INTERACTION]===================
//---------------
[["<t color='#FF8000'>Bander</t> les yeux", public_fnc_useBandeau, "", 0, false, false, "", '!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained", false]) && !g_action_inUse && !(cursorTarget getVariable["bandeau", false]) && (inv_bandeau > 0)']] call CBA_fnc_addPlayerAction;
[["Enlever le <t color='#FF8000'>bandeau</t>", public_fnc_getBandeau, "", 0, false, false, "", '!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && !g_action_inUse && (cursorTarget getVariable["bandeau", false])']] call CBA_fnc_addPlayerAction;
[["Enlever votre <t color='#FF8000'>bandeau</t>", public_fnc_getBandeauSelf, "", 0, false, true, "", '!(player getVariable["restrained", false]) && (player getVariable["bandeau", false]) && !g_coma && !(player getVariable["surrender", false])']] call CBA_fnc_addPlayerAction;
//---------------
[["<t color='#FF8000'>Bander</t> la bouche", public_fnc_useBaillon, "", 0, false, false, "", '!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && (cursorTarget getVariable["restrained", false]) && !g_action_inUse && !(cursorTarget getVariable["baillon", false]) && (inv_baillon > 0)']] call CBA_fnc_addPlayerAction;
[["Enlever le <t color='#FF8000'>baillon</t>", public_fnc_getBaillon, "", 0, false, false, "", '!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && !g_action_inUse && (cursorTarget getVariable["baillon", false])']] call CBA_fnc_addPlayerAction;
[["Enlever votre <t color='#FF8000'>baillon</t>", public_fnc_getBaillonSelf, "", 0, false, true, "", '!(player getVariable["restrained", false]) && (player getVariable["baillon", false]) && !g_coma && !(player getVariable["surrender", false])']] call CBA_fnc_addPlayerAction;
//---------------
[["Faire un <t color='#FF802B'>bandage</t>", public_fnc_bandageUse, "other", 0, true, true, "", '!isNull cursorTarget  && (isPlayer cursorTarget) && cursorTarget isKindOf "Man" && (cursorTarget getVariable["is_bleeding", false]) && ("SkylineItems_Bandage" in (magazines player)) && !g_coma && (player distance cursorTarget < 3) && (vehicle player == player) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
//---------------
*/