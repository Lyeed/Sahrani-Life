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

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_station",
	[
		[
			"refuel_veh",
			"Véhicule",
			"[g_interaction_target] call AlysiaClient_fnc_fuelStation_refuel_open;",
			"
				((player distance (g_interaction_target modelToWorld [7.80347,-2.56006,2.06092])) <= 2)
			"
		],
		[
			"refuel_jerry",
			"Jerrycan",
			"[g_interaction_target] spawn AlysiaClient_fnc_fuelStation_jerrycan_open;",
			"
				(('Alysia_jerrycan_empty' in (magazines player)) && ((player distance (g_interaction_target modelToWorld [7.80347,-2.56006,2.06092])) <= 2))
			"
		],
		[
			"food",
			"Restauration",
			"[g_interaction_target, nil, nil, 'station_service'] call AlysiaClient_fnc_shop_virtual_open;",
			"
				((player distance (g_interaction_target modelToWorld [5.64648,7.0752,2.06092])) <= 2)
			"
		],
		[
			"tool",
			"Outillage",
			"[g_interaction_target, nil, nil, 'garagiste'] call AlysiaClient_fnc_shop_arma_open;",
			"
				((player distance (g_interaction_target modelToWorld [5.64648,7.0752,2.06092])) <= 2)
			"
		]
	],
	"Station Essence",
	"lyeed_IMG\data\vehicle\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
