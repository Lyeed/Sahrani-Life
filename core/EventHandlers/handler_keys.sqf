/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Alysia", "actionHandler", "Action", { [] call public_fnc_actionKeyHandler; }, {}, [DIK_LWIN, [false, false, false]], false, 0, true] call cba_fnc_addKeybind;
["Alysia", "actionTablet", "Ouvrir la tablette", { [] spawn public_fnc_tabletOpen; }, {}, [DIK_Y, [false, false, false]], false, 0, true] call cba_fnc_addKeybind;
["Alysia", "actionSurrender", "Mettre les mains sur la tête", { [] call public_fnc_surrender; }, {}, [DIK_H, [false, false, true]], false, 0, false] call cba_fnc_addKeybind;
["Alysia", "actionKnock", "Mettre une tatane", { [cursorTarget] spawn public_fnc_knockoutAction; }, {}, [DIK_G, [true, false, false]], false, 0, true] call cba_fnc_addKeybind;
["Alysia", "actionKnock", "Menotter", { [cursorTarget] spawn public_fnc_restrainAction; }, {}, [DIK_R, [true, false, false]], false, 0, true] call cba_fnc_addKeybind;
["Alysia", "actionHoldster", "Ranger/sortir son arme", { [] call public_fnc_holdsterSwitch; }, {}, [DIK_H, [true, false, false]], false, 0, false] call cba_fnc_addKeybind;

{
	[_x, [true, true, true], { [] spawn public_fnc_onPlayerMapOpen; }, "keydown", "actionMap", false] call CBA_fnc_addKeyHandler;
} forEach (actionKeys "ShowMap");