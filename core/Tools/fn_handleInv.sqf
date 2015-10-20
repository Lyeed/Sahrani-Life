/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_math", "_item", "_num", "_var", "_weight", "_value", "_return"];
if (!params [
	["_math", false, [false]],
	["_item", "", [""]],
	["_num", 0, [0]]
]) exitWith {false};

if ((_item isEqualTo "") || (_num isEqualTo 0)) exitWith {false};
if (_math) then
{
	_num = [_item, _num, g_carryWeight, g_maxWeight] call public_fnc_calWeightDiff;
	if (_num <= 0) exitWith {false};
};

_return = false;
_var = format["inv_%1", _item];
_weight = ([_item] call public_fnc_itemGetWeight) * _num;
_value = missionNamespace getVariable[_var, 0];
if (_math) then
{
	if ((g_carryWeight + _weight) <= g_maxWeight) then
	{
		missionNamespace setVariable[_var, (_value + _num)];	
		g_carryWeight = g_carryWeight + _weight;
		_return = true;
	};
} else {
	if (_value - _num >= 0) then
	{
		missionNamespace setVariable[_var, (_value - _num)];
		g_carryWeight = g_carryWeight - _weight;
		_return = true;
	};
};

if (_return) then
{
	private["_display", "_loop", "_list", "_index"];
	_display = uiNamespace getVariable ["HUD_inv_message", displayNull];
	_loop = false;

	if (isNull _display) then 
	{
		3 cutRsc ["HUD_inv_message", "PLAIN"];
		_display = uiNamespace getVariable ["HUD_inv_message", displayNull];
		_loop = true;
	};

	_list = _display displayCtrl 900;
	_index = _list lbAdd format["%1 %2 x %3", if (_math) then {"+"} else {"-"}, _num, ([_item] call public_fnc_itemGetName)];
	_list lbSetPicture [_index, ([_item] call public_fnc_itemGetImage)];
	_list lbSetValue [_index, (time + 4)];
	
	if (_loop) then
	{
		[_list] spawn
		{
			private["_list"];
			disableSerialization;
			_list = _this select 0;
			while {((lbSize _list) > 0)} do
			{
				for "_i" from 0 to (lbSize _list) do
				{
					if ((_list lbValue _i) < time) then {
						_list lbDelete _i;
					};
				};
				sleep 1;
			};
			3 cutText ["", "PLAIN"];
		};
	};
};

_return;