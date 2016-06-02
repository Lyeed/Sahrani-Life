/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_type", "_item", "_count"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule qui se déplace."] call AlysiaClient_fnc_error;
};
if (isEngineOn _target) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule ayant le moteur allumé."] call AlysiaClient_fnc_error;
};

if (!(["Siphonnage", 10, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

_type = _target getVariable ["typeRefuel", ""];
if (_type isEqualTo "") then {_type = getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf(_target) >> "fuel")};

if ("Alysia_jerrycan_empty" in (magazines player)) then
{
	_item = switch (_type) do
	{
		case "Diesel": {"Alysia_jerrycan_diesel"};
		case "SP95": {"Alysia_jerrycan_sp95"};
		case "SP98": {"Alysia_jerrycan_sp98"};
		case "Kerosene": {"Alysia_jerrycan_kerozene"};
		case "GPL": {"Alysia_jerrycan_gpl"};
	};

	_count = floor(((fuel _target) * getNumber(missionConfigFile >> "ALYSIA_VEHICLES" >> typeof(_target) >> "fuelCapacity")) / 20);
	if (_count >= 1) then
	{
		for "_i" from 1 to _count do
		{
			player removeMagazine "Alysia_jerrycan_empty";
			player addMagazine _item;
		};
	};
};

if (local g_interaction_target) then {
	g_interaction_target setFuel 0;
} else {
	[g_interaction_target, 0] remoteExecCall ["setFuel", g_interaction_target];
};

if (_type != "") then {
	_target setVariable ["typeRefuel", "", true];
};

[cursorObject] spawn AlysiaClient_fnc_vehicleMenu_siphon;