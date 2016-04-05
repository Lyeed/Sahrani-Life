/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_uid", "_res"];
_uid = [_this, 0, "", [""]] call BIS_fnc_param;

if (_uid isEqualTo "") exitWith {"Inconnu"};

_res = toArray(_uid);
_res deleteRange [0, 7];

{
	if ((_forEachIndex % 2) isEqualTo 0) then {_res set [_forEachIndex, (_x + 17)]};
} forEach _res;

toString(_res);
