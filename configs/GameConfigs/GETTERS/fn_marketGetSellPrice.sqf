/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ressource"];
_ressource = [_this, 0, "", [""]] call BIS_fnc_param;

if (_ressource isEqualTo "") exitWith {0};

(missionNamespace getVariable[(format["market_%1", _ressource]), 0]);