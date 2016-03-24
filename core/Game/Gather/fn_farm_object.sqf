/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_config", "_target", "_tool"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_config = missionConfigFile >> "ALYSIA_FARMING_OBJECT" >> typeOf(_target);
if (!(isClass _config)) exitWith {};

_tool = getText(_config >> "tool");
if ((currentWeapon player) != _tool) exitWith
{
	[
		format
		[
			"Vous n'avez pas le bon outil.<br/>Vous avez besoin de <t color='#FF8000'>%1</t> pour commencer la récolte.",
			getText(configFile >> "CfgWeapons" >> getText(_config >> "tool") >> "displayName")
		]
	] call AlysiaClient_fnc_error;
};

if (g_action_inUse) exitWith {};

g_interrupted = false;
g_action_inUse = true;

while {(g_action_inUse && !g_interrupted)} do
{
	private "_space";

	if (
			!(alive player) ||
			(player getVariable ["is_coma", false]) ||
			((vehicle player) != player) ||
			((speed player) > 1) ||
			(player getVariable ["restrained", false]) ||
			(player getVariable ["surrender", false]) ||
			((_tool != "") && ((currentWeapon player) != _tool))
		) exitWith {titleText["* Récolte annulée *", "PLAIN DOWN"]};

	player playActionNow "Skyline_SwingAnim_Outils";
	uiSleep 0.25;
	if (!g_action_inUse || g_interrupted) exitWith {};

	playSound (getArray(_config >> "sounds") call BIS_fnc_selectRandom);
	
	_space = true;
	_times = (_target getVariable ["farming", 0]) + 1;
	if (_times >= getNumber(_config >> "times")) then
	{

		{
			private "_amount";
			_amount = 0;

			if ((_x select 2) isEqualTo 1) then {
				_amount = [(_x select 0), round(random(_x select 1)) + 1, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
			} else {
				_amount = [(_x select 0), (_x select 1), g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
			};

			if ((_amount isEqualTo 0) && (_forEachIndex isEqualTo 0)) exitWith {_space = false};
			[true, (_x select 0), _amount] call AlysiaClient_fnc_handleInv;
		} forEach getArray(_config >> "receive");
		_target setVariable ["farming", 0];
	} else {
		_target setVariable ["farming", _times];
	};

	if (!_space) exitWith {["Votre inventaire est plein"] call AlysiaClient_fnc_info};
	uiSleep 1.3;
};

g_action_inUse = false;
