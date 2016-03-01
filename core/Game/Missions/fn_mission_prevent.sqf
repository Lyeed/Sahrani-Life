/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_faction", "_condition"];
_faction = [_this, 0, sideUnknown, [sideUnknown]] call BIS_fnc_param;

if (_faction isEqualTo sideUnknown) exitWith {};

_condition = false;
{
	_index = [_x, g_dynamic_markers_discovered] call AlysiaClient_fnc_index;
	if (_index != -1) exitWith {_condition = true}
} forEach (["black_market_1_marker", "black_market_2_marker"]);
if (_condition) then
{
	[
		format
		[
				"Hep, j'ai entendu dire que ce genre d'info pourrait t'interesser.<br/>"
			+	"La faction <t color='#00FF80'>%1</t> prépare un convois avec de l'équipement...",
			[_faction] call AlysiaClient_fnc_sideToStr
		],
		"BLACK_MARKET",
		true
	] call AlysiaClient_fnc_phone_message_receive;
};
