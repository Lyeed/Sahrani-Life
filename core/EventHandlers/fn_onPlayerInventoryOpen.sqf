/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_target", "_ret"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_ret = false;

if (!(isNull _target)) then
{
	if ((_target isKindOf "Car") || (_target isKindOf "Ship") || (_target isKindOf "Air") || (_target isKindOf "Tank") || (_target isKindOf "Truck")) then
	{
		if (((locked _target) isEqualTo 2) && !(_target in g_vehicles) && !((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(_target) >> 'side')))) then
		{
			_ret = true;
			["Vous ne pouvez pas fouiller de véhicule vérrouillé."] call AlysiaClient_fnc_error;
		};
	} else {
		if (_target isKindOf "Man") then
		{
			_ret = true;
			["Vous ne pouvez pas fouiller les sacs."] call AlysiaClient_fnc_error;
		};
	};
};

if (_ret) exitWith
{
	waitUntil {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))};
	while {!(isNull (uinamespace getvariable ["RscDisplayInventory", displayNull]))} do {closeDialog 0};
	true
};

disableSerialization;
waitUntil
{
	_display = uinamespace getvariable ["RscDisplayInventory", displayNull];
	!(isNull _display)
};

uiNamespace setVariable ["last_inv", nil];
while {!(isNull _display)} do
{
	[] call AlysiaClient_fnc_virtual_menu_update_list;

	if ((player getVariable ["is_coma", false]) || (player getVariable ["restrained", false]) || (player getVariable ["surrender", false])) then {
		closeDialog 0;
	};

	uiSleep 0.5;
};

false
