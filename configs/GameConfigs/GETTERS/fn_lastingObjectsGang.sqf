/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_gang", "_count"];
_gang = [_this, 0, "", [""]] call BIS_fnc_param;

if (_gang == "") exitWith {0};

_count = 0;
{
	if ((_x select 0) == _gang) then {
		_count = _count + 1;
	};
} forEach (gServer_gangLabo);
_count;