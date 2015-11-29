/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

([_this, 0, objNull, [objNull]] call BIS_fnc_param) spawn
{
	private["_display"];
	disableSerialization;

	waitUntil
	{
		_display = uinamespace getvariable ["RscDisplayInventory", displayNull];
		!(isNull _display)
	};

	uiNamespace setVariable ["last_inv", nil];

	while {!(isNull _display)} do
	{
		[] call public_fnc_virtual_menu_update;

		if (!(isNull _this)) then
		{
			if (!(_this in g_vehicles) && ((locked _this) isEqualTo 2)) then
			{
				["Vous ne pouvez pas fouiller de véhicule vérrouillé"] call public_fnc_error;
				closeDialog 0;
			};
	 	};

		if ((player getVariable ["is_coma", false]) || (player getVariable ["restrained", false]) || (player getVariable ["surrender", false])) then {
			closeDialog 0;
		};

		sleep 0.5;
	};
};

false;
