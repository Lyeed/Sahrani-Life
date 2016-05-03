/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_number", "_handle"];
_number = [_this, 0, "", [""]] call BIS_fnc_param;

if (([_number] call CBA_fnc_strLen) != 6) exitWith {
	["Le numéro doit être composé de six chiffres."] call AlysiaClient_fnc_error;
};
if (!(_number in (missionNamespace getVariable ["gServer_phone_numbers", []]))) exitWith {
	["Le numéro demandé n'est pas attribué."] call AlysiaClient_fnc_error;
};
if (_number in g_phone_blacklist) exitWith {
	["Vous ne pouvez pas appeler un numéro que vous avez blacklisté."] call AlysiaClient_fnc_error;
};
if (_number isEqualTo (player getVariable ["number", ""])) exitWith {
	["Vous ne pouvez pas vous appeler vous même."] call AlysiaClient_fnc_error;
};

_handle = ["PHONE_CALLING"] spawn AlysiaClient_fnc_tabletApp;
waitUntil {scriptDone _handle};

missionNamespace setVariable ["calling", true];
missionNamespace setVariable ["calling_target", objNull];
missionNamespace setVariable ["calling_freq_old", ([(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency)];
missionNamespace setVariable ["calling_freq", str(round(random(499999) + 500000))];
missionNamespace setVariable ["calling_time", 0];
missionNamespace setVariable ["calling_number", _number];
missionNamespace setVariable ["calling_hide", false];

[] spawn AlysiaClient_fnc_phone_call_loop;
