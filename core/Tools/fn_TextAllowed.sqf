/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_data", "_allowed", "_bad"];
_data = [_this, 0, "", [""]] call BIS_fnc_param;
_allowed = toArray([_this, 1, "", [""]] call BIS_fnc_param);

_bad = "";
{
	if (!(_x in _allowed)) exitWith {
		_bad = _x;
	};
} foreach (toArray(_data));
toString([_bad]);
