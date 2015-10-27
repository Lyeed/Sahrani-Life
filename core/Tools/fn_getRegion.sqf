/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_unit", objNul, [objNul]]
]) exitWith {};

if ((_unit distance (getMarkerPos ["civ_spawn_NORTH"])) < (_unit distance (getMarkerPos ["civ_spawn_SOUTH"]))) then {"NORTH"} else {"SOUTH"};