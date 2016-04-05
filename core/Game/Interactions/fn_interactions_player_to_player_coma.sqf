/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_player_coma",
	[
		[
			"kill",
			"Achever",
			"[g_interaction_target] spawn AlysiaClient_fnc_item_knife_use;",
			"
				('SkylineItems_Couteau' in (magazines player)) &&
				!(g_interaction_target getVariable ['transporting',false]) &&
				!(g_interaction_target getVariable ['heart_attack',false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"massage",
			"Stabiliser",
			"[g_interaction_target, 'main'] spawn AlysiaClient_fnc_action_stabilize;",
			"
				!(g_interaction_target getVariable ['bed_awake', false]) &&
				!(g_interaction_target getVariable ['transporting',false]) &&
				!(g_interaction_target getVariable ['heart_attack',false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"bandage",
			"Bandage",
			"[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_bandage_use;",
			"
				(g_interaction_target getVariable ['is_bleeding', false]) &&
				('SkylineItems_Bandage' in (magazines player))
			"
		],
		[
			"defib",
			"Defib.",
			"[g_interaction_target, 'defib'] spawn AlysiaClient_fnc_action_stabilize;",
			"
				('SkylineItems_Defibrilateur' in (magazines player)) &&
				!(g_interaction_target getVariable ['bed_awake', false]) &&
				!(g_interaction_target getVariable ['transporting',false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"morphine",
			"Morphine",
			"[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_morphine_use;",
			"
				('SkylineItems_Morphine' in (magazines player)) &&
				!(g_interaction_target getVariable ['bed_awake', false]) &&
				!(g_interaction_target getVariable ['transporting',false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"adrenaline",
			"Adrenaline",
			"[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_adrenaline_use;",
			"
				('SkylineItems_Adrenaline' in (magazines player)) &&
				!(g_interaction_target getVariable ['bed_awake', false]) &&
				!(g_interaction_target getVariable ['transporting',false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"drag",
			"Trainer",
			"[g_interaction_target] call AlysiaClient_fnc_action_body_drag;",
			"
				!(g_interaction_target getVariable ['transporting',false]) &&
				!(g_interaction_target getVariable ['bed_awake', false]) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"bed",
			"Installer",
			"[g_interaction_target] spawn AlysiaClient_fnc_action_bed;",
			"
				(count(nearestObjects [g_interaction_target, ['HospitalTable_F','HospitalBed_F','HealTable_F'], 4]) > 0) &&
				(isNull (attachedTo g_interaction_target))
			"
		],
		[
			"bed",
			"Sortir",
			"detach g_interaction_target;",
			"
				(typeOf(attachedTo g_interaction_target) in ['HospitalTable_F','HealTable_F','HospitalBed_F'])
			"
		],
		[
			"operation",
			"Opération",
			"[g_interaction_target] spawn AlysiaClient_fnc_action_operation;",
			"
				(typeOf(attachedTo g_interaction_target) in ['HospitalTable_F','HealTable_F']) &&
				(g_interaction_target getVariable ['bullet_check',false]) &&
				!(g_interaction_target getVariable ['bullet_operation_inUse', false]) &&
				!(g_interaction_target getVariable ['heart_attack', false])
			"
		]
	],
	"Blessé",
	nil,
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
