/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_chair", "_players", "_config"];
_chair = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _chair) exitWith {};
if (player getVariable ["sit", false]) exitWith {};

_players = false;
{
	if ((isPlayer _x) && (_x != player)) exitWith {_players = true};
} forEach (_chair nearEntities 1);
if (_players) exitWith {["Quelqu'un est déjà installé ici."] call AlysiaClient_fnc_error};

_config = missionConfigFile >> "ALYSIA_CHAIRS" >> typeOf(_chair);

[player, getText(_config >> "anim")] remoteExecCall ["switchMove", -2];
player setPosATL [(getPosATL _chair) select 0, (getPosATL _chair) select 1, ((getPosATL _chair) select 2) + getNumber(_config >> "height")];
player setDir ((getDir _chair) + getNumber(_config >> "dir"));
player setVariable ["sit", true];
