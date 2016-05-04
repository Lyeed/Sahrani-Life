/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((hmd player) != "") then
{
	player unlinkItem (hmd player);
};

{
	player unassignItem _x;
} foreach (assignedItems player);

removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
RemoveAllWeapons player;

{
    missionNamespace setVariable [format["inv_%1", (_x select 0)], 0];
} forEach ([] call AlysiaClient_fnc_getInv);
