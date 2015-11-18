/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_actual_idc", "_apps_done", "_status", "_apps"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_status = uiNamespace getVariable["main_status", 0];
_actual_idc = 7510;
_apps_done = 0;
_apps_more = false;

_apps = 
[
	["\lyeed\images\app_bank.paa", "[""solde""] spawn public_fnc_tabletApp;", "Solde", "true"],
	["\lyeed\images\app_gps.paa", "[""vehicles""] spawn public_fnc_tabletApp;", "Véhicules", "true"],
	["\lyeed\images\app_setting.paa", "[""settings""] spawn public_fnc_tabletApp;", "Réglages", "true"],
	["\lyeed\images\app_server.paa", "[""server""] spawn public_fnc_tabletApp;", "Server", "true"],
	["\lyeed\images\app_store.paa", "[""store""] spawn public_fnc_tabletApp;", "Boutique", "true"],
	["\lyeed\images\app_help.paa", "[""help""] spawn public_fnc_tabletApp;", "Aide", "true"],
	["\lyeed\images\app_phone.paa", "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;", "Téléphone", "true"],
	[getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "icon"), "[""faction""] spawn public_fnc_tabletApp;", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), "playerSide in [east,west,independent]"],
	["\lyeed\images\app_licenses.paa", "[""licenses""] spawn public_fnc_tabletApp;", "Licenses", "playerSide isEqualTo civilian"],
	["\lyeed\images\app_licenses.paa","[""market""] spawn public_fnc_tabletApp;","Bourse","""MARKET"" in g_apps"]
];

{
	if (_actual_idc >= 7534) exitWith
	{
		if (_forEachIndex < (count(_apps) - 1))
		{
			_apps_more = true;
		};
	};

	if (call compile format["%1", (_x select 3)]) then
	{
		if (_apps_done isEqualTo (8 * _status)) then
		{
			(_display displayCtrl _actual_idc) ctrlSetText (_x select 0);
			(_display displayCtrl (_actual_idc + 1)) buttonSetAction (_x select 1);
			(_display displayCtrl (_actual_idc + 2)) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_x select 2)];
			_actual_idc = _actual_idc + 3;
		} else {
			_apps_done = _apps_done + 1;
		};
	};
} forEach _apps;

(_display displayCtrl 7544) ctrlSetStructuredText parseText format["<t align='center' size='1.2' font='PuristaSemiBold'>%1</t>", (_status + 1)];

for "_i" from _actual_idc to 7533 do
{
	[_i, false] call public_fnc_tabletShow;
};

if (_apps_more) then
{
	[7540, true] call public_fnc_tabletShow;
	[7541, true] call public_fnc_tabletShow;
} else {
	[7540, false] call public_fnc_tabletShow;
	[7541, false] call public_fnc_tabletShow;
};

if (_status > 0) then
{
	[7542, true] call public_fnc_tabletShow;
	[7543, true] call public_fnc_tabletShow;
} else {
	[7542, false] call public_fnc_tabletShow;
	[7543, false] call public_fnc_tabletShow;	
};

_newSMS = 0;
{
	if ((_x select 2) isEqualTo 0) then {
		_newSMS = _newSMS + 1;
	};
} forEach (g_phone_messages);

if (_newSMS isEqualTo 0) then {
	[[7503, 7504, 7505], false] call public_fnc_tabletShow;
} else {
	(_display displayCtrl 7505) ctrlSetStructuredText parseText format["<t align='center' size='1.2' font='PuristaSemiBold'>%1</t>", _newSMS];
	[7503, true] call public_fnc_tabletShow;
	[7504, true] call public_fnc_tabletShow;
	[7505, true] call public_fnc_tabletShow;
};