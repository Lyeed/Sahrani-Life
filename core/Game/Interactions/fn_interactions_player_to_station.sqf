/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["typeRefuel", ""]) != "") exitWith
{
	["Plein annulé."] call AlysiaClient_fnc_info;
	player setVariable ["typeRefuel", ""];
};

if ((player getVariable ["stock_station_type", ""]) != "") exitWith
{
	["Plein annulé."] call AlysiaClient_fnc_info;
	player setVariable ["stock_station_type", ""];
};

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_station",
	[
		[
			"refuel_veh",
			"Véhicule",
			"[g_interaction_target,0] call AlysiaClient_fnc_fuelStation_refuel_open;",
			"
				(count(getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp')) > 0) &&
				{((player distance (g_interaction_target modelToWorld getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp'))) <= 2)}
			"
		],
		[
			"stock_refuel",
			"Stock",
			"[g_interaction_target,1] call AlysiaClient_fnc_fuelStation_refuel_open;",
			"
				(count(getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp')) > 0) &&
				{((player distance (g_interaction_target modelToWorld getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp'))) <= 2)} &&
				(['company_fuel'] call AlysiaClient_fnc_hasLicense)
			"
		],
		[
			"refuel_jerry",
			"Jerrycan",
			"[g_interaction_target] spawn AlysiaClient_fnc_fuelStation_jerrycan_open;",
			"
				('Alysia_jerrycan_empty' in (magazines player)) &&
				(count(getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp')) > 0) &&
				{((player distance (g_interaction_target modelToWorld getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_pomp'))) <= 2)}
			"
		],
		[
			"food",
			"Restauration",
			"[g_interaction_target, nil, nil, 'station_service'] spawn AlysiaClient_fnc_shop_virtual_open;",
			"
				(count(getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_store')) > 0) &&
				{((player distance (g_interaction_target modelToWorld getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_store'))) <= 3)}
			"
		],
		[
			"tool",
			"Outillage",
			"[g_interaction_target, nil, nil, 'garagiste'] call AlysiaClient_fnc_shop_arma_open;",
			"
				(count(getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_store')) > 0) &&
				{((player distance (g_interaction_target modelToWorld getArray(missionConfigFile >> 'ALYSIA_FUEL_STATION' >> typeOf(g_interaction_target) >> 'pos_model_store'))) <= 3)}
			"
		]
	],
	"Station Essence",
	"lyeed_IMG\data\vehicle\background.jpg",
	false,
	false
] spawn AlysiaClient_fnc_interactions_create;
