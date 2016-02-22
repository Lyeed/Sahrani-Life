/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_max", "_actual", "_fuel"];

if (isNull g_interaction_target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if ((speed g_interaction_target) > 0) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule qui se déplace."] call AlysiaClient_fnc_error;
};
if (isEngineOn g_interaction_target) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule ayant le moteur allumé."] call AlysiaClient_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

_item = lbData[69002, lbCurSel 69002];
if (_item isEqualTo "") exitWith {
	["Vous n'avez pas choisi de jerrican."] call AlysiaClient_fnc_error;
};

if (!(["Jerrican", 5, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (!(_item in (magazines player))) exitWith {
	["Vous devez garder le jerrican sur vous durant toute l'action."] call AlysiaClient_fnc_error;
};

player removeMagazine _item;
player addMagazine "Alysia_jerrycan_empty";

_max = getNumber(configFile >> "CfgVehicles" >> typeof(g_interaction_target) >> "fuelCapacity");
_actual = (_max - ((fuel g_interaction_target) * _max)) + 20;
if (_actual > _max) then {_actual = _max;};
_actual = floor(_actual / _max);

if (local g_interaction_target) then {
	g_interaction_target setFuel _actual;
} else {
	[g_interaction_target, _actual] remoteExecCall ["setFuel", g_interaction_target];
};

_fuel = switch (_item) do
{
	case "Alysia_jerrycan_sp98": {"SP98"};
	case "Alysia_jerrycan_sp95": {"SP95"};
	case "Alysia_jerrycan_diesel": {"Diesel"};
	case "Alysia_jerrycan_gpl": {"GPL"};
	case "Alysia_jerrycan_kerosene": {"Kerosene"};
};

if (_fuel != getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf(g_interaction_target) >> "fuel")) then {
	g_interaction_target setVariable ["typeRefuel", _fuel];
};
