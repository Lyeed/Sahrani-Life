/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_actual_idc", "_apps_done", "_status", "_apps", "_global_apps"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_status = uiNamespace getVariable ["main_status", 0];
_actual_idc = 7510;
_apps_done = 0;
_apps_more = false;
_apps = [];
_global_apps = 
[
	["lyeed_IMG\data\tablet\app_main\app_staff.paa", "lyeed_IMG\data\tablet\app_main\app_staff_select.paa", "['staff'] spawn AlysiaClient_fnc_tabletApp;", "Staff", "count(""getText(_x >> 'uid') isEqualTo (getPlayerUID player)"" configClasses (missionConfigFile >> 'ALYSIA_STAFF' >> 'members')) != 0"],
	["lyeed_IMG\data\tablet\app_main\app_gov.paa", "lyeed_IMG\data\tablet\app_main\app_gov_select.paa", "['gov'] spawn AlysiaClient_fnc_tabletApp;", "Gouv", "(['gov_company'] call AlysiaClient_fnc_hasLicense) || (['gov_money'] call AlysiaClient_fnc_hasLicense) || (['gov_justice'] call AlysiaClient_fnc_hasLicense) || (['central_com'] call AlysiaClient_fnc_hasLicense)"],
	["lyeed_IMG\data\tablet\app_main\app_bank.paa", "lyeed_IMG\data\tablet\app_main\app_bank_select.paa", "['solde'] spawn AlysiaClient_fnc_tabletApp;", "Solde", "true"],
	["lyeed_IMG\data\tablet\app_main\app_gps.paa", "lyeed_IMG\data\tablet\app_main\app_gps_select.paa", "['vehicles'] spawn AlysiaClient_fnc_tabletApp;", "Véhicules", "true"],
	["lyeed_IMG\data\tablet\app_main\app_setting.paa", "lyeed_IMG\data\tablet\app_main\app_setting_select.paa", "['settings'] spawn AlysiaClient_fnc_tabletApp;", "Réglages", "true"],
	["lyeed_IMG\data\tablet\app_main\app_server.paa", "lyeed_IMG\data\tablet\app_main\app_server_select.paa", "['server'] spawn AlysiaClient_fnc_tabletApp;", "Serveur", "true"],
	["lyeed_IMG\data\tablet\app_main\app_store.paa", "lyeed_IMG\data\tablet\app_main\app_store_select.paa", "['store'] spawn AlysiaClient_fnc_tabletApp;", "Boutique", "true"],
	["lyeed_IMG\data\tablet\app_main\app_help.paa", "lyeed_IMG\data\tablet\app_main\app_help_select.paa", "['help'] spawn AlysiaClient_fnc_tabletApp;", "Aide", "true"],
	["lyeed_IMG\data\tablet\app_main\app_phone.paa", "lyeed_IMG\data\tablet\app_main\app_phone_select.paa", "['PHONE_CATEGORY'] spawn AlysiaClient_fnc_tabletApp;", "Téléphone", "(((player getVariable ['number', '']) != '') && ([] call AlysiaClient_fnc_hasPhone))"],
	[getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "icon"), "", "['faction'] spawn AlysiaClient_fnc_tabletApp;", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name"), "isClass(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'board')"],
	["lyeed_IMG\data\tablet\app_main\app_licences.paa", "lyeed_IMG\data\tablet\app_main\app_licences_select.paa", "['LICENSES'] spawn AlysiaClient_fnc_tabletApp;", "Licenses", "true"],
	["lyeed_IMG\data\tablet\app_main\app_market.paa", "lyeed_IMG\data\tablet\app_main\app_market_select.paa", "['MARKET'] spawn AlysiaClient_fnc_tabletApp;","Bourse","(('MARKET' in g_apps) || ((player distance (getMarkerPos 'HV_1') < 20) || (player distance (getMarkerPos 'HV_2') < 20)))"],
	["lyeed_IMG\data\tablet\app_main\app_fuel.paa", "lyeed_IMG\data\tablet\app_main\app_fuel_select.paa", "['FUEL'] spawn AlysiaClient_fnc_tabletApp;", "Stations service", "'FUEL' in g_apps"],
	["lyeed_IMG\data\tablet\app_main\app_announces.paa", "lyeed_IMG\data\tablet\app_main\app_announces_select.paa", "['ANNOUNCES'] spawn AlysiaClient_fnc_tabletApp;", "Annonces", "'ANNOUNCES' in g_apps"],
	["lyeed_IMG\data\tablet\app_main\app_company.paa", "lyeed_IMG\data\tablet\app_main\app_company_select.paa", "['COMPAGNIES'] spawn AlysiaClient_fnc_tabletApp;", "Entreprises", "true"],
	["lyeed_IMG\data\tablet\app_main\app_dab.paa", "lyeed_IMG\data\tablet\app_main\app_dab_select.paa", "['DAB'] spawn AlysiaClient_fnc_tabletApp;", "DAB", "'DAB' in g_apps"],
	["lyeed_IMG\data\tablet\app_main\app_annuaire.paa", "lyeed_IMG\data\tablet\app_main\app_annuaire_select.paa", "['ANNUAIRE'] spawn AlysiaClient_fnc_tabletApp;", "Annuaire", "'ANNUAIRE' in g_apps"]
];

