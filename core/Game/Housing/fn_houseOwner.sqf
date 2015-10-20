/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_ownerInfo"];
_house = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _house) exitWith { 
	["Cible invalide"] call public_fnc_error; 
};

_ownerInfo = _house getVariable["house_owner", []];
if (_ownerInfo isEqualTo []) then {
	["Cette batisse n'a pas de propriétaire"] call public_fnc_error;
} else {
	[format["Propriétaire<br/><t color='#FF0000'>%1</t>", (_ownerInfo select 1)]] call public_fnc_info;	
};