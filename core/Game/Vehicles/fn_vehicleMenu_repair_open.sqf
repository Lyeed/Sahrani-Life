/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_health", "_health_color"];

if (isNull g_interaction_target) exitWith {};
if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayVehicleRepair")) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_health = floor(1 - (damage g_interaction_target)) * 100;
_health_color = switch (true) do
{
	case (_health >= 0 && _health < 25): {"FF5722"};
	case (_health >= 25 && _health < 50): {"FFC107"};
	case (_health >= 50 && _health < 75): {"FFEB3B"};
	case (_health >= 75 && _health < 100): {"CDDC39"};
	case (_health isEqualTo 100): {"8BC34A"};
};
(_display displayCtrl 2910) ctrlSetStructuredText parseText format["<t align='center'><t color='#%2'>%3</t>%1</t>", "%", _health_color, _health];

[] call public_fnc_vehicleMenu_repair_fill;

while {!(isNull _display)} do
{
	if (
			(isNull g_interaction_target)
			!(alive g_interaction_target)
			(player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5)
			(player getVariable ["restrained", false])
			(player getVariable ["surrender", false])
		) exitWith {closeDialog 0};
	sleep 0.5;
};
