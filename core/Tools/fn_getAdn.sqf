/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Oliver
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_name", "_adn"];
_name = [_this, 0, "", [""]] call BIS_fnc_param;

_adn = 0;
{
 	_adn = _adn + _x;
} forEach (toArray(_name));
_adn;