{
	if (call compile format["%1", (_x select 4)]) then {
		_apps pushBack _x;
	};	
} forEach _global_apps;

{
	if (_actual_idc >= 7534) exitWith
	{
		if (_forEachIndex <= (count(_apps) - 1)) then
		{
			_apps_more = true;
		};
	};

	if (_apps_done isEqualTo (8 * _status)) then
	{
		_image = _display displayCtrl _actual_idc;
		_button = _display displayCtrl (_actual_idc + 1);
		_text = _display displayCtrl (_actual_idc + 2);
		
		_text ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_x select 3)];
		_image ctrlSetText (_x select 0);
		_button buttonSetAction (_x select 2);

		if ((_x select 1) isEqualTo "") then
		{
			_button ctrlRemoveAllEventHandlers "MouseEnter";
			_button ctrlRemoveAllEventHandlers "MouseExit";
		} else {
			_button ctrlSetEventHandler ["MouseEnter", format["((uiNamespace getVariable 'tablet') displayCtrl %1) ctrlSetText '%2';", _actual_idc, (_x select 1)]];
			_button ctrlSetEventHandler ["MouseExit", format["((uiNamespace getVariable 'tablet') displayCtrl %1) ctrlSetText '%2';", _actual_idc, (_x select 0)]];
		};

		_actual_idc = _actual_idc + 3;
	} else {
		_apps_done = _apps_done + 1;
	};
} forEach _apps;

(_display displayCtrl 7544) ctrlSetStructuredText parseText format["<t align='center' size='1.2' font='PuristaSemiBold'>%1</t>", (_status + 1)];

for "_i" from _actual_idc to 7533 do
{
	[_i, false] call AlysiaClient_fnc_tabletShow;
};

if (_apps_more || (_status > 0)) then
{
	[7544, true] call AlysiaClient_fnc_tabletShow;
	
	if (_apps_more) then
	{
		[7540, true] call AlysiaClient_fnc_tabletShow;
		[7541, true] call AlysiaClient_fnc_tabletShow;
	};

	if (_status > 0) then
	{
		[7542, true] call AlysiaClient_fnc_tabletShow;
		[7543, true] call AlysiaClient_fnc_tabletShow;
	};
};

_newSMS = [] call AlysiaClient_fnc_phone_get_messages_new;
if (([] call AlysiaClient_fnc_hasPhone) && ((count _newSMS) > 0)) then
{
	(_display displayCtrl 7505) ctrlSetStructuredText parseText format
	[
		"<t align='center' size='1.2' font='PuristaSemiBold'>%1</t>",
		count(_newSMS)
	];

	[7503, true] call AlysiaClient_fnc_tabletShow;
	[7504, true] call AlysiaClient_fnc_tabletShow;
	[7505, true] call AlysiaClient_fnc_tabletShow;
} else {
	[7503, false] call AlysiaClient_fnc_tabletShow;
	[7504, false] call AlysiaClient_fnc_tabletShow;
	[7505, false] call AlysiaClient_fnc_tabletShow;
};
