/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_apply_busy_to_target", "_apply_end_to_target", "_apply_target"];
_apply_busy_to_target = [_this, 0, false, [false]] call BIS_fnc_param;
_apply_end_to_target = [_this, 1, false, [false]] call BIS_fnc_param;

if (missionNamespace getVariable ["calling", false]) then
{
	_apply_target = missionNamespace getVariable ["calling_target", objNull];
	if (!(isNull _apply_target)) then
	{
		if (_apply_busy_to_target) then
		{
			[] remoteExecCall ["AlysiaClient_fnc_phone_call_busy", _apply_target];
		};

		if (_apply_end_to_target) then
		{
			[false, false] remoteExecCall ["AlysiaClient_fnc_APP_phone_call_hangup", _apply_target];
		};
	};

	missionNamespace setVariable ["calling", false];
};
