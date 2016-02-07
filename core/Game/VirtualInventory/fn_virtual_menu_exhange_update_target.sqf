/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_item", "_amount"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

ctrlShow[506, false];
ctrlShow[507, false];
ctrlShow[508, false];
ctrlShow[509, false];

if ((_sel isEqualTo -1) || (isNull _list)) exitWith {};

_item = _list lbData _sel;
if (_item isEqualTo "") exitWith {};

_amount = _list lbValue _sel;

if (g_interaction_target_trunk_take) then
{
	_count = [_item, 2, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
	if (_count > 0) then
	{
		if (_count >= 2) then
		{
			ctrlShow[506, true];
			ctrlShow[507, true];
			ctrlShow[508, true];
			ctrlShow[509, true];
		} else {
			ctrlShow[506, true];
			ctrlShow[507, true];
		};
	};
};
