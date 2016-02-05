/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

[
	_target,
	"player_to_vehicle",
	[
		["lock", "Verrouiller", "[true] call AlysiaClient_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> ""ALYSIA_VEHICLES"" >> typeOf(g_interaction_target) >> ""side""))))"],
		["unlock", "Déverrouiller", "[false] call AlysiaClient_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> ""ALYSIA_VEHICLES"" >> typeOf(g_interaction_target) >> ""side""))))"],
		["inventory", "Coffre", "[] spawn AlysiaClient_fnc_virtual_menu_exhange_open;", "(((locked g_interaction_target) != 2) || (g_interaction_target in g_vehicles))"],
		["repair", "Réparation", "[] spawn AlysiaClient_fnc_vehicleMenu_repair_open;", "((vehicle player) isEqualTo player)"],
		["refuel", "Plein", "[g_interaction_target, (missionNamespace getVariable[""refuel_station_inUse"", objNull])] spawn AlysiaClient_fnc_fuelRefuel_use_refuel_veh;", '(((player getVariable ["typeRefuel", ""]) != "") && !(isNull (missionNamespace getVariable["refuel_station_inUse", objNull])) && ((vehicle player) isEqualTo player))'],
		["flip", "Retourner", "[] spawn AlysiaClient_fnc_vehicleMenu_flip;", "(!(g_interaction_target isKindOf ""Ship"") && !(g_interaction_target isKindOf ""Air"") && ((vehicle player) isEqualTo player))"],
		["lockpick", "Crochetter", "[] spawn AlysiaClient_fnc_vehicleMenu_steal;", "((([""lockpick""] call AlysiaClient_fnc_itemCount) > 0) && !(g_interaction_target in g_vehicles) && !(g_interaction_target isKindOf ""Tank"") && ((vehicle player) isEqualTo player))"],
		["pullout", "Sortir", "[] call AlysiaClient_fnc_vehicleMenu_pullout;", "((count (crew g_interaction_target) > 0) && ((vehicle player) isEqualTo player))"],
		["owner", "Propriétaire", "[] spawn AlysiaClient_fnc_vehicleMenu_owner;", "((playerSide in [east,west]) || (g_interaction_target in g_vehicles))"],
		["impound", "Fourrière", "[] spawn AlysiaClient_fnc_vehicleMenu_impound;", "((playerSide in [east,west]) && ((vehicle player) isEqualTo player))"],
		["farm_gather", "Récolter", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_gather;", "((typeOf(g_interaction_target) isEqualTo 'madsa_mtz_F') && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["farm_plant", "Planter", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_plant;", "((typeOf(g_interaction_target) isEqualTo 'madsa_mtz_F') && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["fishingpool", "Pêche", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_fish;", "((g_interaction_target isKindOf 'Ship') && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["dog", "Chercher", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_dog;", "(!(isNull g_dog) && {g_dog getVariable ['follow', false]})"],
		["money_transfer", "Sac", "", "false"],/* type véhicule transfert argent */
		["money_bomb", "Braquer", "", "false"]/* type véhicule transfert argent */

	],
	getText(configFile >> "CfgVehicles" >> typeOf(_target) >> "displayName"),
	"lyeed_IMG\data\vehicle\background.jpg",
	true,
	false,
	true
] spawn AlysiaClient_fnc_interactions_create;

// ["refuel", "Faire le plein", "[] spawn AlysiaClient_fnc_vehicleMenu_refuel;", "((([""fuelF""] call AlysiaClient_fnc_itemCount) > 0) && ((vehicle player) isEqualTo player))"],