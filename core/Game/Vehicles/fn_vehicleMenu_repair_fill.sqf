/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_type"];

if (isNull g_interaction_target) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_type = cbChecked (_display displayCtrl 2908);
_list = _display displayCtrl 2907;
lbClear _list;

{
	_part = configName _x;
	if (isClass(missionConfigFile >> "ALYSIA_REPAIR" >> _part)) then
	{
		_value = floor((1 - (g_interaction_target getHitPointDamage _part)) * 100);
		if (!_type || (_type && (_value < 100))) then
		{
			_index = _list lbAdd getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "name");
			_list lbSetTooltip [_index, getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "name")];
			_list lbSetData [_index, _part];
			_list lbSetValue [_index, _value];
			_list lbSetPicture [_index, getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "picture")];
			_list lbSetPictureColor [_index, ([_value] call public_fnc_vehicleMenu_repair_getColor) select 0];
		};
	} else {
		systemChat format["[ERROR] %1 is not defined in ALYSIA_REPAIR", _part];
	};
} foreach ("true" configClasses (configFile >> "CfgVehicles" >> typeOf(g_interaction_target) >> "HitPoints"));

if ((lbSize _list) isEqualTo 0) then
{
	ctrlShow[2909, false];
	ctrlShow[2911, false];
	ctrlShow[2912, false];
	ctrlShow[2913, false];
	ctrlShow[2914, false];
	ctrlShow[2915, false];
	ctrlShow[2916, false];
	ctrlShow[2917, false];
	_list lbAdd "Aucune";
} else {
	ctrlShow[2909, true];
	ctrlShow[2916, true];
	ctrlShow[2917, true];	
};

_list lbSetCurSel 0;
