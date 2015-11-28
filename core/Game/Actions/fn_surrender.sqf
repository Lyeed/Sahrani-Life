/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable ["surrender", false]) then {
	player setVariable ["surrender", false, true];
} else {
	player setVariable ["surrender", true, true];
	[] spawn
	{
		while {(player getVariable ["surrender", false]) && !g_coma} do
		{
			player playMove "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon";
			sleep 0.7;
		};
		if (g_coma) then
		{
			if (player getVariable ["surrender", false]) then {
				player setVariable ["surrender", false, true];
			};
		} else {
			player playMoveNow "AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon";
			player switchMove "";
		};
	};
};
