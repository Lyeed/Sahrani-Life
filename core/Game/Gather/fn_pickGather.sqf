/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_marker", "_tool", "_water", "_water_depth", "_receive", "_extra", "_sound", "_extraAll"];
_marker = [_this, 0, "", [""]] call BIS_fnc_param;

if (_marker isEqualTo "") exitWith {};
if (g_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};
if (!isClass(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker)) exitWith
{
	[format["Impossible de trouver les informations concernant la zone <t align='center' color='#FF8000'>%1</t>", _marker]] call public_fnc_error;
	diag_log format["[ALYSIA:ERROR] Marker %1 not defined in ALYSIA_FARMING_GATHER (class not found)", _marker];
};

_tool = getText(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "tool");

if ((_tool != "") && ((currentWeapon player) != _tool)) exitWith {
	[format["Vous n'avez pas le bon outil<br/>Vous avez besoin de <t align='center' color='#FF8000'>%1</t>", getText(configFile >> "CfgWeapons" >> _tool >> "displayName")]] call public_fnc_error;
};

_water = getNumber(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "water");
_water_depth = getNumber(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "water_depth");
if ((_water isEqualTo 1) && !(surfaceIsWater (getPos player))) exitWith {
	["Vous devez être sous l'eau pour commencer la récolte"] call public_fnc_error;
};
if ((_water isEqualTo 1) && (((getPosASLW player) select 2) > (_water_depth * -1))) exitWith {
	[format["Vous devez être à %1 de profondeur pour commencer la récolte", _water_depth]] call public_fnc_error;
};

_receive = getArray(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "receive");
_extra = getArray(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "extra");
_extraAll = getNumber(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "extra_all");
_sound = getText(missionConfigFile >> "ALYSIA_FARMING_GATHER" >> _marker >> "sound");

titleText["* Déplacez-vous pour annuler la récolte *", "PLAIN DOWN"];
g_action_inUse = true;
g_interrupted = false;

while {(g_action_inUse && !g_interrupted)} do
{
	private["_space"];

	if (
			!(alive player) || 
			g_coma || 
			((vehicle player) != player) || 
			(player distance (getMarkerPos _marker) > 40) || 
			((speed player) > 1) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false]) ||
			((_tool != "") && (primaryWeapon player != _tool))
		) exitWith {titleText["* Récolte annulée *", "PLAIN DOWN"]};

	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	if (_sound != "") then {	
		playSound _sound;
	};
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
			_amount = [(_x select 0), round(random(_x select 1)), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		} else {
			_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
		};

		if ((_amount isEqualTo 0) && (_forEachIndex isEqualTo 0)) exitWith {
			_space = false;
		};

		[true, (_x select 0), _amount] call public_fnc_handleInv;
	} forEach (_receive);
	if (!_space) exitWith {
		["<t align='center'>Votre inventaire est plein</t>"] call public_fnc_info;
	};

	if (g_interrupted) exitWith {};

	if (!(_extra isEqualTo [])) then
	{
		if (_extraAll isEqualTo 1) then
		{
			{
				if (random(100) <= (_x select 1)) then {
					[true, (_x select 0), 1] call public_fnc_handleInv;
				};
			} forEach (_extra);
		} else {
			_rand = _extra call BIS_fnc_selectRandom;
			if (random(100) <= (_rand select 1)) then {
				[true, _rand, 1] call public_fnc_handleInv;
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
