/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

g_keybinds = [];

["Alysia", "actionHandler", "Action", {[] call EVENT_fnc_actionKeyHandler}, {true}, [DIK_LWIN, [false, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionHandler";

["Alysia", "actionSilent", "Boules Quies", {[] call public_fnc_silence}, {}, [DIK_U, [false, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSilent";

["Alysia", "actionTablet", "Ouvrir tablette", {[] spawn public_fnc_tabletOpen}, {true}, [DIK_Y, [false, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionTablet";

["Alysia", "actionSurrender", "Mains sur la tête", {[] call public_fnc_surrender}, {true}, [DIK_H, [false, false, true]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSurrender";

["Alysia", "actionKnock", "Tatane", {[cursorTarget] spawn public_fnc_knockoutAction}, {true}, [DIK_G, [true, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionKnock";

["Alysia", "actionCuff", "Menotter", {[cursorTarget] spawn public_fnc_restrainAction}, {true}, [DIK_R, [true, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionCuff";

["Alysia", "actionHoldster", "Holster", {[] call public_fnc_holdsterSwitch}, {true}, [DIK_H, [true, false, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionHoldster";

["Alysia", "actionSifflet", "Utiliser (sifflet)", {[] call public_fnc_sifflet}, {true}, [DIK_F, [false, false, true]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionSifflet";

["Alysia", "actionBip", "Utiliser (télécommande)", {[] call public_fnc_telecommande}, {true}, [DIK_F, [false, true, false]], false, 0, true] call CBA_fnc_addKeybind;
g_keybinds pushBack "actionBip";

if (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "sirene_sound") != "") then
{
	["Alysia", "actionSirene", "Sirène", {[] call public_fnc_sirene}, {true}, [DIK_F, [true, false, false]], false, 0, true] call CBA_fnc_addKeybind;
	g_keybinds pushBack "actionSirene";
};

if ((getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_on_map") isEqualTo 1) || (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "faction_markers_deaths") isEqualTo 1)) then
{
	{
		[_x, [true, true, true], {[] spawn EVENT_fnc_onPlayerMapOpen}, "keydown", "actionMap", false] call CBA_fnc_addKeyHandler;
	} forEach (actionKeys "ShowMap");
};
