/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_hide", "_freq_old", "_freq"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_hide = [_this, 1, false, [false]] call BIS_fnc_param;

if (isNull _from) exitWith {};
if (_from in g_phone_blacklist) exitWith {};

if ([] call AlysiaClient_fnc_hasPhone) then
{
	_freq_old = [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency;
	_freq = str(round(random(499999) + 500000));
	[(call TFAR_fnc_activeSwRadio), 1, _freq] call TFAR_fnc_SetChannelFrequency;
	player setVariable ["calling", _from];
	[_freq, player] remoteExec ["AlysiaClient_fnc_phone_call_loop", _from];
	while {((player getVariable ["calling", objNull]) isEqualTo _from)} do
	{
		call TFAR_fnc_onSwTangentPressed;
		call TFAR_fnc_HideHint;
		uiSleep 0.5;
	};
	call TFAR_fnc_onSwTangentReleased;
	[(call TFAR_fnc_activeSwRadio), 1, _freq_old] call TFAR_fnc_SetChannelFrequency;
};
