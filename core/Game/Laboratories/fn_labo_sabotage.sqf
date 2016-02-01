/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_info"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_info = _target getVariable "laboratory_info";
if (isNil "_info") exitWith {};

if (_target getVariable ["inUse", false]) exitWith {
	["L'objet est déjà en cours d'utilisation"] call public_fnc_error;
};

if ((_target getVariable ["sabotage", 0]) > serverTime) exitWith {
	["Ce laboratoire a déjà été saboté"] call public_fnc_error;
};

if (!(["Sabotage", 15, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};

if ((_target getVariable ["sabotage", 0]) > serverTime) exitWith {
	["Ce laboratoire a déjà été saboté"] call public_fnc_error;
};

_target setVariable ["sabotage", serverTime + (20 * 60), true];
["Sabotage <t color='#01DF01'>réussi</t>"] call public_fnc_error;
