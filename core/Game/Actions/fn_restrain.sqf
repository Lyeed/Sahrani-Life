/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable["surrender", false]) exitWith {};

[player, "handcuffs", 10] call CBA_fnc_globalSay3d;
player setVariable ["restrained", true, true];

while {((player getVariable ["restrained", false]) && !g_coma)} do
{
	if ((animationState player) != "AmovPercMstpSnonWnonDnon_Ease") then {
		if ((vehicle player) isEqualTo player) then {
			player playMove "AmovPercMstpSnonWnonDnon_Ease";
		};
	};
	if (((vehicle player) != player) && ((driver (vehicle player)) isEqualTo player)) then {
		player action ["eject", (vehicle player)];
	};
};

if (player getVariable ["restrained", false]) then {
	player setVariable ["restrained", false, true];
};
