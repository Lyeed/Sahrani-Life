/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_maxAmount", "_can"];

disableSerialization;
_display = findDisplay 53000;
if (isNull _display) exitWith {};

_maxAmount = round(parseNumber(ctrlText 53006));
if (_maxAmount < 1) then
{
	_maxAmount = 1;
	ctrlSetText[53006, "1"];
} else {
	if (_maxAmount > 150) then
	{
		_maxAmount = 150;
		ctrlSetText[53006, "150"];
	};
};

_list  = _display displayCtrl 53005;
lbClear _list;

_can = true;

{
	_index = _list lbAdd format["%1x %2", (_maxAmount * (_x select 1)), [(_x select 0)] call public_fnc_itemGetName];
	if ([(_x select 0)] call public_fnc_itemCount >= (_maxAmount * (_x select 1))) then {
		_list lbSetPicture [_index, "\lyeed_IMG\data\process\items_ok"];
	} else {
		_list lbSetPicture [_index, "\lyeed_IMG\data\process\items_missing"];
		_can = false;
	};
} forEach getArray(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "require");

(_display displayCtrl 53007) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	[
		(getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "time_per_item") * _maxAmount) + getNumber(missionConfigFile >> "ALYSIA_PROCESS" >> g_interaction_process_type >> "time_default"), 
		"M:SS"
	] call CBA_fnc_formatElapsedTime
];

if (_can) then {
	ctrlShow[53008, true];
	ctrlShow[53009, true];
	ctrlShow[53010, true];
	ctrlShow[53011, true];
	ctrlShow[53012, true];
} else {
	ctrlShow[53008, false];
	ctrlShow[53009, false];
	ctrlShow[53010, false];
	ctrlShow[53011, false];
	ctrlShow[53012, false];	
};
