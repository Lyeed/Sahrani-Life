/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_newSMS"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

if ((uiNamespace getVariable["main_status", 0]) isEqualTo 0) then
{
	(_display displayCtrl 7510) ctrlSetText "\lyeed\images\app_bank.paa";
	(_display displayCtrl 7511) buttonSetAction "[""solde""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7512) ctrlSetStructuredText parseText "<t align='center'>Solde</t>";

	(_display displayCtrl 7513) ctrlSetText "\lyeed\images\app_gps.paa";
	(_display displayCtrl 7514) buttonSetAction "[""vehicles""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7515) ctrlSetStructuredText parseText "<t align='center'>Véhicules</t>";

	(_display displayCtrl 7516) ctrlSetText "\lyeed\images\app_inventory.paa";
	(_display displayCtrl 7517) buttonSetAction "[""inventory""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7518) ctrlSetStructuredText parseText "<t align='center'>Inventaire</t>";

	(_display displayCtrl 7519) ctrlSetText "\lyeed\images\app_setting.paa";
	(_display displayCtrl 7520) buttonSetAction "[""settings""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7521) ctrlSetStructuredText parseText "<t align='center'>Réglages</t>";

	(_display displayCtrl 7522) ctrlSetText "\lyeed\images\app_server.paa";
	(_display displayCtrl 7523) buttonSetAction "[""server""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7524) ctrlSetStructuredText parseText "<t align='center'>Server</t>";

	(_display displayCtrl 7525) ctrlSetText "\lyeed\images\app_store.paa";
	(_display displayCtrl 7526) buttonSetAction "[""store""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7527) ctrlSetStructuredText parseText "<t align='center'>Boutique</t>";

	(_display displayCtrl 7528) ctrlSetText "\lyeed\images\app_help.paa";
	(_display displayCtrl 7529) buttonSetAction "[""help""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7530) ctrlSetStructuredText parseText "<t align='center'>Aide</t>";

	(_display displayCtrl 7531) ctrlSetText "\lyeed\images\app_phone.paa";
	(_display displayCtrl 7532) buttonSetAction "[""PHONE_CATEGORY""] spawn public_fnc_tabletApp;";
	(_display displayCtrl 7533) ctrlSetStructuredText parseText "<t align='center'>Téléphone</t>";

	(_display displayCtrl 7508) ctrlSetText "\lyeed\images\apps_next.paa";
	(_display displayCtrl 7509) buttonSetAction
	"
		uiNamespace setVariable[""main_status"", 1];
		[""MAIN""] spawn public_fnc_tabletApp;
	";
} else {
	_last = switch (playerSide) do
	{
		case west:
		{
			(_display displayCtrl 7510) ctrlSetText getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "icon");
			(_display displayCtrl 7511) buttonSetAction "[""faction""] spawn public_fnc_tabletApp;";
			(_display displayCtrl 7512) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name")];
			7513;
		};

		case east:
		{
			(_display displayCtrl 7510) ctrlSetText getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "icon");
			(_display displayCtrl 7511) buttonSetAction "[""faction""] spawn public_fnc_tabletApp;";
			(_display displayCtrl 7512) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name")];
			7513;
		};

		case civilian:
		{
			(_display displayCtrl 7510) ctrlSetText "\lyeed\images\app_licenses.paa";
			(_display displayCtrl 7511) buttonSetAction "[""licenses""] spawn public_fnc_tabletApp;";
			(_display displayCtrl 7512) ctrlSetStructuredText parseText "<t align='center'>Licenses</t>";

			if ("MARKET" in g_apps) then
			{
				(_display displayCtrl 7513) ctrlSetText "\lyeed\images\app_licenses.paa";
				(_display displayCtrl 7514) buttonSetAction "[""market""] spawn public_fnc_tabletApp;";
				(_display displayCtrl 7515) ctrlSetStructuredText parseText "<t align='center'>Bourse</t>";
				7516;
			} else {
				7513;
			};
		};

		case independent:
		{
			(_display displayCtrl 7510) ctrlSetText getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "icon");
			(_display displayCtrl 7511) buttonSetAction "[""faction""] spawn public_fnc_tabletApp;";
			(_display displayCtrl 7512) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "name")];
			7513;
		};
	};
	[[_last, 7533], false] call public_fnc_tabletShow;

	(_display displayCtrl 7508) ctrlSetText "\lyeed\images\apps_prev.paa";
	(_display displayCtrl 7509) buttonSetAction 
	"
		uiNamespace setVariable[""main_status"", 0];
		[""MAIN""] spawn public_fnc_tabletApp;
	";
};

_newSMS = 0;
{
	if ((_x select 2) isEqualTo 0) then {
		_newSMS = _newSMS + 1;
	};
} count (g_phone_messages);
 
if (_newSMS > 0) then
{
	(_display displayCtrl 7505) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", _newSMS];
	[7503, true] call public_fnc_tabletShow;
	[7504, true] call public_fnc_tabletShow;
	[7505, true] call public_fnc_tabletShow;
};