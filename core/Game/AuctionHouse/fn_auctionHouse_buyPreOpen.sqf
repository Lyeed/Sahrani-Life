/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (dialog) exitWith {};
if (g_action_inUse) exitWith {
	["Vous avez l'air occupé<br/>Revenez plus tard"] call public_fnc_error;
};

if ((player getVariable ["surrender", false]) || (player getVariable ["restrained", false])) exitWith {};

if (isNil "gServer_soonReboot") then {
	g_action_inUse = true;
	[player] remoteExecCall ["TON_fnc_auctionHouse_getMenu", 2];
} else {
	["Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call public_fnc_error;
};
