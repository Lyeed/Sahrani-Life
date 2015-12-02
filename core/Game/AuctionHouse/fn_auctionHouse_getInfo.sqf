/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_type"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;

switch (_type) do
{
	case 0: {[getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "name"), getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "image")]};
	case 1: {[([_item] call public_fnc_fetchCfgDetails) select 1, ([_item] call public_fnc_fetchCfgDetails) select 2]};
	case 2: {[getText(configFile >> "CfgVehicles" >> _item >> "displayName"), getText(configFile >> "CfgVehicles" >> _item >> "picture")]};
};
