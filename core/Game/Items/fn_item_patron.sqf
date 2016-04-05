/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_process", "_type", "_target", "_info"];
_process = [_this, 0, [], [[]]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;
_item = [_this, 2, "", [""]] call BIS_fnc_param;

if ((_process isEqualTo []) || (_type isEqualTo "") || (_item isEqualTo "")) exitWith {};

_target = cursorObject;
if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

_info = cursorObject getVariable "laboratory_info";
if (isNil "_info") exitWith {
	["La cible n'est pas un laboratoire."] call AlysiaClient_fnc_error;
};

if ((player distance _target) > 8) exitWith {
	["Vous êtes trop loin du laboratoire."] call AlysiaClient_fnc_error;
};

if (_type != (_info select 2)) exitWith {
	["Ce patron n'est pas utilisable sur ce type de laboratoire."] call AlysiaClient_fnc_error;
};

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then
{
	[format["<t color='#FF8000'>%1</t> utilisé avec succès.", [_item] call AlysiaClient_fnc_itemGetName]] call AlysiaClient_fnc_info;
	_target setVariable ["extra_process", (_target getVariable ["extra_process", []] + _process), true];
} else {
	[format["Vous avez besoin de <t color='#FF8000'>%1</t>.", [_item] call AlysiaClient_fnc_itemGetName]] call AlysiaClient_fnc_error;
};
