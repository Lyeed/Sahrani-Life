/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["surrender", false]) || ((animationState player) == "incapacitated")) then
{
	if (!(player getVariable ["restrained", false])) then
	{
		[player, "handcuffs", 10] call CBA_fnc_globalSay3d;
		player setVariable ["restrained", true, true];
		if (player getVariable ["surrender", false]) then {player setVariable ["surrender", false, true]};
		while {(player getVariable ["restrained", false])} do
		{
			if ((vehicle player) isEqualTo player) then {
				if ((animationState player) != "amovpercmstpsnonwnondnon_ease") then {
					player playmove "amovpercmstpsnonwnondnon_ease";
				};
			} else {
				if (((driver (vehicle player)) isEqualTo player)) then {
					player action ["eject", (vehicle player)];
				};
			};

			if (cameraView isEqualTo "EXTERNAL") then
			{
				player switchCamera "Internal";
			};

			uiSleep 0.5;
		};
		
		player switchmove "AMOVPERCMSTPSNONWNONDNON_EASEOUT";
	};
};
