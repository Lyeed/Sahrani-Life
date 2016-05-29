/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_math", "_item", "_num", "_weight", "_value", "_return"];
_math = [_this, 0, false, [false]] call BIS_fnc_param;
_item = [_this, 1, "", [""]] call BIS_fnc_param;
_num = [_this, 2, 0, [0]] call BIS_fnc_param;

if ((_item isEqualTo "") || (_num isEqualTo 0)) exitWith {false};

_return = false;
_weight = ([_item] call AlysiaClient_fnc_itemGetWeight) * _num;
_value = missionNamespace getVariable [format["inv_%1", _item], 0];

if (_math) then
{
	_num = [_item, _num, g_carryWeight, g_maxWeight] call AlysiaClient_fnc_calWeightDiff;
	if (_num > 0) then
	{
		if ((g_carryWeight + _weight) <= g_maxWeight) then
		{
			missionNamespace setVariable [format["inv_%1", _item], (_value + _num)];
			g_carryWeight = g_carryWeight + _weight;
			_return = true;
		};
	};
} else {
	if (_value - _num >= 0) then
	{
		missionNamespace setVariable [format["inv_%1", _item], (_value - _num)];
		g_carryWeight = g_carryWeight - _weight;
		_return = true;
	};
};

if (_return) then
{
	private["_display", "_loop", "_list", "_index"];

	disableSerialization;
	_display = uiNamespace getVariable ["RscTitleLoot", displayNull];
	_loop = false;

	if (isNull _display) then 
	{
		("lootLayer" call BIS_fnc_rscLayer) cutRsc ["RscTitleLoot", "PLAIN"];
		_display = uiNamespace getVariable ["RscTitleLoot", displayNull];
		(_display displayCtrl 900) ctrlEnable false;
		_loop = true;
	};

	_list = _display displayCtrl 900;

	_index = _list lbAdd format["%1 %2 x %3", if (_math) then {"+"} else {"-"}, ([_num] call AlysiaClient_fnc_numberText), ([_item] call AlysiaClient_fnc_itemGetName)];
	_list lbSetPicture [_index, ([_item] call AlysiaClient_fnc_itemGetImage)];
	_list lbSetValue [_index, (time + 4)];
	
	if (_loop) then
	{
		_list spawn
		{
			while {((lbSize _this) > 0)} do
			{
				for "_i" from 0 to (lbSize _this) do
				{
					if ((_this lbValue _i) < time) then {_this lbDelete _i};
				};
				sleep 1;
			};

			("lootLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
		};
	};
};

_return;
