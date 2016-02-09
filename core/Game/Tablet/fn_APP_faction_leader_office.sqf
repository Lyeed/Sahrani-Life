/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (isNull (uiNamespace getVariable ["tablet", displayNull])) exitWith {};

if ((call compile format["call g_%1Level", str(playerSide)]) >= getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "board" >> "leader_board" >> "access_rank")) then {
	[player] remoteExec ["AlysiaServer_fnc_factionMemberList", 2];
};
