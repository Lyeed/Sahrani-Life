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

player setVariable ["calling_target", _from];
player setVariable ["calling_freq_old", ([(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_GetChannelFrequency)];
[(call TFAR_fnc_activeSwRadio), 1, _freq] call TFAR_fnc_SetChannelFrequency;
