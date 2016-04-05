/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

(findDisplay 46) displayAddEventHandler ["KeyDown", "(_this select 1) call AlysiaEvent_fnc_onPlayerKeyPress"];

player addEventHandler ["FiredNear", "_this call AlysiaEvent_fnc_onPlayerFireNear"];
player addEventHandler ["handleDamage", "_this call AlysiaEvent_fnc_onPlayerHandleDamage"];
player addEventHandler ["InventoryOpened", "[_this select 1] spawn AlysiaEvent_fnc_onPlayerInventoryOpen"];
player addEventHandler ["Killed", "call AlysiaEvent_fnc_onplayerDeath"];
player addEventHandler ["Respawn", "call AlysiaEvent_fnc_onPlayerRespawn"];

/* TASK_FORCE_RADIO */
// ["actionRadio", "OnTangent", {call AlysiaEvent_fnc_onPlayerSpeakRadio}, player] call TFAR_fnc_addEventHandler;
["actionSpeak", "OnSpeak", {(_this select 1) call AlysiaEvent_fnc_onPlayerSpeak}, player] call TFAR_fnc_addEventHandler;
