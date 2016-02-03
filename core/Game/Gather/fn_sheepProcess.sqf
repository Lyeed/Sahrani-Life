/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sheeps"];
_sheeps = [_this, 0, [], [[]]] call BIS_fnc_param;

if (_sheeps isEqualTo []) exitWith {};

[format["Vous avez reçu %1 moutons<br/>Vous devez les guider vers une bergerie<br/>Ils vous suivront, cependant soyez patient et ne laissez pas les moutons se perdrent", count _sheeps]] call AlysiaClient_fnc_info;
g_sheeps = _sheeps;
while {!(g_sheeps isEqualTo [])} do
{
	{
		if (alive _x) then {
			_x move (position player);
		} else {
			g_sheeps deleteAt _forEachIndex;
		};
	} forEach (g_sheeps);
	sleep 1;
};
