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
		["lock", "Verrouiller", "[true] call AlysiaClient_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'side'))))"],
		["unlock", "Déverrouiller", "[false] call AlysiaClient_fnc_vehicleMenu_key;", "((g_interaction_target in g_vehicles) || ((playerSide != civilian) && (str(playerSide) isEqualTo getText(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'side'))))"],
		["inventory", "Coffre", "[g_interaction_target] spawn AlysiaClient_fnc_virtual_menu_exhange_open;", "(((locked g_interaction_target) != 2) || (g_interaction_target in g_vehicles))"],
		["repair", "Réparation", "[] spawn AlysiaClient_fnc_vehicleMenu_repair_open;", "((vehicle player) isEqualTo player)"],
		["flip", "Retourner", "[] spawn AlysiaClient_fnc_vehicleMenu_flip;", "(!(g_interaction_target isKindOf 'Ship') && !(g_interaction_target isKindOf 'Air') && ((vehicle player) isEqualTo player))"],
		["lockpick", "Crochetter", "[] spawn AlysiaClient_fnc_vehicleMenu_steal;", "(((['lockpick'] call AlysiaClient_fnc_itemCount) > 0) && !(g_interaction_target in g_vehicles) && !(g_interaction_target isKindOf 'Tank') && ((vehicle player) isEqualTo player))"],
		["pullout", "Sortir", "[] call AlysiaClient_fnc_vehicleMenu_pullout;", "((count (crew g_interaction_target) > 0) && ((vehicle player) isEqualTo player))"],
		["owner", "Propriétaire", "[] spawn AlysiaClient_fnc_vehicleMenu_owner;", "((playerSide in [east,west]) || (g_interaction_target in g_vehicles))"],
		["impound", "Fourrière", "[] spawn AlysiaClient_fnc_vehicleMenu_impound;", "((playerSide in [east,west]) && ((vehicle player) isEqualTo player))"],
		["farm_gather", "Récolter", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_gather;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'tractor') isEqualTo 1) && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["farm_plant", "Planter", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_plant;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'tractor') isEqualTo 1) && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["fishingpool", "Pêche", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_farm_fish;", "((g_interaction_target isKindOf 'Ship') && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player))"],
		["dog", "Chercher", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_dog;", "(!(isNull g_dog) && {g_dog getVariable ['follow', false]})"],
		["money_transfer", "Prendre sac", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_money_bag_take;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'money_transfer') isEqualTo 1) && ((vehicle player) isEqualTo player) && ((player distance (g_interaction_target modelToWorld [-0.041748,-4.21094,-1.90671])) <= 1) && (([(g_interaction_target getVariable ['Trunk', []]), 'money_transfer'] call AlysiaClient_fnc_itemTrunk) > 0) && !(isNull g_company) && {(((g_company getVariable 'company_info') select 2) isEqualTo 'money_transfer')})"],
		["money_transfer", "Déposer sac", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_money_bag_deposit;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'money_transfer') isEqualTo 1) && ((vehicle player) isEqualTo player) && ((player distance (g_interaction_target modelToWorld [-0.041748,-4.21094,-1.90671])) <= 1) && !(isNull (player getVariable ['money_transfer', objNull])))"],
		["money_bomb", "Braquer", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_money_bomb;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'money_transfer') isEqualTo 1) && ((vehicle player) isEqualTo player) && ((player distance (g_interaction_target modelToWorld [-0.041748,-4.21094,-1.90671])) <= 1) && ('Bank_Bomb' in (magazines player)) && ((attachedObjects g_interaction_target) isEqualTo []))"],
		["money_bomb", "C4", "[(attachedObjects g_interaction_target) select 0] spawn AlysiaClient_fnc_c4_open;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'money_transfer') isEqualTo 1) && ((vehicle player) isEqualTo player) && ((player distance (g_interaction_target modelToWorld [-0.041748,-4.21094,-1.90671])) <= 1) && ('Bank_Bomb' in (magazines player)) && !((attachedObjects g_interaction_target) isEqualTo []))"],
		["speaker", "Haut-parleurs", "[g_interaction_target] spawn AlysiaClient_fnc_vehicleMenu_speaker;", "((getNumber(missionConfigFile >> 'ALYSIA_VEHICLES' >> typeOf(g_interaction_target) >> 'speaker') isEqualTo 1) && ((vehicle player) isEqualTo g_interaction_target) && ((driver g_interaction_target) isEqualTo player) && !(g_interaction_target getVariable ['speaker_active',false]))"]
	],
	getText(configFile >> "CfgVehicles" >> typeOf(_target) >> "displayName"),
	"lyeed_IMG\data\vehicle\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;

// ["refuel", "Faire le plein", "[] spawn AlysiaClient_fnc_vehicleMenu_refuel;", "(((['fuelF'] call AlysiaClient_fnc_itemCount) > 0) && ((vehicle player) isEqualTo player))"],
// ["refuel", "Plein", "[g_interaction_target, (missionNamespace getVariable ['refuel_station_inUse', objNull])] spawn AlysiaClient_fnc_fuelRefuel_use_refuel_veh;", "(((player getVariable ['typeRefuel', '']) != ') && !(isNull (missionNamespace getVariable ['refuel_station_inUse', objNull])) && ((vehicle player) isEqualTo player))"],
