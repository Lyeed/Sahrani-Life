/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ([] call AlysiaClient_fnc_hasPhone) then
{
	if (((player getVariable ["number", ""]) isEqualTo "") || (g_phone_forfait in ["none", ""])) then {
		["store_forfait"] spawn AlysiaClient_fnc_tabletApp;
	} else {
		
		disableSerialization;
		_display = uiNamespace getVariable ["tablet", displayNull];
		if (isNull _display) exitWith {};

		(_display displayCtrl 8500) ctrlSetStructuredText parseText format
		[
			"<t font='PuristaBold'><t size='1.2'>Numéro</t> <t size='2.3' color='#190707'>%1</t></t>",
			(player getVariable ["number", ""])
		];
		
		(_display displayCtrl 8501) ctrlSetStructuredText parseText format
		[
			"<t font='PuristaBold' align='right'><t size='1.2'>Forfait</t> <t size='2' color='#190707'>%1</t></t>",
			getText(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "name")
		];

		_actual_idc = 8502;
		{
			if (call compile (_x select 3)) then
			{
				_image = _display displayCtrl _actual_idc;
				_image ctrlSetText (_x select 0);

				_button = _display displayCtrl (_actual_idc + 1);
				_button buttonSetAction (_x select 2);
				_button ctrlSetTooltip (_x select 4);
				if ((_x select 1) isEqualTo "") then
				{
					_button ctrlRemoveAllEventHandlers "MouseEnter";
					_button ctrlRemoveAllEventHandlers "MouseExit";
				} else {
					_button ctrlSetEventHandler ["MouseEnter", format["((uiNamespace getVariable 'tablet') displayCtrl %1) ctrlSetText '%2';", _actual_idc, (_x select 1)]];
					_button ctrlSetEventHandler ["MouseExit", format["((uiNamespace getVariable 'tablet') displayCtrl %1) ctrlSetText '%2';", _actual_idc, (_x select 0)]];
				};

				[_actual_idc, true] call AlysiaClient_fnc_tabletShow;
				[(_actual_idc + 1), true] call AlysiaClient_fnc_tabletShow;
				_actual_idc = _actual_idc + 2;
			};
		} forEach 
		([
			[
				"lyeed_IMG\data\phone\main\call.paa",
				"lyeed_IMG\data\phone\main\call_select.paa",
				"['phone_call'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Appeler"
			],
			[
				"lyeed_IMG\data\phone\main\sms.paa",
				"lyeed_IMG\data\phone\main\sms_select.paa",
				"['phone_messages_read'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Messages reçus"
			],
			[
				"lyeed_IMG\data\phone\main\contact.paa",
				"lyeed_IMG\data\phone\main\contact_select.paa",
				"['phone_contacts'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Contacts"
			],
			[
				"lyeed_IMG\data\phone\main\send.paa",
				"lyeed_IMG\data\phone\main\send_select.paa",
				"['phone_messages_send'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Envoyer un message"
			],
			[
				"lyeed_IMG\data\phone\main\forfait.paa",
				"lyeed_IMG\data\phone\main\forfait_select.paa",
				"['store_forfait'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Changer de forfait"
			],
			[
				"lyeed_IMG\data\phone\main\number.paa",
				"lyeed_IMG\data\phone\main\number_select.paa",
				"[] spawn AlysiaClient_fnc_APP_phone_change;",
				"getNumber(missionConfigFile >> 'ALYSIA_FACTIONS' >> str(playerSide) >> 'phone_change_number_price') != -1",
				"Changer de numéro"
			],
			[
				"lyeed_IMG\data\phone\main\blacklist.paa",
				"lyeed_IMG\data\phone\main\blacklist_select.paa",
				"[""phone_blacklist""] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Bloquer un numéro"
			],
			[
				"lyeed_IMG\data\phone\main\config.paa",
				"lyeed_IMG\data\phone\main\config_select.paa",
				"['phone_settings'] spawn AlysiaClient_fnc_tabletApp;",
				"true",
				"Réglages"
			]
		]);
	};
} else {
	["Vous n'avez pas de téléphone."] call AlysiaClient_fnc_error;
	closeDialog 0;
};
