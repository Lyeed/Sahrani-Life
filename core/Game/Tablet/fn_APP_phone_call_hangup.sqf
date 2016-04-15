/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable ["calling", false]) then
{
	player setVariable ["calling", false];
	if (!(isNull (player getVariable ["calling_target", objNull]))) then
	{
		[] remoteExecCall ["AlysiaClient_fnc_phone_call_end", (player getVariable ["calling_target", objNull])];
	};
};
