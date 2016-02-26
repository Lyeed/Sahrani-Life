/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_ret"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) then {
	_ret = false;
} else {
	_ret = switch (true) do
	{
		case ((_target isKindOf "Car") || (_target isKindOf "Ship") || (_target isKindOf "Air") || (_target isKindOf "Tank") || (_target isKindOf "Truck")):
		{
			if (
					((locked _target) isEqualTo 2) &&
					!(_target in g_vehicles) &&
					!(
						(playerSide != civilian) &&
						(str(playerSide) isEqualTo getText(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(_target) >> 'side'))
					)
				) then {
				["Vous ne pouvez pas fouiller un <t color='#FF8000'>véhicule vérrouillé</t>."] call AlysiaClient_fnc_error;
				true
			} else {
				false
			}
		};
		case (getNumber(configFile >> "CfgVehicles" >> typeOf(_target) >> "isBackpack") isEqualTo 1):
		{
			["Vous ne pouvez pas fouiller dans les <t color='#FF8000'>sacs</t>."] call AlysiaClient_fnc_error;
			true
		};
		case (_target isKindOf "Man"):
		{
			["Vous ne pouvez pas fouiller les <t color='#FF8000'>cadavres</t>."] call AlysiaClient_fnc_error;
			true
		};
		default {false};
	};
};

if (_ret) exitWith
{
	waitUntil {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))};
	while {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))} do {closeDialog 0};
	true
};

waitUntil {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))};

uiNamespace setVariable ["last_inv", nil];

while {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))} do
{
	[] call AlysiaClient_fnc_virtual_menu_update_list;

	if (
			(player getVariable ["is_coma", false]) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false])
		) then {closeDialog 0};
	uiSleep 0.5;
};

false
