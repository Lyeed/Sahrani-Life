/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_licences"];

if (!(missionNamespace getVariable["g_connected", false])) exitWith {};

_licences = [];
if (playerSide isEqualTo civilian) then
{
	{
		if (missionNamespace getVariable[format["license_%1", _x], false]) then
		{
			_licences pushBack _x;
		};
	} forEach (missionNamespace getVariable["g_licenses", []]);
};

[
	(getPlayerUID player),
	playerSide,
	missionNamespace getVariable["g_cash", 0],
	missionNamespace getVariable["g_atm", 0],
	([] call public_fnc_getInv),
	missionNamespace getVariable["g_is_alive", false],
	missionNamespace getVariable["g_blood", 4000],
	missionNamespace getVariable["g_bleed", 0],
	missionNamespace getVariable["g_hunger", 100],
	missionNamespace getVariable["g_thirst", 100],
	missionNamespace getVariable["g_phone_forfait", "none"],
	_licences
] remoteExec ["TON_fnc_query_update_usual", 2, false];