/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker", "_tool", "_water", "_water_depth", "_receive", "_extra", "_sound", "_extraAll", "_area", "_config"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if (g_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};

_config = missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker;
if (!isClass(_config)) exitWith
{
	[format["Impossible de trouver les informations concernant la zone <t align='center' color='#FF8000'>%1</t>", _marker]] call AlysiaClient_fnc_error;
	diag_log format["[ALYSIA:ERROR] Marker %1 not defined in ALYSIA_FARMING_GATHER (class not found)", _marker];
};

_tool = getText(_config >> "tool");
_water = getNumber(_config >> "water");
_water_depth = getNumber(_config >> "water_depth");
_receive = getArray(_config >> "receive");
_extra = getArray(_config >> "extra");
_extraAll = getNumber(_config >> "extra_all");
_sound = getText(_config >> "sound");
_area = getNumber(_config >> "area");

if ((_tool != "") && ((currentWeapon player) != _tool)) exitWith
{
	[
		format
		[
			"Vous n'avez pas le bon outil<br/>Vous avez besoin de <t color='#FF8000'>%1</t> pour commencer la récolte.",
			getText(configFile >> "CfgWeapons" >> _tool >> "displayName")
		]
	] call AlysiaClient_fnc_error;
};
if ((_tool isEqualTo "") && ((currentWeapon player) != "")) exitWith {
	["Vous devez avoir les mains vides pour commencer la récolte."] call AlysiaClient_fnc_error;
};

if ((_water isEqualTo 1) && !(surfaceIsWater (getPos player))) exitWith {
	["Vous devez être <t color='#FFFF00'>sous l'eau</t> pour commencer la récolte."] call AlysiaClient_fnc_error;
};
if ((_water isEqualTo 1) && (((getPosASLW player) select 2) > (_water_depth * -1))) exitWith
{
	[
		format
		[
			"Vous devez être à <t color='#00FF00'>%1</t> mètres de profondeur pour commencer la récolte.<br/>Vous êtes actuellement à <t color='#FFFF00'>%2</t> mètres.",
			_water_depth,
			(((getPosASLW player) select 2) * -1)
		]
	] call AlysiaClient_fnc_error;
};

if (_water isEqualTo 1) then {_area = _area + _water_depth};

titleText["* Déplacez-vous pour annuler la récolte *", "PLAIN DOWN"];
g_action_inUse = true;
g_interrupted = false;

while {(g_action_inUse && !g_interrupted)} do
{
	private["_space"];

	if (
			!(alive player) ||
			(player getVariable ["is_coma", false]) ||
			((vehicle player) != player) ||
			(player distance (getMarkerPos _marker) > _area) ||
			((speed player) > 1) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false]) ||
			((_tool != "") && (primaryWeapon player != _tool))
		) exitWith {titleText["* Récolte annulée *", "PLAIN DOWN"]};

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	if (_sound != "") then {playSound _sound};
	waitUntil{((animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon") || g_interrupted)};

	if (g_interrupted) exitWith {};

	if (_tool isEqualTo "") then {
		sleep 1.8;
	} else {
		sleep 4.2;
	};

	if (g_interrupted) exitWith {};

	_space = true;
	{
		private["_amount"];
		_amount = 0;

		if (g_interrupted) exitWith {};
		if ((_x select 2) isEqualTo 1) then {
			_amount = [(_x select 0), round(random(_x select 1)) + 1, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
		} else {
			_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
		};

		if ((_amount isEqualTo 0) && (_forEachIndex isEqualTo 0)) exitWith {
			_space = false;
		};

		[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
	} forEach (_receive);
	if (!_space) exitWith {
		["<t align='center'>Votre inventaire est plein</t>"] call AlysiaClient_fnc_info;
	};

	if (!g_interrupted) then
	{
		if (!(_extra isEqualTo [])) then
		{
			if (_extraAll isEqualTo 1) then
			{
				{
					if (random(100) <= (_x select 1)) then {
						[true, (_x select 0), 1] call AlysiaClient_fnc_handleInv;
					};
				} forEach (_extra);
			} else {
				_rand = _extra call BIS_fnc_selectRandom;
				if (random(100) <= (_rand select 1)) then {
					[true, (_rand select 0), 1] call AlysiaClient_fnc_handleInv;
				};
			};
		};
	};
};

if (g_interrupted) then
{
	titleText['* Récolte annulée *', 'PLAIN DOWN'];
	sleep 1.5;
};

g_action_inUse = false;
