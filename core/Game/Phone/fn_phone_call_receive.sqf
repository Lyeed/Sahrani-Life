/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_hide", "_oldfreq", "_freq", "_handle"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_freq = [_this, 1, "", [""]] call BIS_fnc_param;
_hide = [_this, 2, false, [false]] call BIS_fnc_param;

if (isNull _from) exitWith {};
if (_from in g_phone_blacklist) exitWith {};

waitUntil {([] call AlysiaClient_fnc_hasPhone)};

if (missionNamespace getVariable ["calling", false]) exitWith 
{
	[] remoteExecCall ["AlysiaClient_fnc_phone_call_busy", _from];
	g_phone_call_history pushBack
	[
		0,
		if (_hide) then {"Inconnu"} else {_from getVariable "number"},
		false
	];
};

missionNamespace setVariable ["calling_answer", nil];
missionNamespace setVariable ["calling_number", (_from getVariable "number")];

while {isNil {missionNamespace getVariable "calling_answer"}} do
{
	_sound = profileNamespace getVariable ["ALYSIA_phone_call_ring", ""];
	if (_sound isEqualTo "") then
	{
		playSound "message_rcv_silent";
		uiSleep 3.5;
	} else {
		_config = missionConfigFile >> "ALYSIA_PHONE" >> "SMS" >> "sounds" >> _sound;
		if (isClass(_config)) then
		{
			[player, _sound, getNumber(_config >> "distance")] call CBA_fnc_globalSay3d;
			uiSleep getNumber(_config >> "sleep");
		} else {
			profileNamespace setVariable ["ALYSIA_phone_call_ring", ""];
		};
	};
};

if (!(missionNamespace getVariable ["calling_answer", false])) exitWith
{
	missionNamespace setVariable ["calling_number", ""];
	missionNamespace setVariable ["calling_answer", nil];
};

_handle = ["PHONE_CALLING"] spawn AlysiaClient_fnc_tabletApp;
waitUntil {scriptDone _handle};

if (TF_tangent_sw_pressed) then {
	call TFAR_fnc_onSwTangentReleased;
};
if (!(isNull (uiNamespace getVariable ["TFAR_Hint_Display", displayNull]))) then {
	call TFAR_fnc_HideHint;
};

missionNamespace setVariable ["calling", true];
missionNamespace setVariable ["calling_time", 0];
missionNamespace setVariable ["calling_freq_old", ([(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency)];
missionNamespace setVariable ["calling_freq", _freq];
missionNamespace setVariable ["calling_target", _from];
missionNamespace setVariable ["calling_hide", _hide];

g_phone_call_history pushBack
[
	0,
	if (_hide) then {"Inconnu"} else {_from getVariable "number"},
	true
];

[(call TFAR_fnc_activeSwRadio), 1, _freq] call TFAR_fnc_SetChannelFrequency;

[] spawn AlysiaClient_fnc_phone_call_loop;
