/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

disableSerialization;
_display = findDisplay 21000;
if (isNull _display) exitWith {};

_list = _display displayCtrl 21001;
lbClear _list;

{
	if ((markerAlpha _x) isEqualTo 0) then
	{
		if (getNumber(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "shop_appear") isEqualTo 1) then
		{
			_index = _list lbAdd (markerText _x);
			_list lbSetData [_index, _x];
			_list lbSetValue [_index, getNumber(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "shop_price")];
		};
	};
} forEach (g_dynamic_markers);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
	ctrlShow[21002, false];
	ctrlShow[21003, false];
	ctrlShow[21004, false];
	ctrlShow[21005, false];
	ctrlShow[21006, false];
	ctrlShow[21007, false];
	ctrlShow[21008, false];
	ctrlShow[21009, false];
} else {
	_list lbSetCurSel 0;
};