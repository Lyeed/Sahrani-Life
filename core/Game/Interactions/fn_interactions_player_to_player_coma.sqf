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
		["kill", "Achever", "[g_interaction_target] spawn AlysiaClient_fnc_item_knife_use;", "('SkylineItems_Couteau' in (magazines player))"],
		["massage", "Stabiliser", "[g_interaction_target, 'main'] spawn AlysiaClient_fnc_action_stabilize;", "true"],
		["bandage", "Bandage", "[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_bandage_use;", "((g_interaction_target getVariable ['is_bleeding', false]) && ('SkylineItems_Bandage' in (magazines player)))"],
		["defib", "Defib.", "[g_interaction_target, 'debif'] spawn AlysiaClient_fnc_action_stabilize;", "('SkylineItems_Defibrilateur' in (magazines player))"],
		["morphine", "Morphine", "[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_morphine_use;","('SkylineItems_Morphine' in (magazines player))"],
		["adrenaline", "Adrenaline", "[nil,nil,nil,g_interaction_target] spawn AlysiaClient_fnc_item_adrenaline_use;","('SkylineItems_Adrenaline' in (magazines player))"],
		["drag", "Trainer", "[g_interaction_target] call AlysiaClient_fnc_action_body_drag;","!(g_interaction_target getVariable ['transporting',false])"],
		["bed", "Installer", "[g_interaction_target] spawn AlysiaClient_fnc_action_bed;","((count(nearestObjects [g_interaction_target, ['xcam_Sun_chair_green_F','xcam_postel_manz_kov'], 5]) > 0) && (isNull (attachedTo g_interaction_target)))"],
		["operation", "Opération", "[g_interaction_target] spawn AlysiaClient_fnc_action_operation;","((typeOf(attachedTo g_interaction_target) isEqualTo 'xcam_Sun_chair_green_F') && (g_interaction_target getVariable ['bullet_check',false]) && !(_unit getVariable ['bullet_operation_inUse', false]))"]
	],
	"Blessé",
	nil,
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
