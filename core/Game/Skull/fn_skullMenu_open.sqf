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

ctrlSetText[5001, "\lyeed_IMG\data\skull\background.jpg"];
g_interaction_target = _target;
(_display displayCtrl 5002) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")];

_idc_actual = 5010;
{
	if (call compile format["%1", (_x select 3)]) then
	{
		_ctrl_img = _display displayCtrl _idc_actual;
		_ctrl_btn = _display displayCtrl (_idc_actual + 1);
		_ctrl_img ctrlSetText format["\lyeed_IMG\data\skull\actions\action_%1.paa", (_x select 0)];
		_ctrl_btn ctrlAddEventHandler
		[
			"MouseEnter",
			format
			[
				"
					ctrlSetText[%1, ""\lyeed_IMG\data\skull\actions\action_%2_select.paa""];
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
					ctrlSetText[%1, ""\lyeed_IMG\data\skull\actions\action_%2.paa""];
					((findDisplay 5000) displayCtrl 5002) ctrlSetStructuredText parseText ""<t align='center' size='1.8'>%3</t>"";
				",
				_idc_actual,
				(_x select 0),
				getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")
			]
		];
		_ctrl_btn buttonSetAction (_x select 2);
		_idc_actual = _idc_actual + 2;
	};
} forEach 
([
	["search", "Fouiller", "[] spawn public_fnc_skullMenu_search_open;", "true"],
	["take", "Récupérer le corps", "[] spawn public_fnc_skullMenu_take;", /*"(getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "skull_take") isEqualTo 1)"*/"true"],
	["who", "Identité", "[] spawn public_fnc_skullMenu_who;", /*"(getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "skull_who") isEqualTo 1)"*/"true"]
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
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith {
		closeDialog 0;
	};
	if (isNull g_interaction_target) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};