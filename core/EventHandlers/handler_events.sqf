/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

// player addEventHandler["Fired", "_this call EVENT_fnc_onPlayerFire"];
player addEventHandler["FiredNear", "_this call EVENT_fnc_onPlayerFireNear"];
player addEventHandler["handleDamage", "_this call EVENT_fnc_onPlayerHandleDamage"];
player addEventHandler["InventoryOpened", "[_this select 1] call EVENT_fnc_onPlayerInventoryOpen"];
player addEventHandler["Killed", "[] call EVENT_fnc_onPlayerKilled"];
player addEventHandler["Respawn", "[] call EVENT_fnc_onPlayerRespawn"];
player addEventHandler["GetIn", "_this spawn EVENT_fnc_onPlayerGetIn"];
player addEventHandler["GetOut", "_this call EVENT_fnc_onPlayerGetOut"];
// onPlayerMapOpen

"gServer_fog" addPublicVariableEventHandler {60 setfog (_this select 1)};
"gServer_rain" addPublicVariableEventHandler {60 setRain (_this select 1)};
"gServer_waves" addPublicVariableEventHandler {60 setWaves (_this select 1)};
"gServer_storm" addPublicVariableEventHandler {0 setOvercast (_this select 1)};
"gServer_wind" addPublicVariableEventHandler {setWind (_this select 1)};

/* TASK_FORCE_RADIO */
["actionRadio", "OnTangent", {_this call EVENT_fnc_onPlayerSpeakRadio}, player] call TFAR_fnc_addEventHandler;
["actionSpeak", "OnSpeak", {_this call EVENT_fnc_onPlayerSpeak}, player] call TFAR_fnc_addEventHandler;