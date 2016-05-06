/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_freq"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_freq = [_this, 1, "", [""]] call BIS_fnc_param;

if ((isNull _from) || (_freq isEqualTo "")) exitWith {};

if (missionNamespace getVariable ["calling", false]) then
{
	if ((missionNamespace getVariable ["calling_target", objNull]) isEqualTo _from) then
	{
		if ((missionNamespace getVariable ["calling_freq", ""]) isEqualTo _freq) then
		{
			[(call TFAR_fnc_activeSwRadio), 1, _freq] call TFAR_fnc_SetChannelFrequency;
		};
	};
};
