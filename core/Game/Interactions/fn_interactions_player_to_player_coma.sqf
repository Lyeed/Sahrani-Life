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
		["morphine", "Morphine", "[g_interaction_target] spawn AlysiaClient_fnc_item_morphine_use;","('SkylineItems_Morphine' in (magazines player))"],
		["adrenaline", "Adrenaline", "[g_interaction_target] spawn AlysiaClient_fnc_item_adrenaline_use;","('SkylineItems_Adrenaline' in (magazines player))"],
		["drag", "Trainer", "[g_interaction_target] call AlysiaClient_fnc_action_body_drag;","!(g_interaction_target getVariable ['transporting',false])"]
	],
	"Blessé",
	nil,
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
