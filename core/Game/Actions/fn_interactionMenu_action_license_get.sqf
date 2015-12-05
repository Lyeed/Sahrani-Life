/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_licenses", "_from"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _from) exitWith {};

_licenses = [];

{
	if (missionNamespace getVariable[format["license_%1", _x], false]) then 
	{
		if (!([_x] call public_fnc_licenseIsIllegal)) then
		{
			_licenses pushBack _x;
		};
	};
} forEach (g_licenses);

[_licenses] remoteExec ["public_fnc_interactionMenu_action_license_return", _from];
