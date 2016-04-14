/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_chair",
	[
		[
			"sit",
			"Utiliser",
			"[g_interaction_target] call AlysiaClient_fnc_sitDown",
			"true"
		],
		[
			"take",
			"Prendre",
			"[g_interaction_target] spawn AlysiaClient_fnc_dynamicObject_packup;",
			"(g_interaction_target getVariable ['isPackable', false])"
		],
		[
			"take",
			"Escorter",
			"[g_interaction_target] call AlysiaClient_fnc_dynamicObject_escort;",
			"(getNumber(missionConfigFile >> 'ALYSIA_DYN_OBJECTS' >> typeOf(g_interaction_target) >> 'escort') isEqualTo 1)"
		]
	],
	"Chaise",
	"lyeed_IMG\data\interactions\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
