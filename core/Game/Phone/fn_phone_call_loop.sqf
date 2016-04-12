/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_freq", "_from"];
_freq = [_this, 0, "", [""]] call BIS_fnc_param;
_from = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if ((_freq isEqualTo "") || (isNull _from)) exitWith {};

_freq_old = [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency;
_freq = str(round(random(499999) + 500000));
[(call TFAR_fnc_activeSwRadio), 1, _freq] call TFAR_fnc_SetChannelFrequency;
player setVariable ["call_accepted", true];

while {((player getVariable ["call_accepted", false]) && (player getVariable ["calling", false]))} do
{
	call TFAR_fnc_onSwTangentPressed;
	call TFAR_fnc_HideHint;
	uiSleep 0.5;
};

[] remoteExecCall ["AlysiaClient_fnc_phone_call_end", _from];
call TFAR_fnc_onSwTangentReleased;
[(call TFAR_fnc_activeSwRadio), 1, _freq_old] call TFAR_fnc_SetChannelFrequency;
player setVariable ["call_accepted", false];
