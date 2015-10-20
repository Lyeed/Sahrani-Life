/*
	File: fn_clothingFilter.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_list", "_array"];
life_clothing_filter = _this select 1;
disableSerialization;

switch (life_clothing_filter) do {
	case 4: {
		life_shop_cam camSetTarget (player modelToWorld [0, -0.15, 1.3]);
		life_shop_cam camSetPos (player modelToWorld [1, -4, 2]);
		life_shop_cam camCommit 1;
	};
	
	case 0: {
		life_shop_cam camSetTarget (player modelToWorld [0, 0, 1]);
		life_shop_cam camSetPos (player modelToWorld [1, 4, 2]);
		life_shop_cam camCommit 1;
	};
	
	case 3: {
		life_shop_cam camSetTarget (player modelToWorld [0, 0, 1.4]);
		life_shop_cam camSetPos (player modelToWorld [-0.1, 2, 1.4]);
		life_shop_cam camCommit 1;
	};
	
	default {
		life_shop_cam camSetTarget (player modelToWorld [0, 0, 1.6]);
		life_shop_cam camSetPos (player modelToWorld [-0.5, 1, 1.6]);
		life_shop_cam camCommit 1;
	};
};

if (isNull (findDisplay 3100)) exitWith {};

_array = switch(life_clothing_filter) do {
	case 0: {getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> life_clothing_store >> "uniforms");};
	case 1: {getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> life_clothing_store >> "headgear");};
	case 2: {getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> life_clothing_store >> "goggles");};
	case 3: {getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> life_clothing_store >> "vests");};
	case 4: {getArray(missionConfigFile >> "ALYSIA_SHOPS_CLOTHING" >> life_clothing_store >> "backpacks");};
};

_list = (findDisplay 3100) displayCtrl 3101;
lbClear _list;

{
	private["_className", "_price", "_displayName", "_conditionName", "_conditionValue", "_details"];
	_className = [_x, 0, "", [""]] call BIS_fnc_param;
	_price = [[_x, 1, 0, [0]] call BIS_fnc_param] call ALYSIA_fnc_getDonatorReductionPrice;
	_displayName = [_x, 2, "", [""]] call BIS_fnc_param;
	_conditionName = [_x, 3, "", [""]] call BIS_fnc_param;
	_conditionValue = [_x, 4, -1, [-1]] call BIS_fnc_param;
	_details = [_className] call life_fnc_fetchCfgDetails;

	if (_conditionName == "") then {
		if (_displayName != "") then {
			_list lbAdd _displayName;
		} else {
			_list lbAdd (_details select 1);
		};
		_list lbSetData [(lbSize _list) - 1, _className];
		_list lbSetValue [(lbSize _list) - 1, _price];
		_list lbSetPicture [(lbSize _list) - 1, (_details select 2)];
	} else {
		if (_conditionValue == -1) then {
			if (missionNamespace getVariable[_conditionName, false]) then {
				if (_displayName != "") then {
					_list lbAdd _displayName;
				} else {
					_list lbAdd (_details select 1);
				};
				_list lbSetData [(lbSize _list) - 1, _className];
				_list lbSetValue [(lbSize _list) - 1, _price];
				_list lbSetPicture [(lbSize _list) - 1, (_details select 2)];
			};
		} else {
			if ((call (call compile format["%1", _conditionName])) >= _conditionValue) then {
				if (_displayName != "") then {
					_list lbAdd _displayName;
				} else {
					_list lbAdd (_details select 1);
				};
				_list lbSetData [(lbSize _list) - 1, _className];
				_list lbSetValue [(lbSize _list) - 1, _price];
				_list lbSetPicture [(lbSize _list) - 1, (_details select 2)];
			};
		};
	};
} forEach (_array);
