/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (count _this == 1) exitWith {};
if (playerSide != civilian) exitWith {};
private["_container", "_unit"];

_unit = _this select 0;
_container = _this select 1;

/*
[] call life_fnc_saveGear;
[[(getPlayerUID player), life_gear], "ALYSIA_fnc_inventoryChecker", false] spawn life_fnc_MP;
*/