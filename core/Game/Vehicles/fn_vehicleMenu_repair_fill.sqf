/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_parts", "_partVariables", "_partName", "_partValue", "_type"];

_display = findDisplay 2900;
if (isNull _display) exitWith {};
if (isNull g_interaction_target) exitWith {};

_type = cbChecked (_display displayCtrl 2910);

_list = _display displayCtrl 2901;
lbClear _list;

_parts = getAllHitPointsDamage g_interaction_target;
_partVariables = _parts select 0;
_partName = _parts select 1;
_partValue = _parts select 2;

{
	if (_x != "") then
	{
		_value = floor((1 - (_partValue select _forEachIndex)) * 100);
		if (!_type || (_type && (_value < 100))) then
		{
			_index = _list lbAdd _x;
			_list lbSetData [_index, _x];
			_list lbSetValue [_index, _value];
			if (isClass(missionConfigFile >> "ALYSIA_REPAIR" >> _x)) then
			{
				_picture = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _x >> "picture");
				if (_picture isEqualTo "unknown") then {
					_list lbSetPicture [_index, "\lyeed_IMG\data\vehicle\repair\parts\unknown.paa"];
				} else {
					_picture_add = switch (true) do
					{
						case (_value >= 0 && _value < 25): {"0"};
						case (_value >= 25 && _value < 50): {"25"};
						case (_value >= 50 && _value < 75): {"50"};
						case (_value >= 75 && _value < 100): {"75"};
						case (_value == 100): {"100"};
					};
					_list lbSetPicture [_index, format["\lyeed_IMG\data\vehicle\repair\parts\%1_%2", getText(missionConfigFile >> "ALYSIA_REPAIR" >> _x >> "picture"), _picture_add]];
				};
			} else {
				_list lbSetPicture [_index, "\lyeed_IMG\data\vehicle\repair\parts\unknown.paa"];
			};
		};
	};
} forEach (_partVariables);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};

_list lbSetCurSel 0;