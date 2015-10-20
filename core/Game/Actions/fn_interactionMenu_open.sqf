/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_display", "_idc_actual"];
_target = [_this, 0, [objNull], [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayInteraction")) exitWith {};

disableSerialization;
_display = findDisplay 5000;
if (isNull _display) exitWith {};

ctrlSetText[5001, "\lyeed_IMG\data\trade\background.jpg"];
g_interaction_target = _target;
(_display displayCtrl 5002) ctrlSetStructuredText parseText "<t align='center' size='1.8'>Intéractions</t>";

_idc_actual = 5010;
{
	if (call compile format["%1", (_x select 3)]) then
	{
		_ctrl_img = _display displayCtrl _idc_actual;
		_ctrl_btn = _display displayCtrl (_idc_actual + 1);
		_ctrl_img ctrlSetText format["\lyeed_IMG\data\player_interactions\actions\action_%1.paa", (_x select 0)];
		_ctrl_btn ctrlAddEventHandler
		[
			"MouseEnter",
			format
			[
				"
					ctrlSetText[%1, ""\lyeed_IMG\data\player_interactions\actions\action_%2_select.paa""];
					((findDisplay 5000) displayCtrl 5002) ctrlSetStructuredText parseText ""<t align='center' size='1.8'>%3</t>"";
				",
				_idc_actual,
				(_x select 0),
				(_x select 1)
			]
		];

		_ctrl_btn ctrlAddEventHandler
		[
			"MouseExit",
			format
			[
				"
					ctrlSetText[%1, ""\lyeed_IMG\data\player_interactions\actions\action_%2.paa""];
					((findDisplay 5000) displayCtrl 5002) ctrlSetStructuredText parseText ""<t align='center' size='1.8'>%3</t>"";
				",
				_idc_actual,
				(_x select 0),
				"Intéractions"
			]
		];
		_ctrl_btn buttonSetAction (_x select 2);
		_idc_actual = _idc_actual + 2;
	};
} forEach 
([
	["identity", "Carte d'identité", "[] call public_fnc_interactionMenu_action_identity;", "true"],
	["trade", "Echanger", "[] spawn public_fnc_interactionMenu_action_trade_open;", "true"],
	["escort", "Escorter", "[] call public_fnc_interactionMenu_action_escort;", "true"],
	["stopescort", "Arrêter l'escorte", "[] call public_fnc_interactionMenu_action_stopescort;", "true"],
	["restrain", "Menotter", "[] spawn public_fnc_interactionMenu_action_restrain;", "true"],
	["unrestrain", "Démenotter", "[] spawn public_fnc_interactionMenu_action_unrestrain;", "true"],
	["lockpick", "Crochetter", "[] spawn public_fnc_interactionMenu_action_lockpick;", "true"],
	["ticket", "Paiement", "[] spawn public_fnc_interactionMenu_action_ticket;", "true"],
	["search", "Fouiller", "[] spawn public_fnc_interactionMenu_action_search;", "true"],
	["arrest", "Arrêter", "", "false"],
	["bandage", "Bandage", "", "false"],
	["license", "Licences", "[] spawn public_fnc_interactionMenu_action_license;", "true"]
]);

for "_i" from _idc_actual to 5033 do
{
	ctrlShow[_i, false];
};

while {!(isNull _display)} do
{
	(_display displayCtrl 5003) ctrlSetStructuredText parseText format["<t size='2' align='center'>%1m</t>", round(player distance g_interaction_target)];

	if ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2)) exitWith {
		closeDialog 0;
	};
	if (g_coma) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith {
		closeDialog 0;
	};
	if (isNull g_interaction_target) exitWith {
		closeDialog 0;
	};
	if (g_interaction_target getVariable ["is_coma", false]) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};