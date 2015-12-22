/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable ["surrender", false]) then
{
	[player, "handcuffs", 10] call CBA_fnc_globalSay3d;
	player setVariable ["restrained", true, true];
	player setVariable ["surrender", false, true];

	while {(player getVariable ["restrained", false])} do
	{
		if ((vehicle player) isEqualTo player) then
		{
			if (!((animationState player) in ["amovpercmstpsnonwnondnon_easeout","amovpercmstpsnonwnondnon_easein"])) then
			{
				[player, "AmovPercMstpSnonWnonDnon_Ease"] remoteExecCall ["switchMove", -2];
				player playMoveNow "AmovPercMstpSnonWnonDnon_Ease";
			};
		};
		if (((vehicle player) != player) && ((driver (vehicle player)) isEqualTo player)) then
		{
			player action ["eject", (vehicle player)];
		};
		sleep 0.7;
	};
	[player, "AmovPercMstpSnonWnonDnon_Ease"] remoteExecCall ["switchMove", -2];
	player playMove "AmovPercMstpSnonWnonDnon_Ease";
};
