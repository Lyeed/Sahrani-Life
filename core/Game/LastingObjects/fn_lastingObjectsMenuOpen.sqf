/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_menu", "_class", "_menuCfg"];
g_pInact_curTarget = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_menu = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((isNull g_pInact_curTarget) || (_menu isEqualTo -1)) exitWith {};

_class = (format["getText (_x >> 'process') == '%1'", (typeOf g_pInact_curTarget)] configClasses (missionConfigFile >> "ALYSIA_LASTING_OBJECTS")) select 0;
if (isNil "_class") exitWith {
	diag_log format["[ALYSIA:ERROR] Object [%1] does not exist in class ALYSIA_LASTING_OBJECTS >> process", (typeOf g_pInact_curTarget)];
};

_menuCfg = getArray(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _class >> (format["menu_%1", _menu]));
if (isNil "_menuCfg") exitWith {
	diag_log format["[ALYSIA:ERROR] Menu [%1] does not exist in class ALYSIA_LASTING_OBJECTS >> menu_x", _menu];
};

if (createDialog "pInteraction_Menu") then
{
	disableSerialization;
	_display = findDisplay 37400;

	if (isNull _display) exitWith {};

	{
		if (_forEachIndex == 0) then {
			(_display displayCtrl 37401) ctrlSetText _x;
		} else {
			if (_forEachIndex > 5) exitWith {};
			_idc = parseNumber(format["3745%1", _forEachIndex]);
			(_display displayCtrl _idc) ctrlSetText (_x select 0);
			(_display displayCtrl _idc) buttonSetAction (_x select 1);
		};
	} forEach (_menuCfg);

	for "_i" from (37450 + count(_args)) to 37456 do {
		(_display displayCtrl _i) ctrlShow false;
	};
};