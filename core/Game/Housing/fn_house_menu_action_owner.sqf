/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ownerInfo", "_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_ownerInfo = _target getVariable ["house_owner", []];
if (_ownerInfo isEqualTo []) then {
	["Cette batisse n'a pas de propriétaire"] call AlysiaClient_fnc_error;
} else {
	[format["<t align='center'>Propriétaire<br/><t color='#FF0000'>%1</t></t>", (_ownerInfo select 1)]] call AlysiaClient_fnc_info;
};
