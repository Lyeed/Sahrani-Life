/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_idc_actual"];

if (isNull g_interaction_target) exitWith {};

if (!(createDialog "RscDisplayHousingInteraction")) exitWith {};

disableSerialization;
_display = findDisplay 46000;
if (isNull _display) exitWith {};

(_display displayCtrl 46001) ctrlSetStructuredText parseText "<t align='center' size='1.3'>Chez vous</t>";

_idc_actual = 46010;
{
	if (call compile format["%1", (_x select 3)]) then
	{
		(_display displayCtrl (_idc_actual + 2)) ctrlSetText format["\lyeed_IMG\data\housing\actions\action_%1.paa", (_x select 0)];
		(_display displayCtrl (_idc_actual + 3)) ctrlSetStructuredText parseText format["<t align='left' size='1.3'>%1</t>", (_x select 1)];

		_ctrl_btn = _display displayCtrl (_idc_actual + 4);
		_ctrl_btn buttonSetAction (_x select 2);
		_ctrl_btn ctrlAddEventHandler["MouseEnter", 
		format
		[
			"((findDisplay 46000) displayCtrl %4) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>%5</t>"";
			((findDisplay 46000) displayCtrl %3) ctrlSetBackgroundColor [1,1,1,1];
			ctrlSetText[%1, ""\lyeed_IMG\data\housing\actions\action_%2_select.paa""];
			ctrlShow[%6, false];",
			(_idc_actual + 2), (_x select 0), (_idc_actual + 1), (_idc_actual + 3), (_x select 1), _idc
		]];

		_ctrl_btn ctrlAddEventHandler["MouseExit",
		format
		[
			"((findDisplay 46000) displayCtrl %4) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>%5</t>"";
			((findDisplay 46000) displayCtrl %3) ctrlSetBackgroundColor [0,0,0,0.6]; 
			ctrlSetText[%1, ""\lyeed_IMG\data\housing\actions\action_%2.paa""];
			ctrlShow[%6, true];",
			(_idc_actual + 2), (_x select 0), (_idc_actual + 1), (_idc_actual + 3), (_x select 1), _idc
		]];
		
		_idc_actual = _idc_actual + 5;
	};
} forEach 
([
	["sell", "Vendre", "closeDialog 0; [] spawn public_fnc_house_menu_action_sell;", "(((g_interaction_target getVariable [""house_owner"", ["""", """"]]) select 0) isEqualTo (getPlayerUID player))"],
	["storage", "Coffre", "closeDialog 0; [g_interaction_target,player] remoteExec [""TON_fnc_house_storage_handler"", 2];", "(g_interaction_target getVariable [""containers"", false])"],
	["garage", "Garage", "closeDialog 0; [] call public_fnc_house_menu_action_garage;", "(getNumber(missionConfigFile >> ""ALYSIA_HOUSES"" >> typeOf(g_interaction_target) >> ""garage"") isEqualTo 1)"],
	["store", "Rentrer", "closeDialog 0; [] spawn public_fnc_house_menu_action_store;", "(getNumber(missionConfigFile >> ""ALYSIA_HOUSES"" >> typeOf(g_interaction_target) >> ""garage"") isEqualTo 1)"],
	["light", "Lumière", "[] call public_fnc_house_menu_action_light;", "true"]
]);

for "_i" from _idc_actual to 46039 do
{
	ctrlShow[_i, false];
};