/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

/* DEV */
if (true) then
{
	[["Teleport ON", {onMapSingleClick "player setPos _pos";}]] call CBA_fnc_addPlayerAction;
	[["Teleport OFF", {onMapSingleClick "";}]] call CBA_fnc_addPlayerAction;
	[["Copier ma position", {copyToClipboard(str(getPos player))}]] call CBA_fnc_addPlayerAction;
	[["Bandage", {g_bleed = 0;}]] call CBA_fnc_addPlayerAction;
	[["santé", {[4000] call public_fnc_handleBlood;}]] call CBA_fnc_addPlayerAction;
	[["+100.000$ (porte-feuille)", {g_cash = g_cash + 100000;}]] call CBA_fnc_addPlayerAction;
	[["+100.000$ (compte)", {g_atm = g_atm + 100000;}]] call CBA_fnc_addPlayerAction;
	[["Réparer véhicule cursorTarget", {cursorTarget setDamage 0;}]] call CBA_fnc_addPlayerAction;
	[["Réparer mon véhicule", {(vehicle player) setDamage 0;}]] call CBA_fnc_addPlayerAction;
	[["+ 1 GPS", {player addItem "ItemGPS";}]] call CBA_fnc_addPlayerAction;
	[["+ 1 MAP", {player addItem "ItemMap";}]] call CBA_fnc_addPlayerAction;
	[["+ 1 Tenue (Alysia)", {player forceAddUniform "U_C_Alysia_01";}]] call CBA_fnc_addPlayerAction;
};

/* ==================[CONFIG]===================*/
if ((getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "can_seize_gear")) isEqualTo 1) then {
	[["<t color='#6766ff'>Saisir les objets au sol</t>", public_fnc_seizeObjects, cursorTarget, 0, false, false, "", '((count(nearestObjects [player, ["WeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["GroundWeaponHolder"], 3]) > 0) || (count(nearestObjects [player, ["WeaponHolderSimulated"], 3]) > 0))']] call CBA_fnc_addPlayerAction;
};

/* ==================[MEDICAL]===================*/
//[["Se faire une <t color='#FF802B'>piqure de morphine</t>", public_fnc_morphine, "self", 0, false, true, "", '("SkylineItems_Adrenaline" in (magazines player)) && !g_coma && (vehicle player == player) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
//---------------
// [["Se transferer du <t color='#FF802B'>sang</t>", public_fnc_bloodBagUse, "self", 0, false, true, "", '(g_blood < 3500) && ("SkylineItems_PocheSang" in (magazines player)) && !g_coma && (vehicle player == player) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
//---------------
// [["Se faire un <t color='#FF802B'>bandage</t>", public_fnc_bandageUse, "self", 0, true, true, "", '(g_bleed > 0) && ("SkylineItems_Bandage" in (magazines player)) && !g_coma && !g_action_inUse']] call CBA_fnc_addPlayerAction;
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
[["Transferer du <t color='#FF802B'>sang</t>", public_fnc_bloodBagUse, "other", 0, false, true, "",'!isNull cursorTarget && (cursorTarget isKindOf "Man") && (isPlayer cursorTarget) && (cursorTarget getVariable["is_hurt", false]) && ("SkylineItems_PocheSang" in (magazines player)) && !g_coma && !(cursorTarget getVariable["is_coma", false]) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
[["Faire un <t color='#FF802B'>bandage</t>", public_fnc_bandageUse, "other", 0, true, true, "", '!isNull cursorTarget  && (isPlayer cursorTarget) && cursorTarget isKindOf "Man" && (cursorTarget getVariable["is_bleeding", false]) && ("SkylineItems_Bandage" in (magazines player)) && !g_coma && (player distance cursorTarget < 3) && (vehicle player == player) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
//---------------
[["Faire une <t color='#FF802B'>piqure de morphine</t>", public_fnc_morphineUse, "other", 0, false, true, "", '!isNull cursorTarget  && (isPlayer cursorTarget) && cursorTarget isKindOf "Man" && ("SkylineItems_Morphine" in (magazines player)) && !g_coma && (player distance cursorTarget < 3) && (vehicle player == player) && !g_action_inUse']] call CBA_fnc_addPlayerAction;
*/