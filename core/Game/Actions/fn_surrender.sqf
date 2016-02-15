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
	player playActionNow "Surrender";
	[] spawn
	{
		while {(player getVariable ["surrender", false])} do
		{
			player playActionNow "Surrender";
			sleep 0.8;
		};
		[player, "amovpercmstpssurwnondnon_amovpercmstpsnonwnondnon"] remoteExecCall ["switchMove", -2];
		player playMove "amovpercmstpssurwnondnon_amovpercmstpsnonwnondnon";
	};
};

true;
