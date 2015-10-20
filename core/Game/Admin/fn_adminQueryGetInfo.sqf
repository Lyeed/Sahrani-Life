/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ret", "_admin"];
_admin = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _admin) exitWith {};

_ret = 
[
	life_blood,
	life_bleed,
	life_coma,
	life_cash,
	life_atmcash,
	(call life_copLevel),
	(call life_onuLevel),
	(call life_rebLevel),
	(call life_medicLevel),
	(missionNamespace getVariable["license_civ_rebel", false]),
	(missionNamespace getVariable["license_civ_rebel2", false]),
	(missionNamespace getVariable["license_civ_doc", false]),
	[
		if ((primaryWeapon player) != "") then { getText(configFile >> "CfgWeapons" >> (primaryWeapon player) >> "DisplayName")} else {"Aucune"},
		if ((handgunWeapon player) != "") then { getText(configFile >> "CfgWeapons" >> (handgunWeapon player) >> "DisplayName")} else {"Aucune"},
		if ((vest player) != "") then { getText(configFile >> "CfgWeapons" >> (vest player) >> "DisplayName")} else {"Aucune"},
		if ((uniform player) != "") then { getText(configFile >> "CfgWeapons" >> (uniform player) >> "DisplayName")} else {"Aucun"}
	]
];

[[_ret], "ALYSIA_fnc_adminQueryShowInfo", _admin, false] spawn life_fnc_MP;