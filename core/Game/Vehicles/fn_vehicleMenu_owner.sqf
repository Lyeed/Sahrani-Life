/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_info", "_display", "_action"];

if (isNull g_interaction_target) exitWith {};

if ((speed g_interaction_target) > 0) exitWith {
	["Le véhicule doit être à l'arrêt"] call public_fnc_error;	
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_info = g_interaction_target getVariable "info";
if (isNil "_info") exitWith {
	["Impossible de récupérer les informations du véhicule"] call public_fnc_error;
};

_action = true;
if (!(g_interaction_target in g_vehicles)) then
{
	if (!(["Inspection", 5, g_interaction_target] call public_fnc_showProgress)) then {
		_action = false;
	};
};

if (_action) then
{
	if (!(createDialog "RscDisplayVehicleOwner")) exitWith {};

	disableSerialization;
	_display = findDisplay 600;
	if (isNull _display) exitWith {};

	(_display displayCtrl 601) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_info select 1)];
	(_display displayCtrl 602) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_info select 2)];
	(_display displayCtrl 603) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", if ((_info select 3) isEqualTo 1) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"}];

	while {!(isNull _display)} do
	{
		if (
			(isNull g_interaction_target) ||
			!(alive g_interaction_target) ||
			(player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false])
		) exitWith {closeDialog 0};
		sleep 0.5;
	};
};
