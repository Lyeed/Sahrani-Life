/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (missionNamespace getVariable ["g_connected", false]) then
{
	private["_drugs_stats", "_msgs", "_allow"];

	_msgs = missionNamespace getVariable ["g_phone_messages", []];
	_allow = getText(missionConfigFile >> "ALYSIA_PHONE" >> "SMS" >> "characters_allowed");
	{
		if (([(_x select 3), _allow] call AlysiaClient_fnc_TextAllowed) != "") then {
			_msgs = _msgs - [_x];
		};
	} forEach _msgs;

	_drugs_stats = [];
	{
		_var = missionNamespace getVariable [_x, 0];
		if (_var > 0) then {
			_drugs_stats pushBack [_x, _var];
		};
	} forEach (missionNamespace getVariable ["g_drugs", []]);

	[
		(getPlayerUID player),
		playerSide,
		missionNamespace getVariable ["g_cash", 0],
		missionNamespace getVariable ["g_atm", 0],
		([] call AlysiaClient_fnc_getInv),
		missionNamespace getVariable ["g_is_alive", false],
		_drugs_stats,
		round(time / 60),
		missionNamespace getVariable ["g_blood", 4000],
		missionNamespace getVariable ["g_bleed", 0],
		missionNamespace getVariable ["g_hunger", 100],
		missionNamespace getVariable ["g_thirst", 100],
		missionNamespace getVariable ["g_phone_contacts", []],
		_msgs,
		missionNamespace getVariable ["g_phone_forfait", "none"],
		missionNamespace getVariable ["g_phone_blacklist", []],
		missionNamespace getVariable ["g_apps", []],
		([] call AlysiaClient_fnc_getLicenses),
		g_dynamic_markers_discovered
	] remoteExec ["AlysiaServer_fnc_query_update_disconnect", 2];
	saveProfileNamespace;
};
