/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

[
	_target,
	"player_to_drill",
	[
		[
			"power",
			"Allumer",
			"[g_interaction_target] spawn AlysiaClient_fnc_drill_activate;",
			"!(g_interaction_target getVariable ['active',false])"
		],
		[
			"power",
			"Eteindre",
			"[g_interaction_target] call AlysiaClient_fnc_drill_desactivate;",
			"(g_interaction_target getVariable ['active',false])"
		],
		[
			"take",
			"Récupérer",
			"[g_interaction_target] spawn AlysiaClient_fnc_drill_take;",
			"!(g_interaction_target getVariable ['active',false])"
		]
	],
	"Foreuse",
	"lyeed_IMG\data\interactions\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
