/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ("SkylineItems_TelephoneTactile" in (magazines player)) then
{
	if (((player getVariable ["number", ""]) isEqualTo "") || (g_phone_forfait in ["none", ""])) then {
		["store_forfait"] spawn AlysiaClient_fnc_tabletApp;
	} else {
		
		disableSerialization;
		_display = uiNamespace getVariable ["tablet", displayNull];
		if (isNull _display) exitWith {};

		(_display displayCtrl 8500) ctrlSetStructuredText parseText format["<t font='PuristaBold'><t size='1.2'>Numéro</t> <t size='2.3' color='#190707'>%1</t></t>", (player getVariable ["number", ""])];
		(_display displayCtrl 8501) ctrlSetStructuredText parseText format["<t font='PuristaBold' align='right'><t size='1.2'>Forfait</t> <t size='2' color='#190707'>%1</t></t>", getText(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "name")];

		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "phone_send_global_message") isEqualTo 1) then
		{
			if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "phone_send_global_message_rank") <= (player getVariable ["rank", 0])) then
			{
				[8516, true] call AlysiaClient_fnc_tabletShow;
				[8517, true] call AlysiaClient_fnc_tabletShow;
			};
		};

		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "phone_change_number_price") isEqualTo -1) then
		{
			[8510, false] call AlysiaClient_fnc_tabletShow;
			[8511, false] call AlysiaClient_fnc_tabletShow;
		};
	};
} else {
	["Vous n'avez pas de téléphone."] call AlysiaClient_fnc_error;
	closeDialog 0;
};
