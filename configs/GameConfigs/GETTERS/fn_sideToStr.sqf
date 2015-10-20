/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_side"];
_side = [_this, 0, sideUnknown, [sideUnknown]] call BIS_fnc_param;

if (_side isEqualTo sideUnknown) exitWith {"Unknown side"};
getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(_side) >> "name");