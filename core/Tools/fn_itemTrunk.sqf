/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_trunk", "_item", "_amount", "_index"];
_trunk = [_this, 0, [], [[]]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;

_index = [_item, _trunk] call public_fnc_index;
if (_index isEqualTo -1) then {
	_amount = 0;
} else {
	_amount = (_trunk select _index) select 1;
};

_amount;
