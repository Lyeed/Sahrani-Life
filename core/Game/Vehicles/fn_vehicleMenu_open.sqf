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

ctrlSetText[5001, "\lyeed_IMG\data\vehicle\background.jpg"];
g_interaction_target = _target;
(_display displayCtrl 5002) ctrlSetStructuredText parseText format["<t align='center' size='1.8'>%1</t>", getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "displayName")];

_idc_actual = 5010;
{
	if (call compile format["%1", (_x select 3)]) then
	{
		_ctrl_img = _display displayCtrl _idc_actual;
		_ctrl_btn = _display displayCtrl (_idc_actual + 1);
		_ctrl_img ctrlSetText format["\lyeed_IMG\data\vehicle\actions\action_%1.paa", (_x select 0)];
		_ctrl_btn ctrlAddEventHandler
		[
			"MouseEnter",
			format
			[
				"
					ctrlSetText[%1, ""\lyeed_IMG\data\vehicle\actions\action_%2_select.paa""];
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
					ctrlSetText[%1, ""\lyeed_IMG\data\vehicle\actions\action_%2.paa""];
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
	["lock", "Verrouiller", "[true] call public_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> ""ALYSIA_VEHICLES"" >> typeOf(g_interaction_target) >> ""side""))))"],
	["unlock", "Déverrouiller", "[false] call public_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> ""ALYSIA_VEHICLES"" >> typeOf(g_interaction_target) >> ""side""))))"],
	["inventory", "Coffre", "[] spawn public_fnc_virtual_menu_exhange_open;", "(((locked g_interaction_target) != 2) || (g_interaction_target in g_vehicles))"],
	["repair", "Réparation", "[] spawn public_fnc_vehicleMenu_repair_open;", "((vehicle player) isEqualTo player)"],
	["refuel", "Faire le plein", "[] spawn public_fnc_vehicleMenu_refuel;", "((([""fuelF""] call public_fnc_itemCount) > 0) && ((vehicle player) isEqualTo player))"],
	["flip", "Retourner", "[] spawn public_fnc_vehicleMenu_flip;", "(!(g_interaction_target isKindOf ""Ship"") && !(g_interaction_target isKindOf ""Air"") && ((vehicle player) isEqualTo player))"],
	["lockpick", "Crochetter", "[] spawn public_fnc_vehicleMenu_steal;", "((([""lockpick""] call public_fnc_itemCount) > 0) && !(g_interaction_target in g_vehicles) && !(g_interaction_target isKindOf ""Tank"") && ((vehicle player) isEqualTo player))"],
	["pullout", "Sortir", "[] call public_fnc_vehicleMenu_pullout;", "((count (crew g_interaction_target) > 0) && ((vehicle player) isEqualTo player))"],
	["owner", "Propriétaire", "[] spawn public_fnc_vehicleMenu_owner;", "((playerSide in [east,west]) || (g_interaction_target in g_vehicles))"],
	["impound", "Fourrière", "[] spawn public_fnc_vehicleMenu_impound;", "((playerSide in [east,west]) && ((vehicle player) isEqualTo player))"],
	["putin", "Transférer", "[] call public_fnc_vehicleMenu_putIn;", "false"]
]);

for "_i" from _idc_actual to 5033 do
{
	ctrlShow[_i, false];
};

while {!(isNull _display)} do
{
	(_display displayCtrl 5003) ctrlSetStructuredText parseText format
	[
		"<t align='left'><img size='2.5' image='%1'/></t><t size='2' align='right'>%2m</t>",
		getText(configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "picture"),
		round(player distance g_interaction_target)
	];

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
	if (!(alive g_interaction_target)) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};
