/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (dialog) exitWith {};
if (life_action_inUse) exitWith { ["Vous avez l'air occupé<br/>Revenez plus tard"] call ALYSIA_fnc_error; };
if ((player getVariable["surrender", false]) || (player getVariable["restrained", false])) exitWith {};
if ([west, (visiblePosition player), 20] call life_fnc_nearUnits) exitWith {
	["Vous ne pouvez pas interagir avec l'hôtel des ventes lorsque des militaires se trouvent à proximité"] call ALYSIA_fnc_error;
};
if (ALYSIA_hv_lock) exitWith {
	["L'hôtel des ventes a temporairement été désactivé pour des raisons techniques"] call ALYSIA_fnc_error;
};
if (missionNamespace getVariable["license_civ_secu", false]) exitWith {
	["Vous ne pouvez pas utiliser l'hôtel des ventes lorsque vous possédez une licence de sécurité"] call ALYSIA_fnc_error;
};
if (!(isNil "ALYSIA_life_soonReboot")) exitWith {
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour interagir avec l'hôtel des ventes"] call ALYSIA_fnc_error;
};

life_action_inUse = true;
[[player], "ALYSIA_fnc_hvGetMenu", false] spawn life_fnc_MP;