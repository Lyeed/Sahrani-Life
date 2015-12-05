/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed & Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayInteraction")) exitWith {};

disableSerialization;
_display = findDisplay 5000;
if (isNull _display) exitWith {};

ctrlSetText[5001, "\Devilz80_Images\data\fuelStations\background.jpg"];

_idc_actual = 5010;
{
	if (call compile format["%1", (_x select 3)]) then
	{
		_ctrl_img = _display displayCtrl _idc_actual;
		_ctrl_btn = _display displayCtrl (_idc_actual + 1);
		_ctrl_img ctrlSetText format["\Devilz80_Images\data\fuelStations\%1.paa", (_x select 0)];
		_ctrl_btn ctrlAddEventHandler
		[
			"MouseEnter",
			format
			[
				"
					ctrlSetText[%1, ""\Devilz80_Images\data\fuelStations\%2_select.paa""];
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
					ctrlSetText[%1, ""\Devilz80_Images\Data\Menu\fuelStations\%2.paa""];
					((findDisplay 5000) displayCtrl 5002) ctrlSetStructuredText parseText ""<t align='center' size='1.8'>%3</t>"";
				",
				_idc_actual,
				(_x select 0),
				"Station Essence"
			]
		];
		_ctrl_btn buttonSetAction (_x select 2);
		_idc_actual = _idc_actual + 2;
	};
} forEach
([
	["use_refuel_veh", "Remplir Véhicule", "[cursorTarget] spawn public_fnc_fuelMenu_use_refuel_veh;", "(player distance cursorTarget < 10)"],
	["use_refuel_jerry", "Remplir Jerrican", "[cursorTarget] spawn public_fnc_fuelMenu_use_refuel_jerry;", "(""Fuel_E"" in magazines player)"]
]);

for "_i" from _idc_actual to 5033 do
{
	ctrlShow[_i, false];
};

while {!(isNull _display)} do
{
	(_display displayCtrl 5003) ctrlSetStructuredText parseText format ["<t align='left'><img size='2.5' image='\Devilz80_Images\data\fuelStations\logo.paa'/></t>"];

	if (player getVariable ["is_coma", false]) exitWith {
		closeDialog 0;
	};
	if ((player distance cursorTarget) > ((((boundingBox cursorTarget) select 1) select 0) + 2)) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith {
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith {
		closeDialog 0;
	};
	sleep 0.5;
};